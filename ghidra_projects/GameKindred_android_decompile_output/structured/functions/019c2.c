// functions/019c2 — 25 functions
#include "libGameKindred.h"




void FUN_019c20b4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_019dacb4(*param_1,auStack_38);
    do {
      plVar1 = (long *)FUN_019dacc4(auStack_38);
      if (plVar1 == (long *)0x0) {
        return;
      }
    } while (*plVar1 != param_2);
    FUN_019da9b0(*param_1,plVar1[1],plVar1[2]);
  }
  return;
}




void FUN_019c2114(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x6c0);
  if (lVar1 != 0) {
    FUN_019ecca0(lVar1);
    if (*(long *)(lVar1 + 8) == 0) {
      FUN_019c20b4(param_1,lVar1);
    }
    if (param_1 != 0) {
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
    }
  }
  return;
}




void FUN_019c216c(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [24];
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_019dacb4(*param_1,auStack_48);
    plVar2 = (long *)FUN_019dacc4(auStack_48);
    while (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      plVar2 = (long *)FUN_019dacc4(auStack_48);
      puVar5 = (undefined8 *)**(undefined8 **)(lVar4 + 0x10);
      while (puVar5 != (undefined8 *)0x0) {
        uVar3 = *puVar5;
        puVar5 = (undefined8 *)puVar5[2];
        iVar1 = (*param_3)(uVar3,param_2);
        if (iVar1 == 1) {
          return;
        }
      }
    }
  }
  return;
}




undefined8 FUN_019c21f8(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_28 [24];
  
  FUN_019dacb4(*param_1,auStack_28);
  do {
    plVar1 = (long *)FUN_019dacc4(auStack_28);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
  } while ((undefined8 *)**(undefined8 **)(*plVar1 + 0x10) == (undefined8 *)0x0);
  return *(undefined8 *)**(undefined8 **)(*plVar1 + 0x10);
}




bool FUN_019c223c(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    bVar6 = false;
  }
  else {
    lVar2 = FUN_019c0cf4(*(undefined8 *)(param_1 + 0x60));
    lVar3 = FUN_019c0d00(*(undefined8 *)(param_1 + 0x60));
    if ((*(long **)(param_2 + 0x3a0) == (long *)0x0) ||
       (plVar5 = (long *)**(long **)(param_2 + 0x3a0), plVar5 == (long *)0x0)) {
      bVar6 = false;
      lVar4 = -2;
    }
    else {
      lVar4 = *(long *)(*plVar5 + 0x78);
      bVar6 = 0 < lVar2 && lVar2 < lVar4;
    }
    if (0 < lVar3) {
      bVar6 = (bool)(bVar6 | lVar3 < *(long *)(param_2 + 0x28));
    }
    pcVar1 = "TRUE";
    if (bVar6 == false) {
      pcVar1 = "FALSE";
    }
    FUN_019c9f64(param_1,"Conn: %ld (%p) Receive pipe weight: (%ld/%zu), penalized: %s\n",
                 *(undefined8 *)(param_2 + 0x50),param_2,lVar4,*(long *)(param_2 + 0x28),pcVar1);
  }
  return bVar6;
}




undefined4 FUN_019c230c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_2 + 0x398);
  lVar3 = *plVar2;
  uVar1 = FUN_019cfd34(param_1,plVar2);
  if ((plVar2 == *(long **)(param_2 + 0x398)) && (lVar3 != *plVar2)) {
    *(undefined1 *)(param_2 + 0x395) = 0;
    FUN_019be274(*(undefined8 *)**(long **)(param_2 + 0x398),1);
  }
  return uVar1;
}




void FUN_019c2374(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)**(long **)(param_2 + 0x398);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_019da580(*(long **)(param_2 + 0x398),plVar1,*(long *)(param_2 + 0x3a0),
               *(undefined8 *)(*(long *)(param_2 + 0x3a0) + 8));
  puVar2 = (undefined8 *)**(undefined8 **)(param_2 + 0x398);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x395) = 0;
  FUN_019be274(*puVar2,1);
  return;
}




undefined8 FUN_019c23e8(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (plVar2 = (long *)FUN_019c0d0c(), plVar2 != (long *)0x0))
  {
    for (puVar3 = (undefined8 *)*plVar2; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[2]) {
      puVar4 = (undefined8 *)*puVar3;
      iVar1 = FUN_019e23a8(*puVar4,*(undefined8 *)(param_2 + 0xc0));
      if ((iVar1 != 0) && (*(uint *)(param_2 + 0xf8) == (uint)*(ushort *)(puVar4 + 1))) {
        FUN_019c9f64(param_1,"Site %s:%d is pipeline blacklisted\n",*(undefined8 *)(param_2 + 0xc0))
        ;
        return 1;
      }
    }
  }
  return 0;
}




undefined8 FUN_019c2474(long *param_1,long *param_2)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *__s;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  
  lVar7 = *param_2;
  if (param_1 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_019da388(&LAB_019c25c8);
    if (lVar3 == 0) {
      return 3;
    }
    lVar4 = *param_1;
    while (lVar4 != 0) {
      param_1 = param_1 + 1;
      __s = (long *)(*(code *)PTR_strdup_02bf74c0)();
      if (__s == (long *)0x0) goto LAB_019c25a0;
      plVar5 = (long *)(*(code *)PTR_malloc_02bf74a8)(0x10);
      if (plVar5 == (long *)0x0) {
LAB_019c2598:
        (*(code *)PTR_free_02bf74b0)(__s);
LAB_019c25a0:
        FUN_019da520(lVar3,0);
        return 3;
      }
      pcVar6 = strchr((char *)__s,0x3a);
      if (pcVar6 == (char *)0x0) {
        uVar1 = 0x50;
      }
      else {
        *pcVar6 = '\0';
        lVar4 = strtol(pcVar6 + 1,(char **)0x0,10);
        uVar1 = (undefined2)lVar4;
      }
      *(undefined2 *)(plVar5 + 1) = uVar1;
      *plVar5 = (long)__s;
      iVar2 = FUN_019da3c4(lVar3,*(undefined8 *)(lVar3 + 8),plVar5);
      if (iVar2 == 0) {
        __s = plVar5;
        if (*plVar5 != 0) {
          (*(code *)PTR_free_02bf74b0)();
          *plVar5 = 0;
        }
        goto LAB_019c2598;
      }
      lVar4 = *param_1;
    }
  }
  if (lVar7 != 0) {
    FUN_019da520(lVar7,0);
  }
  *param_2 = lVar3;
  return 0;
}




undefined8 FUN_019c2610(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  char *__s;
  undefined8 *puVar4;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar2 = (long *)FUN_019c0d14();
    if (plVar2 != (long *)0x0) {
      for (puVar4 = (undefined8 *)*plVar2; puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)puVar4[2]) {
        __s = (char *)*puVar4;
        sVar3 = strlen(__s);
        iVar1 = FUN_019e2430(__s,param_2,sVar3);
        if (iVar1 != 0) {
          FUN_019c9f64(param_1,"Server %s is blacklisted\n",param_2);
          return 1;
        }
      }
    }
    FUN_019c9f64(param_1,"Server %s is not blacklisted\n",param_2);
  }
  return 0;
}




undefined8 FUN_019c26ac(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_2;
  if (param_1 == (long *)0x0) {
    lVar2 = 0;
LAB_019c2724:
    if (lVar5 != 0) {
      FUN_019da520(lVar5,0);
    }
    uVar4 = 0;
    *param_2 = lVar2;
  }
  else {
    lVar2 = FUN_019da388(&LAB_019c2750);
    if (lVar2 != 0) {
      do {
        if (*param_1 == 0) goto LAB_019c2724;
        lVar3 = (*(code *)PTR_strdup_02bf74c0)();
        if (lVar3 == 0) break;
        iVar1 = FUN_019da3c4(lVar2,*(undefined8 *)(lVar2 + 8),lVar3);
        param_1 = param_1 + 1;
      } while (iVar1 != 0);
    }
    uVar4 = 3;
  }
  return uVar4;
}




undefined8 FUN_019c276c(long *param_1,long *param_2)

{
  int iVar1;
  
  if (((*param_1 == *param_2) && ((char)param_1[2] == (char)param_2[2])) &&
     (*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11))) {
    if ((param_1[3] == 0) || (param_2[3] == 0)) {
      if (param_1[3] != 0 || param_2[3] != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_019e23a8();
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_1[4] == 0) || (param_2[4] == 0)) {
      if (param_1[4] != 0 || param_2[4] != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_019e23a8();
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_1[7] == 0) || (param_2[7] == 0)) {
      if (param_1[7] != 0 || param_2[7] != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_019e23a8();
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_1[8] == 0) || (param_2[8] == 0)) {
      if (param_1[8] != 0 || param_2[8] != 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_019e23a8();
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_1[9] == 0) || (param_2[9] == 0)) {
      if (param_1[9] == 0 && param_2[9] == 0) {
        return 1;
      }
    }
    else {
      iVar1 = FUN_019e23a8();
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}




undefined8 FUN_019c2878(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)((long)param_2 + 0x11) = *(undefined1 *)((long)param_1 + 0x11);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 2);
  *param_2 = *param_1;
  if (param_1[4] == 0) {
    param_2[4] = 0;
  }
  else {
    lVar1 = (*(code *)PTR_strdup_02bf74c0)();
    param_2[4] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_1[3] == 0) {
    param_2[3] = 0;
  }
  else {
    lVar1 = (*(code *)PTR_strdup_02bf74c0)();
    param_2[3] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_1[9] == 0) {
    param_2[9] = 0;
  }
  else {
    lVar1 = (*(code *)PTR_strdup_02bf74c0)();
    param_2[9] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_1[8] == 0) {
    param_2[8] = 0;
  }
  else {
    lVar1 = (*(code *)PTR_strdup_02bf74c0)();
    param_2[8] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_1[7] == 0) {
    param_2[7] = 0;
  }
  else {
    lVar1 = (*(code *)PTR_strdup_02bf74c0)();
    param_2[7] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}




void FUN_019c2984(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}




uint FUN_019c2a2c(undefined8 param_1)

{
  int iVar1;
  int extraout_w1;
  uint local_34;
  
  iVar1 = FUN_019ee5c4(param_1,&local_34,4);
  if (iVar1 != 0) {
    if (DAT_03215818 != '\x01') {
      iVar1 = FUN_019c338c();
      FUN_019c9f64(param_1,"WARNING: Using weak random seed\n");
      DAT_03215814 = (extraout_w1 + iVar1 + DAT_03215814) * -0x7f82434b + 0xa70427df;
      DAT_03215818 = '\x01';
    }
    DAT_03215814 = DAT_03215814 * 0x41c64e6d + 0x3039;
    local_34 = DAT_03215814 >> 0x10 | DAT_03215814 * 0x10000;
  }
  return local_34;
}




undefined8 FUN_019c2afc(void)

{
  return 1;
}




undefined8 FUN_019c2b04(void)

{
  undefined8 uVar1;
  
  if ((DAT_03215819 & 1) != 0) {
    return 1;
  }
  DAT_03215819 = 1;
  uVar1 = FUN_019ecf40();
  return uVar1;
}




void FUN_019c2b24(void)

{
  if (DAT_03215819 == '\x01') {
    FUN_019ecf78();
    DAT_03215819 = '\0';
  }
  return;
}




int FUN_019c2b54(undefined8 *param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + (long)param_2 * 5 + 0x41) = 1;
  *(undefined4 *)((long)param_1 + (long)param_2 * 0x28 + 0x20c) = 1;
  iVar1 = FUN_019ee49c();
  if (iVar1 == 0) {
    FUN_019c4488(*param_1,5);
  }
  return iVar1;
}




int FUN_019c2ba0(undefined8 *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + (long)param_2 * 5 + 0x41) = 1;
  iVar1 = FUN_019ed42c();
  if ((iVar1 == 0) && (*param_3 != '\0')) {
    FUN_019c4488(*param_1,5);
  }
  return iVar1;
}




undefined8 FUN_019c2bfc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  lVar4 = *param_1;
  *param_2 = 0;
  if ((char)param_1[0x58] == '\0') {
    uVar5 = 1;
  }
  else {
    if ((*(byte **)(lVar4 + 0x70) == (byte *)0x0) || ((**(byte **)(lVar4 + 0x70) >> 4 & 1) == 0)) {
      plVar6 = (long *)(lVar4 + 0x8960);
    }
    else {
      FUN_019c1238(lVar4,4,2);
      plVar6 = (long *)(*(long *)(lVar4 + 0x70) + 0x40);
    }
    if (*(long *)(lVar4 + 0x480) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        lVar9 = *(long *)(lVar4 + 0x8958);
        if ((((*(long *)(lVar9 + lVar7 + 8) != 0) &&
             (iVar1 = FUN_019e23a8(param_1[0x18],*(undefined8 *)(lVar9 + lVar7)), iVar1 != 0)) &&
            ((int)param_1[0x1f] == *(int *)(lVar9 + lVar7 + 0x20))) &&
           (uVar2 = FUN_019c276c(param_1 + 0x4b,lVar9 + lVar7 + 0x28), (uVar2 & 1) != 0)) {
          lVar3 = *plVar6;
          *plVar6 = lVar3 + 1;
          lVar9 = lVar9 + lVar7;
          *(long *)(lVar9 + 0x18) = lVar3 + 1;
          *param_2 = *(undefined8 *)(lVar9 + 8);
          uVar5 = 0;
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = *(undefined8 *)(lVar9 + 0x10);
          }
          goto LAB_019c2ce8;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0xb0;
      } while (uVar8 < *(ulong *)(lVar4 + 0x480));
    }
    uVar5 = 1;
LAB_019c2ce8:
    if ((*(byte **)(lVar4 + 0x70) != (byte *)0x0) && ((**(byte **)(lVar4 + 0x70) >> 4 & 1) != 0)) {
      FUN_019c1288(lVar4,4);
    }
  }
  return uVar5;
}




void FUN_019c2d54(long *param_1)

{
  if ((SSL_SESSION *)param_1[1] != (SSL_SESSION *)0x0) {
    SSL_SESSION_free((SSL_SESSION *)param_1[1]);
    param_1[1] = 0;
    param_1[3] = 0;
    FUN_019c2984(param_1 + 5);
    if (*param_1 != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *param_1 = 0;
    }
  }
  return;
}




void FUN_019c2da8(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((*(byte **)(lVar3 + 0x70) != (byte *)0x0) && ((**(byte **)(lVar3 + 0x70) >> 4 & 1) != 0)) {
    FUN_019c1238(lVar3,4,2);
  }
  if (*(ulong *)(lVar3 + 0x480) != 0) {
    lVar1 = *(long *)(lVar3 + 0x8958);
    uVar2 = 0;
    do {
      if (*(long *)(lVar1 + 8) == param_2) {
        FUN_019c2d54();
        break;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0xb0;
    } while (uVar2 < *(ulong *)(lVar3 + 0x480));
  }
  if ((*(byte **)(lVar3 + 0x70) != (byte *)0x0) && ((**(byte **)(lVar3 + 0x70) >> 4 & 1) != 0)) {
    FUN_019c1288(lVar3,4);
    return;
  }
  return;
}




undefined8 FUN_019c2e44(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  lVar9 = *param_1;
  plVar1 = (long *)(lVar9 + 0x8958);
  plVar8 = (long *)*plVar1;
  lVar11 = plVar8[3];
  lVar5 = (*(code *)PTR_strdup_02bf74c0)(param_1[0x18]);
  if (lVar5 != 0) {
    if ((*(byte **)(lVar9 + 0x70) == (byte *)0x0) || ((**(byte **)(lVar9 + 0x70) >> 4 & 1) == 0)) {
      plVar10 = (long *)(lVar9 + 0x8960);
    }
    else {
      FUN_019c1238(lVar9,4,2);
      plVar10 = (long *)(*(long *)(lVar9 + 0x70) + 0x40);
    }
    uVar6 = *(ulong *)(lVar9 + 0x480);
    if (uVar6 < 2) {
      uVar7 = 1;
    }
    else {
      uVar7 = 1;
      plVar3 = (long *)*plVar1;
      do {
        if (plVar3[0x17] == 0) break;
        uVar7 = uVar7 + 1;
        lVar2 = plVar3[0x19];
        plVar4 = plVar3 + 0x16;
        if (lVar11 <= plVar3[0x19]) {
          lVar2 = lVar11;
          plVar4 = plVar8;
        }
        plVar8 = plVar4;
        lVar11 = lVar2;
        plVar3 = plVar3 + 0x16;
      } while (uVar7 < uVar6);
    }
    if (uVar7 == uVar6) {
      FUN_019c2d54(plVar8);
    }
    else {
      plVar8 = (long *)(*plVar1 + uVar7 * 0xb0);
    }
    plVar8[1] = param_2;
    plVar8[2] = param_3;
    plVar8[3] = *plVar10;
    if (*plVar8 != 0) {
      (*(code *)PTR_free_02bf74b0)();
    }
    *plVar8 = lVar5;
    *(int *)(plVar8 + 4) = (int)param_1[0x1f];
    if ((*(byte **)(lVar9 + 0x70) != (byte *)0x0) && ((**(byte **)(lVar9 + 0x70) >> 4 & 1) != 0)) {
      FUN_019c1288(lVar9,4);
    }
    uVar6 = FUN_019c2878(param_1 + 0x4b,plVar8 + 5);
    if ((uVar6 & 1) != 0) {
      return 0;
    }
    plVar8[1] = 0;
    (*(code *)PTR_free_02bf74b0)(lVar5);
  }
  return 0x1b;
}




void FUN_019c2fd4(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  plVar1 = (long *)(param_1 + 0x8958);
  lVar2 = *plVar1;
  if ((lVar2 != 0) &&
     ((*(byte **)(param_1 + 0x70) == (byte *)0x0 || ((**(byte **)(param_1 + 0x70) >> 4 & 1) == 0))))
  {
    if (*(long *)(param_1 + 0x480) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        FUN_019c2d54(lVar2 + lVar3);
        lVar2 = *plVar1;
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0xb0;
      } while (uVar4 < *(ulong *)(param_1 + 0x480));
      if (lVar2 == 0) goto LAB_019c3050;
    }
    (*(code *)PTR_free_02bf74b0)();
    *plVar1 = 0;
  }
LAB_019c3050:
  FUN_019ed3f0(param_1);
  return;
}

