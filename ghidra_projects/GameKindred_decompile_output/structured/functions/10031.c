// functions/10031 — 363 functions
#include "GameKindred.h"




void FUN_1003115fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1004e0150(param_3,0);
  thunk_FUN_1004e439c(param_1,uVar2);
  iVar1 = FUN_1004e3624();
  if (iVar1 != 0) {
    FUN_1004e3148(param_1,param_3);
    return;
  }
  return;
}




undefined8 * FUN_100311650(long param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_1003116c8:
    uVar4 = *param_2;
  }
  else {
    uVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, (ulong)puVar2[4] <= uVar4) {
        if (uVar4 <= (ulong)puVar2[4]) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_1003116f0;
          goto LAB_1003116c8;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_1003116cc;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_1003116cc:
  puVar3 = operator_new(0x30);
  puVar3[4] = uVar4;
  puVar3[5] = 0;
  FUN_1003124fc(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_1003116f0:
  return puVar2 + 5;
}




bool FUN_100311708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  float fVar2;
  void *local_58 [2];
  char local_41;
  
  fVar2 = (float)FUN_10030e118(param_1,param_2,param_4);
  if (0.0 < fVar2) {
    FUN_10001549c(local_58,param_5);
    piVar1 = (int *)FUN_1002115d0(param_3,local_58);
    *piVar1 = (int)fVar2;
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  return 0.0 < fVar2;
}




void FUN_10031178c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014908e8;
  FUN_100311998(param_1 + 7);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_10014f51c(param_1);
  return;
}




void FUN_1003117dc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014908e8;
  FUN_100311998(param_1 + 7);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  pvVar1 = (void *)FUN_10014f51c(param_1);
  operator_delete(pvVar1);
  return;
}




long FUN_100311830(long param_1)

{
  long lVar1;
  
  lVar1 = thunk_FUN_1002113e4();
  *(undefined8 *)(lVar1 + 0x170) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  thunk_FUN_100253c74(lVar1 + 0x178);
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  FUN_1004e313c(param_1 + 0x348);
  FUN_1004e313c(param_1 + 0x358);
  FUN_1004e313c(param_1 + 0x368);
  *(undefined4 *)(param_1 + 0x37c) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x380) = 0;
  return param_1;
}




long FUN_100311898(long param_1)

{
  if (*(void **)(param_1 + 0x370) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x370));
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
  }
  if (*(void **)(param_1 + 0x360) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x360));
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  if (*(void **)(param_1 + 0x350) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x350));
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
  if (*(char *)(param_1 + 0x347) < '\0') {
    operator_delete(*(void **)(param_1 + 0x330));
  }
  FUN_10016c310(param_1 + 0x178);
  FUN_1000ec1cc(param_1 + 0x168,1);
  if (*(char *)(param_1 + 0x9f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x88));
  }
  FUN_1001ff6c8(param_1 + 0x20,1);
  FUN_1001ff79c(param_1 + 0x10,1);
  FUN_1001ff820(param_1,1);
  return param_1;
}




void FUN_100311958(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_100311958(param_1,*param_2);
    FUN_100311958(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_100311998(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar4 = (long *)plVar2[1];
      FUN_100311898(plVar2 + 2);
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}




void FUN_100311a08(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100311a14(long *param_1,char *param_2,byte *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *local_98;
  byte *local_90;
  byte *pbStack_88;
  byte *local_80;
  byte *pbStack_78;
  char *local_70;
  char local_68;
  
  if (*param_1 == 0) {
    pvVar6 = operator_new(1);
    *param_1 = (long)pvVar6;
    param_1[1] = (long)pvVar6;
  }
  param_1[4] = 0;
  lVar12 = 0;
  pcVar10 = param_2;
  for (pbVar13 = param_3; pbVar13 != (byte *)0x0; pbVar13 = pbVar13 + -1) {
    if (*pcVar10 == '/') {
      lVar12 = lVar12 + 1;
      param_1[4] = lVar12;
    }
    pcVar10 = pcVar10 + 1;
  }
  if (param_3 + lVar12 * 0x10 == (byte *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = _malloc((size_t)(param_3 + lVar12 * 0x10));
  }
  param_1[2] = (long)(puVar7 + lVar12 * 2);
  param_1[3] = (long)puVar7;
  cVar2 = *param_2;
  pbVar13 = (byte *)(ulong)(cVar2 == '#');
  if ((pbVar13 == param_3) || (param_2[(long)pbVar13] == '/')) {
    if (pbVar13 < param_3) {
      pbVar16 = (byte *)(puVar7 + lVar12 * 2);
      do {
        pbVar13 = pbVar13 + 1;
        *puVar7 = pbVar16;
        bVar4 = true;
        pbVar14 = pbVar13;
        pbVar15 = pbVar16;
        if (pbVar13 < param_3) {
          do {
            pbVar1 = (byte *)(param_2 + (long)pbVar14);
            bVar3 = *pbVar1;
            uVar17 = (uint)bVar3;
            pbVar13 = pbVar14;
            pbVar16 = pbVar15;
            if (bVar3 == 0x2f) break;
            if (cVar2 == '#') {
              if (bVar3 != 0x25) {
                iVar5 = FUN_100311ce8(param_1,(int)(char)bVar3);
                if (iVar5 == 0) goto LAB_100311b7c;
                uVar8 = 4;
                goto LAB_100311cb0;
              }
              local_68 = '\x01';
              local_98 = pbVar15;
              local_90 = pbVar15;
              pbStack_88 = pbVar15;
              local_80 = pbVar1;
              pbStack_78 = pbVar1;
              local_70 = param_2 + (long)param_3;
              iVar5 = FUN_100311d3c(&local_80,&local_98);
              if ((iVar5 == 0) || (local_68 == '\0')) {
                uVar8 = 3;
                goto LAB_100311cb0;
              }
              if ((long)local_90 - (long)pbVar15 == 1) {
                uVar17 = (uint)*pbVar15;
                pbVar14 = local_80 + (long)(pbVar14 + (-1 - (long)pbStack_78));
                goto LAB_100311b7c;
              }
              bVar4 = false;
              pbVar16 = pbVar15 + ((long)local_90 - (long)pbVar15);
              pbVar13 = local_80 + ((long)pbVar14 - (long)pbStack_78);
            }
            else {
LAB_100311b7c:
              pbVar13 = pbVar14 + 1;
              if (uVar17 == 0x7e) {
                if (param_3 <= pbVar13) {
LAB_100311c94:
                  *(undefined4 *)(param_1 + 6) = 2;
                  goto LAB_100311cb4;
                }
                if (param_2[(long)pbVar13] == '0') {
                  uVar17 = 0x7e;
                }
                else {
                  if (param_2[(long)pbVar13] != '1') goto LAB_100311c94;
                  uVar17 = 0x2f;
                }
                pbVar13 = pbVar14 + 2;
              }
              bVar4 = (bool)(uVar17 - 0x30 < 10 & bVar4);
              pbVar16 = pbVar15 + 1;
              *pbVar15 = (byte)uVar17;
            }
            pbVar14 = pbVar13;
            pbVar15 = pbVar16;
          } while (pbVar13 < param_3);
          pbVar15 = (byte *)*puVar7;
        }
        uVar17 = 0xffffffff;
        iVar5 = (int)pbVar16 - (int)pbVar15;
        *(int *)(puVar7 + 1) = iVar5;
        *pbVar16 = 0;
        if ((iVar5 != 0) && (bVar4)) {
          uVar17 = *(uint *)(puVar7 + 1);
          uVar9 = (ulong)uVar17;
          if (uVar17 < 2) {
            if (uVar17 != 0) goto LAB_100311c3c;
            uVar17 = 0;
          }
          else if (*(char *)*puVar7 == '0') {
LAB_100311c30:
            uVar17 = 0xffffffff;
          }
          else {
LAB_100311c3c:
            pcVar10 = (char *)*puVar7;
            uVar11 = 0;
            do {
              uVar17 = ((int)*pcVar10 + uVar11 * 10) - 0x30;
              if (uVar17 < uVar11) goto LAB_100311c30;
              pcVar10 = pcVar10 + 1;
              uVar9 = uVar9 - 1;
              uVar11 = uVar17;
            } while (uVar9 != 0);
          }
        }
        *(uint *)((long)puVar7 + 0xc) = uVar17;
        puVar7 = puVar7 + 2;
        pbVar16 = pbVar16 + 1;
      } while (pbVar13 < param_3);
    }
    *(undefined4 *)(param_1 + 6) = 0;
  }
  else {
    uVar8 = 1;
LAB_100311cb0:
    *(undefined4 *)(param_1 + 6) = uVar8;
LAB_100311cb4:
    _free((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = (long)pbVar13;
  }
  return;
}




bool FUN_100311ce8(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff;
  return 9 < param_2 - 0x30 &&
         (0x19 < (param_2 - 0x41 & 0xff) &&
         (0x19 < (param_2 - 0x61 & 0xff) && (1 < uVar1 - 0x2d && (uVar1 != 0x5f && uVar1 != 0x7e))))
  ;
}




bool FUN_100311d3c(undefined8 param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long *plVar8;
  
  uVar5 = FUN_100311f94();
  plVar8 = (long *)(param_2 + 8);
  puVar7 = (undefined1 *)*plVar8;
  *plVar8 = (long)(puVar7 + 1);
  *puVar7 = (char)uVar5;
  if (-1 < (int)uVar5) {
    return true;
  }
  bVar1 = false;
  switch((&DAT_101158ce2)[uVar5 & 0xff]) {
  case 2:
    uVar4 = FUN_100311f94(param_1);
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    return (uVar4 & 0xffffffc0) == 0xffffff80;
  case 3:
    uVar4 = FUN_100311f94(param_1);
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    uVar4 = uVar4 & 0xffffffc0;
    break;
  case 4:
    uVar4 = FUN_100311f94(param_1);
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    uVar4 = uVar4 & 0xffffffe0;
    break;
  case 5:
    bVar2 = FUN_100311f94(param_1);
    pbVar6 = (byte *)*plVar8;
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar2;
    bVar2 = (&DAT_101158ce2)[bVar2];
    uVar4 = FUN_100311f94(param_1);
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    uVar3 = FUN_100311f94(param_1);
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar3;
    bVar2 = (uVar4 & 0xffffffc0) == 0xffffff80 & bVar2 >> 4 & (uVar3 & 0xffffffc0) == 0xffffff80;
    goto LAB_100311f04;
  case 6:
    uVar4 = FUN_100311f94(param_1);
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    bVar1 = (uVar4 & 0xffffffc0) == 0xffffff80;
    goto LAB_100311f34;
  default:
    goto switchD_100311dac_caseD_7;
  case 10:
    bVar2 = FUN_100311f94(param_1);
    pbVar6 = (byte *)*plVar8;
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar2;
    bVar2 = (&DAT_101158ce2)[bVar2];
    uVar4 = FUN_100311f94(param_1);
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    bVar2 = (uVar4 & 0xffffffc0) == 0xffffff80 & bVar2 >> 5;
LAB_100311f04:
    return bVar2 != 0;
  case 0xb:
    bVar2 = FUN_100311f94(param_1);
    pbVar6 = (byte *)*plVar8;
    *plVar8 = (long)(pbVar6 + 1);
    *pbVar6 = bVar2;
    bVar1 = (ulong)bVar2 - 0x90 < 0x30;
LAB_100311f34:
    uVar4 = FUN_100311f94(param_1);
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    bVar1 = (bool)(bVar1 & (uVar4 & 0xffffffc0) == 0xffffff80);
    goto LAB_100311f5c;
  }
  bVar1 = uVar4 == 0xffffff80;
LAB_100311f5c:
  uVar4 = FUN_100311f94(param_1);
  puVar7 = (undefined1 *)*plVar8;
  *plVar8 = (long)(puVar7 + 1);
  *puVar7 = (char)uVar4;
  bVar1 = (bool)(bVar1 & (uVar4 & 0xffffffc0) == 0xffffff80);
switchD_100311dac_caseD_7:
  return bVar1;
}




int FUN_100311f94(long *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  uint uVar7;
  
  pcVar5 = (char *)*param_1;
  if ((*pcVar5 == '%') && (pcVar5 + 3 <= (char *)param_1[2])) {
    iVar4 = 0;
    *param_1 = (long)(pcVar5 + 1);
    pcVar5 = pcVar5 + 2;
    bVar2 = true;
    do {
      bVar6 = bVar2;
      bVar1 = pcVar5[-1];
      uVar7 = bVar1 - 0x30;
      if (9 < uVar7) {
        uVar7 = (uint)bVar1;
        if (bVar1 - 0x41 < 6) {
          uVar7 = uVar7 - 0x37;
        }
        else {
          if (5 < uVar7 - 0x61) goto LAB_100311fb4;
          uVar7 = uVar7 - 0x57;
        }
      }
      iVar4 = uVar7 + iVar4 * 0x10;
      cVar3 = (char)iVar4;
      *param_1 = (long)pcVar5;
      pcVar5 = pcVar5 + 1;
      bVar2 = false;
    } while (bVar6);
  }
  else {
LAB_100311fb4:
    cVar3 = '\0';
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return (int)cVar3;
}




long FUN_10031202c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    _free(*(void **)(param_1 + 0x18));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
  }
  return param_1;
}




long * FUN_100312068(long param_1,long *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long local_68;
  ulong local_60;
  undefined4 local_58;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x18);
    plVar6 = plVar5;
    do {
      if ((char)param_2[2] == '\x04') {
        uVar2 = *(uint *)((long)plVar6 + 0xc);
        if (uVar2 == 0xffffffff) {
          return (long *)0x0;
        }
        if (*(uint *)(param_2 + 1) <= uVar2) {
          return (long *)0x0;
        }
        param_2 = (long *)(*param_2 + (ulong)uVar2 * 0x18);
      }
      else {
        if ((char)param_2[2] != '\x03') {
          return (long *)0x0;
        }
        lVar4 = 0;
        local_68 = *plVar6;
        do {
          pcVar1 = (char *)(local_68 + lVar4);
          lVar4 = lVar4 + 1;
        } while (*pcVar1 != '\0');
        local_58 = 0x100005;
        local_60 = (ulong)((int)lVar4 - 1);
        lVar4 = *param_2;
        if ((int)param_2[1] != 0) {
          do {
            iVar3 = FUN_1000e8750(&local_68,lVar4);
            if (iVar3 != 0) break;
            lVar4 = lVar4 + 0x30;
          } while (lVar4 != *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30);
        }
        if (lVar4 == *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30) {
          return (long *)0x0;
        }
        param_2 = (long *)(lVar4 + 0x18);
        plVar5 = *(long **)(param_1 + 0x18);
        lVar4 = *(long *)(param_1 + 0x20);
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar5 + lVar4 * 2);
  }
  return param_2;
}




uint * FUN_100312190(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100214820(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar1 = *(long *)(param_1 + 2) + 0x10;
    lVar5 = (ulong)*param_2 * 0x28;
    lVar4 = *(long *)(param_2 + 2) + 0x10;
    do {
      uVar3 = *(undefined8 *)(lVar4 + -0x10);
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(lVar4 + -8);
      *(undefined8 *)(lVar1 + -0x10) = uVar3;
      lVar1 = FUN_10003330c(lVar1,lVar4);
      lVar1 = lVar1 + 0x28;
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




uint * FUN_100312218(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100214a1c(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    puVar7 = *(undefined8 **)(param_2 + 2);
    puVar8 = puVar7 + (ulong)*param_2 * 5;
    puVar5 = *(undefined8 **)(param_1 + 2);
    do {
      puVar6 = puVar5 + 1;
      *puVar6 = 0;
      puVar5[2] = 0;
      *puVar5 = puVar6;
      plVar9 = (long *)*puVar7;
      while (plVar9 != puVar7 + 1) {
        FUN_100214b8c(puVar5,puVar6,plVar9 + 4,plVar9 + 4);
        plVar3 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar3 = plVar9 + 2;
          bVar1 = *(long **)*plVar3 != plVar9;
          plVar9 = (long *)*plVar3;
          if (bVar1) {
            do {
              lVar4 = *plVar3;
              plVar3 = (long *)(lVar4 + 0x10);
              plVar9 = (long *)*plVar3;
            } while (*plVar9 != lVar4);
          }
        }
        else {
          do {
            plVar9 = plVar3;
            plVar3 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      }
      thunk_FUN_1004e439c(puVar5 + 3,puVar7 + 3);
      puVar7 = puVar7 + 5;
      puVar5 = puVar5 + 5;
    } while (puVar7 != puVar8);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




uint * FUN_100312320(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100215018(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      puVar1 = (undefined4 *)(lVar6 + lVar5);
      puVar2 = (undefined4 *)(lVar7 + lVar5);
      *puVar2 = *puVar1;
      FUN_10003330c(puVar2 + 2,puVar1 + 2);
      FUN_10003330c(puVar2 + 8,puVar1 + 8);
      FUN_10003330c(puVar2 + 0xe,puVar1 + 0xe);
      FUN_10003330c(puVar2 + 0x14,puVar1 + 0x14);
      FUN_10003330c(puVar2 + 0x1a,puVar1 + 0x1a);
      lVar5 = lVar5 + 0x80;
    } while ((ulong)uVar3 * 0x80 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




long FUN_1003123f0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = thunk_FUN_1004e439c();
  thunk_FUN_1004e439c(lVar1 + 0x10,param_2 + 0x10);
  thunk_FUN_1004e439c(param_1 + 0x20,param_2 + 0x20);
  FUN_10003330c(param_1 + 0x30,param_2 + 0x30);
  FUN_10003330c(param_1 + 0x48,param_2 + 0x48);
  thunk_FUN_1004e439c(param_1 + 0x60,param_2 + 0x60);
  FUN_10003330c(param_1 + 0x70,param_2 + 0x70);
  FUN_10003330c(param_1 + 0x88,param_2 + 0x88);
  thunk_FUN_1004e439c(param_1 + 0xa0,param_2 + 0xa0);
  FUN_10003330c(param_1 + 0xb0,param_2 + 0xb0);
  FUN_10003330c(param_1 + 200,param_2 + 200);
  FUN_10003330c(param_1 + 0xe0,param_2 + 0xe0);
  FUN_10003330c(param_1 + 0xf8,param_2 + 0xf8);
  FUN_10003330c(param_1 + 0x110,param_2 + 0x110);
  FUN_10003330c(param_1 + 0x128,param_2 + 0x128);
  FUN_10003330c(param_1 + 0x140,param_2 + 0x140);
  FUN_10003330c(param_1 + 0x158,param_2 + 0x158);
  FUN_10003330c(param_1 + 0x170,param_2 + 0x170);
  uVar3 = *(undefined8 *)(param_2 + 400);
  uVar2 = *(undefined8 *)(param_2 + 0x188);
  uVar5 = *(undefined8 *)(param_2 + 0x1a0);
  uVar4 = *(undefined8 *)(param_2 + 0x198);
  uVar6 = *(undefined8 *)(param_2 + 0x1a6);
  *(undefined8 *)(param_1 + 0x1ae) = *(undefined8 *)(param_2 + 0x1ae);
  *(undefined8 *)(param_1 + 0x1a6) = uVar6;
  *(undefined8 *)(param_1 + 400) = uVar3;
  *(undefined8 *)(param_1 + 0x188) = uVar2;
  *(undefined8 *)(param_1 + 0x1a0) = uVar5;
  *(undefined8 *)(param_1 + 0x198) = uVar4;
  return param_1;
}




void FUN_1003124fc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long FUN_100312550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  long lVar1;
  
  lVar1 = FUN_10003330c();
  FUN_10003330c(lVar1 + 0x18,param_3);
  FUN_10003330c(param_1 + 0x30,param_4);
  FUN_10003330c(param_1 + 0x48,param_5);
  *(undefined4 *)(param_1 + 0x60) = param_6;
  *(undefined4 *)(param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0x68) = param_8;
  *(undefined4 *)(param_1 + 0x6c) = (undefined4)param_9;
  *(undefined4 *)(param_1 + 0x70) = param_9._4_4_;
  return param_1;
}




void FUN_1003125e0(void)

{
  FUN_100312550();
  return;
}




long FUN_1003125ec(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  long lVar1;
  
  lVar1 = FUN_10003330c();
  FUN_10003330c(lVar1 + 0x18,param_3);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined1 *)(param_1 + 0x4c) = param_5;
  return param_1;
}




undefined8 * FUN_100312640(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar1 = FUN_1000164dc(param_1 + 6);
  *(undefined4 *)(param_1 + 10) = 0x15180;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_100016648(uVar1,"ASCENSION",0);
  FUN_1003126a0(param_1);
  return param_1;
}




void FUN_1003126a0(long param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0x15180;
  *(undefined8 *)(param_1 + 0x58) = 0x765dc60f;
  FUN_1000fd8f0(param_1,0);
  FUN_1000fd87c(param_1 + 0x10,0);
  FUN_1000165f0(param_1 + 0x30,0);
  return;
}




undefined8 * thunk_FUN_100312640(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar1 = FUN_1000164dc(param_1 + 6);
  *(undefined4 *)(param_1 + 10) = 0x15180;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_100016648(uVar1,"ASCENSION",0);
  FUN_1003126a0(param_1);
  return param_1;
}




bool FUN_1003126f4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_1000fd67c();
    lVar3 = FUN_1000fd654();
    bVar1 = lVar2 != 0 && lVar3 != 0;
  }
  return bVar1;
}




void FUN_10031273c(uint *param_1,string *param_2,undefined4 param_3)

{
  size_t sVar1;
  size_t sVar2;
  string sVar3;
  string *psVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  string *psVar8;
  string *psVar9;
  long lVar10;
  string *local_70;
  size_t local_68;
  ulong local_60;
  undefined4 local_58;
  
  if (*param_1 != 0) {
    lVar10 = *(long *)(param_1 + 2);
    do {
      FUN_10003330c(&local_70,lVar10);
      uVar5 = local_60;
      psVar4 = local_70;
      sVar3 = param_2[0x17];
      uVar7 = (ulong)(byte)sVar3;
      sVar1 = *(size_t *)(param_2 + 8);
      if (-1 < (char)sVar3) {
        sVar1 = uVar7;
      }
      sVar2 = local_68;
      if (-1 < (long)local_60) {
        sVar2 = local_60 >> 0x38;
      }
      if (sVar1 == sVar2) {
        psVar9 = *(string **)param_2;
        if (-1 < (char)sVar3) {
          psVar9 = param_2;
        }
        psVar8 = local_70;
        if (-1 < (long)local_60) {
          psVar8 = (string *)&local_70;
        }
        if ((char)sVar3 < '\0') {
          if ((sVar1 == 0) || (iVar6 = _memcmp(psVar9,psVar8,sVar1), iVar6 == 0))
          goto LAB_100312870;
        }
        else {
          if (sVar1 == 0) {
LAB_100312870:
            *(undefined4 *)(lVar10 + 0x18) = param_3;
            goto joined_r0x000100312874;
          }
          psVar9 = param_2;
          if ((uint)(byte)*psVar8 == ((uint)*(string **)param_2 & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              psVar9 = psVar9 + 1;
              psVar8 = psVar8 + 1;
              if (uVar7 == 0) goto LAB_100312870;
            } while (*psVar9 == *psVar8);
          }
        }
      }
      if ((long)uVar5 < 0) {
        operator_delete(local_70);
      }
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
  }
  local_70 = (string *)0x0;
  local_68 = 0;
  local_60 = 0;
  std::string::operator=((string *)&local_70,param_2);
  local_58 = param_3;
  FUN_10031289c(param_1,&local_70);
  psVar4 = local_70;
  uVar5 = local_60;
joined_r0x000100312874:
  if ((long)uVar5 < 0) {
    operator_delete(psVar4);
  }
  return;
}




void FUN_10031289c(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100312cf8(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




ulong FUN_100312928(uint *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte ******ppppppbVar8;
  byte *pbVar9;
  ulong unaff_x21;
  long lVar10;
  byte *****local_68;
  size_t local_60;
  byte local_51;
  
  if (*param_1 != 0) {
    lVar10 = *(long *)(param_1 + 2);
    do {
      FUN_10003330c(&local_68,lVar10);
      bVar5 = local_51;
      bVar3 = param_2[0x17];
      uVar7 = (ulong)bVar3;
      sVar1 = *(size_t *)(param_2 + 8);
      if (-1 < (char)bVar3) {
        sVar1 = uVar7;
      }
      sVar2 = local_60;
      if (-1 < (char)local_51) {
        sVar2 = (ulong)local_51;
      }
      if (sVar1 == sVar2) {
        pbVar9 = *(byte **)param_2;
        if (-1 < (char)bVar3) {
          pbVar9 = param_2;
        }
        ppppppbVar8 = (byte ******)local_68;
        if (-1 < (char)local_51) {
          ppppppbVar8 = &local_68;
        }
        if ((char)bVar3 < '\0') {
          if ((sVar1 != 0) && (iVar6 = _memcmp(pbVar9,ppppppbVar8,sVar1), iVar6 != 0))
          goto LAB_100312a00;
        }
        else if (sVar1 != 0) {
          pbVar9 = param_2;
          if ((uint)*(byte *)ppppppbVar8 == ((uint)*(byte **)param_2 & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar9 = pbVar9 + 1;
              ppppppbVar8 = (byte ******)((long)ppppppbVar8 + 1);
              if (uVar7 == 0) goto LAB_100312a30;
            } while (*pbVar9 == *(byte *)ppppppbVar8);
          }
          goto LAB_100312a00;
        }
LAB_100312a30:
        unaff_x21 = (ulong)*(uint *)(lVar10 + 0x18);
        bVar4 = true;
      }
      else {
LAB_100312a00:
        bVar4 = false;
      }
      if ((char)bVar5 < '\0') {
        operator_delete(local_68);
      }
      if (bVar4) {
        return unaff_x21;
      }
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
  }
  return 0;
}




undefined8 FUN_100312a64(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_38 [2];
  char local_21;
  
  lVar1 = FUN_1000fd628();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_10003330c(local_38,lVar1);
    uVar2 = FUN_100312928(param_1,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return uVar2;
}




void FUN_100312ac8(long param_1,string *param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  size_t sVar2;
  size_t sVar3;
  string sVar4;
  string *psVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  string *psVar9;
  string *psVar10;
  long lVar11;
  string *local_70;
  size_t local_68;
  ulong local_60;
  undefined4 local_58;
  
  lVar11 = 0x10;
  if (param_4 == 0) {
    lVar11 = 0x20;
  }
  puVar1 = (uint *)(param_1 + lVar11);
  if (*puVar1 != 0) {
    lVar11 = *(long *)(puVar1 + 2);
    do {
      FUN_10003330c(&local_70,lVar11);
      uVar6 = local_60;
      psVar5 = local_70;
      sVar4 = param_2[0x17];
      uVar8 = (ulong)(byte)sVar4;
      sVar2 = *(size_t *)(param_2 + 8);
      if (-1 < (char)sVar4) {
        sVar2 = uVar8;
      }
      sVar3 = local_68;
      if (-1 < (long)local_60) {
        sVar3 = local_60 >> 0x38;
      }
      if (sVar2 == sVar3) {
        psVar10 = *(string **)param_2;
        if (-1 < (char)sVar4) {
          psVar10 = param_2;
        }
        psVar9 = local_70;
        if (-1 < (long)local_60) {
          psVar9 = (string *)&local_70;
        }
        if ((char)sVar4 < '\0') {
          if ((sVar2 == 0) || (iVar7 = _memcmp(psVar10,psVar9,sVar2), iVar7 == 0))
          goto LAB_100312c0c;
        }
        else {
          if (sVar2 == 0) {
LAB_100312c0c:
            *(undefined4 *)(lVar11 + 0x18) = param_3;
            goto joined_r0x000100312c10;
          }
          psVar10 = param_2;
          if ((uint)(byte)*psVar9 == ((uint)*(string **)param_2 & 0xff)) {
            do {
              uVar8 = uVar8 - 1;
              psVar10 = psVar10 + 1;
              psVar9 = psVar9 + 1;
              if (uVar8 == 0) goto LAB_100312c0c;
            } while (*psVar10 == *psVar9);
          }
        }
      }
      if ((long)uVar6 < 0) {
        operator_delete(local_70);
      }
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != *(long *)(puVar1 + 2) + (ulong)*puVar1 * 0x20);
  }
  local_70 = (string *)0x0;
  local_68 = 0;
  local_60 = 0;
  std::string::operator=((string *)&local_70,param_2);
  local_58 = param_3;
  FUN_100312c38(puVar1,&local_70);
  psVar5 = local_70;
  uVar6 = local_60;
joined_r0x000100312c10:
  if ((long)uVar6 < 0) {
    operator_delete(psVar5);
  }
  return;
}




void FUN_100312c38(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100312dc8(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_100312cc4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_1000fd608();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x70);
  }
  FUN_1000165f0(param_1 + 0x30,uVar2);
  return;
}




void FUN_100312cf8(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(puVar4 + 3);
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_100312dc8(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(puVar4 + 3);
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




long FUN_100312e98(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    if (*(void **)(lVar1 + 0xb70) != (void *)0x0) {
      operator_delete__(*(void **)(lVar1 + 0xb70));
      *(undefined8 *)(lVar1 + 0xb70) = 0;
      *(undefined8 *)(lVar1 + 0xb68) = 0;
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0xd8);
  lVar2 = 0xaa0;
  do {
    lVar1 = param_1 + lVar2;
    FUN_100315dbc(lVar1 + -0x10,1);
    if (*(void **)(lVar1 + -0x18) != (void *)0x0) {
      operator_delete__(*(void **)(lVar1 + -0x18));
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined8 *)(lVar1 + -0x18) = 0;
    }
    lVar2 = lVar2 + -0x50;
  } while (lVar2 != 0);
  return param_1;
}




void FUN_100312f18(void)

{
  FUN_100312f24(&DAT_101e45d60);
  return;
}




void FUN_100312f24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_d8;
  undefined4 uStack_d4;
  char *pcStack_d0;
  mach_header *local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [8];
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  iVar8 = FUN_100126f48();
  uVar14 = iVar8 - 1;
  if (1 < uVar14) {
    uVar14 = 2;
  }
  iVar8 = FUN_10012709c();
  if (iVar8 == 2) {
    uVar9 = 1;
  }
  else if (iVar8 == 0) {
    uVar9 = FUN_100126cec();
  }
  else {
    uVar9 = 0;
  }
  iVar8 = FUN_100126c88();
  if (iVar8 == 0) {
    uVar15 = 0;
  }
  else {
    iVar8 = FUN_10012709c();
    uVar15 = (uint)(iVar8 != 1);
  }
  iVar8 = FUN_10012709c();
  iVar10 = FUN_10012709c();
  local_d8 = 0;
  pcStack_d0 = "preferFullscreen";
  local_c8 = (mach_header *)0x100000002;
  uStack_c0 = (mach_header *)((ulong)(iVar10 == 1) << 0x20);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[1] = pcStack_d0;
  *param_1 = CONCAT44(uStack_d4,local_d8);
  param_1[3] = uStack_c0;
  param_1[2] = local_c8;
  param_1[5] = CONCAT44(uStack_ac,uStack_b0);
  param_1[4] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 6,auStack_a8);
  FUN_100315d18(param_1 + 8,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 1;
  pcStack_d0 = "preferredGraphicsLevel";
  local_c8 = (mach_header *)0x200000002;
  uStack_c0 = (mach_header *)CONCAT44(uVar14,1);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xb] = pcStack_d0;
  param_1[10] = CONCAT44(uStack_d4,local_d8);
  param_1[0xd] = uStack_c0;
  param_1[0xc] = local_c8;
  param_1[0xf] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xe] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x10,auStack_a8);
  puVar1 = param_1 + 0x12;
  FUN_100315d18(puVar1,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 2;
  pcStack_d0 = "preferredControlScheme";
  local_c8 = (mach_header *)0x200000000;
  uStack_c0 = (mach_header *)CONCAT44(uVar9,1);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x15] = pcStack_d0;
  param_1[0x14] = CONCAT44(uStack_d4,local_d8);
  param_1[0x17] = uStack_c0;
  param_1[0x16] = local_c8;
  param_1[0x19] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x18] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x1a,auStack_a8);
  puVar2 = param_1 + 0x1c;
  FUN_100315d18(puVar2,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 3;
  pcStack_d0 = "preferredMouseScheme";
  uStack_c0 = (mach_header *)0x100000001;
  local_c8 = (mach_header *)0x200000000;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x1f] = pcStack_d0;
  param_1[0x1e] = CONCAT44(uStack_d4,local_d8);
  param_1[0x21] = uStack_c0;
  param_1[0x20] = local_c8;
  param_1[0x23] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x22] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x24,auStack_a8);
  puVar3 = param_1 + 0x26;
  FUN_100315d18(puVar3,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 9;
  pcStack_d0 = "preferKeyboardSmartCast";
  local_c8 = &__mh_execute_header;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x5b] = pcStack_d0;
  param_1[0x5a] = CONCAT44(uStack_d4,local_d8);
  param_1[0x5d] = uStack_c0;
  param_1[0x5c] = local_c8;
  param_1[0x5f] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x5e] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x60,auStack_a8);
  FUN_100315d18(param_1 + 0x62,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 10;
  pcStack_d0 = "preferKeyboardInstantCast";
  local_c8 = &__mh_execute_header;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 5;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x65] = pcStack_d0;
  param_1[100] = CONCAT44(uStack_d4,local_d8);
  param_1[0x67] = uStack_c0;
  param_1[0x66] = local_c8;
  param_1[0x69] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x68] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x6a,auStack_a8);
  FUN_100315d18(param_1 + 0x6c,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1f;
  pcStack_d0 = "preferAttackIgnoreCursor";
  local_c8 = &__mh_execute_header;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x137] = pcStack_d0;
  param_1[0x136] = CONCAT44(uStack_d4,local_d8);
  param_1[0x139] = uStack_c0;
  param_1[0x138] = local_c8;
  param_1[0x13b] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x13a] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x13c,auStack_a8);
  FUN_100315d18(param_1 + 0x13e,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0xb;
  pcStack_d0 = "preferTapInstantCast2";
  uStack_c0 = &__mh_execute_header;
  local_c8 = &__mh_execute_header;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 6;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x6f] = pcStack_d0;
  param_1[0x6e] = CONCAT44(uStack_d4,local_d8);
  param_1[0x71] = uStack_c0;
  param_1[0x70] = local_c8;
  param_1[0x73] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x72] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x74,auStack_a8);
  FUN_100315d18(param_1 + 0x76,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x21;
  pcStack_d0 = "preferSimplifiedJoystick";
  local_c8 = &__mh_execute_header;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 1;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x14b] = pcStack_d0;
  param_1[0x14a] = CONCAT44(uStack_d4,local_d8);
  param_1[0x14d] = uStack_c0;
  param_1[0x14c] = local_c8;
  param_1[0x14f] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x14e] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x150,auStack_a8);
  FUN_100315d18(param_1 + 0x152,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0xc;
  pcStack_d0 = "preferredMoveStickPlacement";
  uStack_c0 = (mach_header *)0x1;
  local_c8 = (mach_header *)0x200000000;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 1;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x79] = pcStack_d0;
  param_1[0x78] = CONCAT44(uStack_d4,local_d8);
  param_1[0x7b] = uStack_c0;
  param_1[0x7a] = local_c8;
  param_1[0x7d] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x7c] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x7e,auStack_a8);
  puVar4 = param_1 + 0x80;
  FUN_100315d18(puVar4,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1e;
  pcStack_d0 = "preferTargetPriority";
  uStack_c0 = (mach_header *)0x1;
  local_c8 = (mach_header *)0x200000000;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 1;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x12d] = pcStack_d0;
  param_1[300] = CONCAT44(uStack_d4,local_d8);
  param_1[0x12f] = uStack_c0;
  param_1[0x12e] = local_c8;
  param_1[0x131] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x130] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x132,auStack_a8);
  puVar5 = param_1 + 0x134;
  FUN_100315d18(puVar5,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 4;
  pcStack_d0 = "preferredMouseCameraScheme";
  uStack_c0 = (mach_header *)0x1;
  local_c8 = (mach_header *)0x200000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x29] = pcStack_d0;
  param_1[0x28] = CONCAT44(uStack_d4,local_d8);
  param_1[0x2b] = uStack_c0;
  param_1[0x2a] = local_c8;
  param_1[0x2d] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x2c] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x2e,auStack_a8);
  puVar6 = param_1 + 0x30;
  FUN_100315d18(puVar6,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 5;
  pcStack_d0 = "preferZoomedCamera";
  local_c8 = (mach_header *)0x100000003;
  uStack_c0 = (mach_header *)((ulong)uVar15 << 0x20);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x33] = pcStack_d0;
  param_1[0x32] = CONCAT44(uStack_d4,local_d8);
  param_1[0x35] = uStack_c0;
  param_1[0x34] = local_c8;
  param_1[0x37] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x36] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x38,auStack_a8);
  FUN_100315d18(param_1 + 0x3a,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 6;
  pcStack_d0 = "preferLockedCamera";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x3d] = pcStack_d0;
  param_1[0x3c] = CONCAT44(uStack_d4,local_d8);
  param_1[0x3f] = uStack_c0;
  param_1[0x3e] = local_c8;
  param_1[0x41] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x40] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x42,auStack_a8);
  FUN_100315d18(param_1 + 0x44,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 7;
  pcStack_d0 = "preferShowCamZoomButton";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x47] = pcStack_d0;
  param_1[0x46] = CONCAT44(uStack_d4,local_d8);
  param_1[0x49] = uStack_c0;
  param_1[0x48] = local_c8;
  param_1[0x4b] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x4a] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x4c,auStack_a8);
  FUN_100315d18(param_1 + 0x4e,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 8;
  pcStack_d0 = "preferShowCamLockButton";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x51] = pcStack_d0;
  param_1[0x50] = CONCAT44(uStack_d4,local_d8);
  param_1[0x53] = uStack_c0;
  param_1[0x52] = local_c8;
  param_1[0x55] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x54] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x56,auStack_a8);
  FUN_100315d18(param_1 + 0x58,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0xd;
  pcStack_d0 = "cameraEdgePanningSpeed";
  uStack_c0 = (mach_header *)0x3f00000000000002;
  local_c8 = (mach_header *)0x300000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x83] = pcStack_d0;
  param_1[0x82] = CONCAT44(uStack_d4,local_d8);
  param_1[0x85] = uStack_c0;
  param_1[0x84] = local_c8;
  param_1[0x87] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x86] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x88,auStack_a8);
  FUN_100315d18(param_1 + 0x8a,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0xe;
  pcStack_d0 = "preferSmoothEdgePanning";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000003;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 2;
  uStack_b0 = 0;
  uStack_ac = 1;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x8d] = pcStack_d0;
  param_1[0x8c] = CONCAT44(uStack_d4,local_d8);
  param_1[0x8f] = uStack_c0;
  param_1[0x8e] = local_c8;
  param_1[0x91] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x90] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x92,auStack_a8);
  FUN_100315d18(param_1 + 0x94,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  iVar10 = FUN_100131560();
  if (iVar10 == 0) {
    local_d8 = 0xf;
    pcStack_d0 = "preferEnableInGameChat";
    uStack_c0 = (mach_header *)0x100000000;
    local_c8 = (mach_header *)0x100000008;
    local_b8 = (uint)local_b8._1_3_ << 8;
    uStack_b4 = 0x23;
    uStack_b0 = 0;
    uStack_ac = 7;
    FUN_1004e313c(auStack_a8);
    local_98 = 0;
    uStack_90 = 0;
    param_1[0x97] = pcStack_d0;
    param_1[0x96] = CONCAT44(uStack_d4,local_d8);
    param_1[0x99] = uStack_c0;
    param_1[0x98] = local_c8;
    param_1[0x9b] = CONCAT44(uStack_ac,uStack_b0);
    param_1[0x9a] = CONCAT44(uStack_b4,local_b8);
    FUN_1000153b4(param_1 + 0x9c,auStack_a8);
    FUN_100315d18(param_1 + 0x9e,&local_98);
    FUN_100315dbc(&local_98,1);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
    }
    local_d8 = 0x10;
    pcStack_d0 = "preferChatFromGreatKarmaOnly";
    uStack_c0 = (mach_header *)0x100000000;
    local_c8 = (mach_header *)0x100000008;
    local_b8 = local_b8 & 0xffffff00;
    uStack_b4 = 0xf;
    uStack_b0 = 1;
    uStack_ac = 7;
    FUN_1004e313c(auStack_a8);
    local_98 = 0;
    uStack_90 = 0;
    param_1[0xa1] = pcStack_d0;
    param_1[0xa0] = CONCAT44(uStack_d4,local_d8);
    param_1[0xa3] = uStack_c0;
    param_1[0xa2] = local_c8;
    param_1[0xa5] = CONCAT44(uStack_ac,uStack_b0);
    param_1[0xa4] = CONCAT44(uStack_b4,local_b8);
    FUN_1000153b4(param_1 + 0xa6,auStack_a8);
    FUN_100315d18(param_1 + 0xa8,&local_98);
    FUN_100315dbc(&local_98,1);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
    }
    uStack_ac = 2;
  }
  else {
    local_d8 = 0xf;
    pcStack_d0 = "preferEnableInGameChat";
    uStack_c0 = (mach_header *)0x100000000;
    local_c8 = (mach_header *)0x100000008;
    local_b8 = (uint)local_b8._1_3_ << 8;
    uStack_b4 = 0x23;
    uStack_b0 = 0;
    uStack_ac = 4;
    FUN_1004e313c(auStack_a8);
    local_98 = 0;
    uStack_90 = 0;
    param_1[0x97] = pcStack_d0;
    param_1[0x96] = CONCAT44(uStack_d4,local_d8);
    param_1[0x99] = uStack_c0;
    param_1[0x98] = local_c8;
    param_1[0x9b] = CONCAT44(uStack_ac,uStack_b0);
    param_1[0x9a] = CONCAT44(uStack_b4,local_b8);
    FUN_1000153b4(param_1 + 0x9c,auStack_a8);
    FUN_100315d18(param_1 + 0x9e,&local_98);
    FUN_100315dbc(&local_98,1);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
    }
    local_d8 = 0x10;
    pcStack_d0 = "preferChatFromGreatKarmaOnly";
    uStack_c0 = (mach_header *)0x100000000;
    local_c8 = (mach_header *)0x100000008;
    local_b8 = local_b8 & 0xffffff00;
    uStack_b4 = 0xf;
    uStack_b0 = 1;
    uStack_ac = 4;
    FUN_1004e313c(auStack_a8);
    local_98 = 0;
    uStack_90 = 0;
    param_1[0xa1] = pcStack_d0;
    param_1[0xa0] = CONCAT44(uStack_d4,local_d8);
    param_1[0xa3] = uStack_c0;
    param_1[0xa2] = local_c8;
    param_1[0xa5] = CONCAT44(uStack_ac,uStack_b0);
    param_1[0xa4] = CONCAT44(uStack_b4,local_b8);
    FUN_1000153b4(param_1 + 0xa6,auStack_a8);
    FUN_100315d18(param_1 + 0xa8,&local_98);
    FUN_100315dbc(&local_98,1);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
    }
    uStack_ac = 4;
  }
  uStack_b0 = 1;
  uStack_b4 = 0xf;
  local_b8 = local_b8 & 0xffffff00;
  uStack_c0 = (mach_header *)0x1;
  local_c8 = (mach_header *)0x200000008;
  pcStack_d0 = "preferMobileChatTransparency";
  local_d8 = 0x20;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x141] = pcStack_d0;
  param_1[0x140] = CONCAT44(uStack_d4,local_d8);
  param_1[0x143] = uStack_c0;
  param_1[0x142] = local_c8;
  param_1[0x145] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x144] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x146,auStack_a8);
  FUN_100315d18(param_1 + 0x148,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x11;
  pcStack_d0 = "preferredMinimapSize";
  uStack_c0 = (mach_header *)0x3f00000000000002;
  local_c8 = (mach_header *)0x300000004;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 3;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xab] = pcStack_d0;
  param_1[0xaa] = CONCAT44(uStack_d4,local_d8);
  param_1[0xad] = uStack_c0;
  param_1[0xac] = local_c8;
  param_1[0xaf] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xae] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xb0,auStack_a8);
  FUN_100315d18(param_1 + 0xb2,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x12;
  pcStack_d0 = "preferTapAndHoldScoreboard";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)((ulong)(iVar8 == 1) << 0x20);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xb5] = pcStack_d0;
  param_1[0xb4] = CONCAT44(uStack_d4,local_d8);
  param_1[0xb7] = uStack_c0;
  param_1[0xb6] = local_c8;
  param_1[0xb9] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xb8] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xba,auStack_a8);
  FUN_100315d18(param_1 + 0xbc,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x13;
  pcStack_d0 = "preferHideNamesAbovePlaques";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xbf] = pcStack_d0;
  param_1[0xbe] = CONCAT44(uStack_d4,local_d8);
  param_1[0xc1] = uStack_c0;
  param_1[0xc0] = local_c8;
  param_1[0xc3] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xc2] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xc4,auStack_a8);
  FUN_100315d18(param_1 + 0xc6,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x14;
  pcStack_d0 = "preferPulseOnDamage";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xc9] = pcStack_d0;
  param_1[200] = CONCAT44(uStack_d4,local_d8);
  param_1[0xcb] = uStack_c0;
  param_1[0xca] = local_c8;
  param_1[0xcd] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xcc] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xce,auStack_a8);
  FUN_100315d18(param_1 + 0xd0,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x15;
  pcStack_d0 = "preferMinimapInstantPan";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 2;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xd3] = pcStack_d0;
  param_1[0xd2] = CONCAT44(uStack_d4,local_d8);
  param_1[0xd5] = uStack_c0;
  param_1[0xd4] = local_c8;
  param_1[0xd7] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xd6] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xd8,auStack_a8);
  FUN_100315d18(param_1 + 0xda,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x16;
  pcStack_d0 = "prefer3V3MinimapOnRight";
  local_c8 = (mach_header *)0x100000004;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xdd] = pcStack_d0;
  param_1[0xdc] = CONCAT44(uStack_d4,local_d8);
  param_1[0xdf] = uStack_c0;
  param_1[0xde] = local_c8;
  param_1[0xe1] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xe0] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xe2,auStack_a8);
  FUN_100315d18(param_1 + 0xe4,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1d;
  pcStack_d0 = "preferBountyInScoreboard";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000004;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x123] = pcStack_d0;
  param_1[0x122] = CONCAT44(uStack_d4,local_d8);
  param_1[0x125] = uStack_c0;
  param_1[0x124] = local_c8;
  param_1[0x127] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x126] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x128,auStack_a8);
  FUN_100315d18(param_1 + 0x12a,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x17;
  pcStack_d0 = "audioLevelGame";
  uStack_c0 = (mach_header *)0x3f80000000000002;
  local_c8 = (mach_header *)0x300000005;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xe7] = pcStack_d0;
  param_1[0xe6] = CONCAT44(uStack_d4,local_d8);
  param_1[0xe9] = uStack_c0;
  param_1[0xe8] = local_c8;
  param_1[0xeb] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xea] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xec,auStack_a8);
  FUN_100315d18(param_1 + 0xee,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x18;
  pcStack_d0 = "audioLevelMusic";
  uStack_c0 = (mach_header *)0x3f80000000000002;
  local_c8 = (mach_header *)0x300000005;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xf1] = pcStack_d0;
  param_1[0xf0] = CONCAT44(uStack_d4,local_d8);
  param_1[0xf3] = uStack_c0;
  param_1[0xf2] = local_c8;
  param_1[0xf5] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xf4] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0xf6,auStack_a8);
  FUN_100315d18(param_1 + 0xf8,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x19;
  pcStack_d0 = "preferInGameHints";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)0x100000004;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0xfb] = pcStack_d0;
  param_1[0xfa] = CONCAT44(uStack_d4,local_d8);
  param_1[0xfd] = uStack_c0;
  param_1[0xfc] = local_c8;
  param_1[0xff] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xfe] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x100,auStack_a8);
  FUN_100315d18(param_1 + 0x102,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1a;
  pcStack_d0 = "preferredAutoShopBehavior";
  uStack_c0 = (mach_header *)0x100000001;
  local_c8 = (mach_header *)0x200000006;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x105] = pcStack_d0;
  param_1[0x104] = CONCAT44(uStack_d4,local_d8);
  param_1[0x107] = uStack_c0;
  param_1[0x106] = local_c8;
  param_1[0x109] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x108] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x10a,auStack_a8);
  puVar7 = param_1 + 0x10c;
  FUN_100315d18(puVar7,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1b;
  pcStack_d0 = "preferAutoUpgradeAbilities";
  local_c8 = (mach_header *)0x100000006;
  uStack_c0 = (mach_header *)0x0;
  local_b8 = local_b8 & 0xffffff00;
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x10f] = pcStack_d0;
  param_1[0x10e] = CONCAT44(uStack_d4,local_d8);
  param_1[0x111] = uStack_c0;
  param_1[0x110] = local_c8;
  param_1[0x113] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x112] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x114,auStack_a8);
  FUN_100315d18(param_1 + 0x116,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_d8 = 0x1c;
  pcStack_d0 = "preferShowRankedRecallPfx";
  uStack_c0 = (mach_header *)0x100000000;
  local_c8 = (mach_header *)&__mh_execute_header.cputype;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  uStack_b4 = 0x23;
  uStack_b0 = 0;
  uStack_ac = 0;
  FUN_1004e313c(auStack_a8);
  local_98 = 0;
  uStack_90 = 0;
  param_1[0x119] = pcStack_d0;
  param_1[0x118] = CONCAT44(uStack_d4,local_d8);
  param_1[0x11b] = uStack_c0;
  param_1[0x11a] = local_c8;
  param_1[0x11d] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0x11c] = CONCAT44(uStack_b4,local_b8);
  FUN_1000153b4(param_1 + 0x11e,auStack_a8);
  FUN_100315d18(param_1 + 0x120,&local_98);
  FUN_100315dbc(&local_98,1);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_TITLE",0);
  FUN_1000153b4(param_1 + 0x10,uVar11);
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_HIGH",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_HIGH_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_MEDIUM",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_MEDIUM_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_LOW",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS_LOW_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME_TAP",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME_TAP_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar2,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME_JOYSTICK",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME_JOYSTICK_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar2,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_SCHEME_VAINGLORIOUS",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_SCHEME_VAINGLORIOUS_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar3,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_SCHEME_TRADITIONAL",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_SCHEME_TRADITIONAL_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar3,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_DRAG_ONLY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_DRAG_ONLY_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar6,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_NUDGE_ONLY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_NUDGE_ONLY_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar6,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_DRAG_AND_NUDGE",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOUSE_CAMERA_DRAG_AND_NUDGE_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar6,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_ZOOMED_CAMERA",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x3a,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_LOCKED_CAMERA",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x44,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_CAM_ZOOM_BUTTON",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x4e,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_CAM_LOCK_BUTTON",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x58,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_INSTANT_CAST_MODALS",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_HUD_SETTINGS_INSTANT_CAST_MODALS_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x76,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_INSTANT_CAST_MODALS",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_HUD_SETTINGS_INSTANT_CAST_MODALS_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x6c,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SMART_CAST",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SMART_CAST_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x62,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_LAZY_ATTACK_IGNORE_CURSOR",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_LAZY_ATTACK_IGNORE_CURSOR_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x13e,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_FIXED",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_FIXED_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar4,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_DRIFT",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_DRIFT_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar4,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_LOCK",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOVE_STICK_LOCK_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar4,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CAMERA_EDGE_PANNING_SPEED",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x8a,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CAMERA_EDGE_PANNING_SMOOTH",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x94,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SETTING_IN_GAME_CHAT_ENABLED",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0x9e,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CHAT_FROM_GREAT_KARMA_ONLY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_CHAT_FROM_GREAT_KARMA_ONLY_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0xa8,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_FULLSCREEN",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_FULLSCREEN_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 8,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SCOREBOARD_TAP_AND_HOLD",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SCOREBOARD_TAP_AND_HOLD_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0xbc,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_NAMES",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xc6,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_PULSE_SCREEN",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xd0,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MINIMAP_INSTANT_PAN",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MINIMAP_INSTANT_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0xda,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_IN_GAME_HINTS",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_IN_GAME_HINTS_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x102,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_RANKED_RECALL_PFX",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOW_RANKED_RECALL_PFX_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x120,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MINIMAP_SIZE",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xb2,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_3V3_MINIMAP_ON_RIGHT",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_3V3_MINIMAP_ON_RIGHT_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0xe4,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOW_BOUNTY_IN_SCOREBOARD",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOW_BOUNTY_IN_SCOREBOARD_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x12a,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_TARGET_PRIORITY",0);
  FUN_1000153b4(param_1 + 0x132,uVar11);
  uVar11 = FUN_1004e0150("HUD_SETTINGS_TARGET_LOWHPPERCENT",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_TARGET_LOWHPPERCENT_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar5,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_TARGET_LOWHP",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_TARGET_LOWHP_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar5,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_TARGET_CLOSEST",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_TARGET_CLOSEST_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar5,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SIMPLIFIED_JOYSTICK",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SIMPLIFIED_JOYSTICK_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x152,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_AUTO_UPGRADE_ABILITIES",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_AUTO_UPGRADE_ABILITIES_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(param_1 + 0x116,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_VOLUME_LEVEL_GAME_AUDIO",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xee,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_VOLUME_LEVEL_MUSIC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,&DAT_101d91650);
  FUN_100315bf4(param_1 + 0xf8,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_AUTO_BUY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_AUTO_BUY_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar7,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_QUICK_BUY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_QUICK_BUY_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar7,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_MANUAL_BUY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_SHOP_ENABLE_MANUAL_BUY_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar7,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTING_MOBILECHAT_TRANSPARENCY",0);
  FUN_1000153b4(param_1 + 0x146,uVar11);
  puVar1 = param_1 + 0x148;
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_OPAQUE",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_OPAQUE_DESC",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_PARTIAL_TRANSPARENCY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_PARTIAL_TRANSPARENCY_DESC",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_FULL_TRANSPARENCY",0);
  uVar12 = FUN_1004e0150("HUD_SETTINGS_MOBILECHAT_FULL_TRANSPARENCY_DESC",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  thunk_FUN_1004e439c(&uStack_c0,uVar12);
  FUN_100315bf4(puVar1,&local_d8);
  if ((void *)CONCAT44(uStack_b4,local_b8) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_b4,local_b8));
    uStack_c0 = (mach_header *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GRAPHICS",0);
  local_d8 = 2;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x15a) = local_d8;
  FUN_1000153b4(param_1 + 0x15b,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_KEY_BINDINGS",0);
  local_d8 = 1;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x157) = local_d8;
  FUN_1000153b4(param_1 + 0x158,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CONTROL_SCHEME",0);
  local_d8 = 0;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x154) = local_d8;
  FUN_1000153b4(param_1 + 0x155,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_CAMERA",0);
  local_d8 = 3;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x15d) = local_d8;
  FUN_1000153b4(param_1 + 0x15e,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_PREFERENCES",0);
  local_d8 = 4;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x160) = local_d8;
  FUN_1000153b4(param_1 + 0x161,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_SOUND_OPTIONS",0);
  local_d8 = 5;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x163) = local_d8;
  FUN_1000153b4(param_1 + 0x164,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar11 = FUN_1004e0150("HUD_SETTINGS_GAMEPLAY_OPTIONS",0);
  local_d8 = 6;
  thunk_FUN_1004e439c(&pcStack_d0,uVar11);
  *(undefined4 *)(param_1 + 0x166) = local_d8;
  FUN_1000153b4(param_1 + 0x167,&pcStack_d0);
  if (local_c8 != (mach_header *)0x0) {
    operator_delete__(local_c8);
  }
  uVar13 = FUN_10012ced4();
  if ((uVar13 & 1) == 0) {
    uVar11 = FUN_1004e0150("HUD_SETTINGS_CREDITS",0);
    local_d8 = 7;
    thunk_FUN_1004e439c(&pcStack_d0,uVar11);
    *(undefined4 *)(param_1 + 0x169) = local_d8;
    FUN_1000153b4(param_1 + 0x16a,&pcStack_d0);
    if (local_c8 != (mach_header *)0x0) {
      operator_delete__(local_c8);
    }
  }
  uVar13 = FUN_100131560();
  if ((uVar13 & 1) == 0) {
    uVar11 = FUN_1004e0150("HUD_SETTINGS_CHAT",0);
    local_d8 = 8;
    thunk_FUN_1004e439c(&pcStack_d0,uVar11);
    *(undefined4 *)(param_1 + 0x16c) = local_d8;
    FUN_1000153b4(param_1 + 0x16d,&pcStack_d0);
    if (local_c8 != (mach_header *)0x0) {
      operator_delete__(local_c8);
    }
  }
  *(undefined1 *)(param_1 + 0x16f) = 1;
  return;
}




undefined4 * FUN_100315bc8(ulong param_1)

{
  return &DAT_101e46800 + (param_1 & 0xffffffff) * 6;
}




undefined * FUN_100315be0(ulong param_1)

{
  return &DAT_101e45d60 + (param_1 & 0xffffffff) * 0x50;
}




void FUN_100315bf4(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100315e48(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  *(undefined4 *)(lVar4 + -0x28) = *param_2;
  thunk_FUN_1004e439c(lVar4 + -0x20,param_2 + 2);
  thunk_FUN_1004e439c(lVar4 + -0x10,param_2 + 6);
  return;
}




bool FUN_100315c8c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004d2898(param_1,param_2,4);
  return iVar1 == 0;
}




long FUN_100315cac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined4 *)(lVar1 + 0x28) = 0;
    FUN_1004e313c(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0xaa0);
  lVar2 = 0xaa8;
  do {
    FUN_1004e313c(param_1 + lVar2);
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xb80);
  *(undefined1 *)(param_1 + 0xb78) = 0;
  return param_1;
}




void FUN_100315d18(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_100315dbc(param_1,1);
    FUN_100315e48(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_1 + 2) + 0x18;
      lVar4 = (ulong)*param_2 * 0x28;
      lVar3 = *(long *)(param_2 + 2) + 0x18;
      do {
        *(undefined4 *)(lVar2 + -0x18) = *(undefined4 *)(lVar3 + -0x18);
        thunk_FUN_1004e439c(lVar2 + -0x10,lVar3 + -0x10);
        thunk_FUN_1004e439c(lVar2,lVar3);
        lVar2 = lVar2 + 0x28;
        lVar3 = lVar3 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_100315dbc(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x20);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        if ((void *)puVar2[-2] != (void *)0x0) {
          operator_delete__((void *)puVar2[-2]);
          puVar2[-3] = 0;
          puVar2[-2] = 0;
        }
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100315e48(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar3 = (long)pvVar1 + 0x18;
      lVar6 = (ulong)*param_1 * 0x28;
      lVar5 = (long)pvVar2 + 0x18;
      do {
        *(undefined4 *)(lVar3 + -0x18) = *(undefined4 *)(lVar5 + -0x18);
        thunk_FUN_1004e439c(lVar3 + -0x10,lVar5 + -0x10);
        thunk_FUN_1004e439c(lVar3,lVar5);
        lVar3 = lVar3 + 0x28;
        lVar5 = lVar5 + 0x28;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x28;
        puVar4 = (undefined8 *)((long)pvVar2 + 0x20);
        do {
          if ((void *)*puVar4 != (void *)0x0) {
            operator_delete__((void *)*puVar4);
            puVar4[-1] = 0;
            *puVar4 = 0;
          }
          if ((void *)puVar4[-2] != (void *)0x0) {
            operator_delete__((void *)puVar4[-2]);
            puVar4[-3] = 0;
            puVar4[-2] = 0;
          }
          puVar4 = puVar4 + 5;
          lVar3 = lVar3 + -0x28;
        } while (lVar3 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_100315f44(void)

{
  FUN_100315cac(&DAT_101e45d60);
  ___cxa_atexit(FUN_100312e98,&DAT_101e45d60,0x100000000);
  return;
}




void FUN_100315f80(void)

{
  if (DAT_101e468e0 != 0) {
    return;
  }
  operator_new(0xa0);
  DAT_101e468e0 = FUN_1003161a8();
  FUN_100315fc0();
  return;
}




void FUN_100315fc0(uint *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [16];
  
  lVar3 = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  lVar4 = 0x10;
  do {
    puVar2 = (undefined8 *)FUN_100315be0(lVar3);
    local_78 = puVar2[3];
    uStack_80 = puVar2[2];
    uStack_68 = puVar2[5];
    local_70 = puVar2[4];
    uStack_88 = puVar2[1];
    local_90 = *puVar2;
    thunk_FUN_1004e439c(auStack_60,puVar2 + 6);
    FUN_100316468(auStack_50,puVar2 + 8);
    if ((int)local_78 == 2) {
      uVar1 = FUN_10012c9c4(local_78._4_4_,uStack_88);
      *(undefined4 *)((long)param_1 + lVar4) = uVar1;
    }
    else {
      if ((int)local_78 == 1) {
        uVar1 = FUN_10012c8f0(uStack_88,local_78._4_4_);
      }
      else {
        if ((int)local_78 != 0) goto LAB_100316078;
        uVar1 = FUN_10012c81c(uStack_88,local_78._4_1_);
      }
      *(undefined4 *)((long)param_1 + lVar4) = uVar1;
    }
LAB_100316078:
    FUN_100315dbc(auStack_50,1);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + 4;
    if (lVar3 == 0x22) {
      FUN_100316430(param_1);
      local_90 = CONCAT44(local_90._4_4_,0x22);
      if (*param_1 != 0) {
        puVar2 = *(undefined8 **)(param_1 + 2);
        do {
          if ((code *)*puVar2 == (code *)0x0) {
            (*(code *)puVar2[3])(puVar2[2],&local_90);
          }
          else {
            (*(code *)*puVar2)(&local_90);
          }
          puVar2 = puVar2 + 4;
        } while (puVar2 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
      }
      return;
    }
  } while( true );
}




void FUN_10031610c(void)

{
  void *pvVar1;
  
  if (DAT_101e468e0 != 0) {
    pvVar1 = (void *)FUN_10031620c();
    operator_delete(pvVar1);
    DAT_101e468e0 = 0;
  }
  return;
}




bool FUN_10031613c(void)

{
  return DAT_101e468e0 != 0;
}




undefined8 FUN_100316150(void)

{
  return DAT_101e468e0;
}




uint FUN_10031615c(ulong param_1)

{
  return *(uint *)(DAT_101e468e0 + (param_1 & 0xffffffff) * 4 + 0x10) & 1;
}




undefined4 FUN_100316174(long param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x10);
}




undefined4 FUN_100316180(ulong param_1)

{
  return *(undefined4 *)(DAT_101e468e0 + (param_1 & 0xffffffff) * 4 + 0x10);
}




undefined4 FUN_100316194(uint param_1)

{
  return *(undefined4 *)(DAT_101e468e0 + (ulong)param_1 * 4 + 0x10);
}




undefined8 * FUN_1003161a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *(undefined8 *)((long)param_1 + 0x91) = 0;
  *(undefined8 *)((long)param_1 + 0x89) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_100312f18();
  uVar1 = FUN_100133fc8();
  uStack_38 = 0;
  pcStack_28 = FUN_100316500;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(uVar1,&local_40);
  return param_1;
}




undefined8 * FUN_10031620c(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_10031627c();
  puVar1 = (uint *)FUN_100133fc8();
  if (*puVar1 != 0) {
    lVar2 = (ulong)*puVar1 << 5;
    puVar3 = *(undefined8 **)(puVar1 + 2);
    do {
      if ((undefined8 *)*puVar3 == param_1) {
        FUN_1000c044c(puVar1,puVar3,puVar3 + 4);
        break;
      }
      lVar2 = lVar2 + -0x20;
      puVar3 = puVar3 + 4;
    } while (lVar2 != 0);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_10031627c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_78;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [16];
  
  lVar2 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x10);
  do {
    lVar1 = FUN_100315be0(lVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    uVar5 = *(undefined8 *)(lVar1 + 8);
    thunk_FUN_1004e439c(auStack_60,lVar1 + 0x30);
    FUN_100316468(auStack_50,lVar1 + 0x40);
    local_78 = (int)uVar4;
    if (local_78 == 2) {
      FUN_10012c67c(*puVar3,uVar5);
    }
    else if (local_78 == 1) {
      FUN_10012c5b0(uVar5,*puVar3);
    }
    else if (local_78 == 0) {
      FUN_10012c348(uVar5,*(undefined1 *)puVar3);
    }
    FUN_100315dbc(auStack_50,1);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (lVar2 != 0x22);
  return;
}




void FUN_100316360(uint *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint local_3c;
  uint local_38 [2];
  
  local_3c = (uint)param_2;
  local_38[0] = param_3;
  uVar1 = FUN_100315c8c(param_1 + (param_2 & 0xffffffff) + 4,local_38);
  param_1[(param_2 & 0xffffffff) + 4] = local_38[0];
  if (((uVar1 & 1) == 0) && (*param_1 != 0)) {
    puVar4 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar4 == (code *)0x0) {
        (*(code *)puVar4[3])(puVar4[2],&local_3c);
      }
      else {
        (*(code *)*puVar4)(&local_3c);
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
    param_2 = (ulong)local_3c;
  }
  lVar2 = FUN_100315be0(param_2);
  if (*(char *)(lVar2 + 0x20) != '\0') {
    FUN_100121cd0();
  }
  if (local_3c == 1) {
    FUN_100126050();
  }
  else if (local_3c == 0) {
    uVar3 = FUN_1004e96fc();
    FUN_1004e9504(uVar3,(undefined1)local_38[0]);
  }
  return;
}




void FUN_100316430(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10012709c();
  if ((iVar1 == 1) && (*(int *)(param_1 + 0x18) == 1)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_100126050();
  return;
}




uint * FUN_100316468(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100315e48(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_1 + 2) + 0x18;
    lVar4 = (ulong)*param_2 * 0x28;
    lVar3 = *(long *)(param_2 + 2) + 0x18;
    do {
      *(undefined4 *)(lVar2 + -0x18) = *(undefined4 *)(lVar3 + -0x18);
      thunk_FUN_1004e439c(lVar2 + -0x10,lVar3 + -0x10);
      thunk_FUN_1004e439c(lVar2,lVar3);
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_100316500(undefined8 param_1)

{
  FUN_100312f18();
  FUN_100315fc0(param_1);
  return;
}




void FUN_100316524(void)

{
  undefined8 *puVar1;
  
  if (DAT_101e468e8 != (undefined8 *)0x0) {
    return;
  }
  puVar1 = operator_new(0xb70);
  *puVar1 = 0;
  puVar1[1] = 0;
  thunk_FUN_1003187d8(puVar1 + 2);
  DAT_101e468e8 = puVar1;
  FUN_100316578(puVar1);
  FUN_100316fc0(DAT_101e468e8);
  return;
}




void FUN_100316578(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    lVar1 = param_1 + lVar6;
    FUN_100316e1c(param_1,*(undefined8 *)(lVar1 + 0x18),1,0);
    iVar3 = FUN_1004d2538();
    if (iVar3 == 0) {
LAB_1003165cc:
      FUN_100316e1c(param_1,*(undefined8 *)(lVar1 + 0x18),1,0);
      uVar4 = FUN_10109c86c();
      *(undefined4 *)(lVar1 + 0x30) = uVar4;
      FUN_100316e1c(param_1,*(undefined8 *)(lVar1 + 0x18),1,1);
      uVar2 = FUN_1000f2f80();
      *(undefined1 *)(lVar1 + 0x38) = uVar2;
    }
    else {
      FUN_100316e1c(param_1,*(undefined8 *)(lVar1 + 0x18),1,1);
      uVar5 = FUN_1004d2538();
      if ((uVar5 & 1) == 0) goto LAB_1003165cc;
    }
    FUN_100316e1c(param_1,*(undefined8 *)(lVar1 + 0x18),0,0);
    iVar3 = FUN_1004d2538();
    if (iVar3 == 0) {
LAB_10031663c:
      FUN_100316e1c(param_1,*(undefined8 *)(lVar1 + 0x18),0,0);
      uVar4 = FUN_10109c86c();
      *(undefined4 *)(param_1 + lVar6 + 0x3c) = uVar4;
      FUN_100316e1c(param_1,*(undefined8 *)(lVar1 + 0x18),0,1);
      uVar2 = FUN_1000f2f80();
      *(undefined1 *)(param_1 + lVar6 + 0x44) = uVar2;
    }
    else {
      FUN_100316e1c(param_1,*(undefined8 *)(lVar1 + 0x18),0,1);
      uVar5 = FUN_1004d2538();
      if ((uVar5 & 1) == 0) goto LAB_10031663c;
    }
    lVar6 = lVar6 + 0x38;
    if (lVar6 == 0x5b0) {
      return;
    }
  } while( true );
}




void FUN_100316694(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_101e468e8;
  if (DAT_101e468e8 != (void *)0x0) {
    if (*(void **)((long)DAT_101e468e8 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_101e468e8 + 8));
    }
    operator_delete(pvVar1);
    DAT_101e468e8 = (void *)0x0;
  }
  return;
}




undefined8 FUN_1003166d0(void)

{
  return DAT_101e468e8;
}




long FUN_1003166dc(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0x38 + 0x10;
}




void FUN_1003166ec(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  lVar6 = param_1 + (param_2 & 0xffffffff) * 0x38;
  uVar7 = *(undefined8 *)(lVar6 + 0x18);
  uVar2 = *(undefined1 *)(lVar6 + 0x38);
  uVar1 = *(undefined4 *)(lVar6 + 0x3c);
  uVar3 = *(undefined1 *)(lVar6 + 0x44);
  FUN_100316ee8(param_1,uVar7,*(undefined4 *)(lVar6 + 0x30),0,1,0);
  uVar4 = FUN_1000f2ef8(uVar2);
  uVar5 = uVar7;
  FUN_10006d330(auStack_c8,"%s_Primary_Key_Mod");
  FUN_10012c750(auStack_c8,uVar4);
  FUN_100316ee8(param_1,uVar7,uVar1,0,0,0,in_x6,in_x7,uVar5);
  uVar5 = FUN_1000f2ef8(uVar3);
  FUN_10006d330(auStack_c8,"%s_Secondary_Key_Mod");
  FUN_10012c750(auStack_c8,uVar5);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003167f0(uint *param_1,ulong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 extraout_x1;
  undefined8 *puVar6;
  undefined4 local_44;
  
  local_44 = (undefined4)param_2;
  puVar1 = param_1 + 4;
  uVar4 = param_2 & 0xffffffff;
  uVar2 = puVar1[uVar4 * 0xe + 0x177];
  uVar3 = puVar1[uVar4 * 0xe + 0x178];
  uVar5 = puVar1[uVar4 * 0xe + 0x179];
  FUN_1003168c4(param_1,param_2,puVar1[uVar4 * 0xe + 0x174],puVar1[uVar4 * 0xe + 0x175],
                (char)puVar1[uVar4 * 0xe + 0x176]);
  FUN_1003168c4(param_1,extraout_x1,uVar2,uVar3,(char)uVar5);
  FUN_100319228(puVar1,param_2);
  FUN_1003166ec(param_1,param_2);
  if (*param_1 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar6 == (code *)0x0) {
        (*(code *)puVar6[3])(puVar6[2],&local_44);
      }
      else {
        (*(code *)*puVar6)(&local_44);
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_1003168c4(uint *param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0;
  do {
    puVar1 = param_1 + lVar3 * 0xe + 4;
    if ((int)param_3 < 0x69) {
      bVar2 = param_1[lVar3 * 0xe + 0xc] == param_3;
      if (param_5 == 0) {
        if (bVar2) {
          FUN_100316b78(param_1,*puVar1,1,0x69,3,0);
        }
        if (param_1[lVar3 * 0xe + 0xf] != param_3) goto LAB_100316aa4;
LAB_100316a54:
        FUN_100316b78(param_1,*puVar1,0,0x69,3,0);
      }
      else {
        if ((param_1[lVar3 * 0xe + 0xc] == param_3) && ((byte)param_1[lVar3 * 0xe + 0xe] == param_5)
           ) {
          bVar2 = true;
          FUN_100316b78(param_1,*puVar1,1,0x69,3,0);
        }
        else {
          bVar2 = false;
        }
        if (param_1[lVar3 * 0xe + 0xf] == param_3) goto LAB_100316a44;
LAB_100316aa4:
        if (!bVar2) goto LAB_100316aec;
      }
      if (*param_1 != 0) {
        puVar4 = *(undefined8 **)(param_1 + 2);
        do {
          if ((code *)*puVar4 == (code *)0x0) {
            (*(code *)puVar4[3])(puVar4[2],puVar1);
          }
          else {
            (*(code *)*puVar4)(puVar1);
          }
          puVar4 = puVar4 + 4;
        } while (puVar4 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
      }
    }
    else {
      if ((int)param_4 < 3) {
        bVar2 = param_1[lVar3 * 0xe + 0xd] == param_4;
        if (param_5 == 0) {
          if (bVar2) {
            FUN_100316b78(param_1,*puVar1,1,0x69,3,0);
          }
          if (param_1[lVar3 * 0xe + 0x10] == param_4) goto LAB_100316a54;
        }
        else {
          if ((param_1[lVar3 * 0xe + 0xd] == param_4) &&
             ((byte)param_1[lVar3 * 0xe + 0xe] == param_5)) {
            bVar2 = true;
            FUN_100316b78(param_1,*puVar1,1,0x69,3,0);
          }
          else {
            bVar2 = false;
          }
          if (param_1[lVar3 * 0xe + 0x10] == param_4) goto LAB_100316a44;
        }
        goto LAB_100316aa4;
      }
      if (param_5 != 0) {
        bVar2 = (byte)param_1[lVar3 * 0xe + 0xe] == param_5;
        if (bVar2) {
          FUN_100316b78(param_1,*puVar1,1,0x69,3,0);
        }
LAB_100316a44:
        if ((byte)param_1[lVar3 * 0xe + 0x11] == param_5) goto LAB_100316a54;
        goto LAB_100316aa4;
      }
    }
LAB_100316aec:
    lVar3 = lVar3 + 1;
    if (lVar3 == 0x1a) {
      return;
    }
  } while( true );
}




void FUN_100316b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1003168c4(param_1,param_2,param_4,param_5,param_6);
  FUN_100316b78(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_100316b78(uint *param_1,uint param_2,int param_3,uint param_4,uint param_5,
                  undefined1 param_6)

{
  undefined8 *puVar1;
  uint local_24;
  
  if (param_3 == 0) {
    param_1[(ulong)param_2 * 0xe + 0xf] = param_4;
    param_1[(ulong)param_2 * 0xe + 0x10] = param_5;
    *(undefined1 *)(param_1 + (ulong)param_2 * 0xe + 0x11) = param_6;
  }
  else {
    param_1[(ulong)param_2 * 0xe + 0xc] = param_4;
    param_1[(ulong)param_2 * 0xe + 0xd] = param_5;
    *(undefined1 *)(param_1 + (ulong)param_2 * 0xe + 0xe) = param_6;
  }
  local_24 = param_2;
  FUN_1003166ec(param_1);
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],&local_24);
      }
      else {
        (*(code *)*puVar1)(&local_24);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_100316c10(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  undefined1 auStack_68 [24];
  
  bVar3 = (int)param_4 == 2;
  uVar1 = 0;
  if (!bVar3) {
    uVar1 = *(undefined1 *)(param_5 + 0x28);
  }
  uVar2 = 0;
  if (!bVar3) {
    uVar2 = *(undefined1 *)(param_5 + 0x34);
  }
  cVar6 = -bVar3;
  if (*(int *)(param_5 + 0x24) == 3) {
    FUN_100316dc0(auStack_68,param_1,param_3,param_4,*(undefined4 *)(param_5 + 0x20),uVar1,cVar6);
  }
  else {
    FUN_100316d74(auStack_68,param_1,param_3,param_4,*(int *)(param_5 + 0x24),uVar1,cVar6);
  }
  uVar4 = FUN_10109cb44(param_2,auStack_68);
  if (*(int *)(param_5 + 0x30) == 3) {
    FUN_100316dc0(auStack_68,uVar4,param_3,param_4,*(undefined4 *)(param_5 + 0x2c),uVar2,cVar6);
  }
  else {
    FUN_100316d74(auStack_68,uVar4,param_3,param_4,*(int *)(param_5 + 0x30),uVar2,cVar6);
  }
  FUN_10109cb44(param_2,auStack_68);
  if (param_3 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar6 = *param_3;
    if (cVar6 == '\0') {
      uVar5 = 0x811c9dc5;
    }
    else {
      uVar5 = 0x811c9dc5;
      do {
        param_3 = param_3 + 1;
        uVar5 = (uVar5 ^ (int)cVar6) * 0x1000193;
        cVar6 = *param_3;
      } while (cVar6 != '\0');
    }
  }
  FUN_10109cbf8(param_2,uVar5,param_6,param_7);
  return;
}




void FUN_100316d74(undefined8 param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = 0;
  if (param_3 != (char *)0x0) {
    cVar2 = *param_3;
    if (cVar2 == '\0') {
      FUN_10109c8e0(param_1,0x811c9dc5);
      return;
    }
    uVar1 = 0x811c9dc5;
    do {
      param_3 = param_3 + 1;
      uVar1 = (uVar1 ^ (int)cVar2) * 0x1000193;
      cVar2 = *param_3;
    } while (cVar2 != '\0');
  }
  FUN_10109c8e0(param_1,uVar1);
  return;
}




void FUN_100316dc0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = 0;
  if (param_3 != (char *)0x0) {
    cVar2 = *param_3;
    if (cVar2 == '\0') {
      FUN_10109c8bc(param_1,0x811c9dc5);
      return;
    }
    uVar1 = 0x811c9dc5;
    do {
      param_3 = param_3 + 1;
      uVar1 = (uVar1 ^ (int)cVar2) * 0x1000193;
      cVar2 = *param_3;
    } while (cVar2 != '\0');
  }
  FUN_10109c8bc(param_1,uVar1);
  return;
}




void FUN_100316e0c(void)

{
  FUN_100316b78();
  return;
}




undefined8 *** FUN_100316e1c(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  pcVar2 = "%s_Primary_Key_Mod";
  if (param_4 == 0) {
    pcVar2 = "%s_Primary_Key";
  }
  pcVar1 = "%s_Secondary_Key_Mod";
  if (param_4 == 0) {
    pcVar1 = "%s_Secondary_Key";
  }
  if (param_3 == 0) {
    pcVar2 = pcVar1;
  }
  FUN_10006d330(auStack_a8,pcVar2);
  FUN_10012caa0(auStack_a8,auStack_128,0x80,0);
  FUN_10001549c(local_140,auStack_128);
  pppuVar3 = local_140;
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
    pppuVar3 = (undefined8 ***)local_140[0];
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return pppuVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100316ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  if ((int)param_3 == 0x69) {
    uVar3 = FUN_1000f2ef8(param_4);
  }
  else {
    uVar3 = FUN_10109c85c(param_3);
  }
  pcVar2 = "%s_Primary_Key_Mod";
  if (param_6 == 0) {
    pcVar2 = "%s_Primary_Key";
  }
  pcVar1 = "%s_Secondary_Key_Mod";
  if (param_6 == 0) {
    pcVar1 = "%s_Secondary_Key";
  }
  if (param_5 == 0) {
    pcVar2 = pcVar1;
  }
  FUN_10006d330(auStack_b8,pcVar2);
  FUN_10012c750(auStack_b8,uVar3);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100316fb4(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_10109c750(param_2,param_3);
  return;
}




void FUN_100316fc0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  FUN_100317190();
  lVar1 = FUN_10109c73c(0xcc7f156e);
  if (lVar1 == 0) {
    lVar1 = FUN_10109c728(0xcc7f156e);
  }
  FUN_10109c8bc(auStack_48,0xdc6ab1ed,0,0x3d,0,0);
  FUN_10109cb44(lVar1,auStack_48);
  FUN_10109c904(auStack_48,0xdc6ab1ed,0,1);
  FUN_10109cb44(lVar1,auStack_48);
  FUN_10109cbf8(lVar1,0xdc6ab1ed,0,FUN_100317a80);
  lVar1 = FUN_10109c73c(0xd9abc88a);
  if (lVar1 == 0) {
    lVar1 = FUN_10109c728(0xd9abc88a,0);
  }
  FUN_100316c10(param_1,lVar1,"close_shop",0,param_1 + 800,0,FUN_100317abc);
  lVar1 = FUN_10109c73c(0xd0ab9e9c);
  if (lVar1 == 0) {
    lVar1 = FUN_10109c728(0xd0ab9e9c);
  }
  FUN_100316c10(param_1,lVar1,"hudScoreboard",0,param_1 + 0x2b0,0,FUN_100317af8);
  FUN_100316c10(param_1,lVar1,"release_scoreboard",2,param_1 + 0x2b0,0,FUN_100317b34);
  return;
}




void FUN_100317140(undefined8 param_1)

{
  FUN_10109c788(&DAT_101158f00);
  FUN_10109c788(&DAT_101158f04);
  FUN_10109c788(&DAT_101158f08);
  FUN_10109c788(&DAT_101158f0c);
  FUN_100316fc0(param_1);
  return;
}




void FUN_100317190(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [24];
  
  lVar1 = FUN_10109c73c(0x5bb9d395);
  if (lVar1 == 0) {
    lVar1 = FUN_10109c728(0x5bb9d395);
  }
  uVar6 = 0;
  puVar7 = (undefined1 *)(param_1 + 0x44);
  do {
    if (0x17 < (uint)uVar6) goto LAB_1003177fc;
    puVar5 = puVar7 + -0x34;
    switch(uVar6 & 0xffffffff) {
    case 0:
      FUN_100316c10(param_1,lVar1,"activate_ability_A",0,puVar5,0,FUN_100317bc8);
      pcVar2 = "release_cast_ability_A";
      uVar3 = 2;
      pcVar4 = FUN_100317c24;
      break;
    case 1:
      FUN_100316c10(param_1,lVar1,"activate_ability_B",0,puVar5,0,FUN_100317c88);
      pcVar2 = "release_cast_ability_B";
      uVar3 = 2;
      pcVar4 = FUN_100317ce4;
      break;
    case 2:
      FUN_100316c10(param_1,lVar1,"activate_ability_C",0,puVar5,0,FUN_100317d48);
      pcVar2 = "release_cast_ability_C";
      uVar3 = 2;
      pcVar4 = FUN_100317da4;
      break;
    case 3:
      if (*(int *)(puVar7 + -0x10) == 3) {
        FUN_10109c8bc(auStack_78,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x30),puVar7[-0xc],0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x34),puVar7[-0xc],0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -4) == 3) {
        FUN_10109c8bc(auStack_78,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x3c),*puVar7,0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x6ad27ae6,0,*(undefined4 *)(param_1 + 0x40),*puVar7,0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -0x10) == 3) {
        FUN_10109c8bc(auStack_78,0x69d27953,0,*(undefined4 *)(param_1 + 0x68),puVar7[-0xc],0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x69d27953,0,*(undefined4 *)(param_1 + 0x6c),puVar7[-0xc],0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -4) == 3) {
        FUN_10109c8bc(auStack_78,0x69d27953,0,*(undefined4 *)(param_1 + 0x74),*puVar7,0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x69d27953,0,*(undefined4 *)(param_1 + 0x78),*puVar7,0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -0x10) == 3) {
        FUN_10109c8bc(auStack_78,0x68d277c0,0,*(undefined4 *)(param_1 + 0xa0),puVar7[-0xc],0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x68d277c0,0,*(undefined4 *)(param_1 + 0xa4),puVar7[-0xc],0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      if (*(int *)(puVar7 + -4) == 3) {
        FUN_10109c8bc(auStack_78,0x68d277c0,0,*(undefined4 *)(param_1 + 0xac),*puVar7,0);
      }
      else {
        FUN_10109c8e0(auStack_78,0x68d277c0,0,*(undefined4 *)(param_1 + 0xb0),*puVar7,0);
      }
      FUN_10109cb44(lVar1,auStack_78);
      FUN_10109cbf8(lVar1,0x6ad27ae6,0,FUN_100317df0);
      FUN_10109cbf8(lVar1,0x69d27953,0,FUN_100317e3c);
      FUN_10109cbf8(lVar1,0x68d277c0,0,FUN_100317e88);
      goto LAB_1003177fc;
    case 4:
      FUN_100316c10(param_1,lVar1,"activate_ability_shoulder_A",0,puVar5,0,FUN_100317eec);
      pcVar2 = "release_cast_ability_shoulder_A";
      uVar3 = 2;
      pcVar4 = FUN_100317f48;
      break;
    case 5:
      FUN_100316c10(param_1,lVar1,"activate_ability_shoulder_B",0,puVar5,0,FUN_100317fac);
      pcVar2 = "release_cast_ability_shoulder_B";
      uVar3 = 2;
      pcVar4 = FUN_100318008;
      break;
    case 6:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_1",0,puVar5,0,FUN_100318120);
      pcVar2 = "release_cast_ability_item_1";
      uVar3 = 2;
      pcVar4 = FUN_10031817c;
      break;
    case 7:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_2",0,puVar5,0,FUN_1003181e0);
      pcVar2 = "release_cast_ability_item_2";
      uVar3 = 2;
      pcVar4 = FUN_10031823c;
      break;
    case 8:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_3",0,puVar5,0,FUN_1003182a0);
      pcVar2 = "release_cast_ability_item_3";
      uVar3 = 2;
      pcVar4 = FUN_1003182fc;
      break;
    case 9:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_4",0,puVar5,0,FUN_100318360);
      pcVar2 = "release_cast_ability_item_4";
      uVar3 = 2;
      pcVar4 = FUN_1003183bc;
      break;
    case 10:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_5",0,puVar5,0,FUN_100318420);
      pcVar2 = "release_cast_ability_item_5";
      uVar3 = 2;
      pcVar4 = FUN_10031847c;
      break;
    case 0xb:
      FUN_100316c10(param_1,lVar1,"activate_ability_item_6",0,puVar5,0,FUN_1003184e0);
      pcVar2 = "release_cast_ability_item_6";
      uVar3 = 2;
      pcVar4 = FUN_10031853c;
      break;
    case 0xc:
      pcVar2 = "open_scoreboard";
      uVar3 = 0;
      pcVar4 = FUN_100318548;
      break;
    case 0xd:
      pcVar2 = "teleport_home";
      uVar3 = 0;
      pcVar4 = FUN_1003185bc;
      break;
    case 0xe:
      pcVar2 = "open_shop";
      uVar3 = 0;
      pcVar4 = FUN_1003185f8;
      break;
    case 0xf:
      pcVar2 = "quick_buy";
      uVar3 = 0;
      pcVar4 = FUN_100318634;
      break;
    case 0x10:
      FUN_100316c10(param_1,lVar1,"activate_lazy_attack",0,puVar5,0,FUN_100318014);
      pcVar2 = "release_lazy_attack";
      uVar3 = 2;
      pcVar4 = FUN_100318050;
      break;
    case 0x11:
      pcVar2 = "activate_lazy_attack_instant";
      uVar3 = 0;
      pcVar4 = FUN_10031808c;
      break;
    case 0x12:
      pcVar2 = "recenter_camera";
      uVar3 = 0;
      pcVar4 = FUN_100318670;
      break;
    case 0x13:
      pcVar2 = "stop_move";
      uVar3 = 0;
      pcVar4 = FUN_100318584;
      break;
    case 0x14:
      pcVar2 = "toggle_lock_camera";
      uVar3 = 0;
      pcVar4 = FUN_1003186ac;
      break;
    case 0x15:
      pcVar2 = "show_chat_box";
      uVar3 = 0;
      pcVar4 = FUN_1003186e8;
      break;
    case 0x16:
      FUN_100316c10(param_1,lVar1,"start_target_ping",0,puVar5,0,FUN_100318724);
      pcVar2 = "release_target_ping";
      goto LAB_1003177e8;
    case 0x17:
      FUN_100316c10(param_1,lVar1,"start_attention_ping",0,puVar5,0,FUN_10031879c);
      pcVar2 = "release_attention_ping";
LAB_1003177e8:
      uVar3 = 2;
      pcVar4 = FUN_100318760;
    }
    FUN_100316c10(param_1,lVar1,pcVar2,uVar3,puVar5,0,pcVar4);
LAB_1003177fc:
    uVar6 = uVar6 + 1;
    puVar7 = puVar7 + 0x38;
    if (uVar6 == 0x1a) {
      return;
    }
  } while( true );
}




void FUN_100317a80(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x17;
  local_20 = &PTR_FUN_10144d720;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100317abc(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x19;
  local_20 = &PTR_FUN_10144d750;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100317af8(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x1a;
  local_20 = &PTR_FUN_10144d780;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100317b34(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x1a;
  local_20 = &PTR_FUN_10144d798;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100317b70(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005edd4(local_38,0);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100317bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317b70(param_2,param_3);
  return;
}




void FUN_100317bd4(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005edd4(local_38,0);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100317c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317bd4(param_2,param_3);
  return;
}




void FUN_100317c30(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005edd4(local_38,1);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100317c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317c30(param_2,param_3);
  return;
}




void FUN_100317c94(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005edd4(local_38,1);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100317ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317c94(param_2,param_3);
  return;
}




void FUN_100317cf0(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005edd4(local_38,2);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100317d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317cf0(param_2,param_3);
  return;
}




void FUN_100317d54(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005edd4(local_38,2);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100317da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317d54(param_2,param_3);
  return;
}




void FUN_100317db0(void)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_100061db0();
  FUN_10005ef64(auStack_30,0);
  FUN_10005f394(uVar1,auStack_30);
  return;
}




void FUN_100317df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317db0(param_2,param_3);
  return;
}




void FUN_100317dfc(void)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_100061db0();
  FUN_10005ef64(auStack_30,1);
  FUN_10005f394(uVar1,auStack_30);
  return;
}




void FUN_100317e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317dfc(param_2,param_3);
  return;
}




void FUN_100317e48(void)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_100061db0();
  FUN_10005ef64(auStack_30,2);
  FUN_10005f394(uVar1,auStack_30);
  return;
}




void FUN_100317e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317e48(param_2,param_3);
  return;
}




void FUN_100317e94(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005edfc(local_38,0);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100317eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317e94(param_2,param_3);
  return;
}




void FUN_100317ef8(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005edfc(local_38,0);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100317f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317ef8(param_2,param_3);
  return;
}




void FUN_100317f54(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005edfc(local_38,1);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100317fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317f54(param_2,param_3);
  return;
}




void FUN_100317fb8(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005edfc(local_38,1);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100318008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100317fb8(param_2,param_3);
  return;
}




void FUN_100318014(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 2;
  local_20 = &PTR_FUN_10144d648;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100318050(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 3;
  local_20 = &PTR_FUN_10144d660;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_10031808c(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 1;
  local_20 = &PTR_FUN_10144d678;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_1003180c8(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,0);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100318120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1003180c8(param_2,param_3);
  return;
}




void FUN_10031812c(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,0);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_10031817c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10031812c(param_2,param_3);
  return;
}




void FUN_100318188(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,1);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_1003181e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100318188(param_2,param_3);
  return;
}




void FUN_1003181ec(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,1);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_10031823c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1003181ec(param_2,param_3);
  return;
}




void FUN_100318248(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,2);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_1003182a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100318248(param_2,param_3);
  return;
}




void FUN_1003182ac(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,2);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_1003182fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1003182ac(param_2,param_3);
  return;
}




void FUN_100318308(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,3);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100318360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100318308(param_2,param_3);
  return;
}




void FUN_10031836c(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,3);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_1003183bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10031836c(param_2,param_3);
  return;
}




void FUN_1003183c8(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,4);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_100318420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1003183c8(param_2,param_3);
  return;
}




void FUN_10031842c(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,4);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_10031847c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10031842c(param_2,param_3);
  return;
}




void FUN_100318488(void)

{
  undefined8 uVar1;
  undefined **local_38 [2];
  undefined1 local_24;
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,5);
  local_38[0] = &PTR_FUN_10144d690;
  local_24 = 1;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_1003184e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100318488(param_2,param_3);
  return;
}




void FUN_1003184ec(void)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005ee34(local_38,5);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_10031853c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1003184ec(param_2,param_3);
  return;
}




void FUN_100318548(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x1a;
  local_20 = &PTR_FUN_10144d768;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100318584(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0;
  local_20 = &PTR_FUN_10144d630;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_1003185bc(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x10;
  local_20 = &PTR_FUN_10144d6c0;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_1003185f8(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x18;
  local_20 = &PTR_FUN_10144d738;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100318634(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x14;
  local_20 = &PTR_FUN_10144d6d8;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100318670(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x15;
  local_20 = &PTR_FUN_10144d6f0;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_1003186ac(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x16;
  local_20 = &PTR_FUN_10144d708;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_1003186e8(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x1c;
  local_20 = &PTR_FUN_10144d7b0;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100318724(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined8 uStack_18;
  
  uVar1 = FUN_100061db0();
  local_20 = &PTR_FUN_10144d7c8;
  uStack_18 = 0x20000001d;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_100318760(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined4 local_18;
  
  uVar1 = FUN_100061db0();
  local_18 = 0x1d;
  local_20 = &PTR_FUN_10144d7e0;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_10031879c(void)

{
  undefined8 uVar1;
  undefined **local_20;
  undefined8 uStack_18;
  
  uVar1 = FUN_100061db0();
  local_20 = &PTR_FUN_10144d7c8;
  uStack_18 = 0x40000001d;
  FUN_10005f394(uVar1,&local_20);
  return;
}




void FUN_1003187d8(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  do {
    *(undefined4 *)puVar2 = 0x1b;
    puVar2[1] = "";
    puVar2[2] = "";
    puVar2[3] = "";
    puVar2[4] = 0x300000069;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined8 *)((long)puVar2 + 0x2c) = 0x300000069;
    *(undefined1 *)((long)puVar2 + 0x34) = 0;
    puVar2 = puVar2 + 7;
  } while (puVar2 != param_1 + 0xb6);
  lVar3 = 0x5b0;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar3);
    *puVar1 = 0x1b;
    *(char **)(puVar1 + 2) = "";
    *(char **)(puVar1 + 4) = "";
    *(char **)(puVar1 + 6) = "";
    *(undefined8 *)(puVar1 + 8) = 0x300000069;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0x300000069;
    lVar3 = lVar3 + 0x38;
    *(undefined1 *)(puVar1 + 0xd) = 0;
  } while ((undefined8 *)(puVar1 + 0xe) != param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb7] = "KEYBIND_Ability_A";
  param_1[0xb8] = "KEYBIND_ABILITY_A_TITLE";
  param_1[0xb9] = "";
  param_1[0xba] = 0x300000010;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  *(undefined8 *)((long)param_1 + 0x5dc) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x5e4) = 0;
  param_1[1] = param_1[0xb7];
  *param_1 = param_1[0xb6];
  param_1[3] = param_1[0xb9];
  param_1[2] = param_1[0xb8];
  param_1[5] = param_1[0xbb];
  param_1[4] = param_1[0xba];
  *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_1 + 0x5dd);
  *(undefined4 *)(param_1 + 0xbd) = 1;
  param_1[0xbe] = "KEYBIND_Ability_B";
  param_1[0xbf] = "KEYBIND_ABILITY_B_TITLE";
  param_1[0xc0] = "";
  param_1[0xc1] = 0x300000016;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined8 *)((long)param_1 + 0x614) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x61c) = 0;
  *(undefined8 *)((long)param_1 + 0x65) = *(undefined8 *)((long)param_1 + 0x615);
  param_1[0xc] = param_1[0xc2];
  param_1[0xb] = param_1[0xc1];
  param_1[10] = param_1[0xc0];
  param_1[9] = param_1[0xbf];
  param_1[8] = param_1[0xbe];
  param_1[7] = param_1[0xbd];
  *(undefined4 *)(param_1 + 0xc4) = 2;
  param_1[0xc5] = "KEYBIND_Ability_C";
  param_1[0xc6] = "KEYBIND_ABILITY_C_TITLE";
  param_1[199] = "";
  param_1[200] = 0x300000004;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined8 *)((long)param_1 + 0x64c) = 0x300000011;
  *(undefined1 *)((long)param_1 + 0x654) = 0;
  *(undefined8 *)((long)param_1 + 0x9d) = *(undefined8 *)((long)param_1 + 0x64d);
  param_1[0x11] = param_1[199];
  param_1[0x10] = param_1[0xc6];
  param_1[0x13] = param_1[0xc9];
  param_1[0x12] = param_1[200];
  param_1[0xf] = param_1[0xc5];
  param_1[0xe] = param_1[0xc4];
  *(undefined4 *)(param_1 + 0xcb) = 3;
  param_1[0xcc] = "KEYBIND_Upgrade_Ability_Modifier";
  param_1[0xcd] = "KEYBIND_UPGRADE_ABILITY_MODIFIER_TITLE";
  param_1[0xce] = "KEYBIND_UPGRADE_ABILITY_MODIFIER_DESC";
  param_1[0xcf] = 0x300000069;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)((long)param_1 + 0x684) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x68c) = 0;
  *(undefined8 *)((long)param_1 + 0xd5) = *(undefined8 *)((long)param_1 + 0x685);
  param_1[0x1a] = param_1[0xd0];
  param_1[0x19] = param_1[0xcf];
  param_1[0x18] = param_1[0xce];
  param_1[0x17] = param_1[0xcd];
  param_1[0x16] = param_1[0xcc];
  param_1[0x15] = param_1[0xcb];
  *(undefined4 *)(param_1 + 0xd2) = 4;
  param_1[0xd3] = "KEYBIND_Ability_Flask";
  param_1[0xd4] = "KEYBIND_ABILITY_FLASK_TITLE";
  param_1[0xd5] = "";
  param_1[0xd6] = 0x300000003;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined8 *)((long)param_1 + 0x6bc) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x6c4) = 0;
  *(undefined8 *)((long)param_1 + 0x10d) = *(undefined8 *)((long)param_1 + 0x6bd);
  param_1[0x1f] = param_1[0xd5];
  param_1[0x1e] = param_1[0xd4];
  param_1[0x21] = param_1[0xd7];
  param_1[0x20] = param_1[0xd6];
  param_1[0x1d] = param_1[0xd3];
  param_1[0x1c] = param_1[0xd2];
  *(undefined4 *)(param_1 + 0xd9) = 5;
  param_1[0xda] = "KEYBIND_Ability_Cam";
  param_1[0xdb] = "KEYBIND_ABILITY_CAM_TITLE";
  param_1[0xdc] = "";
  param_1[0xdd] = 0x300000005;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined8 *)((long)param_1 + 0x6f4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x6fc) = 0;
  *(undefined8 *)((long)param_1 + 0x145) = *(undefined8 *)((long)param_1 + 0x6f5);
  param_1[0x26] = param_1[0xdc];
  param_1[0x25] = param_1[0xdb];
  param_1[0x28] = param_1[0xde];
  param_1[0x27] = param_1[0xdd];
  param_1[0x24] = param_1[0xda];
  param_1[0x23] = param_1[0xd9];
  *(undefined4 *)(param_1 + 0xe0) = 6;
  param_1[0xe1] = "KEYBIND_Ability_Item_1";
  param_1[0xe2] = "KEYBIND_ABILITY_ITEM_1_TITLE";
  param_1[0xe3] = "";
  param_1[0xe4] = 0x30000001a;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  *(undefined8 *)((long)param_1 + 0x72c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x734) = 0;
  *(undefined8 *)((long)param_1 + 0x17d) = *(undefined8 *)((long)param_1 + 0x72d);
  param_1[0x2d] = param_1[0xe3];
  param_1[0x2c] = param_1[0xe2];
  param_1[0x2f] = param_1[0xe5];
  param_1[0x2e] = param_1[0xe4];
  param_1[0x2b] = param_1[0xe1];
  param_1[0x2a] = param_1[0xe0];
  *(undefined4 *)(param_1 + 0xe7) = 7;
  param_1[0xe8] = "KEYBIND_Ability_Item_2";
  param_1[0xe9] = "KEYBIND_ABILITY_ITEM_2_TITLE";
  param_1[0xea] = "";
  param_1[0xeb] = 0x30000001b;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0x764) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x76c) = 0;
  *(undefined8 *)((long)param_1 + 0x1b5) = *(undefined8 *)((long)param_1 + 0x765);
  param_1[0x34] = param_1[0xea];
  param_1[0x33] = param_1[0xe9];
  param_1[0x36] = param_1[0xec];
  param_1[0x35] = param_1[0xeb];
  param_1[0x32] = param_1[0xe8];
  param_1[0x31] = param_1[0xe7];
  *(undefined4 *)(param_1 + 0xee) = 8;
  param_1[0xef] = "KEYBIND_Ability_Item_3";
  param_1[0xf0] = "KEYBIND_ABILITY_ITEM_3_TITLE";
  param_1[0xf1] = "";
  param_1[0xf2] = 0x30000001c;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  *(undefined8 *)((long)param_1 + 0x79c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x7a4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ed) = *(undefined8 *)((long)param_1 + 0x79d);
  param_1[0x3b] = param_1[0xf1];
  param_1[0x3a] = param_1[0xf0];
  param_1[0x3d] = param_1[0xf3];
  param_1[0x3c] = param_1[0xf2];
  param_1[0x39] = param_1[0xef];
  param_1[0x38] = param_1[0xee];
  *(undefined4 *)(param_1 + 0xf5) = 9;
  param_1[0xf6] = "KEYBIND_Ability_Item_4";
  param_1[0xf7] = "KEYBIND_ABILITY_ITEM_4_TITLE";
  param_1[0xf8] = "";
  param_1[0xf9] = 0x30000001d;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)((long)param_1 + 0x7d4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x7dc) = 0;
  *(undefined8 *)((long)param_1 + 0x225) = *(undefined8 *)((long)param_1 + 0x7d5);
  param_1[0x42] = param_1[0xf8];
  param_1[0x41] = param_1[0xf7];
  param_1[0x44] = param_1[0xfa];
  param_1[0x43] = param_1[0xf9];
  param_1[0x40] = param_1[0xf6];
  param_1[0x3f] = param_1[0xf5];
  *(undefined4 *)(param_1 + 0xfc) = 10;
  param_1[0xfd] = "KEYBIND_Ability_Item_5";
  param_1[0xfe] = "KEYBIND_ABILITY_ITEM_5_TITLE";
  param_1[0xff] = "";
  param_1[0x100] = 0x30000001e;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined8 *)((long)param_1 + 0x80c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x814) = 0;
  *(undefined8 *)((long)param_1 + 0x25d) = *(undefined8 *)((long)param_1 + 0x80d);
  param_1[0x49] = param_1[0xff];
  param_1[0x48] = param_1[0xfe];
  param_1[0x4b] = param_1[0x101];
  param_1[0x4a] = param_1[0x100];
  param_1[0x47] = param_1[0xfd];
  param_1[0x46] = param_1[0xfc];
  *(undefined4 *)(param_1 + 0x103) = 0xb;
  param_1[0x104] = "KEYBIND_Ability_Item_6";
  param_1[0x105] = "KEYBIND_ABILITY_ITEM_6_TITLE";
  param_1[0x106] = "";
  param_1[0x107] = 0x30000001f;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined8 *)((long)param_1 + 0x844) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x84c) = 0;
  *(undefined8 *)((long)param_1 + 0x295) = *(undefined8 *)((long)param_1 + 0x845);
  param_1[0x50] = param_1[0x106];
  param_1[0x4f] = param_1[0x105];
  param_1[0x52] = param_1[0x108];
  param_1[0x51] = param_1[0x107];
  param_1[0x4e] = param_1[0x104];
  param_1[0x4d] = param_1[0x103];
  *(undefined4 *)(param_1 + 0x10a) = 0xc;
  param_1[0x10b] = "KEYBIND_Scoreboard";
  param_1[0x10c] = "KEYBIND_SCOREBOARD_TITLE";
  param_1[0x10d] = "";
  param_1[0x10e] = 0x30000003f;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  *(undefined8 *)((long)param_1 + 0x87c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x884) = 0;
  *(undefined8 *)((long)param_1 + 0x2cd) = *(undefined8 *)((long)param_1 + 0x87d);
  param_1[0x57] = param_1[0x10d];
  param_1[0x56] = param_1[0x10c];
  param_1[0x59] = param_1[0x10f];
  param_1[0x58] = param_1[0x10e];
  param_1[0x55] = param_1[0x10b];
  param_1[0x54] = param_1[0x10a];
  *(undefined4 *)(param_1 + 0x111) = 0xd;
  param_1[0x112] = "KEYBIND_Teleport_Home";
  param_1[0x113] = "KEYBIND_TELEPORT_HOME_TITLE";
  param_1[0x114] = "";
  param_1[0x115] = 0x300000001;
  *(undefined1 *)(param_1 + 0x116) = 0;
  *(undefined8 *)((long)param_1 + 0x8b4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x8bc) = 0;
  *(undefined8 *)((long)param_1 + 0x305) = *(undefined8 *)((long)param_1 + 0x8b5);
  param_1[0x5e] = param_1[0x114];
  param_1[0x5d] = param_1[0x113];
  param_1[0x60] = param_1[0x116];
  param_1[0x5f] = param_1[0x115];
  param_1[0x5c] = param_1[0x112];
  param_1[0x5b] = param_1[0x111];
  *(undefined4 *)(param_1 + 0x118) = 0xe;
  param_1[0x119] = "KEYBIND_Open_Shop";
  param_1[0x11a] = "KEYBIND_OPEN_SHOP_TITLE";
  param_1[0x11b] = "";
  param_1[0x11c] = 0x300000013;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  *(undefined8 *)((long)param_1 + 0x8ec) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x8f4) = 0;
  *(undefined8 *)((long)param_1 + 0x33d) = *(undefined8 *)((long)param_1 + 0x8ed);
  param_1[0x65] = param_1[0x11b];
  param_1[100] = param_1[0x11a];
  param_1[0x67] = param_1[0x11d];
  param_1[0x66] = param_1[0x11c];
  param_1[99] = param_1[0x119];
  param_1[0x62] = param_1[0x118];
  *(undefined4 *)(param_1 + 0x11f) = 0xf;
  param_1[0x120] = "KEYBIND_Quick_Buy";
  param_1[0x121] = "KEYBIND_QUICK_BUY_TITLE";
  param_1[0x122] = "KEYBIND_QUICK_BUY_DESC";
  param_1[0x123] = 0x300000013;
  *(undefined1 *)(param_1 + 0x124) = 1;
  *(undefined8 *)((long)param_1 + 0x924) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x92c) = 0;
  *(undefined8 *)((long)param_1 + 0x375) = *(undefined8 *)((long)param_1 + 0x925);
  param_1[0x6c] = param_1[0x122];
  param_1[0x6b] = param_1[0x121];
  param_1[0x6e] = param_1[0x124];
  param_1[0x6d] = param_1[0x123];
  param_1[0x6a] = param_1[0x120];
  param_1[0x69] = param_1[0x11f];
  *(undefined4 *)(param_1 + 0x126) = 0x10;
  param_1[0x127] = "KEYBIND_Lazy_Attack";
  param_1[0x128] = "KEYBIND_LAZY_ATTACK_TITLE";
  param_1[0x129] = "KEYBIND_LAZY_ATTACK_DESC";
  param_1[0x12a] = 0x300000000;
  *(undefined1 *)(param_1 + 299) = 0;
  *(undefined8 *)((long)param_1 + 0x95c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x964) = 0;
  *(undefined8 *)((long)param_1 + 0x3ad) = *(undefined8 *)((long)param_1 + 0x95d);
  param_1[0x73] = param_1[0x129];
  param_1[0x72] = param_1[0x128];
  param_1[0x75] = param_1[299];
  param_1[0x74] = param_1[0x12a];
  param_1[0x71] = param_1[0x127];
  param_1[0x70] = param_1[0x126];
  *(undefined4 *)(param_1 + 0x12d) = 0x11;
  param_1[0x12e] = "KEYBIND_Lazy_Attack_Instant";
  param_1[0x12f] = "KEYBIND_LAZY_ATTACK_INSTANT_TITLE";
  param_1[0x130] = "KEYBIND_LAZY_ATTACK_INSTANT_DESC";
  param_1[0x131] = 0x300000069;
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(undefined8 *)((long)param_1 + 0x994) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x99c) = 0;
  *(undefined8 *)((long)param_1 + 0x3e5) = *(undefined8 *)((long)param_1 + 0x995);
  param_1[0x7a] = param_1[0x130];
  param_1[0x79] = param_1[0x12f];
  param_1[0x7c] = param_1[0x132];
  param_1[0x7b] = param_1[0x131];
  param_1[0x78] = param_1[0x12e];
  param_1[0x77] = param_1[0x12d];
  *(undefined4 *)(param_1 + 0x134) = 0x12;
  param_1[0x135] = "KEYBIND_Center_Camera";
  param_1[0x136] = "KEYBIND_CENTER_CAMERA_TITLE";
  param_1[0x137] = "";
  param_1[0x138] = 0x30000004b;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined8 *)((long)param_1 + 0x9cc) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x9d4) = 0;
  *(undefined8 *)((long)param_1 + 0x41d) = *(undefined8 *)((long)param_1 + 0x9cd);
  param_1[0x83] = param_1[0x139];
  param_1[0x82] = param_1[0x138];
  param_1[0x7f] = param_1[0x135];
  param_1[0x7e] = param_1[0x134];
  param_1[0x81] = param_1[0x137];
  param_1[0x80] = param_1[0x136];
  *(undefined4 *)(param_1 + 0x13b) = 0x13;
  param_1[0x13c] = "KEYBIND_Stop_Moving";
  param_1[0x13d] = "KEYBIND_LAZY_STOP_TITLE";
  param_1[0x13e] = "";
  param_1[0x13f] = 0x300000012;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined8 *)((long)param_1 + 0xa04) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xa0c) = 0;
  *(undefined8 *)((long)param_1 + 0x455) = *(undefined8 *)((long)param_1 + 0xa05);
  param_1[0x88] = param_1[0x13e];
  param_1[0x87] = param_1[0x13d];
  param_1[0x8a] = param_1[0x140];
  param_1[0x89] = param_1[0x13f];
  param_1[0x86] = param_1[0x13c];
  param_1[0x85] = param_1[0x13b];
  *(undefined4 *)(param_1 + 0x142) = 0x14;
  param_1[0x143] = "KEYBIND_Toggle_Locked_Camera";
  param_1[0x144] = "KEYBIND_TOGGLE_LOCKED_CAMERA_TITLE";
  param_1[0x145] = "";
  param_1[0x146] = 0x300000018;
  *(undefined1 *)(param_1 + 0x147) = 0;
  *(undefined8 *)((long)param_1 + 0xa3c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xa44) = 0;
  *(undefined8 *)((long)param_1 + 0x48d) = *(undefined8 *)((long)param_1 + 0xa3d);
  param_1[0x91] = param_1[0x147];
  param_1[0x90] = param_1[0x146];
  param_1[0x8f] = param_1[0x145];
  param_1[0x8e] = param_1[0x144];
  param_1[0x8d] = param_1[0x143];
  param_1[0x8c] = param_1[0x142];
  *(undefined4 *)(param_1 + 0x149) = 0x15;
  param_1[0x14a] = "KEYBIND_Open_Chat";
  param_1[0x14b] = "KEYBIND_OPEN_CHAT_TITLE";
  param_1[0x14c] = "";
  param_1[0x14d] = 0x30000004a;
  *(undefined1 *)(param_1 + 0x14e) = 0;
  *(undefined8 *)((long)param_1 + 0xa74) = 0x300000063;
  *(undefined1 *)((long)param_1 + 0xa7c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c5) = *(undefined8 *)((long)param_1 + 0xa75);
  param_1[0x96] = param_1[0x14c];
  param_1[0x95] = param_1[0x14b];
  param_1[0x98] = param_1[0x14e];
  param_1[0x97] = param_1[0x14d];
  param_1[0x94] = param_1[0x14a];
  param_1[0x93] = param_1[0x149];
  *(undefined4 *)(param_1 + 0x150) = 0x16;
  param_1[0x151] = "KEYBIND_Target_Ping";
  param_1[0x152] = "KEYBIND_TARGET_PING_TITLE";
  param_1[0x153] = "KEYBIND_TARGET_PING_DESC";
  param_1[0x154] = 0x300000006;
  *(undefined1 *)(param_1 + 0x155) = 0;
  *(undefined8 *)((long)param_1 + 0xaac) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xab4) = 0;
  *(undefined8 *)((long)param_1 + 0x4fd) = *(undefined8 *)((long)param_1 + 0xaad);
  param_1[0x9f] = param_1[0x155];
  param_1[0x9e] = param_1[0x154];
  param_1[0x9d] = param_1[0x153];
  param_1[0x9c] = param_1[0x152];
  param_1[0x9b] = param_1[0x151];
  param_1[0x9a] = param_1[0x150];
  *(undefined4 *)(param_1 + 0x157) = 0x17;
  param_1[0x158] = "KEYBIND_Warning_Ping";
  param_1[0x159] = "KEYBIND_WARNING_PING_TITLE";
  param_1[0x15a] = "KEYBIND_WARNINGPING_DESC";
  param_1[0x15b] = 0x300000015;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0xae4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xaec) = 0;
  *(undefined8 *)((long)param_1 + 0x535) = *(undefined8 *)((long)param_1 + 0xae5);
  param_1[0xa4] = param_1[0x15a];
  param_1[0xa3] = param_1[0x159];
  param_1[0xa6] = param_1[0x15c];
  param_1[0xa5] = param_1[0x15b];
  param_1[0xa2] = param_1[0x158];
  param_1[0xa1] = param_1[0x157];
  *(undefined4 *)(param_1 + 0x15e) = 0x18;
  param_1[0x15f] = "KEYBIND_Target_Ping_Modifier";
  param_1[0x160] = "KEYBIND_TARGET_PING_MOD_TITLE";
  param_1[0x161] = "KEYBIND_TARGET_PING_MOD_DESC";
  param_1[0x162] = 0x300000069;
  *(undefined1 *)(param_1 + 0x163) = 2;
  *(undefined8 *)((long)param_1 + 0xb1c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xb24) = 0;
  *(undefined8 *)((long)param_1 + 0x56d) = *(undefined8 *)((long)param_1 + 0xb1d);
  param_1[0xad] = param_1[0x163];
  param_1[0xac] = param_1[0x162];
  param_1[0xab] = param_1[0x161];
  param_1[0xaa] = param_1[0x160];
  param_1[0xa9] = param_1[0x15f];
  param_1[0xa8] = param_1[0x15e];
  *(undefined4 *)(param_1 + 0x165) = 0x19;
  param_1[0x166] = "KEYBIND_Warning_Ping_Modifier";
  param_1[0x167] = "KEYBIND_WARNING_PING_MOD_TITLE";
  param_1[0x168] = "KEYBIND_WARNING_PING_MOD_DESC";
  param_1[0x169] = 0x300000069;
  *(undefined1 *)(param_1 + 0x16a) = 4;
  *(undefined8 *)((long)param_1 + 0xb54) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xb5c) = 0;
  *(undefined8 *)((long)param_1 + 0x5a5) = *(undefined8 *)((long)param_1 + 0xb55);
  param_1[0xb2] = param_1[0x168];
  param_1[0xb1] = param_1[0x167];
  param_1[0xb4] = param_1[0x16a];
  param_1[0xb3] = param_1[0x169];
  param_1[0xb0] = param_1[0x166];
  param_1[0xaf] = param_1[0x165];
  return;
}




void thunk_FUN_1003187d8(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  do {
    *(undefined4 *)puVar2 = 0x1b;
    puVar2[1] = "";
    puVar2[2] = "";
    puVar2[3] = "";
    puVar2[4] = 0x300000069;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined8 *)((long)puVar2 + 0x2c) = 0x300000069;
    *(undefined1 *)((long)puVar2 + 0x34) = 0;
    puVar2 = puVar2 + 7;
  } while (puVar2 != param_1 + 0xb6);
  lVar3 = 0x5b0;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar3);
    *puVar1 = 0x1b;
    *(char **)(puVar1 + 2) = "";
    *(char **)(puVar1 + 4) = "";
    *(char **)(puVar1 + 6) = "";
    *(undefined8 *)(puVar1 + 8) = 0x300000069;
    *(undefined1 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0x300000069;
    lVar3 = lVar3 + 0x38;
    *(undefined1 *)(puVar1 + 0xd) = 0;
  } while ((undefined8 *)(puVar1 + 0xe) != param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb7] = "KEYBIND_Ability_A";
  param_1[0xb8] = "KEYBIND_ABILITY_A_TITLE";
  param_1[0xb9] = "";
  param_1[0xba] = 0x300000010;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  *(undefined8 *)((long)param_1 + 0x5dc) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x5e4) = 0;
  param_1[1] = param_1[0xb7];
  *param_1 = param_1[0xb6];
  param_1[3] = param_1[0xb9];
  param_1[2] = param_1[0xb8];
  param_1[5] = param_1[0xbb];
  param_1[4] = param_1[0xba];
  *(undefined8 *)((long)param_1 + 0x2d) = *(undefined8 *)((long)param_1 + 0x5dd);
  *(undefined4 *)(param_1 + 0xbd) = 1;
  param_1[0xbe] = "KEYBIND_Ability_B";
  param_1[0xbf] = "KEYBIND_ABILITY_B_TITLE";
  param_1[0xc0] = "";
  param_1[0xc1] = 0x300000016;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined8 *)((long)param_1 + 0x614) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x61c) = 0;
  *(undefined8 *)((long)param_1 + 0x65) = *(undefined8 *)((long)param_1 + 0x615);
  param_1[0xc] = param_1[0xc2];
  param_1[0xb] = param_1[0xc1];
  param_1[10] = param_1[0xc0];
  param_1[9] = param_1[0xbf];
  param_1[8] = param_1[0xbe];
  param_1[7] = param_1[0xbd];
  *(undefined4 *)(param_1 + 0xc4) = 2;
  param_1[0xc5] = "KEYBIND_Ability_C";
  param_1[0xc6] = "KEYBIND_ABILITY_C_TITLE";
  param_1[199] = "";
  param_1[200] = 0x300000004;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined8 *)((long)param_1 + 0x64c) = 0x300000011;
  *(undefined1 *)((long)param_1 + 0x654) = 0;
  *(undefined8 *)((long)param_1 + 0x9d) = *(undefined8 *)((long)param_1 + 0x64d);
  param_1[0x11] = param_1[199];
  param_1[0x10] = param_1[0xc6];
  param_1[0x13] = param_1[0xc9];
  param_1[0x12] = param_1[200];
  param_1[0xf] = param_1[0xc5];
  param_1[0xe] = param_1[0xc4];
  *(undefined4 *)(param_1 + 0xcb) = 3;
  param_1[0xcc] = "KEYBIND_Upgrade_Ability_Modifier";
  param_1[0xcd] = "KEYBIND_UPGRADE_ABILITY_MODIFIER_TITLE";
  param_1[0xce] = "KEYBIND_UPGRADE_ABILITY_MODIFIER_DESC";
  param_1[0xcf] = 0x300000069;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)((long)param_1 + 0x684) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x68c) = 0;
  *(undefined8 *)((long)param_1 + 0xd5) = *(undefined8 *)((long)param_1 + 0x685);
  param_1[0x1a] = param_1[0xd0];
  param_1[0x19] = param_1[0xcf];
  param_1[0x18] = param_1[0xce];
  param_1[0x17] = param_1[0xcd];
  param_1[0x16] = param_1[0xcc];
  param_1[0x15] = param_1[0xcb];
  *(undefined4 *)(param_1 + 0xd2) = 4;
  param_1[0xd3] = "KEYBIND_Ability_Flask";
  param_1[0xd4] = "KEYBIND_ABILITY_FLASK_TITLE";
  param_1[0xd5] = "";
  param_1[0xd6] = 0x300000003;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined8 *)((long)param_1 + 0x6bc) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x6c4) = 0;
  *(undefined8 *)((long)param_1 + 0x10d) = *(undefined8 *)((long)param_1 + 0x6bd);
  param_1[0x1f] = param_1[0xd5];
  param_1[0x1e] = param_1[0xd4];
  param_1[0x21] = param_1[0xd7];
  param_1[0x20] = param_1[0xd6];
  param_1[0x1d] = param_1[0xd3];
  param_1[0x1c] = param_1[0xd2];
  *(undefined4 *)(param_1 + 0xd9) = 5;
  param_1[0xda] = "KEYBIND_Ability_Cam";
  param_1[0xdb] = "KEYBIND_ABILITY_CAM_TITLE";
  param_1[0xdc] = "";
  param_1[0xdd] = 0x300000005;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined8 *)((long)param_1 + 0x6f4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x6fc) = 0;
  *(undefined8 *)((long)param_1 + 0x145) = *(undefined8 *)((long)param_1 + 0x6f5);
  param_1[0x26] = param_1[0xdc];
  param_1[0x25] = param_1[0xdb];
  param_1[0x28] = param_1[0xde];
  param_1[0x27] = param_1[0xdd];
  param_1[0x24] = param_1[0xda];
  param_1[0x23] = param_1[0xd9];
  *(undefined4 *)(param_1 + 0xe0) = 6;
  param_1[0xe1] = "KEYBIND_Ability_Item_1";
  param_1[0xe2] = "KEYBIND_ABILITY_ITEM_1_TITLE";
  param_1[0xe3] = "";
  param_1[0xe4] = 0x30000001a;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  *(undefined8 *)((long)param_1 + 0x72c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x734) = 0;
  *(undefined8 *)((long)param_1 + 0x17d) = *(undefined8 *)((long)param_1 + 0x72d);
  param_1[0x2d] = param_1[0xe3];
  param_1[0x2c] = param_1[0xe2];
  param_1[0x2f] = param_1[0xe5];
  param_1[0x2e] = param_1[0xe4];
  param_1[0x2b] = param_1[0xe1];
  param_1[0x2a] = param_1[0xe0];
  *(undefined4 *)(param_1 + 0xe7) = 7;
  param_1[0xe8] = "KEYBIND_Ability_Item_2";
  param_1[0xe9] = "KEYBIND_ABILITY_ITEM_2_TITLE";
  param_1[0xea] = "";
  param_1[0xeb] = 0x30000001b;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0x764) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x76c) = 0;
  *(undefined8 *)((long)param_1 + 0x1b5) = *(undefined8 *)((long)param_1 + 0x765);
  param_1[0x34] = param_1[0xea];
  param_1[0x33] = param_1[0xe9];
  param_1[0x36] = param_1[0xec];
  param_1[0x35] = param_1[0xeb];
  param_1[0x32] = param_1[0xe8];
  param_1[0x31] = param_1[0xe7];
  *(undefined4 *)(param_1 + 0xee) = 8;
  param_1[0xef] = "KEYBIND_Ability_Item_3";
  param_1[0xf0] = "KEYBIND_ABILITY_ITEM_3_TITLE";
  param_1[0xf1] = "";
  param_1[0xf2] = 0x30000001c;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  *(undefined8 *)((long)param_1 + 0x79c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x7a4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ed) = *(undefined8 *)((long)param_1 + 0x79d);
  param_1[0x3b] = param_1[0xf1];
  param_1[0x3a] = param_1[0xf0];
  param_1[0x3d] = param_1[0xf3];
  param_1[0x3c] = param_1[0xf2];
  param_1[0x39] = param_1[0xef];
  param_1[0x38] = param_1[0xee];
  *(undefined4 *)(param_1 + 0xf5) = 9;
  param_1[0xf6] = "KEYBIND_Ability_Item_4";
  param_1[0xf7] = "KEYBIND_ABILITY_ITEM_4_TITLE";
  param_1[0xf8] = "";
  param_1[0xf9] = 0x30000001d;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)((long)param_1 + 0x7d4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x7dc) = 0;
  *(undefined8 *)((long)param_1 + 0x225) = *(undefined8 *)((long)param_1 + 0x7d5);
  param_1[0x42] = param_1[0xf8];
  param_1[0x41] = param_1[0xf7];
  param_1[0x44] = param_1[0xfa];
  param_1[0x43] = param_1[0xf9];
  param_1[0x40] = param_1[0xf6];
  param_1[0x3f] = param_1[0xf5];
  *(undefined4 *)(param_1 + 0xfc) = 10;
  param_1[0xfd] = "KEYBIND_Ability_Item_5";
  param_1[0xfe] = "KEYBIND_ABILITY_ITEM_5_TITLE";
  param_1[0xff] = "";
  param_1[0x100] = 0x30000001e;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined8 *)((long)param_1 + 0x80c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x814) = 0;
  *(undefined8 *)((long)param_1 + 0x25d) = *(undefined8 *)((long)param_1 + 0x80d);
  param_1[0x49] = param_1[0xff];
  param_1[0x48] = param_1[0xfe];
  param_1[0x4b] = param_1[0x101];
  param_1[0x4a] = param_1[0x100];
  param_1[0x47] = param_1[0xfd];
  param_1[0x46] = param_1[0xfc];
  *(undefined4 *)(param_1 + 0x103) = 0xb;
  param_1[0x104] = "KEYBIND_Ability_Item_6";
  param_1[0x105] = "KEYBIND_ABILITY_ITEM_6_TITLE";
  param_1[0x106] = "";
  param_1[0x107] = 0x30000001f;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined8 *)((long)param_1 + 0x844) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x84c) = 0;
  *(undefined8 *)((long)param_1 + 0x295) = *(undefined8 *)((long)param_1 + 0x845);
  param_1[0x50] = param_1[0x106];
  param_1[0x4f] = param_1[0x105];
  param_1[0x52] = param_1[0x108];
  param_1[0x51] = param_1[0x107];
  param_1[0x4e] = param_1[0x104];
  param_1[0x4d] = param_1[0x103];
  *(undefined4 *)(param_1 + 0x10a) = 0xc;
  param_1[0x10b] = "KEYBIND_Scoreboard";
  param_1[0x10c] = "KEYBIND_SCOREBOARD_TITLE";
  param_1[0x10d] = "";
  param_1[0x10e] = 0x30000003f;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  *(undefined8 *)((long)param_1 + 0x87c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x884) = 0;
  *(undefined8 *)((long)param_1 + 0x2cd) = *(undefined8 *)((long)param_1 + 0x87d);
  param_1[0x57] = param_1[0x10d];
  param_1[0x56] = param_1[0x10c];
  param_1[0x59] = param_1[0x10f];
  param_1[0x58] = param_1[0x10e];
  param_1[0x55] = param_1[0x10b];
  param_1[0x54] = param_1[0x10a];
  *(undefined4 *)(param_1 + 0x111) = 0xd;
  param_1[0x112] = "KEYBIND_Teleport_Home";
  param_1[0x113] = "KEYBIND_TELEPORT_HOME_TITLE";
  param_1[0x114] = "";
  param_1[0x115] = 0x300000001;
  *(undefined1 *)(param_1 + 0x116) = 0;
  *(undefined8 *)((long)param_1 + 0x8b4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x8bc) = 0;
  *(undefined8 *)((long)param_1 + 0x305) = *(undefined8 *)((long)param_1 + 0x8b5);
  param_1[0x5e] = param_1[0x114];
  param_1[0x5d] = param_1[0x113];
  param_1[0x60] = param_1[0x116];
  param_1[0x5f] = param_1[0x115];
  param_1[0x5c] = param_1[0x112];
  param_1[0x5b] = param_1[0x111];
  *(undefined4 *)(param_1 + 0x118) = 0xe;
  param_1[0x119] = "KEYBIND_Open_Shop";
  param_1[0x11a] = "KEYBIND_OPEN_SHOP_TITLE";
  param_1[0x11b] = "";
  param_1[0x11c] = 0x300000013;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  *(undefined8 *)((long)param_1 + 0x8ec) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x8f4) = 0;
  *(undefined8 *)((long)param_1 + 0x33d) = *(undefined8 *)((long)param_1 + 0x8ed);
  param_1[0x65] = param_1[0x11b];
  param_1[100] = param_1[0x11a];
  param_1[0x67] = param_1[0x11d];
  param_1[0x66] = param_1[0x11c];
  param_1[99] = param_1[0x119];
  param_1[0x62] = param_1[0x118];
  *(undefined4 *)(param_1 + 0x11f) = 0xf;
  param_1[0x120] = "KEYBIND_Quick_Buy";
  param_1[0x121] = "KEYBIND_QUICK_BUY_TITLE";
  param_1[0x122] = "KEYBIND_QUICK_BUY_DESC";
  param_1[0x123] = 0x300000013;
  *(undefined1 *)(param_1 + 0x124) = 1;
  *(undefined8 *)((long)param_1 + 0x924) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x92c) = 0;
  *(undefined8 *)((long)param_1 + 0x375) = *(undefined8 *)((long)param_1 + 0x925);
  param_1[0x6c] = param_1[0x122];
  param_1[0x6b] = param_1[0x121];
  param_1[0x6e] = param_1[0x124];
  param_1[0x6d] = param_1[0x123];
  param_1[0x6a] = param_1[0x120];
  param_1[0x69] = param_1[0x11f];
  *(undefined4 *)(param_1 + 0x126) = 0x10;
  param_1[0x127] = "KEYBIND_Lazy_Attack";
  param_1[0x128] = "KEYBIND_LAZY_ATTACK_TITLE";
  param_1[0x129] = "KEYBIND_LAZY_ATTACK_DESC";
  param_1[0x12a] = 0x300000000;
  *(undefined1 *)(param_1 + 299) = 0;
  *(undefined8 *)((long)param_1 + 0x95c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x964) = 0;
  *(undefined8 *)((long)param_1 + 0x3ad) = *(undefined8 *)((long)param_1 + 0x95d);
  param_1[0x73] = param_1[0x129];
  param_1[0x72] = param_1[0x128];
  param_1[0x75] = param_1[299];
  param_1[0x74] = param_1[0x12a];
  param_1[0x71] = param_1[0x127];
  param_1[0x70] = param_1[0x126];
  *(undefined4 *)(param_1 + 0x12d) = 0x11;
  param_1[0x12e] = "KEYBIND_Lazy_Attack_Instant";
  param_1[0x12f] = "KEYBIND_LAZY_ATTACK_INSTANT_TITLE";
  param_1[0x130] = "KEYBIND_LAZY_ATTACK_INSTANT_DESC";
  param_1[0x131] = 0x300000069;
  *(undefined1 *)(param_1 + 0x132) = 0;
  *(undefined8 *)((long)param_1 + 0x994) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x99c) = 0;
  *(undefined8 *)((long)param_1 + 0x3e5) = *(undefined8 *)((long)param_1 + 0x995);
  param_1[0x7a] = param_1[0x130];
  param_1[0x79] = param_1[0x12f];
  param_1[0x7c] = param_1[0x132];
  param_1[0x7b] = param_1[0x131];
  param_1[0x78] = param_1[0x12e];
  param_1[0x77] = param_1[0x12d];
  *(undefined4 *)(param_1 + 0x134) = 0x12;
  param_1[0x135] = "KEYBIND_Center_Camera";
  param_1[0x136] = "KEYBIND_CENTER_CAMERA_TITLE";
  param_1[0x137] = "";
  param_1[0x138] = 0x30000004b;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined8 *)((long)param_1 + 0x9cc) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0x9d4) = 0;
  *(undefined8 *)((long)param_1 + 0x41d) = *(undefined8 *)((long)param_1 + 0x9cd);
  param_1[0x83] = param_1[0x139];
  param_1[0x82] = param_1[0x138];
  param_1[0x7f] = param_1[0x135];
  param_1[0x7e] = param_1[0x134];
  param_1[0x81] = param_1[0x137];
  param_1[0x80] = param_1[0x136];
  *(undefined4 *)(param_1 + 0x13b) = 0x13;
  param_1[0x13c] = "KEYBIND_Stop_Moving";
  param_1[0x13d] = "KEYBIND_LAZY_STOP_TITLE";
  param_1[0x13e] = "";
  param_1[0x13f] = 0x300000012;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined8 *)((long)param_1 + 0xa04) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xa0c) = 0;
  *(undefined8 *)((long)param_1 + 0x455) = *(undefined8 *)((long)param_1 + 0xa05);
  param_1[0x88] = param_1[0x13e];
  param_1[0x87] = param_1[0x13d];
  param_1[0x8a] = param_1[0x140];
  param_1[0x89] = param_1[0x13f];
  param_1[0x86] = param_1[0x13c];
  param_1[0x85] = param_1[0x13b];
  *(undefined4 *)(param_1 + 0x142) = 0x14;
  param_1[0x143] = "KEYBIND_Toggle_Locked_Camera";
  param_1[0x144] = "KEYBIND_TOGGLE_LOCKED_CAMERA_TITLE";
  param_1[0x145] = "";
  param_1[0x146] = 0x300000018;
  *(undefined1 *)(param_1 + 0x147) = 0;
  *(undefined8 *)((long)param_1 + 0xa3c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xa44) = 0;
  *(undefined8 *)((long)param_1 + 0x48d) = *(undefined8 *)((long)param_1 + 0xa3d);
  param_1[0x91] = param_1[0x147];
  param_1[0x90] = param_1[0x146];
  param_1[0x8f] = param_1[0x145];
  param_1[0x8e] = param_1[0x144];
  param_1[0x8d] = param_1[0x143];
  param_1[0x8c] = param_1[0x142];
  *(undefined4 *)(param_1 + 0x149) = 0x15;
  param_1[0x14a] = "KEYBIND_Open_Chat";
  param_1[0x14b] = "KEYBIND_OPEN_CHAT_TITLE";
  param_1[0x14c] = "";
  param_1[0x14d] = 0x30000004a;
  *(undefined1 *)(param_1 + 0x14e) = 0;
  *(undefined8 *)((long)param_1 + 0xa74) = 0x300000063;
  *(undefined1 *)((long)param_1 + 0xa7c) = 0;
  *(undefined8 *)((long)param_1 + 0x4c5) = *(undefined8 *)((long)param_1 + 0xa75);
  param_1[0x96] = param_1[0x14c];
  param_1[0x95] = param_1[0x14b];
  param_1[0x98] = param_1[0x14e];
  param_1[0x97] = param_1[0x14d];
  param_1[0x94] = param_1[0x14a];
  param_1[0x93] = param_1[0x149];
  *(undefined4 *)(param_1 + 0x150) = 0x16;
  param_1[0x151] = "KEYBIND_Target_Ping";
  param_1[0x152] = "KEYBIND_TARGET_PING_TITLE";
  param_1[0x153] = "KEYBIND_TARGET_PING_DESC";
  param_1[0x154] = 0x300000006;
  *(undefined1 *)(param_1 + 0x155) = 0;
  *(undefined8 *)((long)param_1 + 0xaac) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xab4) = 0;
  *(undefined8 *)((long)param_1 + 0x4fd) = *(undefined8 *)((long)param_1 + 0xaad);
  param_1[0x9f] = param_1[0x155];
  param_1[0x9e] = param_1[0x154];
  param_1[0x9d] = param_1[0x153];
  param_1[0x9c] = param_1[0x152];
  param_1[0x9b] = param_1[0x151];
  param_1[0x9a] = param_1[0x150];
  *(undefined4 *)(param_1 + 0x157) = 0x17;
  param_1[0x158] = "KEYBIND_Warning_Ping";
  param_1[0x159] = "KEYBIND_WARNING_PING_TITLE";
  param_1[0x15a] = "KEYBIND_WARNINGPING_DESC";
  param_1[0x15b] = 0x300000015;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0xae4) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xaec) = 0;
  *(undefined8 *)((long)param_1 + 0x535) = *(undefined8 *)((long)param_1 + 0xae5);
  param_1[0xa4] = param_1[0x15a];
  param_1[0xa3] = param_1[0x159];
  param_1[0xa6] = param_1[0x15c];
  param_1[0xa5] = param_1[0x15b];
  param_1[0xa2] = param_1[0x158];
  param_1[0xa1] = param_1[0x157];
  *(undefined4 *)(param_1 + 0x15e) = 0x18;
  param_1[0x15f] = "KEYBIND_Target_Ping_Modifier";
  param_1[0x160] = "KEYBIND_TARGET_PING_MOD_TITLE";
  param_1[0x161] = "KEYBIND_TARGET_PING_MOD_DESC";
  param_1[0x162] = 0x300000069;
  *(undefined1 *)(param_1 + 0x163) = 2;
  *(undefined8 *)((long)param_1 + 0xb1c) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xb24) = 0;
  *(undefined8 *)((long)param_1 + 0x56d) = *(undefined8 *)((long)param_1 + 0xb1d);
  param_1[0xad] = param_1[0x163];
  param_1[0xac] = param_1[0x162];
  param_1[0xab] = param_1[0x161];
  param_1[0xaa] = param_1[0x160];
  param_1[0xa9] = param_1[0x15f];
  param_1[0xa8] = param_1[0x15e];
  *(undefined4 *)(param_1 + 0x165) = 0x19;
  param_1[0x166] = "KEYBIND_Warning_Ping_Modifier";
  param_1[0x167] = "KEYBIND_WARNING_PING_MOD_TITLE";
  param_1[0x168] = "KEYBIND_WARNING_PING_MOD_DESC";
  param_1[0x169] = 0x300000069;
  *(undefined1 *)(param_1 + 0x16a) = 4;
  *(undefined8 *)((long)param_1 + 0xb54) = 0x300000069;
  *(undefined1 *)((long)param_1 + 0xb5c) = 0;
  *(undefined8 *)((long)param_1 + 0x5a5) = *(undefined8 *)((long)param_1 + 0xb55);
  param_1[0xb2] = param_1[0x168];
  param_1[0xb1] = param_1[0x167];
  param_1[0xb4] = param_1[0x16a];
  param_1[0xb3] = param_1[0x169];
  param_1[0xb0] = param_1[0x166];
  param_1[0xaf] = param_1[0x165];
  return;
}




void FUN_100319228(long param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 0x38);
  puVar1[1] = puVar1[0xb7];
  *puVar1 = puVar1[0xb6];
  puVar1[3] = puVar1[0xb9];
  puVar1[2] = puVar1[0xb8];
  puVar1[5] = puVar1[0xbb];
  puVar1[4] = puVar1[0xba];
  *(undefined8 *)((long)puVar1 + 0x2d) = *(undefined8 *)((long)puVar1 + 0x5dd);
  return;
}




void FUN_100319254(void)

{
  void *pvVar1;
  undefined1 auStack_218 [496];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  _memcpy(auStack_218,&PTR_s_vainglory___video_welcome_101490c70,0x1f0);
  pvVar1 = operator_new(0x20);
  DAT_101d23870 = FUN_100319604(pvVar1,auStack_218);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003192cc(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_101d23870;
  if (DAT_101d23870 != (void *)0x0) {
    if (*(void **)((long)DAT_101d23870 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_101d23870 + 0x18));
      *(undefined8 *)((long)pvVar1 + 0x10) = 0;
      *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    }
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_101d23870 = (void *)0x0;
  return;
}




void FUN_100319318(byte ******param_1,long *param_2,int param_3)

{
  byte ******ppppppbVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 ******ppppppuVar6;
  int iVar7;
  byte ******ppppppbVar8;
  void *pvVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *****local_98;
  ulong local_90;
  byte local_81;
  byte *****local_80;
  size_t sStack_78;
  byte local_69;
  byte *****local_68;
  
  local_80 = (byte *****)param_1;
  if (param_3 == 0) {
    local_80 = (byte *****)"";
  }
  local_68 = (byte *****)param_1;
  ppppppbVar8 = (byte ******)FUN_100319afc(DAT_101d23870,&local_68);
  ppppppbVar1 = &local_80;
  if (ppppppbVar8 != (byte ******)0x0) {
    ppppppbVar1 = ppppppbVar8;
  }
  if (*ppppppbVar1 != (byte *****)0x0) {
    std::string::assign((char *)param_2);
    iVar7 = FUN_100126d70();
    if (iVar7 - 1U < 0x10) {
      pcVar15 = (&PTR_s__de_101490e60)[(int)(iVar7 - 1U)];
    }
    else {
      pcVar15 = "";
    }
    FUN_10001549c(&local_80,"[LOC]");
    FUN_10001549c(&local_98,pcVar15);
    uVar14 = sStack_78;
    uVar16 = (uint)(char)local_69;
    sVar3 = sStack_78;
    ppppppbVar1 = (byte ******)local_80;
    if (-1 < (int)uVar16) {
      sVar3 = (ulong)local_69;
      ppppppbVar1 = &local_80;
    }
    bVar5 = *(byte *)((long)param_2 + 0x17);
    plVar2 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar2 = param_2;
    }
    if (sVar3 == 0) {
      uVar13 = 0;
LAB_100319448:
      uVar17 = (uint)local_81;
      do {
        if (-1 < (char)uVar16) {
          uVar14 = (ulong)(uVar16 & 0xff);
        }
        ppppppuVar6 = (undefined8 ******)local_98;
        if (-1 < (char)uVar17) {
          ppppppuVar6 = &local_98;
        }
        std::string::replace((ulong)param_2,uVar13,(char *)(uVar14 & 0xffffffff),(ulong)ppppppuVar6)
        ;
        uVar14 = sStack_78;
        uVar17 = (uint)(char)local_81;
        uVar4 = local_90;
        if (-1 < (int)uVar17) {
          uVar4 = (ulong)local_81;
        }
        uVar13 = uVar13 + (uVar4 & 0xffffffff);
        uVar16 = (uint)(char)local_69;
        sVar3 = sStack_78;
        ppppppbVar1 = (byte ******)local_80;
        if (-1 < (int)uVar16) {
          sVar3 = (ulong)local_69;
          ppppppbVar1 = &local_80;
        }
        uVar4 = param_2[1];
        plVar2 = (long *)*param_2;
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
          plVar2 = param_2;
        }
        if (uVar4 < uVar13) break;
        if (sVar3 != 0) {
          pvVar9 = (void *)((long)plVar2 + uVar13);
          pvVar11 = (void *)((long)plVar2 + uVar4);
          lVar12 = (long)pvVar11 - (long)pvVar9;
          if (lVar12 < (long)sVar3) break;
          bVar5 = *(byte *)ppppppbVar1;
          while( true ) {
            if ((0xfffffffffffffffe < lVar12 - sVar3) ||
               (pvVar9 = _memchr(pvVar9,(uint)bVar5,(lVar12 - sVar3) + 1), pvVar9 == (void *)0x0))
            goto LAB_100319418;
            iVar7 = _memcmp(pvVar9,ppppppbVar1,sVar3);
            if (iVar7 == 0) break;
            pvVar9 = (void *)((long)pvVar9 + 1);
            lVar12 = (long)pvVar11 - (long)pvVar9;
            if (lVar12 < (long)sVar3) goto LAB_100319418;
          }
          if (pvVar9 == pvVar11) break;
          uVar13 = (long)pvVar9 - (long)plVar2;
        }
      } while (uVar13 != 0xffffffffffffffff);
    }
    else {
      uVar13 = param_2[1];
      if (-1 < (char)bVar5) {
        uVar13 = (ulong)bVar5;
      }
      if ((long)sVar3 <= (long)uVar13) {
        pvVar9 = (void *)((long)plVar2 + uVar13);
        bVar5 = *(byte *)ppppppbVar1;
        plVar10 = plVar2;
        do {
          if ((0xfffffffffffffffe < uVar13 - sVar3) ||
             (pvVar11 = _memchr(plVar10,(uint)bVar5,(uVar13 - sVar3) + 1), pvVar11 == (void *)0x0))
          break;
          iVar7 = _memcmp(pvVar11,ppppppbVar1,sVar3);
          if (iVar7 == 0) {
            if ((pvVar11 != pvVar9) &&
               (uVar13 = (long)pvVar11 - (long)plVar2, uVar13 != 0xffffffffffffffff))
            goto LAB_100319448;
            break;
          }
          plVar10 = (long *)((long)pvVar11 + 1);
          uVar13 = (long)pvVar9 - (long)plVar10;
        } while ((long)sVar3 <= (long)uVar13);
      }
    }
LAB_100319418:
    if ((char)local_81 < '\0') {
      operator_delete(local_98);
      if (-1 < (char)local_69) {
        return;
      }
    }
    else if ((uVar16 >> 7 & 1) == 0) {
      return;
    }
    operator_delete(local_80);
  }
  return;
}




void FUN_1003195f0(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  FUN_100319318(plVar1);
  return;
}




undefined8 * FUN_100319604(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint local_54;
  
  puVar2 = param_1 + 2;
  param_1[3] = 0;
  *puVar2 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_100026bb4(param_1,0x1f);
  FUN_1003196fc(puVar2,0x1f);
  lVar4 = 0;
  lVar5 = 0;
  uVar6 = 0;
  do {
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    uVar1 = FUN_1004d2524(uVar3);
    local_54 = FUN_100015208(uVar3,uVar1,0x12345678);
    if (local_54 < uVar6) {
      if (0x1e < (uint)lVar5) {
        return param_1;
      }
      do {
        FUN_1003197f8(param_1,param_2 + lVar4,param_2 + lVar4 + 8);
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x1f0);
      return param_1;
    }
    FUN_1000228fc(param_1,&local_54);
    FUN_100319778(puVar2,param_2 + lVar4 + 8);
    lVar5 = lVar5 + 1;
    lVar4 = lVar4 + 0x10;
    uVar6 = local_54;
  } while (lVar5 != 0x1f);
  return param_1;
}




void FUN_1003196fc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100319778(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1003196fc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1003197f8(uint *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint local_34;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  local_34 = FUN_100015208(uVar7,uVar3,0x12345678);
  lVar4 = *(long *)(param_1 + 2);
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)uVar2 * (ulong)local_34 >> 0x20;
    if (0 < (int)((ulong)uVar2 * (ulong)local_34 >> 0x20)) {
      do {
        if (*(uint *)(lVar4 + uVar8 * 4) <= local_34) goto LAB_100319870;
        iVar5 = (int)uVar8;
        uVar6 = iVar5 - 1;
        uVar8 = (ulong)uVar6;
      } while (uVar6 != 0 && 0 < iVar5);
      uVar8 = 0;
    }
LAB_100319870:
    uVar6 = (uint)uVar8;
    if ((int)(uint)uVar8 < (int)uVar2) {
      do {
        uVar6 = (uint)uVar8;
        if (local_34 <= *(uint *)(lVar4 + uVar8 * 4)) break;
        uVar1 = (uint)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        uVar6 = uVar2;
      } while (uVar2 != uVar1);
    }
  }
  FUN_10011a5f4(param_1,lVar4 + (long)(int)uVar6 * 4,&local_34,&stack0xffffffffffffffd0);
  FUN_1003198e0(param_1 + 4,*(long *)(param_1 + 6) + (long)(int)uVar6 * 8,param_3,param_3 + 8);
  return;
}




undefined8 *
FUN_1003198e0(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_3 != param_4) {
    uVar12 = (long)param_4 - (long)param_3;
    puVar9 = *(undefined8 **)(param_1 + 2);
    uVar10 = (long)param_2 - (long)puVar9;
    uVar1 = *param_1;
    uVar2 = (ulong)uVar1;
    uVar3 = param_1[1];
    uVar6 = (uint)(uVar12 >> 3);
    if (uVar3 - uVar1 < uVar6) {
      uVar1 = uVar1 + uVar6;
      uVar6 = 0;
      if (uVar3 != 0xffffffff) {
        uVar6 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
      }
      if (uVar3 < 0x20) {
        uVar6 = uVar3 << 1;
      }
      uVar3 = uVar1;
      if (uVar1 <= uVar6) {
        uVar3 = uVar6;
      }
      puVar5 = operator_new__((ulong)uVar3 << 3);
      puVar4 = puVar5;
      for (puVar7 = puVar9; puVar7 != param_2; puVar7 = puVar7 + 1) {
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
      }
      uVar11 = uVar10 >> 3 & 0xffffffff;
      _memcpy(puVar5 + (uVar10 >> 3 & 0xffffffff),param_3,uVar12 & 0xfffffffffffffff8);
      uVar2 = (long)puVar9 + (uVar2 * 8 - (long)param_2);
      if (uVar2 != 0) {
        _memcpy((void *)((long)puVar5 + (uVar12 & 0x7fffffff8) + uVar11 * 8),param_2,
                uVar2 & 0xfffffffffffffff8);
      }
      if (puVar9 != (undefined8 *)0x0) {
        operator_delete__(puVar9);
      }
      *(undefined8 **)(param_1 + 2) = puVar5;
      *param_1 = uVar1;
      param_1[1] = uVar3;
    }
    else {
      puVar5 = puVar9 + uVar2;
      uVar11 = (ulong)((long)puVar5 - (long)param_2) >> 3;
      if (uVar6 < (uint)uVar11) {
        uVar12 = uVar12 >> 3 & 0xffffffff;
        if (uVar12 != 0) {
          lVar8 = 0;
          do {
            *(undefined8 *)((long)puVar5 + lVar8) =
                 *(undefined8 *)((long)puVar5 + lVar8 + uVar12 * -8);
            lVar8 = lVar8 + 8;
          } while (lVar8 != uVar12 * 8);
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        puVar9 = puVar9 + (uVar2 - uVar12);
        lVar8 = (long)puVar9 - (long)param_2;
        if (lVar8 != 0) {
          do {
            puVar9 = puVar9 + -1;
            *(undefined8 *)((long)param_2 + lVar8 + uVar12 * 8 + -8) = *puVar9;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
        do {
          puVar9 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar9;
        } while (puVar9 != param_4);
      }
      else {
        if (puVar5 != param_2) {
          puVar9 = param_2;
          do {
            puVar9[uVar12 >> 3 & 0xffffffff] = *puVar9;
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar5);
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        uVar12 = (ulong)((long)puVar5 - (long)param_2) >> 3 & 0xffffffff;
        if (param_3 + (uVar11 & 0xffffffff) != param_4) {
          puVar5 = param_3 + (uVar11 & 0xffffffff);
          puVar9 = puVar9 + uVar2;
          do {
            puVar7 = puVar5 + 1;
            *puVar9 = *puVar5;
            puVar5 = puVar7;
            puVar9 = puVar9 + 1;
          } while (puVar7 != param_4);
        }
        if (uVar12 != 0) {
          lVar8 = uVar12 << 3;
          do {
            *param_2 = *param_3;
            lVar8 = lVar8 + -8;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      *param_1 = uVar1 + uVar6;
      puVar5 = *(undefined8 **)(param_1 + 2);
      uVar11 = uVar10 >> 3 & 0xffffffff;
    }
    param_2 = puVar5 + uVar11;
  }
  return param_2;
}




long FUN_100319afc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar6 = (ulong)uVar1 * (ulong)uVar4 >> 0x20;
    if (0 < (int)((ulong)uVar1 * (ulong)uVar4 >> 0x20)) {
      do {
        if (*(uint *)(*(long *)(param_1 + 2) + uVar6 * 4) <= uVar4) goto LAB_100319b64;
        iVar5 = (int)uVar6;
        uVar2 = iVar5 - 1;
        uVar6 = (ulong)uVar2;
      } while (uVar2 != 0 && 0 < iVar5);
      uVar6 = 0;
    }
LAB_100319b64:
    if ((int)uVar6 < (int)uVar1) {
      do {
        uVar2 = *(uint *)(*(long *)(param_1 + 2) + uVar6 * 4);
        if (uVar4 <= uVar2) {
          if (uVar2 != uVar4) {
            return 0;
          }
          return *(long *)(param_1 + 6) + uVar6 * 8;
        }
        uVar2 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar2;
      } while (uVar1 != uVar2);
    }
  }
  return 0;
}




undefined8 * FUN_100319bb0(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[8] = 0xa0000000a;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  FUN_1004e313c(param_1 + 0xf);
  FUN_1004e313c(param_1 + 0x11);
  FUN_1004e313c(param_1 + 0x13);
  FUN_1004e313c(param_1 + 0x15);
  FUN_1004e313c(param_1 + 0x17);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xd7) = 0;
  return param_1;
}




undefined8 * thunk_FUN_100319bb0(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[8] = 0xa0000000a;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  FUN_1004e313c(param_1 + 0xf);
  FUN_1004e313c(param_1 + 0x11);
  FUN_1004e313c(param_1 + 0x13);
  FUN_1004e313c(param_1 + 0x15);
  FUN_1004e313c(param_1 + 0x17);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xd7) = 0;
  return param_1;
}




void FUN_100319c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150(param_3,0);
  thunk_FUN_1004e439c(param_1,uVar1);
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1004e3120(auStack_40,"[PROGRESSSTATE]");
  FUN_1004e3d50(param_1,0,auStack_40,auStack_30);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1004e3120(auStack_40,"[PROGRESSMAX]");
  FUN_1004e3d50(param_1,0,auStack_40,auStack_30);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




ulong FUN_100319d14(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(int *)(param_1 + 200);
  if (-1 < *(int *)(param_1 + 200)) {
    lVar1 = FUN_1004f1a74(0);
    uVar2 = uVar2 - lVar1 & ((long)(uVar2 - lVar1) >> 0x3f ^ 0xffffffffffffffffU);
  }
  return uVar2;
}




void FUN_100319d48(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_100319d70(param_1 + 0x10,&local_18);
  return;
}




long FUN_100319d70(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar5 + uVar6 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      return *(long *)(param_1 + 8) + (ulong)uVar1 * 4;
    }
  }
  return 0;
}




undefined8 FUN_100319e28(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xda) == '\0') {
    uVar1 = FUN_10015d3ec();
    uVar1 = FUN_100166f28(uVar1,param_1 + 0x48);
    *(char *)(param_1 + 0xda) = (char)uVar1;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_100319e64(void)

{
  void *pvVar1;
  char *local_80;
  undefined8 uStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_58 = 3;
  local_60 = "diamond";
  uStack_48 = 4;
  pcStack_50 = "vain";
  uStack_38 = 5;
  local_40 = "spoils";
  uStack_28 = 6;
  pcStack_30 = "partner_incentive";
  uStack_78 = 1;
  local_80 = "battered";
  uStack_68 = 2;
  pcStack_70 = "opulent";
  pvVar1 = operator_new(0x20);
  DAT_101d23878 = FUN_10031a3b8(pvVar1,&local_80);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100319ee0(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_101d23878;
  if (DAT_101d23878 != (void *)0x0) {
    if (*(void **)((long)DAT_101d23878 + 0x18) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_101d23878 + 0x18));
      *(undefined8 *)((long)pvVar1 + 0x10) = 0;
      *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    }
    if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_101d23878 = (void *)0x0;
  return;
}




long FUN_100319f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  
  lVar1 = FUN_10001549c();
  FUN_10001549c(lVar1 + 0x18,param_3);
  *(undefined4 *)(param_1 + 0x30) = param_4;
  FUN_10001549c(param_1 + 0x38,param_5);
  FUN_10001549c(param_1 + 0x50,param_6);
  *(undefined4 *)(param_1 + 0x68) = param_7;
  return param_1;
}




long FUN_100319fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_10001549c();
  FUN_10001549c(lVar1 + 0x18,param_3);
  FUN_10003330c(param_1 + 0x30,param_4);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return param_1;
}




long thunk_FUN_100319fa0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_10001549c();
  FUN_10001549c(lVar1 + 0x18,param_3);
  FUN_10003330c(param_1 + 0x30,param_4);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return param_1;
}




undefined8 * FUN_100319ff4(undefined8 *param_1)

{
  FUN_10031a090(param_1 + 9,1);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




undefined8 * thunk_FUN_100319ff4(undefined8 *param_1)

{
  FUN_10031a090(param_1 + 9,1);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




void FUN_10031a054(long param_1)

{
  std::string::assign((char *)(param_1 + 0x18));
  return;
}




void FUN_10031a05c(long param_1,undefined8 param_2)

{
  FUN_10031a090(param_1 + 0x48,0);
  FUN_10031a13c(param_1 + 0x48,param_2);
  return;
}




void FUN_10031a284(long param_1)

{
  void *local_90 [2];
  char local_79;
  void *local_78;
  char local_61;
  void *local_58;
  char local_41;
  void *local_40;
  char local_29;
  
  FUN_100319f2c(local_90);
  FUN_10031a2fc(param_1 + 0x48,local_90);
  if (local_29 < '\0') {
    operator_delete(local_40);
  }
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  return;
}




void FUN_10031a2fc(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10031a13c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x70;
  FUN_10003330c(lVar4 + -0x70,param_2);
  FUN_10003330c(lVar4 + -0x58,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -0x40) = *(undefined4 *)(param_2 + 0x30);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x38);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x50);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x68);
  return;
}




undefined8 * FUN_10031a3b8(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint local_54;
  
  puVar2 = param_1 + 2;
  param_1[3] = 0;
  *puVar2 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_100026bb4(param_1,6);
  FUN_10031a4b0(puVar2,6);
  lVar4 = 0;
  lVar5 = 0;
  uVar6 = 0;
  do {
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    uVar1 = FUN_1004d2524(uVar3);
    local_54 = FUN_100015208(uVar3,uVar1,0x12345678);
    if (local_54 < uVar6) {
      if (5 < (uint)lVar5) {
        return param_1;
      }
      do {
        FUN_10031a5ac(param_1,param_2 + lVar4,param_2 + lVar4 + 8);
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x60);
      return param_1;
    }
    FUN_1000228fc(param_1,&local_54);
    FUN_10031a52c(puVar2,param_2 + lVar4 + 8);
    lVar5 = lVar5 + 1;
    lVar4 = lVar4 + 0x10;
    uVar6 = local_54;
  } while (lVar5 != 6);
  return param_1;
}




void FUN_10031a4b0(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10031a52c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10031a4b0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_10031a5ac(uint *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint local_34;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  local_34 = FUN_100015208(uVar7,uVar3,0x12345678);
  lVar4 = *(long *)(param_1 + 2);
  uVar2 = *param_1;
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)uVar2 * (ulong)local_34 >> 0x20;
    if (0 < (int)((ulong)uVar2 * (ulong)local_34 >> 0x20)) {
      do {
        if (*(uint *)(lVar4 + uVar8 * 4) <= local_34) goto LAB_10031a624;
        iVar5 = (int)uVar8;
        uVar6 = iVar5 - 1;
        uVar8 = (ulong)uVar6;
      } while (uVar6 != 0 && 0 < iVar5);
      uVar8 = 0;
    }
LAB_10031a624:
    uVar6 = (uint)uVar8;
    if ((int)(uint)uVar8 < (int)uVar2) {
      do {
        uVar6 = (uint)uVar8;
        if (local_34 <= *(uint *)(lVar4 + uVar8 * 4)) break;
        uVar1 = (uint)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        uVar6 = uVar2;
      } while (uVar2 != uVar1);
    }
  }
  FUN_10011a5f4(param_1,lVar4 + (long)(int)uVar6 * 4,&local_34,&stack0xffffffffffffffd0);
  FUN_10031a694(param_1 + 4,*(long *)(param_1 + 6) + (long)(int)uVar6 * 4,param_3,param_3 + 4);
  return;
}




undefined4 *
FUN_10031a694(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_3 != param_4) {
    uVar12 = (long)param_4 - (long)param_3;
    puVar9 = *(undefined4 **)(param_1 + 2);
    uVar10 = (long)param_2 - (long)puVar9;
    uVar1 = *param_1;
    uVar6 = (ulong)uVar1;
    uVar2 = param_1[1];
    uVar4 = (uint)(uVar12 >> 2);
    if (uVar2 - uVar1 < uVar4) {
      uVar1 = uVar1 + uVar4;
      uVar4 = 0;
      if (uVar2 != 0xffffffff) {
        uVar4 = uVar2 + (~uVar2 | 0xfffffff0) + 0x11;
      }
      if (uVar2 < 0x20) {
        uVar4 = uVar2 << 1;
      }
      uVar2 = uVar1;
      if (uVar1 <= uVar4) {
        uVar2 = uVar4;
      }
      puVar3 = operator_new__((ulong)uVar2 << 2);
      puVar7 = puVar3;
      for (puVar5 = puVar9; puVar5 != param_2; puVar5 = puVar5 + 1) {
        *puVar7 = *puVar5;
        puVar7 = puVar7 + 1;
      }
      uVar11 = uVar10 >> 2 & 0xffffffff;
      _memcpy(puVar3 + (uVar10 >> 2 & 0xffffffff),param_3,uVar12 & 0xfffffffffffffffc);
      uVar6 = (long)puVar9 + (uVar6 * 4 - (long)param_2);
      if (uVar6 != 0) {
        _memcpy((void *)((long)puVar3 + (uVar12 & 0x3fffffffc) + uVar11 * 4),param_2,
                uVar6 & 0xfffffffffffffffc);
      }
      if (puVar9 != (undefined4 *)0x0) {
        operator_delete__(puVar9);
      }
      *(undefined4 **)(param_1 + 2) = puVar3;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      puVar9 = puVar3;
    }
    else {
      puVar5 = puVar9 + uVar6;
      uVar11 = (ulong)((long)puVar5 - (long)param_2) >> 2;
      if (uVar4 < (uint)uVar11) {
        uVar11 = uVar12 >> 2 & 0xffffffff;
        if (uVar11 != 0) {
          lVar8 = 0;
          do {
            *(undefined4 *)((long)puVar5 + lVar8) =
                 *(undefined4 *)((long)puVar5 + lVar8 + uVar11 * -4);
            lVar8 = lVar8 + 4;
          } while (lVar8 != uVar11 * 4);
        }
        lVar8 = (long)puVar5 + ((uVar12 >> 2 & 0xffffffff) * -4 - (long)param_2);
        if (lVar8 != 0) {
          puVar5 = puVar9 + (uVar6 - uVar11);
          do {
            puVar5 = puVar5 + -1;
            *(undefined4 *)((long)param_2 + lVar8 + uVar11 * 4 + -4) = *puVar5;
            lVar8 = lVar8 + -4;
          } while (lVar8 != 0);
        }
        do {
          puVar5 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar5;
        } while (puVar5 != param_4);
      }
      else {
        if (puVar5 != param_2) {
          puVar7 = param_2;
          do {
            puVar7[uVar12 >> 2 & 0xffffffff] = *puVar7;
            puVar7 = puVar7 + 1;
          } while (puVar7 != puVar5);
        }
        uVar6 = (ulong)((long)puVar5 - (long)param_2) >> 2 & 0xffffffff;
        for (puVar7 = param_3 + (uVar11 & 0xffffffff); puVar7 != param_4; puVar7 = puVar7 + 1) {
          *puVar5 = *puVar7;
          puVar5 = puVar5 + 1;
        }
        if (uVar6 != 0) {
          lVar8 = uVar6 << 2;
          do {
            *param_2 = *param_3;
            lVar8 = lVar8 + -4;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      *param_1 = uVar1 + uVar4;
      uVar11 = uVar10 >> 2 & 0xffffffff;
    }
    param_2 = puVar9 + uVar11;
  }
  return param_2;
}




void FUN_10031a8a4(void)

{
  if (DAT_101e468f0 == 0) {
    operator_new(0x1d0);
    DAT_101e468f0 = FUN_10031a97c();
  }
  return;
}




void FUN_10031a8d8(void)

{
  if (DAT_101e468f0 != (long *)0x0) {
    (**(code **)(*DAT_101e468f0 + 8))();
    DAT_101e468f0 = (long *)0x0;
  }
  return;
}




undefined8 FUN_10031a90c(void)

{
  return DAT_101e468f0;
}




void FUN_10031a918(void)

{
  FUN_10031a924(DAT_101e468f0);
  return;
}




void FUN_10031a924(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    lVar2 = FUN_100134104();
    if (*(char *)(lVar2 + 8) != '\0') {
      uVar3 = FUN_1004f1670(param_1 + 0x40);
      if ((uVar3 & 1) == 0) {
        FUN_1004f01d0(param_1 + 0x40);
        uVar4 = 0;
        goto LAB_10031a95c;
      }
    }
  }
  uVar4 = 1;
LAB_10031a95c:
  *(undefined1 *)(param_1 + 0x1c8) = uVar4;
  return;
}




undefined8 * FUN_10031a97c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  param_1[7] = 0;
  *param_1 = &PTR_thunk_FUN_10031acac_101490f50;
  param_1[3] = &PTR_FUN_1014912f8;
  param_1[6] = &PTR_FUN_101491328;
  FUN_1004f1580(param_1 + 8);
  param_1[8] = &PTR_FUN_10145bf80;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = param_1 + 0x10;
  puVar2 = param_1 + 0x12;
  *puVar2 = &PTR_thunk_FUN_10031b974_101491368;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = puVar2;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  *puVar2 = &PTR_thunk_FUN_10031b974_101491418;
  puVar2 = param_1 + 0x1e;
  *puVar2 = &PTR_thunk_FUN_10031b974_101491368;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = puVar2;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  *puVar2 = &PTR_thunk_FUN_10031b974_101491418;
  *(undefined4 *)((long)param_1 + 0x14c) = 0;
  param_1[0x2a] = &PTR_thunk_FUN_10031b974_101491368;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  pcStack_68 = thunk_FUN_10031ba0c;
  local_70 = param_1 + 0x2a;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  param_1[0x2a] = &PTR_FUN_1014913c0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)((long)param_1 + 0x1ca) = 0;
  FUN_1001116f8(param_1 + 6);
  pcStack_68 = thunk_FUN_10031b2a4;
  local_70 = param_1;
  FUN_100643618(0x3dcccccd,&local_70,0,1);
  pcStack_68 = (code *)0x0;
  local_70 = (undefined8 *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_10031abf0(&local_70,"5v5_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_10031abf0(&local_70,"3v3_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_10031abf0(&local_70,"blitz_earnedElo_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ")
  ;
  FUN_10031abf0(&local_70,"wins_season","MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_10031ac68(param_1 + 0x2a,&local_70);
  FUN_10001629c(&uStack_60,1);
  FUN_10001629c(&local_70,1);
  return param_1;
}




void FUN_10031abf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,param_3);
  FUN_10001617c(param_1 + 0x10,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10031ac68(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  FUN_100169740(param_1 + 0x28,param_2 + 0x10);
  FUN_100169740(param_1 + 0x60,param_2);
  FUN_10031b564(param_1);
  return;
}




void FUN_10031acac(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *local_50;
  code *pcStack_48;
  
  *param_1 = &PTR_thunk_FUN_10031acac_101490f50;
  param_1[3] = &PTR_FUN_1014912f8;
  param_1[6] = &PTR_FUN_101491328;
  FUN_100111728();
  pcStack_48 = thunk_FUN_10031b2a4;
  local_50 = param_1;
  FUN_100643a8c(&local_50);
  puVar4 = param_1 + 0xf;
  plVar5 = (long *)*puVar4;
  while (plVar5 != param_1 + 0x10) {
    if ((long *)plVar5[7] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[7] + 8))();
    }
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      bVar1 = *(long **)*plVar2 != plVar5;
      plVar5 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar3);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_10031c13c(puVar4,param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = param_1 + 0x10;
  param_1[0x2a] = &PTR_FUN_1014913c0;
  FUN_10001629c(param_1 + 0x36,1);
  FUN_10031b974(param_1 + 0x2a);
  FUN_10031b974(param_1 + 0x1e);
  FUN_10031b974(param_1 + 0x12);
  FUN_10031c13c(puVar4,param_1[0x10]);
  param_1[8] = &PTR_FUN_10145bf80;
  FUN_10015aff0(param_1 + 0xd,1);
  FUN_1004f15a8(param_1 + 8);
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void FUN_10031ae18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014913c0;
  FUN_10001629c(param_1 + 0xc,1);
  FUN_10031b974(param_1);
  return;
}




void thunk_FUN_10031b974(void)

{
  FUN_10031b974();
  return;
}




void thunk_FUN_10031acac(void)

{
  FUN_10031acac();
  return;
}




void FUN_10031ae54(long param_1)

{
  FUN_10031acac(param_1 + -0x18);
  return;
}




void FUN_10031ae5c(long param_1)

{
  FUN_10031acac(param_1 + -0x30);
  return;
}




void FUN_10031ae64(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031acac();
  operator_delete(pvVar1);
  return;
}




void FUN_10031ae78(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031acac(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_10031ae90(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031acac(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




void FUN_10031aea8(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x1ca) == '\0') {
    bVar1 = true;
  }
  else {
    lVar2 = FUN_100134104();
    bVar1 = *(char *)(lVar2 + 9) != '\0';
  }
  FUN_1001117cc(bVar1);
  *(undefined1 *)(param_1 + 0x1ca) = 1;
  return;
}




void FUN_10031aef0(void)

{
  FUN_100143bec(FUN_10031af04,FUN_10031af08);
  return;
}




void FUN_10031af04(void)

{
  return;
}




void FUN_10031af08(void)

{
  return;
}




long FUN_10031af0c(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  bVar7 = *(byte *)(param_2 + 0x17);
  uVar5 = (ulong)bVar7;
  uVar6 = *(ulong *)(param_2 + 8);
  uVar1 = uVar6;
  if (-1 < (char)bVar7) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0x10) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e46ae);
    if (iVar2 == 0) {
      FUN_1004e313c(auStack_60);
      FUN_1004e34c8(auStack_60);
      local_50 = 0;
      local_4c = 0;
      uStack_40 = 0;
      local_48 = 0;
      uStack_30 = 0;
      local_38 = 0;
      local_28 = 0;
      FUN_10015d3ec();
      uVar4 = FUN_100164f34();
      FUN_1000153b4(auStack_60,uVar4);
      local_50 = 0xffffffff;
      local_4c = 1;
      local_48 = local_48 & 0xffffffff00000000;
      uVar4 = FUN_100327e00();
      lVar3 = FUN_100327f2c(uVar4,0);
      uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(lVar3 + 0x1c));
      uVar4 = FUN_100327e00();
      lVar3 = FUN_100327f2c(uVar4,0);
      uStack_40 = CONCAT44(*(undefined4 *)(lVar3 + 4),(undefined4)uStack_40);
      uVar4 = FUN_100327e00();
      lVar3 = FUN_100327f2c(uVar4,1);
      local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(lVar3 + 0x1c));
      uVar4 = FUN_100327e00();
      lVar3 = FUN_100327f2c(uVar4,1);
      local_38 = CONCAT44(*(undefined4 *)(lVar3 + 4),(undefined4)local_38);
      uVar4 = FUN_100327e00();
      lVar3 = FUN_100327f2c(uVar4,2);
      uStack_30 = CONCAT44(uStack_30._4_4_,*(undefined4 *)(lVar3 + 0x1c));
      lVar3 = FUN_10015d3ec();
      local_28 = *(undefined4 *)(lVar3 + 0x5604);
      local_48 = CONCAT44(0xbf800000,(undefined4)local_48);
      param_1 = param_1 + 0x90;
      FUN_10031b11c(param_1,auStack_60);
      FUN_10031b1c8(param_1);
      if (local_58 == (void *)0x0) {
        return param_1;
      }
      operator_delete__(local_58);
      return param_1;
    }
    bVar7 = *(byte *)(param_2 + 0x17);
    uVar5 = (ulong)bVar7;
    uVar6 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar6;
  if (-1 < (char)bVar7) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0xe) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e4723);
    if (iVar2 == 0) {
      return param_1 + 0xf0;
    }
    bVar7 = *(byte *)(param_2 + 0x17);
    uVar5 = (ulong)bVar7;
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if (-1 < (char)bVar7) {
    uVar6 = uVar5;
  }
  if ((uVar6 == 0x18) &&
     (iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e4792), iVar2 == 0)) {
    param_1 = param_1 + 0x150;
  }
  else {
    lVar3 = FUN_10031c190(param_1 + 0x78,param_2);
    if (param_1 + 0x80 == lVar3) {
      param_1 = 0;
    }
    else {
      param_1 = *(long *)(lVar3 + 0x38);
    }
  }
  return param_1;
}




void FUN_10031b11c(long param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (uint *)(param_1 + 0x18);
  if (*puVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      iVar1 = FUN_1004e3654(*(long *)(param_1 + 0x20) + lVar3,param_2);
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_1 + 0x20) + lVar3;
        FUN_1000153b4(lVar3,param_2);
        uVar6 = *(undefined8 *)(param_2 + 0x18);
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        uVar8 = *(undefined8 *)(param_2 + 0x28);
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        uVar9 = *(undefined8 *)(param_2 + 0x2c);
        *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)(param_2 + 0x34);
        *(undefined8 *)(lVar3 + 0x2c) = uVar9;
        *(undefined8 *)(lVar3 + 0x18) = uVar6;
        *(undefined8 *)(lVar3 + 0x10) = uVar5;
        *(undefined8 *)(lVar3 + 0x28) = uVar8;
        *(undefined8 *)(lVar3 + 0x20) = uVar7;
        return;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x40;
    } while (uVar4 < *puVar2);
  }
  FUN_10031ba70(puVar2,param_2);
  return;
}




void FUN_10031b1c8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  code *local_28;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = lVar2 + (ulong)*(uint *)(param_1 + 0x18) * 0x40;
    local_28 = FUN_10031bd8c;
    break;
  case 1:
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = lVar2 + (ulong)*(uint *)(param_1 + 0x18) * 0x40;
    local_28 = FUN_10031bda0;
    break;
  case 2:
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = lVar2 + (ulong)*(uint *)(param_1 + 0x18) * 0x40;
    local_28 = FUN_10031bdb4;
    break;
  case 3:
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = lVar2 + (ulong)*(uint *)(param_1 + 0x18) * 0x40;
    local_28 = FUN_10031bdc8;
    break;
  default:
    goto switchD_10031b1fc_default;
  }
  FUN_10031c414(lVar2,lVar3,&local_28);
switchD_10031b1fc_default:
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    uVar4 = 0;
    puVar5 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0x10);
    do {
      uVar4 = uVar4 + 1;
      *puVar5 = (int)uVar4;
      puVar5 = puVar5 + 0x10;
    } while (uVar1 != uVar4);
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}




void FUN_10031b2a4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *local_80;
  code *pcStack_78;
  
  lVar6 = param_1;
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    iVar2 = FUN_1004f1698(param_1 + 0x40);
    if (iVar2 != 0) {
      iVar2 = FUN_1004f1680(param_1 + 0x40);
      lVar6 = DAT_101e468f0;
      if (iVar2 == 0) goto LAB_10031b2d8;
      if (*(int *)(param_1 + 0x68) != 0) {
        lVar6 = *(long *)(param_1 + 0x70);
        do {
          lVar3 = FUN_10031c190(param_1 + 0x78,lVar6);
          if (param_1 + 0x80 == lVar3) {
            puVar4 = operator_new(0x60);
            *puVar4 = &PTR_thunk_FUN_10031b974_101491368;
            puVar4[2] = 0;
            puVar4[1] = 0;
            puVar4[4] = 0;
            puVar4[3] = 0;
            puVar4[6] = 0;
            puVar4[5] = 0;
            puVar4[8] = 0;
            puVar4[7] = 0;
            puVar4[10] = 0;
            puVar4[9] = 0;
            pcStack_78 = thunk_FUN_10031ba0c;
            local_80 = puVar4;
            FUN_100643618(0x3dcccccd,&local_80,0,1);
            FUN_10031b46c(puVar4,lVar6 + 0x18,*(undefined4 *)(lVar6 + 0x28));
            puVar5 = (undefined8 *)FUN_10031b4e8(param_1 + 0x78,lVar6);
            *puVar5 = puVar4;
          }
          else {
            lVar3 = *(long *)(lVar3 + 0x38);
            uVar1 = *(uint *)(lVar6 + 0x28);
            FUN_10031c38c(lVar3 + 0x18,lVar6 + 0x18);
            *(ulong *)(lVar3 + 0x50) = (ulong)uVar1;
            if (*(int *)(lVar3 + 8) != 0) {
              lVar7 = *(long *)(lVar3 + 0x10);
              do {
                if (*(code **)(lVar7 + 8) == (code *)0x0) {
                  (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x10));
                }
                else {
                  (**(code **)(lVar7 + 8))();
                }
                lVar7 = lVar7 + 0x20;
              } while (lVar7 != *(long *)(lVar3 + 0x10) + (ulong)*(uint *)(lVar3 + 8) * 0x20);
            }
          }
          lVar6 = lVar6 + 0x30;
        } while (lVar6 != *(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x68) * 0x30);
      }
      FUN_10031b564(param_1 + 0x150);
      *(undefined1 *)(param_1 + 0x1c9) = 1;
    }
    return;
  }
LAB_10031b2d8:
  FUN_10031a924(lVar6);
  return;
}




void FUN_10031b46c(long param_1,undefined8 param_2,ulong param_3)

{
  void *local_48 [2];
  char local_31;
  
  FUN_10031c38c(param_1 + 0x18);
  FUN_10001549c(local_48,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_SCORE");
  std::string::operator=((string *)(param_1 + 0x38),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10001617c(param_1 + 0x28,(string *)(param_1 + 0x38));
  *(ulong *)(param_1 + 0x50) = param_3 & 0xffffffff;
  return;
}




long FUN_10031b4e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_10031c290(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x40);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined8 *)((long)pvVar2 + 0x38) = 0;
    FUN_10031c334(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




void FUN_10031b564(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = DAT_101e468f0;
  if ((*(int *)(param_1 + 0x70) == -1) && (uVar2 = *(uint *)(param_1 + 0x60), uVar2 != 0)) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (lVar3 != 0) {
        lVar1 = FUN_10031af0c(lVar3,*(long *)(param_1 + 0x68) + lVar4);
        if (lVar1 != 0) {
          *(int *)(param_1 + 0x70) = (int)uVar5;
          std::string::operator=
                    ((string *)(param_1 + 0x38),(string *)(*(long *)(param_1 + 0x30) + lVar4));
          break;
        }
        uVar2 = *(uint *)(param_1 + 0x60);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < uVar2);
  }
  if (*(int *)(param_1 + 8) != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8) * 0x20);
  }
  return;
}




void FUN_10031b630(long param_1)

{
  *(undefined1 *)(param_1 + 0x1c9) = 0;
  FUN_10031a924();
  *(undefined1 *)(param_1 + 0x1ca) = 0;
  FUN_10015af78(param_1 + 0xa8,0);
  FUN_10015af78(param_1 + 0x108,0);
  return;
}




void FUN_10031b66c(long param_1)

{
  FUN_10031b630(param_1 + -0x18);
  return;
}




void FUN_10031b674(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  void *pvVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar7 = FUN_10015d3ec();
  bVar4 = *(byte *)(param_2 + 0x197);
  uVar9 = (ulong)bVar4;
  bVar5 = *(byte *)(lVar7 + 0x548f);
  sVar1 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar4) {
    sVar1 = uVar9;
  }
  sVar2 = *(size_t *)(lVar7 + 0x5480);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(param_2 + 0x180);
    puVar3 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_2 + 0x180);
    }
    pbVar12 = *(byte **)(lVar7 + 0x5478);
    if (-1 < (char)bVar5) {
      pbVar12 = (byte *)(lVar7 + 0x5478);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(puVar3,pbVar12,sVar1), iVar6 != 0)) {
        return;
      }
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar12 != ((uint)pvVar11 & 0xff)) {
        return;
      }
      pbVar10 = (byte *)(param_2 + 0x181);
      while( true ) {
        uVar9 = uVar9 - 1;
        pbVar12 = pbVar12 + 1;
        if (uVar9 == 0) break;
        bVar4 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (bVar4 != *pbVar12) {
          return;
        }
      }
    }
    FUN_10015af78(param_1 + 0x108,0);
    if (*(int *)(param_2 + 0x1d8) != 0) {
      lVar7 = 0;
      uVar9 = 0;
      do {
        lVar13 = *(long *)(param_2 + 0x1e0);
        FUN_1004e313c(auStack_a0);
        FUN_1004e34c8(auStack_a0);
        local_90 = 0;
        local_8c = 0;
        uStack_80 = 0;
        local_88 = 0;
        local_70 = 0;
        local_78 = 0;
        lVar13 = lVar13 + lVar7;
        local_68 = 0;
        FUN_1000153b4(auStack_a0,lVar13 + 0x18);
        local_90 = 0xffffffff;
        local_8c = 1;
        local_88 = 0xbf80000000000000;
        uStack_80 = CONCAT44(*(undefined4 *)(lVar13 + 0x70),*(undefined4 *)(lVar13 + 0x8c));
        local_78 = CONCAT44(*(undefined4 *)(lVar13 + 0xa0),*(undefined4 *)(lVar13 + 0xbc));
        local_70 = CONCAT44(*(undefined4 *)(lVar13 + 0xd0),*(undefined4 *)(lVar13 + 0xec));
        local_68 = *(undefined4 *)(lVar13 + 0x68);
        FUN_10031b11c(param_1 + 0xf0,auStack_a0);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x108;
      } while (uVar9 < *(uint *)(param_2 + 0x1d8));
    }
    FUN_10031b1c8(param_1 + 0xf0);
    uVar8 = FUN_1004f1a74(0);
    *(undefined8 *)(param_1 + 0x140) = uVar8;
  }
  return;
}




void FUN_10031b854(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  iVar1 = FUN_100111828();
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      lVar3 = FUN_100111838(uVar5);
      FUN_1004e313c(auStack_90);
      FUN_1004e34c8(auStack_90);
      local_80 = 0;
      local_7c = 0;
      uStack_70 = 0;
      local_78 = 0;
      local_60 = 0;
      local_68 = 0;
      local_58 = 0;
      FUN_1000153b4(auStack_90,lVar3 + 0x20);
      local_80 = 0xffffffff;
      local_7c = 1;
      local_78 = 0xbf80000000000000;
      uStack_70 = CONCAT44(*(undefined4 *)(lVar3 + 0xb8),*(undefined4 *)(lVar3 + 0xd4));
      local_68 = CONCAT44(*(undefined4 *)(lVar3 + 0xe8),*(undefined4 *)(lVar3 + 0x104));
      local_58 = *(undefined4 *)(lVar3 + 0xb0);
      local_60 = CONCAT44(*(undefined4 *)(lVar3 + 0x118),*(undefined4 *)(lVar3 + 0x134));
      FUN_10031b11c(param_1 + 0x90,auStack_90);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
      uVar5 = uVar5 + 1;
      uVar2 = FUN_100111828();
    } while (uVar5 < uVar2);
  }
  FUN_10031b1c8(param_1 + 0x90);
  uVar4 = FUN_1004f1a74(0);
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  return;
}




void FUN_10031b96c(long param_1)

{
  FUN_10031b854(param_1 + -0x30);
  return;
}




undefined8 * FUN_10031b974(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_10031b974_101491368;
  pcStack_28 = thunk_FUN_10031ba0c;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_10001629c(param_1 + 5,1);
  FUN_10015af78(param_1 + 3,1);
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return param_1;
}




void thunk_FUN_10031b974(void)

{
  FUN_10031b974();
  return;
}




void FUN_10031b9f8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031b974();
  operator_delete(pvVar1);
  return;
}




void FUN_10031ba0c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (*(int *)(param_1 + 8) != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      do {
        if (*(code **)(lVar1 + 8) == (code *)0x0) {
          (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
        }
        else {
          (**(code **)(lVar1 + 8))();
        }
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8) * 0x20);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}




void FUN_10031ba70(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10015ae9c(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x40;
  thunk_FUN_1004e439c(lVar1 + -0x40,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(lVar1 + -0xc) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(lVar1 + -0x14) = uVar9;
  *(undefined8 *)(lVar1 + -0x28) = uVar6;
  *(undefined8 *)(lVar1 + -0x30) = uVar5;
  *(undefined8 *)(lVar1 + -0x18) = uVar8;
  *(undefined8 *)(lVar1 + -0x20) = uVar7;
  return;
}




void FUN_10031bb04(undefined8 *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS");
  FUN_10001617c(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




undefined8 FUN_10031bbdc(long param_1,string *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  string sVar6;
  
  sVar6 = param_2[0x17];
  uVar4 = (ulong)(byte)sVar6;
  uVar5 = *(ulong *)(param_2 + 8);
  uVar1 = uVar5;
  if (-1 < (char)sVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x2c) {
    iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecb5c);
    if (iVar2 == 0) {
      uVar3 = 0;
      goto LAB_10031bd10;
    }
    sVar6 = param_2[0x17];
    uVar4 = (ulong)(byte)sVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)sVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x2c) {
    iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecb89);
    if (iVar2 == 0) {
      uVar3 = 1;
      goto LAB_10031bd10;
    }
    sVar6 = param_2[0x17];
    uVar4 = (ulong)(byte)sVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)sVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 0x2e) {
    iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecbb6);
    if (iVar2 == 0) {
      uVar3 = 2;
      goto LAB_10031bd10;
    }
    sVar6 = param_2[0x17];
    uVar4 = (ulong)(byte)sVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if (-1 < (char)sVar6) {
    uVar5 = uVar4;
  }
  if ((uVar5 != 0x2d) ||
     (iVar2 = std::string::compare((ulong)param_2,0,(char *)0xffffffffffffffff,0x1013ecbe5),
     iVar2 != 0)) {
    return 0;
  }
  uVar3 = 3;
LAB_10031bd10:
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  std::string::operator=((string *)(param_1 + 0x38),param_2);
  return 1;
}




void FUN_10031bd30(undefined8 param_1,long *param_2)

{
  undefined1 auStack_30 [8];
  long local_28;
  
  (**(code **)(*param_2 + 0x18))(auStack_30);
  FUN_10003330c(param_1,local_28 + (ulong)*(uint *)((long)param_2 + 0x5c) * 0x18);
  FUN_10001629c(auStack_30,1);
  return;
}




bool FUN_10031bd8c(long param_1,long param_2)

{
  return *(float *)(param_2 + 0x20) < *(float *)(param_1 + 0x20);
}




bool FUN_10031bda0(long param_1,long param_2)

{
  return *(float *)(param_2 + 0x28) < *(float *)(param_1 + 0x28);
}




bool FUN_10031bdb4(long param_1,long param_2)

{
  return *(float *)(param_2 + 0x30) < *(float *)(param_1 + 0x30);
}




bool FUN_10031bdc8(long param_1,long param_2)

{
  return *(int *)(param_2 + 0x38) < *(int *)(param_1 + 0x38);
}




long FUN_10031bddc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = DAT_101e468f0;
  if (((-1 < (int)*(uint *)(param_1 + 0x70)) && (DAT_101e468f0 != 0)) &&
     (lVar1 = FUN_10031af0c(DAT_101e468f0,
                            *(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 0x18),
     lVar1 != 0)) {
    plVar2 = (long *)FUN_10031af0c(lVar3,*(long *)(param_1 + 0x68) +
                                         (ulong)*(uint *)(param_1 + 0x70) * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010031be40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    return lVar3;
  }
  return param_1 + 0x18;
}




void FUN_10031be54(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      if ((DAT_101e468f0 != 0) &&
         (lVar1 = FUN_10031af0c(DAT_101e468f0,*(long *)(param_1 + 0x68) + lVar3), lVar1 != 0)) {
        plVar2 = (long *)FUN_10031af0c(DAT_101e468f0,*(long *)(param_1 + 0x68) + lVar3);
        (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x60));
  }
  return;
}




void FUN_10031bee4(undefined8 param_1,long param_2)

{
  FUN_1000a72a4(param_1,param_2 + 0x28);
  return;
}




bool FUN_10031bef0(long param_1,string *param_2)

{
  string *psVar1;
  string *psVar2;
  uint uVar3;
  string sVar4;
  string sVar5;
  size_t sVar6;
  size_t sVar7;
  string *psVar8;
  size_t sVar9;
  bool bVar10;
  int iVar11;
  string *psVar12;
  ulong uVar13;
  long lVar14;
  
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  uVar3 = *(uint *)(param_1 + 0x28);
  sVar4 = param_2[0x17];
  psVar2 = *(string **)param_2;
  sVar7 = *(size_t *)(param_2 + 8);
  if (-1 < (char)sVar4) {
    psVar2 = param_2;
    sVar7 = (ulong)(byte)sVar4;
  }
  if (uVar3 == 0) {
    bVar10 = false;
  }
  else {
    uVar13 = 0;
    lVar14 = *(long *)(param_1 + 0x30);
    bVar10 = true;
    do {
      psVar12 = (string *)(lVar14 + uVar13 * 0x18);
      sVar5 = psVar12[0x17];
      sVar6 = *(size_t *)(psVar12 + 8);
      if (-1 < (char)sVar5) {
        sVar6 = (ulong)(byte)sVar5;
      }
      if (sVar7 == sVar6) {
        psVar1 = *(string **)psVar12;
        if (-1 < (char)sVar5) {
          psVar1 = psVar12;
        }
        sVar6 = (ulong)(byte)sVar4;
        psVar8 = param_2;
        sVar9 = sVar7;
        if ((char)sVar4 < '\0') {
          if ((sVar7 == 0) || (iVar11 = _memcmp(psVar2,psVar1,sVar7), iVar11 == 0)) {
LAB_10031bfd8:
            *(int *)(param_1 + 0x70) = (int)uVar13;
            std::string::operator=((string *)(param_1 + 0x38),psVar12);
            return bVar10;
          }
        }
        else {
          while( true ) {
            if (sVar9 == 0) goto LAB_10031bfd8;
            if (*psVar8 != *psVar1) break;
            psVar1 = psVar1 + 1;
            sVar6 = sVar6 - 1;
            psVar8 = psVar8 + 1;
            sVar9 = sVar6;
          }
        }
      }
      uVar13 = uVar13 + 1;
      bVar10 = uVar13 < uVar3;
    } while (uVar13 != uVar3);
  }
  return bVar10;
}




undefined8 FUN_10031c010(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar1 = DAT_101e468f0;
  if (((-1 < (int)*(uint *)(param_1 + 0x70)) && (DAT_101e468f0 != 0)) &&
     (lVar2 = FUN_10031af0c(DAT_101e468f0,
                            *(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 0x18),
     lVar2 != 0)) {
    plVar3 = (long *)FUN_10031af0c(lVar1,*(long *)(param_1 + 0x68) +
                                         (ulong)*(uint *)(param_1 + 0x70) * 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010031c074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar3 + 0x38))();
    return uVar4;
  }
  return 0;
}




void FUN_10031c088(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031b974();
  operator_delete(pvVar1);
  return;
}




long FUN_10031c09c(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_10031c0a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}




void FUN_10031c0ac(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014913c0;
  FUN_10001629c(param_1 + 0xc,1);
  pvVar1 = (void *)FUN_10031b974(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10031c0e4(undefined8 param_1,long param_2)

{
  if (-1 < (int)*(uint *)(param_2 + 0x70)) {
    FUN_10003330c(param_1,*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x70) * 0x18);
    return;
  }
  FUN_10001549c(param_1,"");
  return;
}




void FUN_10031c110(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}




void FUN_10031c11c(undefined8 param_1,long param_2)

{
  FUN_1000a72a4(param_1,param_2 + 0x28);
  return;
}




void FUN_10031c128(undefined8 param_1,long param_2)

{
  FUN_10003330c(param_1,param_2 + 0x38);
  return;
}




undefined8 FUN_10031c134(void)

{
  return 0;
}




void FUN_10031c13c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10031c13c(param_1,*param_2);
    FUN_10031c13c(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void thunk_FUN_10031b2a4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puStack_80;
  code *pcStack_78;
  
  lVar6 = param_1;
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    iVar2 = FUN_1004f1698(param_1 + 0x40);
    if (iVar2 != 0) {
      iVar2 = FUN_1004f1680(param_1 + 0x40);
      lVar6 = DAT_101e468f0;
      if (iVar2 == 0) goto LAB_10031b2d8;
      if (*(int *)(param_1 + 0x68) != 0) {
        lVar6 = *(long *)(param_1 + 0x70);
        do {
          lVar3 = FUN_10031c190(param_1 + 0x78,lVar6);
          if (param_1 + 0x80 == lVar3) {
            puVar4 = operator_new(0x60);
            *puVar4 = &PTR_thunk_FUN_10031b974_101491368;
            puVar4[2] = 0;
            puVar4[1] = 0;
            puVar4[4] = 0;
            puVar4[3] = 0;
            puVar4[6] = 0;
            puVar4[5] = 0;
            puVar4[8] = 0;
            puVar4[7] = 0;
            puVar4[10] = 0;
            puVar4[9] = 0;
            pcStack_78 = thunk_FUN_10031ba0c;
            puStack_80 = puVar4;
            FUN_100643618(0x3dcccccd,&puStack_80,0,1);
            FUN_10031b46c(puVar4,lVar6 + 0x18,*(undefined4 *)(lVar6 + 0x28));
            puVar5 = (undefined8 *)FUN_10031b4e8(param_1 + 0x78,lVar6);
            *puVar5 = puVar4;
          }
          else {
            lVar3 = *(long *)(lVar3 + 0x38);
            uVar1 = *(uint *)(lVar6 + 0x28);
            FUN_10031c38c(lVar3 + 0x18,lVar6 + 0x18);
            *(ulong *)(lVar3 + 0x50) = (ulong)uVar1;
            if (*(int *)(lVar3 + 8) != 0) {
              lVar7 = *(long *)(lVar3 + 0x10);
              do {
                if (*(code **)(lVar7 + 8) == (code *)0x0) {
                  (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x10));
                }
                else {
                  (**(code **)(lVar7 + 8))();
                }
                lVar7 = lVar7 + 0x20;
              } while (lVar7 != *(long *)(lVar3 + 0x10) + (ulong)*(uint *)(lVar3 + 8) * 0x20);
            }
          }
          lVar6 = lVar6 + 0x30;
        } while (lVar6 != *(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x68) * 0x30);
      }
      FUN_10031b564(param_1 + 0x150);
      *(undefined1 *)(param_1 + 0x1c9) = 1;
    }
    return;
  }
LAB_10031b2d8:
  FUN_10031a924(lVar6);
  return;
}




long * FUN_10031c190(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_10031c210(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_10031c210(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




uint FUN_10031c210(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_10031c280;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_10031c280:
  return uVar8 >> 0x1f;
}




long * FUN_10031c290(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_10031c210(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_10031c210(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_10031c334(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void thunk_FUN_10031ba0c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (*(int *)(param_1 + 8) != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      do {
        if (*(code **)(lVar1 + 8) == (code *)0x0) {
          (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
        }
        else {
          (**(code **)(lVar1 + 8))();
        }
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 8) * 0x20);
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}




void FUN_10031c38c(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != param_2) {
    FUN_10015af78(param_1,1);
    FUN_10015ae9c(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar1 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 << 6;
      do {
        lVar1 = thunk_FUN_1004e439c(lVar1,lVar3);
        uVar6 = *(undefined8 *)(lVar3 + 0x18);
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        uVar8 = *(undefined8 *)(lVar3 + 0x28);
        uVar7 = *(undefined8 *)(lVar3 + 0x20);
        uVar9 = *(undefined8 *)(lVar3 + 0x2c);
        *(undefined8 *)(lVar1 + 0x34) = *(undefined8 *)(lVar3 + 0x34);
        *(undefined8 *)(lVar1 + 0x2c) = uVar9;
        *(undefined8 *)(lVar1 + 0x18) = uVar6;
        *(undefined8 *)(lVar1 + 0x10) = uVar5;
        *(undefined8 *)(lVar1 + 0x28) = uVar8;
        *(undefined8 *)(lVar1 + 0x20) = uVar7;
        lVar3 = lVar3 + 0x40;
        lVar1 = lVar1 + 0x40;
        lVar4 = lVar4 + -0x40;
      } while (lVar4 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_10031c414(ulong param_1,ulong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
LAB_10031c44c:
  uVar10 = param_2 - 0x40;
  puVar7 = (undefined8 *)(param_2 - 0x30);
  uVar8 = param_1;
LAB_10031c45c:
  while( true ) {
    param_1 = uVar8;
    lVar9 = param_2 - param_1;
    uVar8 = lVar9 >> 6;
    switch(uVar8) {
    case 0:
    case 1:
      return;
    case 2:
      iVar1 = (*(code *)*param_3)(uVar10,param_1);
      if (iVar1 == 0) {
        return;
      }
      thunk_FUN_1004e439c(auStack_a0,param_1);
      uStack_88 = *(undefined8 *)(param_1 + 0x18);
      local_90 = *(undefined8 *)(param_1 + 0x10);
      uStack_80 = *(undefined8 *)(param_1 + 0x20);
      uStack_6c = *(undefined8 *)(param_1 + 0x34);
      uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      local_74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
      FUN_1000153b4(param_1,uVar10);
      uVar13 = *(undefined8 *)(param_2 - 0x28);
      uVar12 = *puVar7;
      uVar15 = *(undefined8 *)(param_2 - 0x18);
      uVar14 = *(undefined8 *)(param_2 - 0x20);
      uVar16 = *(undefined8 *)(param_2 - 0x14);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 - 0xc);
      *(undefined8 *)(param_1 + 0x2c) = uVar16;
      *(undefined8 *)(param_1 + 0x18) = uVar13;
      *(undefined8 *)(param_1 + 0x10) = uVar12;
      *(undefined8 *)(param_1 + 0x28) = uVar15;
      *(undefined8 *)(param_1 + 0x20) = uVar14;
      FUN_1000153b4(uVar10,auStack_a0);
      *(undefined8 *)(param_2 - 0xc) = uStack_6c;
      *(ulong *)(param_2 - 0x14) = CONCAT44(uStack_70,local_74);
      *(undefined8 *)(param_2 - 0x28) = uStack_88;
      *puVar7 = local_90;
      *(ulong *)(param_2 - 0x18) = CONCAT44(local_74,uStack_78);
      *(undefined8 *)(param_2 - 0x20) = uStack_80;
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        return;
      }
      return;
    case 3:
      FUN_10031c9ac(param_1,param_1 + 0x40,uVar10,param_3);
      return;
    case 4:
      FUN_10031cc34(param_1,param_1 + 0x40,param_1 + 0x80,uVar10,param_3);
      return;
    case 5:
      FUN_10031ce00(param_1,param_1 + 0x40,param_1 + 0x80,param_1 + 0xc0,uVar10,param_3);
      return;
    }
    if (lVar9 < 0x1c0) {
      FUN_10031d058(param_1,param_2,param_3);
      return;
    }
    uVar5 = uVar8;
    if ((long)uVar8 < 0) {
      uVar5 = uVar8 + 1;
    }
    uVar5 = param_1 + (uVar5 & 0x7fffffffffffffe) * 0x20;
    if (lVar9 < 0xf9c1) {
      iVar1 = FUN_10031c9ac(param_1,uVar5,uVar10,param_3);
    }
    else {
      uVar3 = uVar8 + 3;
      if (-1 < (long)uVar8) {
        uVar3 = uVar8;
      }
      lVar9 = (uVar3 & 0xffffffffffffffc) * 0x10;
      iVar1 = FUN_10031ce00(param_1,param_1 + lVar9,uVar5,uVar5 + lVar9,uVar10,param_3);
    }
    uVar3 = (*(code *)*param_3)(param_1,uVar5);
    uVar8 = uVar10;
    if ((uVar3 & 1) != 0) break;
    while (uVar3 = uVar8, uVar8 = uVar3 - 0x40, uVar8 != param_1) {
      iVar2 = (*(code *)*param_3)(uVar8,uVar5);
      if (iVar2 != 0) goto code_r0x00010031c518;
    }
    uVar5 = param_1 + 0x40;
    uVar8 = (*(code *)*param_3)(param_1,uVar10);
    if ((uVar8 & 1) == 0) {
      while( true ) {
        if (uVar5 == uVar10) {
          return;
        }
        iVar1 = (*(code *)*param_3)(param_1,uVar5);
        if (iVar1 != 0) break;
        uVar5 = uVar5 + 0x40;
      }
      thunk_FUN_1004e439c(auStack_a0,uVar5);
      uStack_88 = *(undefined8 *)(uVar5 + 0x18);
      local_90 = *(undefined8 *)(uVar5 + 0x10);
      uStack_80 = *(undefined8 *)(uVar5 + 0x20);
      uStack_6c = *(undefined8 *)(uVar5 + 0x34);
      uStack_70 = (undefined4)((ulong)*(undefined8 *)(uVar5 + 0x2c) >> 0x20);
      uStack_78 = (undefined4)*(undefined8 *)(uVar5 + 0x28);
      local_74 = (undefined4)((ulong)*(undefined8 *)(uVar5 + 0x28) >> 0x20);
      FUN_1000153b4(uVar5,uVar10);
      uVar13 = *(undefined8 *)(param_2 - 0x28);
      uVar12 = *puVar7;
      uVar15 = *(undefined8 *)(param_2 - 0x18);
      uVar14 = *(undefined8 *)(param_2 - 0x20);
      uVar16 = *(undefined8 *)(param_2 - 0x14);
      *(undefined8 *)(uVar5 + 0x34) = *(undefined8 *)(param_2 - 0xc);
      *(undefined8 *)(uVar5 + 0x2c) = uVar16;
      *(undefined8 *)(uVar5 + 0x18) = uVar13;
      *(undefined8 *)(uVar5 + 0x10) = uVar12;
      *(undefined8 *)(uVar5 + 0x28) = uVar15;
      *(undefined8 *)(uVar5 + 0x20) = uVar14;
      FUN_1000153b4(uVar10,auStack_a0);
      *(undefined8 *)(param_2 - 0xc) = uStack_6c;
      *(ulong *)(param_2 - 0x14) = CONCAT44(uStack_70,local_74);
      *(undefined8 *)(param_2 - 0x28) = uStack_88;
      *puVar7 = local_90;
      *(ulong *)(param_2 - 0x18) = CONCAT44(local_74,uStack_78);
      *(undefined8 *)(param_2 - 0x20) = uStack_80;
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
      }
      uVar5 = uVar5 + 0x40;
    }
    uVar3 = uVar10;
    if (uVar5 == uVar10) {
      return;
    }
    while( true ) {
      uVar8 = uVar5 - 0x40;
      do {
        uVar4 = uVar8;
        uVar8 = uVar4 + 0x40;
        iVar1 = (*(code *)*param_3)(param_1,uVar8);
      } while (iVar1 == 0);
      uVar5 = uVar4 + 0x80;
      do {
        uVar11 = uVar3;
        uVar3 = uVar11 - 0x40;
        uVar6 = (*(code *)*param_3)(param_1,uVar3);
      } while ((uVar6 & 1) != 0);
      if (uVar3 <= uVar8) break;
      thunk_FUN_1004e439c(auStack_a0,uVar8);
      uStack_88 = *(undefined8 *)(uVar4 + 0x58);
      local_90 = *(undefined8 *)(uVar4 + 0x50);
      uStack_80 = *(undefined8 *)(uVar4 + 0x60);
      uStack_6c = *(undefined8 *)(uVar4 + 0x74);
      uStack_70 = (undefined4)((ulong)*(undefined8 *)(uVar4 + 0x6c) >> 0x20);
      uStack_78 = (undefined4)*(undefined8 *)(uVar4 + 0x68);
      local_74 = (undefined4)((ulong)*(undefined8 *)(uVar4 + 0x68) >> 0x20);
      FUN_1000153b4(uVar8,uVar3);
      uVar13 = *(undefined8 *)(uVar11 - 0x28);
      uVar12 = *(undefined8 *)(uVar11 - 0x30);
      uVar15 = *(undefined8 *)(uVar11 - 0x18);
      uVar14 = *(undefined8 *)(uVar11 - 0x20);
      uVar16 = *(undefined8 *)(uVar11 - 0x14);
      *(undefined8 *)(uVar4 + 0x74) = *(undefined8 *)(uVar11 - 0xc);
      *(undefined8 *)(uVar4 + 0x6c) = uVar16;
      *(undefined8 *)(uVar4 + 0x58) = uVar13;
      *(undefined8 *)(uVar4 + 0x50) = uVar12;
      *(undefined8 *)(uVar4 + 0x68) = uVar15;
      *(undefined8 *)(uVar4 + 0x60) = uVar14;
      FUN_1000153b4(uVar3,auStack_a0);
      *(undefined8 *)(uVar11 - 0xc) = uStack_6c;
      *(ulong *)(uVar11 - 0x14) = CONCAT44(uStack_70,local_74);
      *(undefined8 *)(uVar11 - 0x28) = uStack_88;
      *(undefined8 *)(uVar11 - 0x30) = local_90;
      *(ulong *)(uVar11 - 0x18) = CONCAT44(local_74,uStack_78);
      *(undefined8 *)(uVar11 - 0x20) = uStack_80;
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
      }
    }
  }
  goto LAB_10031c57c;
code_r0x00010031c518:
  thunk_FUN_1004e439c(auStack_a0,param_1);
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  local_90 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = *(undefined8 *)(param_1 + 0x20);
  uStack_6c = *(undefined8 *)(param_1 + 0x34);
  uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
  uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x28);
  local_74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  FUN_1000153b4(param_1,uVar8);
  uVar13 = *(undefined8 *)(uVar3 - 0x28);
  uVar12 = *(undefined8 *)(uVar3 - 0x30);
  uVar15 = *(undefined8 *)(uVar3 - 0x18);
  uVar14 = *(undefined8 *)(uVar3 - 0x20);
  uVar16 = *(undefined8 *)(uVar3 - 0x14);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(uVar3 - 0xc);
  *(undefined8 *)(param_1 + 0x2c) = uVar16;
  *(undefined8 *)(param_1 + 0x18) = uVar13;
  *(undefined8 *)(param_1 + 0x10) = uVar12;
  *(undefined8 *)(param_1 + 0x28) = uVar15;
  *(undefined8 *)(param_1 + 0x20) = uVar14;
  FUN_1000153b4(uVar8,auStack_a0);
  *(undefined8 *)(uVar3 - 0xc) = uStack_6c;
  *(ulong *)(uVar3 - 0x14) = CONCAT44(uStack_70,local_74);
  *(undefined8 *)(uVar3 - 0x28) = uStack_88;
  *(undefined8 *)(uVar3 - 0x30) = local_90;
  *(ulong *)(uVar3 - 0x18) = CONCAT44(local_74,uStack_78);
  *(undefined8 *)(uVar3 - 0x20) = uStack_80;
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  iVar1 = iVar1 + 1;
LAB_10031c57c:
  uVar3 = param_1 + 0x40;
  uVar6 = uVar5;
  uVar4 = uVar3;
  if (uVar3 < uVar8) {
    while( true ) {
      uVar5 = uVar6;
      uVar3 = uVar4 - 0x40;
      do {
        uVar6 = uVar3;
        uVar3 = uVar6 + 0x40;
        uVar4 = (*(code *)*param_3)(uVar3,uVar5);
      } while ((uVar4 & 1) != 0);
      uVar4 = uVar6 + 0x80;
      do {
        uVar11 = uVar8;
        uVar8 = uVar11 - 0x40;
        iVar2 = (*(code *)*param_3)(uVar8,uVar5);
      } while (iVar2 == 0);
      if (uVar8 < uVar3) break;
      thunk_FUN_1004e439c(auStack_a0,uVar3);
      uStack_88 = *(undefined8 *)(uVar6 + 0x58);
      local_90 = *(undefined8 *)(uVar6 + 0x50);
      uStack_80 = *(undefined8 *)(uVar6 + 0x60);
      uStack_6c = *(undefined8 *)(uVar6 + 0x74);
      uStack_70 = (undefined4)((ulong)*(undefined8 *)(uVar6 + 0x6c) >> 0x20);
      uStack_78 = (undefined4)*(undefined8 *)(uVar6 + 0x68);
      local_74 = (undefined4)((ulong)*(undefined8 *)(uVar6 + 0x68) >> 0x20);
      FUN_1000153b4(uVar3,uVar8);
      uVar13 = *(undefined8 *)(uVar11 - 0x28);
      uVar12 = *(undefined8 *)(uVar11 - 0x30);
      uVar15 = *(undefined8 *)(uVar11 - 0x18);
      uVar14 = *(undefined8 *)(uVar11 - 0x20);
      uVar16 = *(undefined8 *)(uVar11 - 0x14);
      *(undefined8 *)(uVar6 + 0x74) = *(undefined8 *)(uVar11 - 0xc);
      *(undefined8 *)(uVar6 + 0x6c) = uVar16;
      *(undefined8 *)(uVar6 + 0x58) = uVar13;
      *(undefined8 *)(uVar6 + 0x50) = uVar12;
      *(undefined8 *)(uVar6 + 0x68) = uVar15;
      *(undefined8 *)(uVar6 + 0x60) = uVar14;
      FUN_1000153b4(uVar8,auStack_a0);
      *(undefined8 *)(uVar11 - 0xc) = uStack_6c;
      *(ulong *)(uVar11 - 0x14) = CONCAT44(uStack_70,local_74);
      *(undefined8 *)(uVar11 - 0x28) = uStack_88;
      *(undefined8 *)(uVar11 - 0x30) = local_90;
      *(ulong *)(uVar11 - 0x18) = CONCAT44(local_74,uStack_78);
      *(undefined8 *)(uVar11 - 0x20) = uStack_80;
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
      }
      iVar1 = iVar1 + 1;
      uVar6 = uVar8;
      if (uVar3 != uVar5) {
        uVar6 = uVar5;
      }
    }
  }
  if ((uVar3 != uVar5) && (iVar2 = (*(code *)*param_3)(uVar5,uVar3), iVar2 != 0)) {
    thunk_FUN_1004e439c(auStack_a0,uVar3);
    uStack_88 = *(undefined8 *)(uVar3 + 0x18);
    local_90 = *(undefined8 *)(uVar3 + 0x10);
    uStack_80 = *(undefined8 *)(uVar3 + 0x20);
    uStack_6c = *(undefined8 *)(uVar3 + 0x34);
    uStack_70 = (undefined4)((ulong)*(undefined8 *)(uVar3 + 0x2c) >> 0x20);
    uStack_78 = (undefined4)*(undefined8 *)(uVar3 + 0x28);
    local_74 = (undefined4)((ulong)*(undefined8 *)(uVar3 + 0x28) >> 0x20);
    FUN_1000153b4(uVar3,uVar5);
    uVar13 = *(undefined8 *)(uVar5 + 0x18);
    uVar12 = *(undefined8 *)(uVar5 + 0x10);
    uVar15 = *(undefined8 *)(uVar5 + 0x28);
    uVar14 = *(undefined8 *)(uVar5 + 0x20);
    uVar16 = *(undefined8 *)(uVar5 + 0x2c);
    *(undefined8 *)(uVar3 + 0x34) = *(undefined8 *)(uVar5 + 0x34);
    *(undefined8 *)(uVar3 + 0x2c) = uVar16;
    *(undefined8 *)(uVar3 + 0x18) = uVar13;
    *(undefined8 *)(uVar3 + 0x10) = uVar12;
    *(undefined8 *)(uVar3 + 0x28) = uVar15;
    *(undefined8 *)(uVar3 + 0x20) = uVar14;
    FUN_1000153b4(uVar5,auStack_a0);
    *(undefined8 *)(uVar5 + 0x34) = uStack_6c;
    *(ulong *)(uVar5 + 0x2c) = CONCAT44(uStack_70,local_74);
    *(undefined8 *)(uVar5 + 0x18) = uStack_88;
    *(undefined8 *)(uVar5 + 0x10) = local_90;
    *(ulong *)(uVar5 + 0x28) = CONCAT44(local_74,uStack_78);
    *(undefined8 *)(uVar5 + 0x20) = uStack_80;
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
    }
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == 0) {
    uVar5 = FUN_10031d184(param_1,uVar3,param_3);
    iVar1 = FUN_10031d184(uVar3 + 0x40,param_2,param_3);
    if (iVar1 != 0) goto LAB_10031c888;
    uVar8 = uVar3 + 0x40;
    if ((uVar5 & 1) != 0) goto LAB_10031c45c;
  }
  if ((long)(param_2 - uVar3) <= (long)(uVar3 - param_1)) {
    FUN_10031c414(uVar3 + 0x40,param_2,param_3);
    param_2 = uVar3;
    goto LAB_10031c44c;
  }
  FUN_10031c414(param_1,uVar3,param_3);
  uVar8 = uVar3 + 0x40;
  goto LAB_10031c45c;
LAB_10031c888:
  param_2 = uVar3;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_10031c44c;
}




undefined8 FUN_10031c9ac(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  uVar2 = (*(code *)*param_4)(param_2,param_1);
  uVar3 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    thunk_FUN_1004e439c(auStack_80,param_2);
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    local_70 = *(undefined8 *)(param_2 + 0x10);
    uStack_60 = *(undefined8 *)(param_2 + 0x20);
    uStack_58 = (undefined4)*(undefined8 *)(param_2 + 0x28);
    uStack_4c = *(undefined8 *)(param_2 + 0x34);
    local_54 = (undefined4)*(undefined8 *)(param_2 + 0x2c);
    uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
    FUN_1000153b4(param_2,param_3);
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    uVar7 = *(undefined8 *)(param_3 + 0x2c);
    *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_3 + 0x34);
    *(undefined8 *)(param_2 + 0x2c) = uVar7;
    *(undefined8 *)(param_2 + 0x18) = uVar4;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 0x28) = uVar6;
    *(undefined8 *)(param_2 + 0x20) = uVar5;
    FUN_1000153b4(param_3,auStack_80);
    *(undefined8 *)(param_3 + 0x18) = uStack_68;
    *(undefined8 *)(param_3 + 0x10) = local_70;
    *(ulong *)(param_3 + 0x28) = CONCAT44(local_54,uStack_58);
    *(undefined8 *)(param_3 + 0x20) = uStack_60;
    *(undefined8 *)(param_3 + 0x34) = uStack_4c;
    *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_50,local_54);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    iVar1 = (*(code *)*param_4)(param_2,param_1);
    if (iVar1 != 0) {
      thunk_FUN_1004e439c(auStack_80,param_1);
      uStack_68 = *(undefined8 *)(param_1 + 0x18);
      local_70 = *(undefined8 *)(param_1 + 0x10);
      uStack_60 = *(undefined8 *)(param_1 + 0x20);
      uStack_58 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      uStack_4c = *(undefined8 *)(param_1 + 0x34);
      local_54 = (undefined4)*(undefined8 *)(param_1 + 0x2c);
      uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      FUN_1000153b4(param_1,param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      uVar7 = *(undefined8 *)(param_2 + 0x2c);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
      *(undefined8 *)(param_1 + 0x2c) = uVar7;
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      FUN_1000153b4(param_2,auStack_80);
      *(undefined8 *)(param_2 + 0x18) = uStack_68;
      *(undefined8 *)(param_2 + 0x10) = local_70;
      *(ulong *)(param_2 + 0x28) = CONCAT44(local_54,uStack_58);
      *(undefined8 *)(param_2 + 0x20) = uStack_60;
      *(undefined8 *)(param_2 + 0x34) = uStack_4c;
      *(ulong *)(param_2 + 0x2c) = CONCAT44(uStack_50,local_54);
LAB_10031cc04:
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
      }
      return 2;
    }
  }
  else if ((int)uVar3 == 0) {
    thunk_FUN_1004e439c(auStack_80,param_1);
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    local_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = (undefined4)*(undefined8 *)(param_1 + 0x28);
    uStack_4c = *(undefined8 *)(param_1 + 0x34);
    local_54 = (undefined4)*(undefined8 *)(param_1 + 0x2c);
    uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
    FUN_1000153b4(param_1,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x2c) = uVar7;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    FUN_1000153b4(param_2,auStack_80);
    *(undefined8 *)(param_2 + 0x18) = uStack_68;
    *(undefined8 *)(param_2 + 0x10) = local_70;
    *(ulong *)(param_2 + 0x28) = CONCAT44(local_54,uStack_58);
    *(undefined8 *)(param_2 + 0x20) = uStack_60;
    *(undefined8 *)(param_2 + 0x34) = uStack_4c;
    *(ulong *)(param_2 + 0x2c) = CONCAT44(uStack_50,local_54);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    iVar1 = (*(code *)*param_4)(param_3,param_2);
    if (iVar1 != 0) {
      thunk_FUN_1004e439c(auStack_80,param_2);
      uStack_68 = *(undefined8 *)(param_2 + 0x18);
      local_70 = *(undefined8 *)(param_2 + 0x10);
      uStack_60 = *(undefined8 *)(param_2 + 0x20);
      uStack_58 = (undefined4)*(undefined8 *)(param_2 + 0x28);
      uStack_4c = *(undefined8 *)(param_2 + 0x34);
      local_54 = (undefined4)*(undefined8 *)(param_2 + 0x2c);
      uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
      FUN_1000153b4(param_2,param_3);
      uVar4 = *(undefined8 *)(param_3 + 0x18);
      uVar3 = *(undefined8 *)(param_3 + 0x10);
      uVar6 = *(undefined8 *)(param_3 + 0x28);
      uVar5 = *(undefined8 *)(param_3 + 0x20);
      uVar7 = *(undefined8 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_3 + 0x34);
      *(undefined8 *)(param_2 + 0x2c) = uVar7;
      *(undefined8 *)(param_2 + 0x18) = uVar4;
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      *(undefined8 *)(param_2 + 0x28) = uVar6;
      *(undefined8 *)(param_2 + 0x20) = uVar5;
      FUN_1000153b4(param_3,auStack_80);
      *(undefined8 *)(param_3 + 0x18) = uStack_68;
      *(undefined8 *)(param_3 + 0x10) = local_70;
      *(ulong *)(param_3 + 0x28) = CONCAT44(local_54,uStack_58);
      *(undefined8 *)(param_3 + 0x20) = uStack_60;
      *(undefined8 *)(param_3 + 0x34) = uStack_4c;
      *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_50,local_54);
      goto LAB_10031cc04;
    }
  }
  else {
    thunk_FUN_1004e439c(auStack_80,param_1);
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    local_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = (undefined4)*(undefined8 *)(param_1 + 0x28);
    uStack_4c = *(undefined8 *)(param_1 + 0x34);
    local_54 = (undefined4)*(undefined8 *)(param_1 + 0x2c);
    uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
    FUN_1000153b4(param_1,param_3);
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    uVar6 = *(undefined8 *)(param_3 + 0x28);
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    uVar7 = *(undefined8 *)(param_3 + 0x2c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_3 + 0x34);
    *(undefined8 *)(param_1 + 0x2c) = uVar7;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    FUN_1000153b4(param_3,auStack_80);
    *(undefined8 *)(param_3 + 0x18) = uStack_68;
    *(undefined8 *)(param_3 + 0x10) = local_70;
    *(ulong *)(param_3 + 0x28) = CONCAT44(local_54,uStack_58);
    *(undefined8 *)(param_3 + 0x20) = uStack_60;
    *(undefined8 *)(param_3 + 0x34) = uStack_4c;
    *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_50,local_54);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
  }
  return 1;
}




ulong FUN_10031cc34(long param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  uVar2 = FUN_10031c9ac();
  iVar1 = (*(code *)*param_5)(param_4,param_3);
  if (iVar1 != 0) {
    thunk_FUN_1004e439c(auStack_80,param_3);
    uStack_68 = *(undefined8 *)(param_3 + 0x18);
    local_70 = *(undefined8 *)(param_3 + 0x10);
    uStack_60 = *(undefined8 *)(param_3 + 0x20);
    uStack_58 = (undefined4)*(undefined8 *)(param_3 + 0x28);
    uStack_4c = *(undefined8 *)(param_3 + 0x34);
    local_54 = (undefined4)*(undefined8 *)(param_3 + 0x2c);
    uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x2c) >> 0x20);
    FUN_1000153b4(param_3,param_4);
    uVar5 = *(undefined8 *)(param_4 + 0x18);
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    uVar7 = *(undefined8 *)(param_4 + 0x28);
    uVar6 = *(undefined8 *)(param_4 + 0x20);
    uVar8 = *(undefined8 *)(param_4 + 0x2c);
    *(undefined8 *)(param_3 + 0x34) = *(undefined8 *)(param_4 + 0x34);
    *(undefined8 *)(param_3 + 0x2c) = uVar8;
    *(undefined8 *)(param_3 + 0x18) = uVar5;
    *(undefined8 *)(param_3 + 0x10) = uVar4;
    *(undefined8 *)(param_3 + 0x28) = uVar7;
    *(undefined8 *)(param_3 + 0x20) = uVar6;
    FUN_1000153b4(param_4,auStack_80);
    *(undefined8 *)(param_4 + 0x18) = uStack_68;
    *(undefined8 *)(param_4 + 0x10) = local_70;
    *(ulong *)(param_4 + 0x28) = CONCAT44(local_54,uStack_58);
    *(undefined8 *)(param_4 + 0x20) = uStack_60;
    *(undefined8 *)(param_4 + 0x34) = uStack_4c;
    *(ulong *)(param_4 + 0x2c) = CONCAT44(uStack_50,local_54);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    iVar1 = (*(code *)*param_5)(param_3,param_2);
    iVar3 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar3 + 1);
    }
    else {
      thunk_FUN_1004e439c(auStack_80,param_2);
      uStack_68 = *(undefined8 *)(param_2 + 0x18);
      local_70 = *(undefined8 *)(param_2 + 0x10);
      uStack_60 = *(undefined8 *)(param_2 + 0x20);
      uStack_58 = (undefined4)*(undefined8 *)(param_2 + 0x28);
      uStack_4c = *(undefined8 *)(param_2 + 0x34);
      local_54 = (undefined4)*(undefined8 *)(param_2 + 0x2c);
      uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
      FUN_1000153b4(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      uVar6 = *(undefined8 *)(param_3 + 0x20);
      uVar8 = *(undefined8 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_3 + 0x34);
      *(undefined8 *)(param_2 + 0x2c) = uVar8;
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      *(undefined8 *)(param_2 + 0x28) = uVar7;
      *(undefined8 *)(param_2 + 0x20) = uVar6;
      FUN_1000153b4(param_3,auStack_80);
      *(undefined8 *)(param_3 + 0x18) = uStack_68;
      *(undefined8 *)(param_3 + 0x10) = local_70;
      *(ulong *)(param_3 + 0x28) = CONCAT44(local_54,uStack_58);
      *(undefined8 *)(param_3 + 0x20) = uStack_60;
      *(undefined8 *)(param_3 + 0x34) = uStack_4c;
      *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_50,local_54);
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
      }
      iVar1 = (*(code *)*param_5)(param_2,param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar3 + 2);
      }
      else {
        thunk_FUN_1004e439c(auStack_80,param_1);
        uStack_68 = *(undefined8 *)(param_1 + 0x18);
        local_70 = *(undefined8 *)(param_1 + 0x10);
        uStack_60 = *(undefined8 *)(param_1 + 0x20);
        uStack_58 = (undefined4)*(undefined8 *)(param_1 + 0x28);
        uStack_4c = *(undefined8 *)(param_1 + 0x34);
        local_54 = (undefined4)*(undefined8 *)(param_1 + 0x2c);
        uStack_50 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
        FUN_1000153b4(param_1,param_2);
        uVar5 = *(undefined8 *)(param_2 + 0x18);
        uVar4 = *(undefined8 *)(param_2 + 0x10);
        uVar7 = *(undefined8 *)(param_2 + 0x28);
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        uVar8 = *(undefined8 *)(param_2 + 0x2c);
        *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
        *(undefined8 *)(param_1 + 0x2c) = uVar8;
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        *(undefined8 *)(param_1 + 0x10) = uVar4;
        *(undefined8 *)(param_1 + 0x28) = uVar7;
        *(undefined8 *)(param_1 + 0x20) = uVar6;
        FUN_1000153b4(param_2,auStack_80);
        *(undefined8 *)(param_2 + 0x18) = uStack_68;
        *(undefined8 *)(param_2 + 0x10) = local_70;
        *(ulong *)(param_2 + 0x28) = CONCAT44(local_54,uStack_58);
        *(undefined8 *)(param_2 + 0x20) = uStack_60;
        *(undefined8 *)(param_2 + 0x34) = uStack_4c;
        *(ulong *)(param_2 + 0x2c) = CONCAT44(uStack_50,local_54);
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        uVar2 = (ulong)(iVar3 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_10031ce00(long param_1,long param_2,long param_3,long param_4,long param_5,
                   undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  uVar2 = FUN_10031cc34();
  iVar1 = (*(code *)*param_6)(param_5,param_4);
  if (iVar1 != 0) {
    thunk_FUN_1004e439c(auStack_90,param_4);
    uStack_78 = *(undefined8 *)(param_4 + 0x18);
    local_80 = *(undefined8 *)(param_4 + 0x10);
    uStack_70 = *(undefined8 *)(param_4 + 0x20);
    uStack_68 = (undefined4)*(undefined8 *)(param_4 + 0x28);
    uStack_5c = *(undefined8 *)(param_4 + 0x34);
    local_64 = (undefined4)*(undefined8 *)(param_4 + 0x2c);
    uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x2c) >> 0x20);
    FUN_1000153b4(param_4,param_5);
    uVar5 = *(undefined8 *)(param_5 + 0x18);
    uVar4 = *(undefined8 *)(param_5 + 0x10);
    uVar7 = *(undefined8 *)(param_5 + 0x28);
    uVar6 = *(undefined8 *)(param_5 + 0x20);
    uVar8 = *(undefined8 *)(param_5 + 0x2c);
    *(undefined8 *)(param_4 + 0x34) = *(undefined8 *)(param_5 + 0x34);
    *(undefined8 *)(param_4 + 0x2c) = uVar8;
    *(undefined8 *)(param_4 + 0x18) = uVar5;
    *(undefined8 *)(param_4 + 0x10) = uVar4;
    *(undefined8 *)(param_4 + 0x28) = uVar7;
    *(undefined8 *)(param_4 + 0x20) = uVar6;
    FUN_1000153b4(param_5,auStack_90);
    *(undefined8 *)(param_5 + 0x18) = uStack_78;
    *(undefined8 *)(param_5 + 0x10) = local_80;
    *(ulong *)(param_5 + 0x28) = CONCAT44(local_64,uStack_68);
    *(undefined8 *)(param_5 + 0x20) = uStack_70;
    *(undefined8 *)(param_5 + 0x34) = uStack_5c;
    *(ulong *)(param_5 + 0x2c) = CONCAT44(uStack_60,local_64);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    iVar1 = (*(code *)*param_6)(param_4,param_3);
    iVar3 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar3 + 1);
    }
    else {
      thunk_FUN_1004e439c(auStack_90,param_3);
      uStack_78 = *(undefined8 *)(param_3 + 0x18);
      local_80 = *(undefined8 *)(param_3 + 0x10);
      uStack_70 = *(undefined8 *)(param_3 + 0x20);
      uStack_68 = (undefined4)*(undefined8 *)(param_3 + 0x28);
      uStack_5c = *(undefined8 *)(param_3 + 0x34);
      local_64 = (undefined4)*(undefined8 *)(param_3 + 0x2c);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x2c) >> 0x20);
      FUN_1000153b4(param_3,param_4);
      uVar5 = *(undefined8 *)(param_4 + 0x18);
      uVar4 = *(undefined8 *)(param_4 + 0x10);
      uVar7 = *(undefined8 *)(param_4 + 0x28);
      uVar6 = *(undefined8 *)(param_4 + 0x20);
      uVar8 = *(undefined8 *)(param_4 + 0x2c);
      *(undefined8 *)(param_3 + 0x34) = *(undefined8 *)(param_4 + 0x34);
      *(undefined8 *)(param_3 + 0x2c) = uVar8;
      *(undefined8 *)(param_3 + 0x18) = uVar5;
      *(undefined8 *)(param_3 + 0x10) = uVar4;
      *(undefined8 *)(param_3 + 0x28) = uVar7;
      *(undefined8 *)(param_3 + 0x20) = uVar6;
      FUN_1000153b4(param_4,auStack_90);
      *(undefined8 *)(param_4 + 0x18) = uStack_78;
      *(undefined8 *)(param_4 + 0x10) = local_80;
      *(ulong *)(param_4 + 0x28) = CONCAT44(local_64,uStack_68);
      *(undefined8 *)(param_4 + 0x20) = uStack_70;
      *(undefined8 *)(param_4 + 0x34) = uStack_5c;
      *(ulong *)(param_4 + 0x2c) = CONCAT44(uStack_60,local_64);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
      iVar1 = (*(code *)*param_6)(param_3,param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar3 + 2);
      }
      else {
        thunk_FUN_1004e439c(auStack_90,param_2);
        uStack_78 = *(undefined8 *)(param_2 + 0x18);
        local_80 = *(undefined8 *)(param_2 + 0x10);
        uStack_70 = *(undefined8 *)(param_2 + 0x20);
        uStack_68 = (undefined4)*(undefined8 *)(param_2 + 0x28);
        uStack_5c = *(undefined8 *)(param_2 + 0x34);
        local_64 = (undefined4)*(undefined8 *)(param_2 + 0x2c);
        uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
        FUN_1000153b4(param_2,param_3);
        uVar5 = *(undefined8 *)(param_3 + 0x18);
        uVar4 = *(undefined8 *)(param_3 + 0x10);
        uVar7 = *(undefined8 *)(param_3 + 0x28);
        uVar6 = *(undefined8 *)(param_3 + 0x20);
        uVar8 = *(undefined8 *)(param_3 + 0x2c);
        *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_3 + 0x34);
        *(undefined8 *)(param_2 + 0x2c) = uVar8;
        *(undefined8 *)(param_2 + 0x18) = uVar5;
        *(undefined8 *)(param_2 + 0x10) = uVar4;
        *(undefined8 *)(param_2 + 0x28) = uVar7;
        *(undefined8 *)(param_2 + 0x20) = uVar6;
        FUN_1000153b4(param_3,auStack_90);
        *(undefined8 *)(param_3 + 0x18) = uStack_78;
        *(undefined8 *)(param_3 + 0x10) = local_80;
        *(ulong *)(param_3 + 0x28) = CONCAT44(local_64,uStack_68);
        *(undefined8 *)(param_3 + 0x20) = uStack_70;
        *(undefined8 *)(param_3 + 0x34) = uStack_5c;
        *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_60,local_64);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
        }
        iVar1 = (*(code *)*param_6)(param_2,param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar3 + 3);
        }
        else {
          thunk_FUN_1004e439c(auStack_90,param_1);
          uStack_78 = *(undefined8 *)(param_1 + 0x18);
          local_80 = *(undefined8 *)(param_1 + 0x10);
          uStack_70 = *(undefined8 *)(param_1 + 0x20);
          uStack_68 = (undefined4)*(undefined8 *)(param_1 + 0x28);
          uStack_5c = *(undefined8 *)(param_1 + 0x34);
          local_64 = (undefined4)*(undefined8 *)(param_1 + 0x2c);
          uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
          FUN_1000153b4(param_1,param_2);
          uVar5 = *(undefined8 *)(param_2 + 0x18);
          uVar4 = *(undefined8 *)(param_2 + 0x10);
          uVar7 = *(undefined8 *)(param_2 + 0x28);
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          uVar8 = *(undefined8 *)(param_2 + 0x2c);
          *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
          *(undefined8 *)(param_1 + 0x2c) = uVar8;
          *(undefined8 *)(param_1 + 0x18) = uVar5;
          *(undefined8 *)(param_1 + 0x10) = uVar4;
          *(undefined8 *)(param_1 + 0x28) = uVar7;
          *(undefined8 *)(param_1 + 0x20) = uVar6;
          FUN_1000153b4(param_2,auStack_90);
          *(undefined8 *)(param_2 + 0x18) = uStack_78;
          *(undefined8 *)(param_2 + 0x10) = local_80;
          *(ulong *)(param_2 + 0x28) = CONCAT44(local_64,uStack_68);
          *(undefined8 *)(param_2 + 0x20) = uStack_70;
          *(undefined8 *)(param_2 + 0x34) = uStack_5c;
          *(ulong *)(param_2 + 0x2c) = CONCAT44(uStack_60,local_64);
          if (local_88 != (void *)0x0) {
            operator_delete__(local_88);
          }
          uVar2 = (ulong)(iVar3 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_10031d058(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  FUN_10031c9ac(param_1,param_1 + 0x40,param_1 + 0x80,param_3);
  if (param_1 + 0xc0 != param_2) {
    lVar5 = 0;
    lVar6 = param_1 + 0xc0;
    lVar4 = param_1 + 0x80;
    do {
      lVar3 = lVar6;
      iVar1 = (*(code *)*param_3)(lVar3,lVar4);
      if (iVar1 != 0) {
        thunk_FUN_1004e439c(auStack_a0,lVar3);
        uStack_88 = *(undefined8 *)(lVar3 + 0x18);
        local_90 = *(undefined8 *)(lVar3 + 0x10);
        uStack_80 = *(undefined8 *)(lVar3 + 0x20);
        uStack_78 = (undefined4)*(undefined8 *)(lVar3 + 0x28);
        uStack_6c = *(undefined8 *)(lVar3 + 0x34);
        local_74 = (undefined4)*(undefined8 *)(lVar3 + 0x2c);
        uStack_70 = (undefined4)((ulong)*(undefined8 *)(lVar3 + 0x2c) >> 0x20);
        lVar6 = lVar5;
        do {
          lVar4 = param_1 + lVar6;
          FUN_1000153b4(lVar4 + 0xc0,lVar4 + 0x80);
          *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0x98);
          *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0x90);
          *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(lVar4 + 0xa8);
          *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar4 + 0xa0);
          *(undefined8 *)(lVar4 + 0xf4) = *(undefined8 *)(lVar4 + 0xb4);
          *(undefined8 *)(lVar4 + 0xec) = *(undefined8 *)(lVar4 + 0xac);
          if (lVar6 == -0x80) break;
          uVar2 = (*(code *)*param_3)(auStack_a0,lVar4 + 0x40);
          lVar6 = lVar6 + -0x40;
        } while ((uVar2 & 1) != 0);
        FUN_1000153b4(lVar4 + 0x80,auStack_a0);
        *(undefined8 *)(lVar4 + 0x98) = uStack_88;
        *(undefined8 *)(lVar4 + 0x90) = local_90;
        *(ulong *)(lVar4 + 0xa8) = CONCAT44(local_74,uStack_78);
        *(undefined8 *)(lVar4 + 0xa0) = uStack_80;
        *(undefined8 *)(lVar4 + 0xb4) = uStack_6c;
        *(ulong *)(lVar4 + 0xac) = CONCAT44(uStack_70,local_74);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
      }
      lVar5 = lVar5 + 0x40;
      lVar6 = lVar3 + 0x40;
      lVar4 = lVar3;
    } while (lVar3 + 0x40 != param_2);
  }
  return;
}




bool FUN_10031d184(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  switch(param_2 - param_1 >> 6) {
  case 0:
  case 1:
    break;
  case 2:
    lVar6 = param_2 + -0x40;
    iVar1 = (*(code *)*param_3)(lVar6,param_1);
    if (iVar1 != 0) {
      thunk_FUN_1004e439c(auStack_a0,param_1);
      uStack_88 = *(undefined8 *)(param_1 + 0x18);
      local_90 = *(undefined8 *)(param_1 + 0x10);
      uStack_80 = *(undefined8 *)(param_1 + 0x20);
      uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      uStack_6c = *(undefined8 *)(param_1 + 0x34);
      local_74 = (undefined4)*(undefined8 *)(param_1 + 0x2c);
      uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      FUN_1000153b4(param_1,lVar6);
      uVar9 = *(undefined8 *)(param_2 + -0x28);
      uVar8 = *(undefined8 *)(param_2 + -0x30);
      uVar11 = *(undefined8 *)(param_2 + -0x18);
      uVar10 = *(undefined8 *)(param_2 + -0x20);
      uVar12 = *(undefined8 *)(param_2 + -0x14);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + -0xc);
      *(undefined8 *)(param_1 + 0x2c) = uVar12;
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      *(undefined8 *)(param_1 + 0x28) = uVar11;
      *(undefined8 *)(param_1 + 0x20) = uVar10;
      FUN_1000153b4(lVar6,auStack_a0);
      *(undefined8 *)(param_2 + -0x28) = uStack_88;
      *(undefined8 *)(param_2 + -0x30) = local_90;
      *(ulong *)(param_2 + -0x18) = CONCAT44(local_74,uStack_78);
      *(undefined8 *)(param_2 + -0x20) = uStack_80;
      *(undefined8 *)(param_2 + -0xc) = uStack_6c;
      *(ulong *)(param_2 + -0x14) = CONCAT44(uStack_70,local_74);
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
      }
    }
    break;
  case 3:
    FUN_10031c9ac(param_1,param_1 + 0x40,param_2 + -0x40,param_3);
    break;
  case 4:
    FUN_10031cc34(param_1,param_1 + 0x40,param_1 + 0x80,param_2 + -0x40,param_3);
    break;
  case 5:
    FUN_10031ce00(param_1,param_1 + 0x40,param_1 + 0x80,param_1 + 0xc0,param_2 + -0x40,param_3);
    break;
  default:
    FUN_10031c9ac(param_1,param_1 + 0x40,param_1 + 0x80,param_3);
    if (param_1 + 0xc0 != param_2) {
      lVar6 = 0;
      iVar1 = 0;
      lVar7 = param_1 + 0xc0;
      lVar5 = param_1 + 0x80;
      do {
        lVar4 = lVar7;
        iVar2 = (*(code *)*param_3)(lVar4,lVar5);
        if (iVar2 != 0) {
          thunk_FUN_1004e439c(auStack_a0,lVar4);
          uStack_88 = *(undefined8 *)(lVar4 + 0x18);
          local_90 = *(undefined8 *)(lVar4 + 0x10);
          uStack_80 = *(undefined8 *)(lVar4 + 0x20);
          uStack_78 = (undefined4)*(undefined8 *)(lVar4 + 0x28);
          uStack_6c = *(undefined8 *)(lVar4 + 0x34);
          local_74 = (undefined4)*(undefined8 *)(lVar4 + 0x2c);
          uStack_70 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x2c) >> 0x20);
          lVar7 = lVar6;
          do {
            lVar5 = param_1 + lVar7;
            FUN_1000153b4(lVar5 + 0xc0,lVar5 + 0x80);
            *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(lVar5 + 0x98);
            *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(lVar5 + 0x90);
            *(undefined8 *)(lVar5 + 0xe8) = *(undefined8 *)(lVar5 + 0xa8);
            *(undefined8 *)(lVar5 + 0xe0) = *(undefined8 *)(lVar5 + 0xa0);
            *(undefined8 *)(lVar5 + 0xf4) = *(undefined8 *)(lVar5 + 0xb4);
            *(undefined8 *)(lVar5 + 0xec) = *(undefined8 *)(lVar5 + 0xac);
            if (lVar7 == -0x80) break;
            uVar3 = (*(code *)*param_3)(auStack_a0,lVar5 + 0x40);
            lVar7 = lVar7 + -0x40;
          } while ((uVar3 & 1) != 0);
          FUN_1000153b4(lVar5 + 0x80,auStack_a0);
          *(undefined8 *)(lVar5 + 0x98) = uStack_88;
          *(undefined8 *)(lVar5 + 0x90) = local_90;
          *(ulong *)(lVar5 + 0xa8) = CONCAT44(local_74,uStack_78);
          *(undefined8 *)(lVar5 + 0xa0) = uStack_80;
          *(undefined8 *)(lVar5 + 0xb4) = uStack_6c;
          *(ulong *)(lVar5 + 0xac) = CONCAT44(uStack_70,local_74);
          if (local_98 != (void *)0x0) {
            operator_delete__(local_98);
          }
          iVar1 = iVar1 + 1;
          if (iVar1 == 8) {
            return lVar4 + 0x40 == param_2;
          }
        }
        lVar6 = lVar6 + 0x40;
        lVar7 = lVar4 + 0x40;
        lVar5 = lVar4;
      } while (lVar4 + 0x40 != param_2);
    }
  }
  return true;
}




void FUN_10031d3d4(void)

{
  if (DAT_101e468f8 == 0) {
    operator_new(0xb8);
    DAT_101e468f8 = FUN_10031dcd4();
  }
  return;
}




void FUN_10031d408(void)

{
  if (DAT_101e468f8 != (long *)0x0) {
    (**(code **)(*DAT_101e468f8 + 8))();
    DAT_101e468f8 = (long *)0x0;
  }
  return;
}




undefined8 FUN_10031d43c(void)

{
  return DAT_101e468f8;
}




void FUN_10031d448(void)

{
  FUN_10031d454(DAT_101e468f8);
  return;
}




void FUN_10031d454(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_1004f1a74(0);
  if (lVar2 - *(long *)(param_1 + 0xa8) < 0x3c) {
    lVar2 = *(long *)(param_1 + 0xa8) + 0x3c;
  }
  else {
    iVar1 = FUN_1004eef24();
    if (iVar1 != 0) {
      lVar3 = FUN_100134104();
      if (*(char *)(lVar3 + 10) != '\0') {
        uVar4 = FUN_1004f1670(param_1 + 0x30);
        if ((uVar4 & 1) == 0) {
          FUN_1004f0200(param_1 + 0x30);
          lVar2 = lVar2 + 600;
          goto LAB_10031d4b4;
        }
      }
    }
    lVar2 = lVar2 + 10;
  }
LAB_10031d4b4:
  *(long *)(param_1 + 0xa0) = lVar2;
  return;
}




void FUN_10031d4d8(byte *param_1,byte *param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  uint uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  ulong local_c8;
  void *local_b8 [2];
  char local_a1;
  void *local_a0 [2];
  char local_89;
  undefined1 auStack_88 [32];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if ((DAT_101e468f8 != 0) && (*(int *)(DAT_101e468f8 + 0x70) != 0)) {
    local_c8 = 0;
    do {
      lVar5 = *(long *)(DAT_101e468f8 + 0x78);
      bVar3 = param_1[0x17];
      uVar6 = (ulong)(uint)(int)(char)bVar3;
      sVar7 = *(size_t *)(param_1 + 8);
      sVar1 = sVar7;
      if (-1 < (char)bVar3) {
        sVar1 = (ulong)bVar3;
      }
      if (sVar1 != 0) {
        lVar15 = lVar5 + local_c8 * 0x98;
        puVar16 = (uint *)(lVar15 + 0x58);
        uVar12 = *puVar16;
        if (uVar12 != 0) {
          uVar17 = 0;
          do {
            lVar14 = *(long *)(lVar15 + 0x60);
            puVar11 = (undefined8 *)(lVar14 + uVar17 * 0x28);
            bVar3 = *(byte *)((long)puVar11 + 0x17);
            uVar9 = (ulong)bVar3;
            sVar1 = puVar11[1];
            if (-1 < (char)bVar3) {
              sVar1 = uVar9;
            }
            if (-1 < (char)uVar6) {
              sVar7 = uVar6 & 0xff;
            }
            if (sVar1 == sVar7) {
              puVar2 = (void *)*puVar11;
              if (-1 < (char)bVar3) {
                puVar2 = puVar11;
              }
              pbVar10 = *(byte **)param_1;
              if (-1 < (char)uVar6) {
                pbVar10 = param_1;
              }
              if ((char)bVar3 < '\0') {
                if ((sVar1 == 0) || (iVar4 = _memcmp(puVar2,pbVar10,sVar1), iVar4 == 0))
                goto LAB_10031d610;
              }
              else if (sVar1 == 0) {
LAB_10031d610:
                if (-1 < *(int *)(lVar14 + uVar17 * 0x28 + 0x20)) {
                  FUN_1000f0a04(auStack_88,"%d");
                  FUN_10001549c(local_a0,"[EVENT_RANK]");
                  FUN_10001549c(local_b8,auStack_88);
                  FUN_10012cd4c(param_3,local_a0,local_b8);
                  if (local_a1 < '\0') {
                    operator_delete(local_b8[0]);
                  }
                  if (local_89 < '\0') {
                    operator_delete(local_a0[0]);
                  }
                }
                if (-2 < (int)*(float *)(lVar14 + uVar17 * 0x28 + 0x1c)) {
                  FUN_1000f0a04(auStack_88,"%d");
                  FUN_10001549c(local_a0,"[EVENT_SCORE]");
                  FUN_10001549c(local_b8,auStack_88);
                  FUN_10012cd4c(param_3,local_a0,local_b8);
                  if (local_a1 < '\0') {
                    operator_delete(local_b8[0]);
                  }
                  if (local_89 < '\0') {
                    operator_delete(local_a0[0]);
                  }
                }
                uVar12 = *puVar16;
              }
              else if ((uint)*pbVar10 == ((uint)(void *)*puVar11 & 0xff)) {
                pbVar8 = (byte *)(lVar14 + uVar17 * 0x28);
                do {
                  uVar9 = uVar9 - 1;
                  pbVar10 = pbVar10 + 1;
                  pbVar8 = pbVar8 + 1;
                  if (uVar9 == 0) goto LAB_10031d610;
                } while (*pbVar8 == *pbVar10);
              }
            }
            uVar17 = uVar17 + 1;
            if (uVar12 <= uVar17) break;
            uVar6 = (ulong)param_1[0x17];
            sVar7 = *(size_t *)(param_1 + 8);
          } while( true );
        }
      }
      bVar3 = param_2[0x17];
      uVar6 = (ulong)(uint)(int)(char)bVar3;
      sVar7 = *(size_t *)(param_2 + 8);
      sVar1 = sVar7;
      if (-1 < (char)bVar3) {
        sVar1 = (ulong)bVar3;
      }
      if (sVar1 != 0) {
        lVar5 = lVar5 + local_c8 * 0x98;
        puVar16 = (uint *)(lVar5 + 0x68);
        uVar12 = *puVar16;
        if (uVar12 != 0) {
          uVar17 = 0;
          do {
            lVar15 = *(long *)(lVar5 + 0x70);
            puVar11 = (undefined8 *)(lVar15 + uVar17 * 0x28);
            bVar3 = *(byte *)((long)puVar11 + 0x17);
            uVar9 = (ulong)bVar3;
            sVar1 = puVar11[1];
            if (-1 < (char)bVar3) {
              sVar1 = uVar9;
            }
            if (-1 < (char)uVar6) {
              sVar7 = uVar6 & 0xff;
            }
            if (sVar1 == sVar7) {
              puVar2 = (void *)*puVar11;
              if (-1 < (char)bVar3) {
                puVar2 = puVar11;
              }
              pbVar10 = *(byte **)param_2;
              if (-1 < (char)uVar6) {
                pbVar10 = param_2;
              }
              if ((char)bVar3 < '\0') {
                if ((sVar1 == 0) || (iVar4 = _memcmp(puVar2,pbVar10,sVar1), iVar4 == 0))
                goto LAB_10031d7dc;
              }
              else if (sVar1 == 0) {
LAB_10031d7dc:
                piVar13 = (int *)(lVar15 + uVar17 * 0x28 + 0x18);
                if (-1 < *piVar13) {
                  FUN_1000f0a04(auStack_88,"%d");
                  FUN_10001549c(local_a0,"[EVENT_WINS]");
                  FUN_10001549c(local_b8,auStack_88);
                  FUN_10012cd4c(param_3,local_a0,local_b8);
                  if (local_a1 < '\0') {
                    operator_delete(local_b8[0]);
                  }
                  if (local_89 < '\0') {
                    operator_delete(local_a0[0]);
                  }
                }
                piVar18 = (int *)(lVar15 + uVar17 * 0x28 + 0x20);
                if (-1 < *piVar18) {
                  FUN_1000f0a04(auStack_88,"%d");
                  FUN_10001549c(local_a0,"[EVENT_MAX_WINS]");
                  FUN_10001549c(local_b8,auStack_88);
                  FUN_10012cd4c(param_3,local_a0,local_b8);
                  if (local_a1 < '\0') {
                    operator_delete(local_b8[0]);
                  }
                  if (local_89 < '\0') {
                    operator_delete(local_a0[0]);
                  }
                  if ((-1 < *piVar13) && (-1 < *piVar18)) {
                    FUN_1000f0a04(auStack_88,"%d");
                    FUN_10001549c(local_a0,"[EVENT_REMAINING_WINS]");
                    FUN_10001549c(local_b8,auStack_88);
                    FUN_10012cd4c(param_3,local_a0,local_b8);
                    if (local_a1 < '\0') {
                      operator_delete(local_b8[0]);
                    }
                    if (local_89 < '\0') {
                      operator_delete(local_a0[0]);
                    }
                  }
                }
                piVar13 = (int *)(lVar15 + uVar17 * 0x28 + 0x1c);
                if (-1 < *piVar13) {
                  FUN_1000f0a04(auStack_88,"%d");
                  FUN_10001549c(local_a0,"[EVENT_LOSSES]");
                  FUN_10001549c(local_b8,auStack_88);
                  FUN_10012cd4c(param_3,local_a0,local_b8);
                  if (local_a1 < '\0') {
                    operator_delete(local_b8[0]);
                  }
                  if (local_89 < '\0') {
                    operator_delete(local_a0[0]);
                  }
                }
                piVar18 = (int *)(lVar15 + uVar17 * 0x28 + 0x24);
                if (-1 < *piVar18) {
                  FUN_1000f0a04(auStack_88,"%d");
                  FUN_10001549c(local_a0,"[EVENT_MAX_LOSSES]");
                  FUN_10001549c(local_b8,auStack_88);
                  FUN_10012cd4c(param_3,local_a0,local_b8);
                  if (local_a1 < '\0') {
                    operator_delete(local_b8[0]);
                  }
                  if (local_89 < '\0') {
                    operator_delete(local_a0[0]);
                  }
                  if ((-1 < *piVar13) && (-1 < *piVar18)) {
                    FUN_1000f0a04(auStack_88,"%d");
                    FUN_10001549c(local_a0,"[EVENT_REMAINING_LOSSES]");
                    FUN_10001549c(local_b8,auStack_88);
                    FUN_10012cd4c(param_3,local_a0,local_b8);
                    if (local_a1 < '\0') {
                      operator_delete(local_b8[0]);
                    }
                    if (local_89 < '\0') {
                      operator_delete(local_a0[0]);
                    }
                  }
                }
                uVar12 = *puVar16;
              }
              else if ((uint)*pbVar10 == ((uint)(void *)*puVar11 & 0xff)) {
                pbVar8 = (byte *)(lVar15 + uVar17 * 0x28);
                do {
                  uVar9 = uVar9 - 1;
                  pbVar10 = pbVar10 + 1;
                  pbVar8 = pbVar8 + 1;
                  if (uVar9 == 0) goto LAB_10031d7dc;
                } while (*pbVar8 == *pbVar10);
              }
            }
            uVar17 = uVar17 + 1;
            if (uVar12 <= uVar17) break;
            uVar6 = (ulong)param_2[0x17];
            sVar7 = *(size_t *)(param_2 + 8);
          } while( true );
        }
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 < *(uint *)(DAT_101e468f8 + 0x70));
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




long FUN_10031dae8(long param_1)

{
  return param_1 + 0x70;
}




undefined8 FUN_10031daf0(byte *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  
  if (DAT_101e468f8 != 0) {
    bVar5 = param_1[0x17];
    uVar8 = (ulong)(uint)(int)(char)bVar5;
    sVar10 = *(size_t *)(param_1 + 8);
    sVar2 = sVar10;
    if (-1 < (char)bVar5) {
      sVar2 = (ulong)bVar5;
    }
    if ((sVar2 != 0) && (uVar3 = *(uint *)(DAT_101e468f8 + 0x70), uVar3 != 0)) {
      uVar17 = 0;
      lVar14 = *(long *)(DAT_101e468f8 + 0x78);
      do {
        uVar4 = *(uint *)(lVar14 + uVar17 * 0x98 + 0x78);
        bVar6 = -1 < (char)uVar8;
        if (bVar6) {
          sVar10 = uVar8 & 0xff;
        }
        pbVar1 = *(byte **)param_1;
        if (bVar6) {
          pbVar1 = param_1;
        }
        if (uVar4 != 0) {
          uVar8 = 0;
          lVar16 = *(long *)(lVar14 + uVar17 * 0x98 + 0x80);
          pbVar18 = (byte *)(lVar16 + 1);
          bVar6 = true;
          do {
            puVar12 = (undefined8 *)(lVar16 + uVar8 * 0x28);
            bVar5 = *(byte *)((long)puVar12 + 0x17);
            uVar9 = (ulong)bVar5;
            sVar2 = puVar12[1];
            if (-1 < (char)bVar5) {
              sVar2 = uVar9;
            }
            if (sVar2 == sVar10) {
              if ((char)bVar5 < '\0') {
                if ((sVar10 == 0) || (iVar7 = _memcmp((void *)*puVar12,pbVar1,sVar10), iVar7 == 0))
                {
LAB_10031dc40:
                  uVar8 = uVar8 & 0xffffffff;
                  lVar13 = lVar16 + uVar8 * 0x28;
                  *param_2 = *(undefined4 *)(lVar13 + 0x18);
                  if (*(char *)(lVar13 + 0x24) != '\0') {
                    *param_4 = *(undefined4 *)(lVar16 + uVar8 * 0x28 + 0x1c);
                  }
                  if (*(char *)(lVar16 + uVar8 * 0x28 + 0x25) != '\0') {
                    *param_4 = *(undefined4 *)(lVar16 + uVar8 * 0x28 + 0x20);
                  }
                  if (bVar6) {
                    return 1;
                  }
                  break;
                }
              }
              else {
                if (sVar10 == 0) goto LAB_10031dc40;
                pbVar15 = pbVar18;
                pbVar11 = pbVar1;
                if ((uint)*pbVar1 == ((uint)(void *)*puVar12 & 0xff)) {
                  do {
                    pbVar11 = pbVar11 + 1;
                    uVar9 = uVar9 - 1;
                    if (uVar9 == 0) goto LAB_10031dc40;
                    bVar5 = *pbVar15;
                    pbVar15 = pbVar15 + 1;
                  } while (bVar5 == *pbVar11);
                }
              }
            }
            uVar8 = uVar8 + 1;
            pbVar18 = pbVar18 + 0x28;
            bVar6 = uVar8 < uVar4;
          } while (uVar8 != uVar4);
        }
        uVar17 = uVar17 + 1;
        if (uVar17 == uVar3) {
          return 0;
        }
        uVar8 = (ulong)param_1[0x17];
        sVar10 = *(size_t *)(param_1 + 8);
      } while( true );
    }
  }
  return 0;
}




undefined8 * FUN_10031dcd4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_30;
  code *pcStack_28;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_10031dd68_101491470;
  param_1[3] = &PTR_FUN_101491810;
  FUN_1004f1580(param_1 + 6);
  param_1[6] = &PTR_FUN_10145bfb0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  pcStack_28 = thunk_FUN_10031de54;
  local_30 = param_1;
  FUN_100643618(0xcd,&local_30,0,1);
  return param_1;
}




void FUN_10031dd68(undefined8 *param_1)

{
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_10031dd68_101491470;
  param_1[3] = &PTR_FUN_101491810;
  pcStack_38 = thunk_FUN_10031de54;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  if ((void *)param_1[0x13] != (void *)0x0) {
    operator_delete__((void *)param_1[0x13]);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  FUN_10015b678(param_1 + 0x10,1);
  FUN_10015bcf8(param_1 + 0xe,1);
  param_1[6] = &PTR_FUN_10145bfb0;
  FUN_10015bcf8(param_1 + 0xb,1);
  FUN_1004f15a8(param_1 + 6);
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void thunk_FUN_10031dd68(void)

{
  FUN_10031dd68();
  return;
}




void FUN_10031de20(long param_1)

{
  FUN_10031dd68(param_1 + -0x18);
  return;
}




void FUN_10031de28(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031dd68();
  operator_delete(pvVar1);
  return;
}




void FUN_10031de3c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031dd68(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_10031de54(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  
  lVar3 = FUN_1004f1a74(0);
  if (lVar3 <= *(long *)(param_1 + 0xa0)) {
    iVar2 = FUN_1004f1698(param_1 + 0x30);
    if (iVar2 != 0) {
      iVar2 = FUN_1004f1680(param_1 + 0x30);
      if (iVar2 == 0) {
        *(long *)(param_1 + 0xa0) = lVar3 + 10;
      }
      else {
        puVar1 = (uint *)(param_1 + 0x70);
        FUN_10015bcf8(puVar1,0);
        FUN_10031e6ac(puVar1,param_1 + 0x58);
        FUN_10015b678(param_1 + 0x80,0);
        uVar4 = *(uint *)(param_1 + 0x70);
        if (uVar4 != 0) {
          uVar8 = 0;
          do {
            lVar11 = *(long *)(param_1 + 0x78) + uVar8 * 0x98;
            puVar12 = (uint *)(lVar11 + 0x48);
            uVar5 = *puVar12;
            if (uVar5 != 0) {
              uVar13 = 0;
              do {
                lVar9 = *(long *)(lVar11 + 0x50) + uVar13 * 0x58;
                puVar10 = (uint *)(lVar9 + 0x48);
                if (*puVar10 != 0) {
                  lVar6 = 0;
                  uVar7 = 0;
                  do {
                    FUN_10031e228(param_1 + 0x80,*(long *)(lVar9 + 0x50) + lVar6);
                    uVar7 = uVar7 + 1;
                    lVar6 = lVar6 + 0x20;
                  } while (uVar7 < *puVar10);
                  uVar5 = *puVar12;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar5);
              uVar4 = *puVar1;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar4);
        }
        uVar4 = *(uint *)(param_1 + 0x68);
        if ((int)uVar4 < 0) {
          uVar4 = 600;
        }
        *(ulong *)(param_1 + 0xa0) = lVar3 + (ulong)uVar4;
        *(long *)(param_1 + 0xa8) = lVar3;
        *(undefined1 *)(param_1 + 0xb0) = 1;
        if (*(int *)(param_1 + 0x90) != 0) {
          lVar3 = *(long *)(param_1 + 0x98);
          do {
            if (*(code **)(lVar3 + 8) == (code *)0x0) {
              (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
            }
            else {
              (**(code **)(lVar3 + 8))();
            }
            lVar3 = lVar3 + 0x20;
          } while (lVar3 != *(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0x90) * 0x20);
        }
      }
    }
    return;
  }
  FUN_10031d454(param_1);
  return;
}




void FUN_10031e024(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (ulong)*(uint *)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x70) != 0) {
    uVar5 = 0;
    do {
      uVar1 = *(uint *)(*(long *)(param_2 + 0x78) + uVar5 * 0x98 + 0x48);
      uVar3 = (ulong)uVar1;
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(*(long *)(param_2 + 0x78) + uVar5 * 0x98 + 0x50) + 4);
        do {
          if (*piVar4 == param_3) {
            FUN_10031e0bc(param_1);
            uVar2 = (ulong)*(uint *)(param_2 + 0x70);
            break;
          }
          piVar4 = piVar4 + 0x16;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}




void FUN_10031e0bc(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10015b194(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x98;
  FUN_10003330c(lVar4 + -0x98,param_2);
  FUN_10003330c(lVar4 + -0x80,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x68,param_2 + 0x30);
  FUN_10015b324(lVar4 + -0x50,param_2 + 0x48);
  FUN_10015b6ec(lVar4 + -0x40,param_2 + 0x58);
  FUN_10015b83c(lVar4 + -0x30,param_2 + 0x68);
  FUN_10015b98c(lVar4 + -0x20,param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




ulong FUN_10031e194(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar4 = *(uint *)(param_1 + 0x80);
  if (uVar4 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x88);
      cVar1 = *(char *)(lVar5 + lVar6 + 0x17);
      if (cVar1 < '\0') {
        if (*(int *)(lVar5 + lVar6 + 8) != 0) {
          pcVar3 = *(char **)(lVar5 + lVar6);
          goto LAB_10031e1e4;
        }
      }
      else if (cVar1 != '\0') {
        pcVar3 = (char *)(lVar5 + lVar6);
LAB_10031e1e4:
        iVar2 = _strcmp(pcVar3,param_2);
        if (iVar2 == 0) {
          return (ulong)*(byte *)(*(long *)(param_1 + 0x88) + lVar6 + 0x18);
        }
        uVar4 = *(uint *)(param_1 + 0x80);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar7 < uVar4);
  }
  return 0xffffffff;
}




void FUN_10031e228(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10015b5a8(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined1 *)(lVar1 + -8) = *(undefined1 *)(param_2 + 0x18);
  return;
}




void FUN_10031e2b4(long param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_10031d454();
  return;
}




void FUN_10031e2c0(long param_1)

{
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  FUN_10031d454(param_1 + -0x18);
  return;
}




void FUN_10031e2d4(long param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_10031d454();
  return;
}




void FUN_10031e2e0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    lVar1 = *(long *)(param_1 + 0x98);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0x90) * 0x20);
  }
  return;
}




long FUN_10031e338(long param_1)

{
  return param_1 + 0x90;
}




undefined8 FUN_10031e340(undefined8 param_1,int *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1002479cc();
  *puVar1 = &PTR_FUN_101491840;
  puVar1[0x6d] = &PTR_FUN_101491a28;
  puVar1[0x17e] = &PTR_FUN_101491a50;
  puVar1[0x182] = 0;
  puVar1[0x181] = 0;
  if (*param_2 == 3) {
    FUN_100169740(puVar1 + 0x181,param_2 + 0xe);
  }
  return param_1;
}




undefined8 thunk_FUN_10031e340(undefined8 param_1,int *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1002479cc();
  *puVar1 = &PTR_FUN_101491840;
  puVar1[0x6d] = &PTR_FUN_101491a28;
  puVar1[0x17e] = &PTR_FUN_101491a50;
  puVar1[0x182] = 0;
  puVar1[0x181] = 0;
  if (*param_2 == 3) {
    FUN_100169740(puVar1 + 0x181,param_2 + 0xe);
  }
  return param_1;
}




ulong FUN_10031e3a8(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  void *pvVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = (ulong)*(uint *)(param_1 + 0xc08);
  if (*(uint *)(param_1 + 0xc08) != 0) {
    uVar13 = 0;
    do {
      pbVar11 = (byte *)(*(long *)(param_1 + 0xc10) + uVar13 * 0x18);
      bVar4 = *(byte *)(param_2 + 0x38f);
      uVar7 = (ulong)bVar4;
      sVar1 = *(size_t *)(param_2 + 0x380);
      if (-1 < (char)bVar4) {
        sVar1 = uVar7;
      }
      bVar5 = pbVar11[0x17];
      sVar2 = *(size_t *)(pbVar11 + 8);
      if (-1 < (char)bVar5) {
        sVar2 = (ulong)bVar5;
      }
      if (sVar1 == sVar2) {
        pvVar9 = *(void **)(param_2 + 0x378);
        puVar3 = pvVar9;
        if (-1 < (char)bVar4) {
          puVar3 = (undefined8 *)(param_2 + 0x378);
        }
        pbVar8 = *(byte **)pbVar11;
        if (-1 < (char)bVar5) {
          pbVar8 = pbVar11;
        }
        if ((char)bVar4 < '\0') {
          if (sVar1 == 0) {
            return 1;
          }
          iVar6 = _memcmp(puVar3,pbVar8,sVar1);
          if (iVar6 == 0) {
            return 1;
          }
        }
        else {
          if (sVar1 == 0) {
            return 1;
          }
          pbVar10 = (byte *)(param_2 + 0x379);
          if ((uint)*pbVar8 == ((uint)pvVar9 & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar8 = pbVar8 + 1;
              if (uVar7 == 0) {
                return 1;
              }
              bVar4 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar4 == *pbVar8);
          }
        }
      }
      if (sVar2 == 1) {
        iVar6 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,0x1013e4642);
        if (iVar6 == 0) {
          return 1;
        }
        uVar12 = (ulong)*(uint *)(param_1 + 0xc08);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar12);
    uVar12 = 0;
  }
  return uVar12;
}




void FUN_10031e4ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101491840;
  param_1[0x6d] = &PTR_FUN_101491a28;
  param_1[0x17e] = &PTR_FUN_101491a50;
  FUN_10001629c(param_1 + 0x181,1);
  FUN_100247a5c(param_1);
  return;
}




void FUN_10031e534(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101491840;
  param_1[0x6d] = &PTR_FUN_101491a28;
  param_1[0x17e] = &PTR_FUN_101491a50;
  FUN_10001629c(param_1 + 0x181,1);
  pvVar1 = (void *)FUN_100247a5c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10031e580(undefined8 *param_1)

{
  param_1[-0x6d] = &PTR_FUN_101491840;
  *param_1 = &PTR_FUN_101491a28;
  param_1[0x111] = &PTR_FUN_101491a50;
  FUN_10001629c(param_1 + 0x114,1);
  FUN_100247a5c(param_1 + -0x6d);
  return;
}




void FUN_10031e5c8(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x6d] = &PTR_FUN_101491840;
  *param_1 = &PTR_FUN_101491a28;
  param_1[0x111] = &PTR_FUN_101491a50;
  FUN_10001629c(param_1 + 0x114,1);
  pvVar1 = (void *)FUN_100247a5c(param_1 + -0x6d);
  operator_delete(pvVar1);
  return;
}




void FUN_10031e614(undefined8 *param_1)

{
  param_1[-0x17e] = &PTR_FUN_101491840;
  param_1[-0x111] = &PTR_FUN_101491a28;
  *param_1 = &PTR_FUN_101491a50;
  FUN_10001629c(param_1 + 3,1);
  FUN_100247a5c(param_1 + -0x17e);
  return;
}




void FUN_10031e65c(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0x17e] = &PTR_FUN_101491840;
  param_1[-0x111] = &PTR_FUN_101491a28;
  *param_1 = &PTR_FUN_101491a50;
  FUN_10001629c(param_1 + 3,1);
  pvVar1 = (void *)FUN_100247a5c(param_1 + -0x17e);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10031de54(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  
  lVar3 = FUN_1004f1a74(0);
  if (lVar3 <= *(long *)(param_1 + 0xa0)) {
    iVar2 = FUN_1004f1698(param_1 + 0x30);
    if (iVar2 != 0) {
      iVar2 = FUN_1004f1680(param_1 + 0x30);
      if (iVar2 == 0) {
        *(long *)(param_1 + 0xa0) = lVar3 + 10;
      }
      else {
        puVar1 = (uint *)(param_1 + 0x70);
        FUN_10015bcf8(puVar1,0);
        FUN_10031e6ac(puVar1,param_1 + 0x58);
        FUN_10015b678(param_1 + 0x80,0);
        uVar4 = *(uint *)(param_1 + 0x70);
        if (uVar4 != 0) {
          uVar8 = 0;
          do {
            lVar11 = *(long *)(param_1 + 0x78) + uVar8 * 0x98;
            puVar12 = (uint *)(lVar11 + 0x48);
            uVar5 = *puVar12;
            if (uVar5 != 0) {
              uVar13 = 0;
              do {
                lVar9 = *(long *)(lVar11 + 0x50) + uVar13 * 0x58;
                puVar10 = (uint *)(lVar9 + 0x48);
                if (*puVar10 != 0) {
                  lVar6 = 0;
                  uVar7 = 0;
                  do {
                    FUN_10031e228(param_1 + 0x80,*(long *)(lVar9 + 0x50) + lVar6);
                    uVar7 = uVar7 + 1;
                    lVar6 = lVar6 + 0x20;
                  } while (uVar7 < *puVar10);
                  uVar5 = *puVar12;
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 < uVar5);
              uVar4 = *puVar1;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar4);
        }
        uVar4 = *(uint *)(param_1 + 0x68);
        if ((int)uVar4 < 0) {
          uVar4 = 600;
        }
        *(ulong *)(param_1 + 0xa0) = lVar3 + (ulong)uVar4;
        *(long *)(param_1 + 0xa8) = lVar3;
        *(undefined1 *)(param_1 + 0xb0) = 1;
        if (*(int *)(param_1 + 0x90) != 0) {
          lVar3 = *(long *)(param_1 + 0x98);
          do {
            if (*(code **)(lVar3 + 8) == (code *)0x0) {
              (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
            }
            else {
              (**(code **)(lVar3 + 8))();
            }
            lVar3 = lVar3 + 0x20;
          } while (lVar3 != *(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0x90) * 0x20);
        }
      }
    }
    return;
  }
  FUN_10031d454(param_1);
  return;
}




void FUN_10031e6ac(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_1 != param_2) {
    FUN_10015bcf8(param_1,1);
    FUN_10015b194(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        lVar1 = lVar7 + lVar5;
        lVar2 = lVar6 + lVar5;
        FUN_10003330c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
        FUN_10015b324(lVar1 + 0x48,lVar2 + 0x48);
        FUN_10015b6ec(lVar1 + 0x58,lVar2 + 0x58);
        FUN_10015b83c(lVar1 + 0x68,lVar2 + 0x68);
        FUN_10015b98c(lVar1 + 0x78,lVar2 + 0x78);
        uVar8 = *(undefined8 *)(lVar2 + 0x88);
        *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(lVar2 + 0x90);
        *(undefined8 *)(lVar1 + 0x88) = uVar8;
        lVar5 = lVar5 + 0x98;
      } while ((ulong)uVar3 * 0x98 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




undefined8 FUN_10031e794(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_4a;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = FUN_1004e313c();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10034ed9c();
  local_118[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_4a = 0;
  local_48 = 0;
  local_44 = 0x3f000000;
  local_40 = 0;
  uStack_38 = 0;
  FUN_10031e858((undefined8 *)(lVar1 + 0x10),uVar2,local_118);
  FUN_10031ef40(local_118);
  FUN_10031e9fc(param_1);
  return param_1;
}




void FUN_10031e858(uint *param_1,ulong param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = (uint)param_2;
  if (uVar2 == 0) {
    lVar1 = *(long *)(param_1 + 2);
    if (lVar1 != 0) {
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0xe8;
        do {
          lVar1 = FUN_10031ef40(lVar1);
          lVar1 = lVar1 + 0xe8;
          lVar4 = lVar4 + -0xe8;
        } while (lVar4 != 0);
      }
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < uVar2) {
      FUN_10031f0d4(param_1,param_2);
    }
    uVar3 = *param_1;
    if (uVar3 < uVar2) {
      lVar1 = (ulong)uVar3 * 0xe8 + 0x68;
      iVar5 = uVar2 - uVar3;
      do {
        lVar4 = *(long *)(param_1 + 2) + lVar1;
        *(undefined4 *)(lVar4 + -0x68) = *param_3;
        FUN_10003330c(lVar4 + -0x60,param_3 + 2);
        FUN_10003330c(lVar4 + -0x48,param_3 + 8);
        FUN_10003330c(lVar4 + -0x30,param_3 + 0xe);
        FUN_10003330c(lVar4 + -0x18,param_3 + 0x14);
        FUN_10003330c(lVar4,param_3 + 0x1a);
        FUN_10003330c(lVar4 + 0x18,param_3 + 0x20);
        FUN_10003330c(lVar4 + 0x30,param_3 + 0x26);
        FUN_10003330c(lVar4 + 0x48,param_3 + 0x2c);
        uVar6 = *(undefined8 *)(param_3 + 0x32);
        uVar8 = *(undefined8 *)(param_3 + 0x38);
        uVar7 = *(undefined8 *)(param_3 + 0x36);
        *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(param_3 + 0x34);
        *(undefined8 *)(lVar4 + 0x60) = uVar6;
        *(undefined8 *)(lVar4 + 0x78) = uVar8;
        *(undefined8 *)(lVar4 + 0x70) = uVar7;
        lVar1 = lVar1 + 0xe8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uVar3 = *param_1;
      param_2 = param_2 & 0xffffffff;
    }
    if ((uint)param_2 < uVar3) {
      lVar1 = *(long *)(param_1 + 2) + (param_2 & 0xffffffff) * 0xe8;
      lVar4 = (ulong)uVar3 * 0xe8 + (param_2 & 0xffffffff) * -0xe8;
      do {
        lVar1 = FUN_10031ef40(lVar1);
        lVar1 = lVar1 + 0xe8;
        lVar4 = lVar4 + -0xe8;
      } while (lVar4 != 0);
    }
    *param_1 = (uint)param_2;
  }
  return;
}




long thunk_FUN_10031ef40(long param_1)

{
  if (*(char *)(param_1 + 199) < '\0') {
    operator_delete(*(void **)(param_1 + 0xb0));
  }
  if (*(char *)(param_1 + 0xaf) < '\0') {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)(param_1 + 8));
  }
  return param_1;
}




void FUN_10031e9fc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      uVar1 = FUN_10034ee54(uVar2);
      FUN_10031eaa0(*(long *)(param_1 + 0x18) + lVar3,uVar1);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0xe8;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  return;
}




undefined8 thunk_FUN_10031e794(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 auStack_118 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined2 uStack_4a;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = FUN_1004e313c();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10034ed9c();
  auStack_118[0] = 0xffffffff;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xffffffff;
  uStack_4c = 0;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_44 = 0x3f000000;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10031e858((undefined8 *)(lVar1 + 0x10),uVar2,auStack_118);
  FUN_10031ef40(auStack_118);
  FUN_10031e9fc(param_1);
  return param_1;
}




undefined8 * FUN_10031ea60(undefined8 *param_1)

{
  FUN_10031f068(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * thunk_FUN_10031ea60(undefined8 *param_1)

{
  FUN_10031f068(param_1 + 2,1);
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_10031eaa0(undefined4 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  string *psVar7;
  long lVar8;
  void *local_100 [2];
  char local_e9;
  void *local_e8;
  void *local_e0;
  char local_d1;
  undefined4 local_d0 [2];
  void *local_c8 [2];
  char local_b1;
  undefined1 auStack_88 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  *param_1 = (int)param_2;
  iVar2 = FUN_10034e738(param_2);
  *(char *)(param_1 + 0x33) = (char)iVar2;
  FUN_10034ee90();
  iVar3 = FUN_10034e738();
  *(bool *)((long)param_1 + 0xcf) = iVar2 != iVar3;
  uVar1 = FUN_10034ec3c(param_2);
  *(undefined1 *)((long)param_1 + 0xcd) = uVar1;
  uVar1 = FUN_10034f14c(param_2);
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  uVar4 = FUN_10034e890(param_2);
  param_1[0x37] = uVar4;
  param_1[0x38] = 0;
  FUN_1003467f8();
  iVar2 = FUN_10034ced0();
  if (iVar2 != 0) {
    uVar4 = FUN_10034f1a0(param_2);
    param_1[0x37] = uVar4;
  }
  lVar5 = FUN_1003467f8();
  if (((*(char *)(lVar5 + 0x3b) != '\0') && (iVar2 = FUN_10034cc34(), iVar2 != 0x3e)) &&
     (iVar2 = FUN_10034cc34(), iVar2 != 0x3f)) {
    uVar4 = FUN_10034e83c(param_2);
    param_1[0x37] = 0xffffffff;
    param_1[0x38] = uVar4;
  }
  uVar6 = FUN_10034e42c(param_2);
  FUN_1004e357c(uVar6,param_1 + 0x1a);
  uVar6 = FUN_10034e5dc(param_2);
  FUN_1004e357c(uVar6,param_1 + 8);
  uVar6 = FUN_10034e580(param_2);
  FUN_1004e357c(uVar6,param_1 + 0xe);
  local_d0[0] = FUN_10034e7e4(param_2);
  lVar5 = FUN_10032bc58(local_d0);
  if (lVar5 != 0) {
    FUN_100102450(auStack_88,"build://Splash_%s.png");
    FUN_100102450(local_c8,"loading_vert_%s_5v5");
    if (((*(char *)(lVar5 + 0x34) == '\0') && (*(char *)(lVar5 + 0x35) == '\0')) &&
       (*(int *)(lVar5 + 0x20) < 1)) {
      lVar8 = FUN_10034be08(*(undefined8 *)(lVar5 + 0x10));
      if (lVar8 != 0) {
        uVar6 = FUN_1004e0150(*(undefined8 *)(lVar8 + 0x18),0);
        FUN_1004e357c(uVar6,param_1 + 0x26);
      }
    }
    else {
      FUN_10032be60(&local_e8,lVar5,1);
      FUN_1004e357c(&local_e8,param_1 + 0x26);
      if (local_e0 != (void *)0x0) {
        operator_delete__(local_e0);
      }
    }
    FUN_10001549c(&local_e8,auStack_88);
    std::string::operator=((string *)(param_1 + 0x20),(string *)&local_e8);
    if (local_d1 < '\0') {
      operator_delete(local_e8);
    }
    FUN_10001549c(&local_e8,local_c8);
    std::string::operator=((string *)(param_1 + 0x2c),(string *)&local_e8);
    if (local_d1 < '\0') {
      operator_delete(local_e8);
    }
    *(undefined1 *)((long)param_1 + 0xce) = *(undefined1 *)(lVar5 + 0x34);
    param_1[0x35] = *(undefined4 *)(lVar5 + 0x30);
    FUN_1000ecb68(lVar5,param_1 + 0x32);
    psVar7 = (string *)FUN_100345940(param_2);
    std::string::operator=((string *)(param_1 + 2),psVar7);
    uVar6 = FUN_10030d844();
    FUN_10003330c(local_100,(string *)(param_1 + 2));
    uVar4 = FUN_10030d540(uVar6,local_100,*(undefined8 *)(lVar5 + 0x10));
    param_1[0x39] = uVar4;
    if (local_e9 < '\0') {
      operator_delete(local_100[0]);
    }
  }
  uVar6 = FUN_10034e638(param_2);
  FUN_1004e3170(&local_e8,uVar6);
  FUN_1004e357c(&local_e8,(string *)(param_1 + 0x14));
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    if (param_1[0x16] == 0) goto LAB_10031ed64;
  }
  else if (*(char *)((long)param_1 + 0x67) == '\0') goto LAB_10031ed64;
  FUN_100102450(auStack_88,"logo_%s");
  FUN_10001549c(local_c8,auStack_88);
  std::string::operator=((string *)(param_1 + 0x14),(string *)local_c8);
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
LAB_10031ed64:
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




long FUN_10031edc8(long param_1,uint param_2)

{
  return *(long *)(param_1 + 0x18) + (ulong)param_2 * 0xe8;
}




undefined4 FUN_10031edd8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




void FUN_10031ede0(void)

{
  FUN_1003467f8();
  FUN_10034cfec();
  return;
}




void FUN_10031edf4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003467f8();
  FUN_10034cf08(uVar1,1);
  return;
}




undefined8 FUN_10031ee0c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar2 = FUN_10034cc34();
  iVar1 = FUN_1000e9024(uVar2,param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_1004e0150("HUD_LOADING_SCREEN_TIP_BASE",0);
    thunk_FUN_1004e439c(auStack_30,uVar2);
    FUN_1004e3120(auStack_40,"[EM]");
    FUN_1004e3120(auStack_50,"{100,189,209,255}");
    FUN_1004e3d50(auStack_30,0,auStack_40,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    FUN_1004e3120(auStack_40,"[/EM]");
    FUN_1004e3120(auStack_50,"{\\}");
    FUN_1004e3d50(auStack_30,0,auStack_40,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    FUN_1004e3120(auStack_40,"[LOADING_TIP]");
    FUN_1004e3bc4(auStack_30,0,auStack_40,param_1);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    FUN_1000153b4(param_1,auStack_30);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return param_1;
}




long FUN_10031ef40(long param_1)

{
  if (*(char *)(param_1 + 199) < '\0') {
    operator_delete(*(void **)(param_1 + 0xb0));
  }
  if (*(char *)(param_1 + 0xaf) < '\0') {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    operator_delete(*(void **)(param_1 + 8));
  }
  return param_1;
}




long FUN_10031efe0(long param_1)

{
  return param_1 + 0x50;
}




long FUN_10031efe8(long param_1)

{
  return param_1 + 0x20;
}




long FUN_10031eff0(long param_1)

{
  return param_1 + 0x68;
}




undefined1 FUN_10031eff8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcd);
}




undefined1 FUN_10031f000(long param_1)

{
  return *(undefined1 *)(param_1 + 0xce);
}




undefined1 FUN_10031f008(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcf);
}




undefined1 FUN_10031f010(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd0);
}




long FUN_10031f018(long param_1)

{
  return param_1 + 0x80;
}




long FUN_10031f020(long param_1)

{
  return param_1 + 0xb0;
}




long FUN_10031f028(long param_1)

{
  return param_1 + 0x98;
}




long FUN_10031f030(long param_1)

{
  return param_1 + 200;
}




undefined1 FUN_10031f038(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcc);
}




long FUN_10031f040(long param_1)

{
  return param_1 + 0x38;
}




undefined4 FUN_10031f048(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd4);
}




undefined4 FUN_10031f050(long param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}




undefined4 FUN_10031f058(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}




undefined4 FUN_10031f060(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe4);
}




void FUN_10031f068(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0xe8;
      do {
        lVar1 = FUN_10031ef40(lVar1);
        lVar1 = lVar1 + 0xe8;
        lVar2 = lVar2 + -0xe8;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10031f0d4(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0xe8);
    pvVar5 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar1 = (undefined4 *)((long)pvVar4 + lVar6);
        puVar2 = (undefined4 *)((long)pvVar5 + lVar6);
        *puVar1 = *puVar2;
        FUN_10003330c(puVar1 + 2,puVar2 + 2);
        FUN_10003330c(puVar1 + 8,puVar2 + 8);
        FUN_10003330c(puVar1 + 0xe,puVar2 + 0xe);
        FUN_10003330c(puVar1 + 0x14,puVar2 + 0x14);
        FUN_10003330c(puVar1 + 0x1a,puVar2 + 0x1a);
        FUN_10003330c(puVar1 + 0x20,puVar2 + 0x20);
        FUN_10003330c(puVar1 + 0x26,puVar2 + 0x26);
        FUN_10003330c(puVar1 + 0x2c,puVar2 + 0x2c);
        uVar8 = *(undefined8 *)(puVar2 + 0x34);
        uVar7 = *(undefined8 *)(puVar2 + 0x32);
        uVar9 = *(undefined8 *)(puVar2 + 0x36);
        *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(puVar2 + 0x38);
        *(undefined8 *)(puVar1 + 0x36) = uVar9;
        *(undefined8 *)(puVar1 + 0x34) = uVar8;
        *(undefined8 *)(puVar1 + 0x32) = uVar7;
        lVar6 = lVar6 + 0xe8;
      } while (puVar2 + 0x3a != (undefined4 *)((long)pvVar5 + (ulong)uVar3 * 0xe8));
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0xe8;
        do {
          FUN_10031ef40(pvVar5);
          pvVar5 = (void *)((long)pvVar5 + 0xe8);
          lVar6 = lVar6 + -0xe8;
        } while (lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void FUN_10031f218(void)

{
  if (DAT_101e46900 == 0) {
    operator_new(0x1a0);
    DAT_101e46900 = FUN_10031f304();
  }
  return;
}




void FUN_10031f24c(void)

{
  if (DAT_101e46900 != (long *)0x0) {
    (**(code **)(*DAT_101e46900 + 8))();
    DAT_101e46900 = (long *)0x0;
  }
  return;
}




undefined8 FUN_10031f280(void)

{
  return DAT_101e46900;
}




void FUN_10031f28c(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_1004f1a74(0);
  if (lVar2 - *(long *)(param_1 + 400) < 0x3c) {
    lVar2 = *(long *)(param_1 + 400) + 0x3c;
  }
  else {
    iVar1 = FUN_1004eef24();
    if (iVar1 != 0) {
      uVar3 = FUN_1004f1670(param_1 + 200);
      if ((uVar3 & 1) == 0) {
        FUN_1004eff2c(param_1 + 200);
        lVar2 = lVar2 + 600;
        goto LAB_10031f2f0;
      }
    }
    lVar2 = lVar2 + 10;
  }
LAB_10031f2f0:
  *(long *)(param_1 + 0x188) = lVar2;
  return;
}




undefined8 * FUN_10031f304(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_30;
  code *pcStack_28;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_10031f3e8_101491de8;
  param_1[3] = &PTR_FUN_1014921a0;
  param_1[6] = &PTR_FUN_1014921d0;
  FUN_1004f1580(param_1 + 7);
  param_1[7] = &PTR_FUN_10145bb00;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  FUN_1004f1580(param_1 + 0x19);
  param_1[0x19] = &PTR_FUN_10145bb30;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  pcStack_28 = FUN_10031fdec;
  local_30 = param_1;
  FUN_100643618(0xcd,&local_30,0,1);
  return param_1;
}




void FUN_10031f3e8(undefined8 *param_1)

{
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_thunk_FUN_10031f3e8_101491de8;
  param_1[3] = &PTR_FUN_1014921a0;
  param_1[6] = &PTR_FUN_1014921d0;
  pcStack_38 = FUN_10031fdec;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  thunk_FUN_10012cf04(0);
  if ((void *)param_1[0x30] != (void *)0x0) {
    operator_delete__((void *)param_1[0x30]);
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
  }
  if ((void *)param_1[0x2e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2e]);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
  }
  FUN_100157d54(param_1 + 0x2b,1);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    operator_delete((void *)param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    operator_delete((void *)param_1[0x25]);
  }
  param_1[0x19] = &PTR_FUN_10145bb30;
  FUN_100157d54(param_1 + 0x22,1);
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    operator_delete((void *)param_1[0x1f]);
  }
  FUN_1004f15a8(param_1 + 0x19);
  param_1[7] = &PTR_FUN_10145bb00;
  if (*(char *)((long)param_1 + 199) < '\0') {
    operator_delete((void *)param_1[0x16]);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    operator_delete((void *)param_1[0xd]);
  }
  FUN_1004f15a8(param_1 + 7);
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void thunk_FUN_10031f3e8(void)

{
  FUN_10031f3e8();
  return;
}




void FUN_10031f53c(long param_1)

{
  FUN_10031f3e8(param_1 + -0x18);
  return;
}




void FUN_10031f544(long param_1)

{
  FUN_10031f3e8(param_1 + -0x30);
  return;
}




void FUN_10031f54c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031f3e8();
  operator_delete(pvVar1);
  return;
}




void FUN_10031f560(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031f3e8(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_10031f578(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10031f3e8(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




void FUN_10031f590(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = FUN_1004f1a74(0);
  if (*(long *)(param_1 + 0x188) < lVar4) {
    FUN_10031f28c(param_1);
    return;
  }
  lVar1 = param_1 + 200;
  iVar3 = FUN_1004f1698(lVar1);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_1004f1680(lVar1);
  if (iVar3 == 0) {
    *(long *)(param_1 + 0x188) = lVar4 + 10;
  }
  else {
    FUN_100157d54(param_1 + 0x158,0);
    FUN_10031fe10(param_1 + 0x158,param_1 + 0x110);
    uVar2 = *(uint *)(param_1 + 0x120);
    if ((int)uVar2 < 0) {
      uVar2 = 600;
    }
    *(ulong *)(param_1 + 0x188) = lVar4 + (ulong)uVar2;
    *(long *)(param_1 + 400) = lVar4;
    *(undefined1 *)(param_1 + 0x198) = 1;
    if (*(int *)(param_1 + 0x168) != 0) {
      lVar4 = *(long *)(param_1 + 0x170);
      do {
        if (*(code **)(lVar4 + 8) == (code *)0x0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x10));
        }
        else {
          (**(code **)(lVar4 + 8))();
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != *(long *)(param_1 + 0x170) + (ulong)*(uint *)(param_1 + 0x168) * 0x20);
    }
  }
  FUN_100151350(lVar1);
  return;
}




void FUN_10031f694(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  
  lVar1 = param_1 + 0x38;
  iVar2 = FUN_1004f1698(lVar1);
  if (iVar2 != 0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined1 *)(param_1 + 0x198) = 0;
    FUN_10031f28c(DAT_101e46900);
    FUN_1001511bc(lVar1);
    iVar2 = FUN_1004f1680(lVar1);
    if (((iVar2 == 0) || (*(int *)(param_1 + 0x60) != 0)) || (*(char *)(param_1 + 100) == '\0')) {
      plVar3 = (long *)(param_1 + 0x98);
      if (*(char *)(param_1 + 0xaf) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      plVar4 = (long *)(param_1 + 0x80);
      if (*(char *)(param_1 + 0x97) < '\0') {
        plVar4 = (long *)*plVar4;
      }
      pcVar5 = "failure";
    }
    else {
      plVar3 = (long *)(param_1 + 0x98);
      if (*(char *)(param_1 + 0xaf) < '\0') {
        plVar3 = (long *)*plVar3;
      }
      plVar4 = (long *)(param_1 + 0x80);
      if (*(char *)(param_1 + 0x97) < '\0') {
        plVar4 = (long *)*plVar4;
      }
      pcVar5 = "success";
    }
    FUN_100103c88(plVar3,plVar4,pcVar5);
    return;
  }
  return;
}




void FUN_10031f758(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x2f8);
  if (-1 < *(char *)(param_2 + 0x30f)) {
    lVar1 = param_2 + 0x2f8;
  }
  thunk_FUN_10012cf04(lVar1,0);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x198) = 0;
  FUN_10031f28c(param_1);
  return;
}




void FUN_10031f79c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x2f8);
  if (-1 < *(char *)(param_2 + 0x30f)) {
    lVar1 = param_2 + 0x2f8;
  }
  thunk_FUN_10012cf04(lVar1,0);
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  FUN_10031f28c(param_1 + -0x18);
  return;
}




undefined8 FUN_10031f7e4(long param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  size_t sVar7;
  size_t sVar8;
  int iVar9;
  undefined8 uVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  if (*(char *)(param_1 + 0x157) < '\0') {
    if (*(long *)(param_1 + 0x148) != 0) {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x157) != '\0') {
    return 0;
  }
  pcVar2 = *(char **)param_2;
  if (-1 < param_2[0x17]) {
    pcVar2 = param_2;
  }
  uVar10 = FUN_10052b33c(pcVar2);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  uVar3 = *(uint *)(param_1 + 0x158);
  bVar4 = param_2[0x17];
  pcVar2 = *(char **)param_2;
  sVar7 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    pcVar2 = param_2;
    sVar7 = (ulong)bVar4;
  }
  if (uVar3 == 0) {
    return 0;
  }
  uVar14 = 0;
  lVar13 = *(long *)(param_1 + 0x160);
  do {
    pcVar11 = (char *)(lVar13 + uVar14 * 0x30);
    bVar5 = pcVar11[0x17];
    sVar6 = *(size_t *)(pcVar11 + 8);
    if (-1 < (char)bVar5) {
      sVar6 = (ulong)bVar5;
    }
    if (sVar7 == sVar6) {
      pcVar1 = *(char **)pcVar11;
      if (-1 < (char)bVar5) {
        pcVar1 = pcVar11;
      }
      sVar6 = (ulong)bVar4;
      pcVar11 = param_2;
      sVar8 = sVar7;
      if ((char)bVar4 < '\0') {
        if ((sVar7 == 0) || (iVar9 = _memcmp(pcVar2,pcVar1,sVar7), iVar9 == 0)) {
LAB_10031f8ec:
          uVar14 = uVar14 & 0xffffffff;
          if ((*(char *)(lVar13 + uVar14 * 0x30 + 0x28) != '\0') &&
             (*(long *)(lVar13 + uVar14 * 0x30 + 0x18) != 0)) {
            return 2;
          }
          if ((*(char *)(lVar13 + uVar14 * 0x30 + 0x29) != '\0') &&
             (uVar12 = *(ulong *)(lVar13 + uVar14 * 0x30 + 0x20), uVar14 = FUN_1004f1a74(0),
             uVar12 < uVar14)) {
            return 0;
          }
          return 1;
        }
      }
      else {
        while( true ) {
          if (sVar8 == 0) goto LAB_10031f8ec;
          if (*pcVar11 != *pcVar1) break;
          pcVar1 = pcVar1 + 1;
          sVar6 = sVar6 - 1;
          pcVar11 = pcVar11 + 1;
          sVar8 = sVar6;
        }
      }
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == uVar3) {
      return 0;
    }
  } while( true );
}




void FUN_10031f968(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    lVar1 = *(long *)(param_1 + 0x180);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x180) + (ulong)*(uint *)(param_1 + 0x178) * 0x20);
  }
  return;
}




void FUN_10031f9c0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x148) != 0) {
    lVar1 = *(long *)(param_1 + 0x150);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x150) + (ulong)*(uint *)(param_1 + 0x148) * 0x20);
  }
  return;
}




void FUN_10031fa18(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  void *local_48 [2];
  char local_31;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    lVar2 = *(long *)(param_1 + 0x180);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 0x180) + (ulong)*(uint *)(param_1 + 0x178) * 0x20);
  }
  if (param_2 == 2) {
    FUN_10001549c(local_48,"video_skipped");
    FUN_10031fb44(param_1,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  else if (param_2 == 0) {
    plVar1 = (long *)(param_1 + 0x128);
    plVar3 = (long *)(param_1 + 0x140);
    FUN_1004efef4(plVar1,plVar3,param_1 + 0x38);
    if (*(char *)(param_1 + 0x157) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    if (*(char *)(param_1 + 0x13f) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    FUN_100103bbc(plVar3,plVar1,"success");
  }
  if (*(char *)(param_1 + 0x157) < '\0') {
    **(undefined1 **)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x140) = 0;
    *(undefined1 *)(param_1 + 0x157) = 0;
  }
  if (*(char *)(param_1 + 0x13f) < '\0') {
    **(undefined1 **)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(undefined1 *)(param_1 + 0x13f) = 0;
  }
  return;
}




void FUN_10031fb44(long param_1,string *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  string *psVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar1 = (undefined8 *)(param_1 + 0x140);
  puVar4 = puVar1;
  if (*(char *)(param_1 + 0x157) < '\0') {
    puVar4 = (undefined8 *)*puVar1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x128);
  puVar5 = puVar2;
  if (*(char *)(param_1 + 0x13f) < '\0') {
    puVar5 = (undefined8 *)*puVar2;
  }
  psVar3 = *(string **)param_2;
  if (-1 < (char)param_2[0x17]) {
    psVar3 = param_2;
  }
  FUN_100103bbc(puVar4,puVar5,psVar3);
  lVar6 = param_1 + 0x38;
  FUN_1004f15d8(lVar6);
  FUN_1004f16c0(lVar6);
  std::string::operator=((string *)(param_1 + 0x68),param_2);
  FUN_1001511bc(lVar6);
  if (*(int *)(param_1 + 0x178) != 0) {
    lVar6 = *(long *)(param_1 + 0x180);
    do {
      if (*(code **)(lVar6 + 8) == (code *)0x0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x10));
      }
      else {
        (**(code **)(lVar6 + 8))();
      }
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != *(long *)(param_1 + 0x180) + (ulong)*(uint *)(param_1 + 0x178) * 0x20);
  }
  if (*(char *)(param_1 + 0x157) < '\0') {
    **(undefined1 **)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    *(undefined1 *)puVar1 = 0;
    *(undefined1 *)(param_1 + 0x157) = 0;
  }
  if (*(char *)(param_1 + 0x13f) < '\0') {
    **(undefined1 **)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  else {
    *(undefined1 *)puVar2 = 0;
    *(undefined1 *)(param_1 + 0x13f) = 0;
  }
  return;
}




void FUN_10031fc5c(long param_1)

{
  FUN_10031fa18(param_1 + -0x30);
  return;
}




void FUN_10031fc64(undefined8 param_1,int param_2)

{
  char *pcVar1;
  void *local_38 [2];
  char local_21;
  
  if (param_2 == 0) {
    pcVar1 = "no_ads_available";
  }
  else {
    pcVar1 = "unknown";
  }
  FUN_10001549c(local_38,pcVar1);
  FUN_10031fb44(param_1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10031fcc4(long param_1)

{
  FUN_10031fc64(param_1 + -0x30);
  return;
}




undefined8 FUN_10031fccc(long param_1,string *param_2,string *param_3)

{
  undefined8 ***pppuVar1;
  string *psVar2;
  string *psVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 **local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_58 = (undefined8 ***)0x0;
  uStack_50 = 0;
  local_48 = 0;
  iVar4 = FUN_1004ef16c(&local_58);
  if ((iVar4 == 0) || (iVar4 = FUN_10031f7e4(param_1,param_3), iVar4 != 1)) {
    uVar5 = 0;
  }
  else {
    thunk_FUN_10012cf04(param_1 + 0x30);
    pppuVar1 = (undefined8 ***)local_58;
    if (-1 < local_48) {
      pppuVar1 = &local_58;
    }
    psVar2 = *(string **)param_2;
    if (-1 < (char)param_2[0x17]) {
      psVar2 = param_2;
    }
    psVar3 = *(string **)param_3;
    if (-1 < (char)param_3[0x17]) {
      psVar3 = param_3;
    }
    uVar5 = FUN_10016a9d4();
    thunk_FUN_10012cf04(pppuVar1,psVar2,psVar3,uVar5);
    psVar2 = *(string **)param_3;
    if (-1 < (char)param_3[0x17]) {
      psVar2 = param_3;
    }
    psVar3 = *(string **)param_2;
    if (-1 < (char)param_2[0x17]) {
      psVar3 = param_2;
    }
    FUN_100103b1c(psVar2,psVar3);
    std::string::operator=((string *)(param_1 + 0x140),param_3);
    std::string::operator=((string *)(param_1 + 0x128),param_2);
    uVar5 = 1;
  }
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  return uVar5;
}




void FUN_10031fde0(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_10031fdec(undefined8 param_1)

{
  FUN_10031f590();
  FUN_10031f694(param_1);
  return;
}




void FUN_10031fe10(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1 != param_2) {
    FUN_100157d54(param_1,1);
    FUN_100157c74(param_1,*param_2);
    uVar4 = *param_2;
    uVar6 = 0;
    if (uVar4 != 0) {
      lVar10 = 0;
      lVar11 = *(long *)(param_2 + 2);
      lVar12 = *(long *)(param_1 + 2);
      do {
        puVar8 = (undefined8 *)(lVar11 + lVar10);
        if ((char)*(byte *)((long)puVar8 + 0x17) < '\0') {
          uVar7 = puVar8[1];
          if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_10031fde0();
          }
          puVar8 = (undefined8 *)*puVar8;
        }
        else {
          uVar7 = (ulong)*(byte *)((long)puVar8 + 0x17);
        }
        if (uVar7 < 0x17) {
          pvVar5 = (void *)(lVar12 + lVar10);
          *(char *)((long)pvVar5 + 0x17) = (char)uVar7;
          if (uVar7 != 0) goto LAB_10031fecc;
        }
        else {
          uVar9 = uVar7 + 0x10 & 0xfffffffffffffff0;
          pvVar5 = operator_new(uVar9);
          puVar1 = (undefined8 *)(lVar12 + lVar10);
          puVar1[1] = uVar7;
          puVar1[2] = uVar9 | 0x8000000000000000;
          *puVar1 = pvVar5;
LAB_10031fecc:
          _memcpy(pvVar5,puVar8,uVar7);
        }
        *(undefined1 *)((long)pvVar5 + uVar7) = 0;
        lVar2 = lVar12 + lVar10;
        lVar3 = lVar11 + lVar10;
        uVar14 = *(undefined8 *)(lVar3 + 0x20);
        uVar13 = *(undefined8 *)(lVar3 + 0x18);
        *(undefined2 *)(lVar2 + 0x28) = *(undefined2 *)(lVar3 + 0x28);
        *(undefined8 *)(lVar2 + 0x20) = uVar14;
        *(undefined8 *)(lVar2 + 0x18) = uVar13;
        lVar10 = lVar10 + 0x30;
      } while ((ulong)uVar4 * 0x30 - lVar10 != 0);
      uVar6 = *param_2;
    }
    *param_1 = uVar6;
  }
  return;
}




void FUN_10031ff2c(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = operator_new(0xb0);
  lVar2 = FUN_1004f0a20();
  FUN_10014f4a0(lVar2 + 0x18);
  *puVar1 = &PTR_thunk_FUN_100321204_101492208;
  puVar1[3] = &PTR_FUN_101492278;
  *(undefined4 *)((long)puVar1 + 0xa4) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  *(undefined8 *)((long)puVar1 + 0x99) = 0;
  *(undefined8 *)((long)puVar1 + 0x91) = 0;
  DAT_101d23880 = puVar1;
  return;
}




void FUN_10031ff98(void)

{
  if (DAT_101d23880 != (long *)0x0) {
    (**(code **)(*DAT_101d23880 + 8))();
  }
  DAT_101d23880 = (long *)0x0;
  return;
}




bool FUN_10031ffcc(void)

{
  return DAT_101d23880 != 0;
}




undefined8 FUN_10031ffe0(void)

{
  return DAT_101d23880;
}




void FUN_10031ffec(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_10015d3ec();
  dVar4 = (double)FUN_1001664b0();
  if (0.0 < dVar4) {
    uVar1 = FUN_10015d3ec();
    FUN_100165c34(uVar1,param_2);
    return;
  }
  lVar2 = FUN_10034ccb8(param_4);
  uVar1 = FUN_1004e0150(*(undefined8 *)(lVar2 + 0x78),0);
  uVar3 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_PARTY",0);
  thunk_FUN_1004e439c(auStack_40,uVar3);
  FUN_1004e3120(auStack_50,"[HANDLE]");
  FUN_1004e3bc4(auStack_40,0,auStack_50,param_3);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1004e3120(auStack_50,"[GAME_MODE_NAME]");
  FUN_1004e3bc4(auStack_40,0,auStack_50,uVar1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1001e564c(0xbf800000,auStack_40,FUN_100320128,param_2 & 0xffffffff,FUN_100320130,
                param_2 & 0xffffffff,param_1,1,0,1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}

