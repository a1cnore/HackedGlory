// functions/019db — 9 functions
#include "libGameKindred.h"




undefined8 FUN_019db008(undefined8 param_1,long param_2,size_t param_3)

{
  undefined8 *__s;
  int iVar1;
  int iVar2;
  char *__s1;
  undefined8 uVar3;
  void *__dest;
  undefined4 uVar4;
  long lVar5;
  long local_38;
  
  if (*(uint *)(param_2 + 0xd4) < 5) {
    __s = (undefined8 *)(param_2 + 0xd8);
    iVar1 = (int)param_3;
    switch(*(uint *)(param_2 + 0xd4)) {
    case 0:
      memset(__s,0,0x70);
      *(undefined1 **)(param_2 + 0x118) = &LAB_019dade8;
      *(undefined1 **)(param_2 + 0x120) = &LAB_019dae00;
      __s1 = (char *)FUN_00f26a9c();
      iVar2 = strcmp(__s1,"1.2.0.4");
      if (iVar2 < 0) {
        iVar2 = FUN_00f27554(__s,0xfffffff1,"1.2.7",0x70);
        if (iVar2 != 0) goto LAB_019db18c;
        *(undefined4 *)(param_2 + 0xd4) = 1;
        goto switchD_019db048_caseD_1;
      }
      iVar2 = FUN_00f27554(__s,0x2f,"1.2.7",0x70);
      if (iVar2 != 0) {
LAB_019db18c:
        FUN_019dae14(param_1,__s);
        return 0x3d;
      }
      *(undefined4 *)(param_2 + 0xd4) = 4;
    case 4:
      *(int *)(param_2 + 0xe0) = iVar1;
      *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_2 + 0x80);
      break;
    case 1:
switchD_019db048_caseD_1:
      iVar2 = FUN_019db2d4(*(undefined8 *)(param_2 + 0x80),param_3,&local_38);
      if (iVar2 != 0) {
        if (iVar2 == 2) {
          *(int *)(param_2 + 0xe0) = iVar1;
          __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(param_3 & 0xffffffff);
          *(void **)(param_2 + 0xd8) = __dest;
          if (__dest == (void *)0x0) {
            FUN_00f28f48(__s);
            uVar4 = 0;
            uVar3 = 0x1b;
          }
          else {
            memcpy(__dest,*(void **)(param_2 + 0x80),(ulong)*(uint *)(param_2 + 0xe0));
            uVar3 = 0;
            uVar4 = 2;
          }
        }
        else {
          FUN_019dae14(param_1,__s);
          FUN_00f28f48(__s);
          uVar4 = 0;
          uVar3 = 0x3d;
        }
        *(undefined4 *)(param_2 + 0xd4) = uVar4;
        return uVar3;
      }
      *(undefined4 *)(param_2 + 0xd4) = 3;
      iVar1 = iVar1 - (int)local_38;
      *(long *)(param_2 + 0xd8) = *(long *)(param_2 + 0x80) + local_38;
      *(int *)(param_2 + 0xe0) = iVar1;
      goto joined_r0x019db158;
    case 2:
      uVar3 = *(undefined8 *)(param_2 + 0xd8);
      *(int *)(param_2 + 0xe0) = *(int *)(param_2 + 0xe0) + iVar1;
      lVar5 = (*(code *)PTR_realloc_02bf74b8)(uVar3);
      *(long *)(param_2 + 0xd8) = lVar5;
      if (lVar5 == 0) {
        (*(code *)PTR_free_02bf74b0)(uVar3);
        FUN_00f28f48(__s);
        uVar3 = 0x1b;
LAB_019db1c0:
        *(undefined4 *)(param_2 + 0xd4) = 0;
        return uVar3;
      }
      memcpy((void *)((lVar5 + (ulong)*(uint *)(param_2 + 0xe0)) - param_3),
             *(void **)(param_2 + 0x80),param_3);
      iVar1 = FUN_019db2d4(*(undefined8 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xe0),&local_38
                          );
      if (iVar1 != 0) {
        if (iVar1 == 2) {
          return 0;
        }
        (*(code *)PTR_free_02bf74b0)(*__s);
        FUN_019dae14(param_1,__s);
        FUN_00f28f48(__s);
        uVar3 = 0x3d;
        goto LAB_019db1c0;
      }
      (*(code *)PTR_free_02bf74b0)(*(undefined8 *)(param_2 + 0xd8));
      *(undefined4 *)(param_2 + 0xd4) = 3;
      lVar5 = *(long *)(param_2 + 0x80) + local_38 + param_3;
      param_3 = (size_t)(*(uint *)(param_2 + 0xe0) - (int)local_38);
      lVar5 = lVar5 - (ulong)*(uint *)(param_2 + 0xe0);
      goto LAB_019db150;
    case 3:
      goto switchD_019db048_caseD_3;
    }
  }
  else {
switchD_019db048_caseD_3:
    lVar5 = *(long *)(param_2 + 0x80);
LAB_019db150:
    iVar1 = (int)param_3;
    *(int *)(param_2 + 0xe0) = iVar1;
    *(long *)(param_2 + 0xd8) = lVar5;
joined_r0x019db158:
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar3 = FUN_019dae38(param_1,param_2);
  return uVar3;
}




undefined8 FUN_019db2d4(char *param_1,long param_2,long *param_3)

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
  if ((*param_1 != '\x1f') || (param_1[1] != -0x75)) {
    return 1;
  }
  uVar4 = 1;
  if ((param_1[2] == '\b') && (bVar3 = param_1[3], (bVar3 & 0xe0) == 0)) {
    pbVar7 = (byte *)(param_1 + 10);
    lVar5 = lVar6;
    if ((bVar3 >> 2 & 1) != 0) {
      if (param_2 < 0xc) {
        return 2;
      }
      lVar1 = (ulong)*(ushort *)(param_1 + 10) + 2;
      lVar5 = lVar6 - lVar1;
      if (lVar6 < lVar1) {
        return 2;
      }
      pbVar7 = pbVar7 + lVar1;
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
LAB_019db398:
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
          goto LAB_019db398;
        }
        lVar5 = lVar5 + 1;
        pbVar7 = pbVar7 + 1;
      } while (lVar5 != 1);
    }
  }
  return uVar4;
}




void FUN_019db3b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x14c) != 0) {
    FUN_00f28f48(lVar1 + 0x150);
    *(undefined4 *)(lVar1 + 0x14c) = 0;
  }
  return;
}




ulong FUN_019db3e4(long *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  byte bVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  char *pcStack_570;
  byte abStack_568 [1024];
  undefined1 local_168 [264];
  
  plVar1 = (long *)(*param_1 + 0x89e0);
  if ((param_2 & 1) == 0) {
    plVar1 = (long *)(*param_1 + 0x89a0);
  }
  uVar7 = FUN_019e2430("Digest",param_3,6);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  lVar15 = *plVar1;
  FUN_019db824(plVar1);
  bVar5 = false;
  bVar4 = false;
  pbVar12 = (byte *)(param_3 + 6);
  do {
    uVar14 = (uint)*pbVar12;
    if (*pbVar12 != 0) {
      do {
        iVar6 = isspace(uVar14);
        if (iVar6 == 0) break;
        pbVar12 = pbVar12 + 1;
        uVar14 = (uint)*pbVar12;
      } while (uVar14 != 0);
    }
    for (lVar10 = 0; ((uVar14 != 0 && (uVar14 != 0x3d)) && ((int)lVar10 != 0xff));
        lVar10 = lVar10 + 1) {
      local_168[lVar10] = (char)uVar14;
      uVar14 = (uint)pbVar12[lVar10 + 1];
    }
    pbVar12 = pbVar12 + lVar10;
    local_168[lVar10] = 0;
    if (*pbVar12 != 0x3d) {
      if ((lVar15 != 0) && (*(char *)((long)plVar1 + 0x1c) == '\0')) {
        return 1;
      }
      uVar14 = 4;
      if (*plVar1 == 0) {
        uVar14 = 1;
      }
      return (ulong)uVar14;
    }
    bVar2 = pbVar12[1];
    pbVar13 = pbVar12 + 2;
    if (bVar2 != 0x22) {
      pbVar13 = pbVar12 + 1;
    }
    bVar11 = *pbVar13;
    if (bVar11 == 0) {
      pbVar12 = abStack_568;
    }
    else {
      bVar3 = false;
      pbVar12 = abStack_568;
      iVar6 = 0x3ff;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        if (bVar11 < 0x22) {
          if ((bVar11 != 10) && (bVar11 != 0xd)) goto LAB_019db570;
LAB_019db57c:
          iVar6 = 0;
        }
        else {
          if (bVar11 == 0x22) {
            if (!bVar3 && bVar2 == 0x22) {
              iVar6 = 0;
              bVar3 = false;
              goto LAB_019db580;
            }
          }
          else if (bVar11 == 0x2c) {
            if (bVar2 != 0x22) goto LAB_019db57c;
          }
          else if ((bVar11 == 0x5c) && (!bVar3)) {
            *pbVar12 = 0x5c;
            bVar3 = true;
            pbVar12 = pbVar12 + 1;
            goto LAB_019db580;
          }
LAB_019db570:
          bVar3 = false;
          *pbVar12 = bVar11;
          pbVar12 = pbVar12 + 1;
        }
LAB_019db580:
        pbVar13 = pbVar13 + 1;
        bVar11 = *pbVar13;
      } while (bVar11 != 0);
    }
    *pbVar12 = 0;
    iVar6 = FUN_019e23a8(local_168,"nonce");
    if (iVar6 != 0) {
      lVar10 = (*(code *)PTR_strdup_02bf74c0)(abStack_568);
      *plVar1 = lVar10;
      goto joined_r0x019db678;
    }
    iVar6 = FUN_019e23a8(local_168,"stale");
    if (iVar6 != 0) {
      iVar6 = FUN_019e23a8(abStack_568,&DAT_01b92fab);
      if (iVar6 != 0) {
        *(undefined1 *)((long)plVar1 + 0x1c) = 1;
        *(undefined4 *)(plVar1 + 7) = 1;
      }
      goto LAB_019db5b8;
    }
    iVar6 = FUN_019e23a8(local_168,"realm");
    if (iVar6 == 0) {
      iVar6 = FUN_019e23a8(local_168,"opaque");
      if (iVar6 != 0) {
        lVar10 = (*(code *)PTR_strdup_02bf74c0)(abStack_568);
        plVar1[4] = lVar10;
        goto joined_r0x019db678;
      }
      iVar6 = FUN_019e23a8(local_168,&DAT_01e244ed);
      if (iVar6 != 0) {
        pcVar8 = (char *)(*(code *)PTR_strdup_02bf74c0)(abStack_568);
        if (pcVar8 == (char *)0x0) {
          return 3;
        }
        pcVar9 = strtok_r(pcVar8,",",&pcStack_570);
        while (pcVar9 != (char *)0x0) {
          iVar6 = FUN_019e23a8(pcVar9,"auth");
          if (iVar6 == 0) {
            iVar6 = FUN_019e23a8(pcVar9,"auth-int");
            bVar4 = (bool)(bVar4 | iVar6 != 0);
          }
          else {
            bVar5 = true;
          }
          pcVar9 = strtok_r((char *)0x0,",",&pcStack_570);
        }
        (*(code *)PTR_free_02bf74b0)(pcVar8);
        if (bVar5) {
          pcVar8 = "auth";
        }
        else {
          if (!bVar4) goto LAB_019db5b8;
          pcVar8 = "auth-int";
        }
        lVar10 = (*(code *)PTR_strdup_02bf74c0)(pcVar8);
        plVar1[5] = lVar10;
        goto joined_r0x019db678;
      }
      iVar6 = FUN_019e23a8(local_168,"algorithm");
      if (iVar6 != 0) {
        lVar10 = (*(code *)PTR_strdup_02bf74c0)(abStack_568);
        plVar1[6] = lVar10;
        if (lVar10 == 0) {
          return 3;
        }
        iVar6 = FUN_019e23a8(abStack_568,"MD5-sess");
        if (iVar6 == 0) {
          iVar6 = FUN_019e23a8(abStack_568,&DAT_01e2dbe9);
          if (iVar6 == 0) {
            return 2;
          }
          *(undefined4 *)(plVar1 + 3) = 0;
        }
        else {
          *(undefined4 *)(plVar1 + 3) = 1;
        }
      }
    }
    else {
      lVar10 = (*(code *)PTR_strdup_02bf74c0)(abStack_568);
      plVar1[2] = lVar10;
joined_r0x019db678:
      if (lVar10 == 0) {
        return 3;
      }
    }
LAB_019db5b8:
    uVar14 = (uint)*pbVar13;
    pbVar12 = pbVar13;
    if (*pbVar13 != 0) {
      do {
        pbVar12 = pbVar13 + 1;
        iVar6 = isspace(uVar14);
        if (iVar6 == 0) {
          if (uVar14 != 0x2c) {
            pbVar12 = pbVar13;
          }
          break;
        }
        uVar14 = (uint)*pbVar12;
        pbVar13 = pbVar12;
      } while (uVar14 != 0);
    }
  } while( true );
}




void FUN_019db824(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    param_1[2] = 0;
  }
  if (param_1[4] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    param_1[6] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}




undefined8 FUN_019db8f4(long *param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  undefined1 *puVar15;
  size_t sVar16;
  char *pcVar17;
  long *plVar18;
  undefined8 local_118;
  long local_110;
  char acStack_108 [36];
  undefined1 auStack_e4 [36];
  undefined1 auStack_c0 [36];
  undefined1 auStack_9c [36];
  undefined1 local_78 [24];
  
  local_118 = 0;
  local_110 = 0;
  lVar14 = *param_1;
  if ((param_2 & 1) == 0) {
    lVar10 = 0x89a0;
    plVar18 = param_1 + 0x6b;
    plVar7 = param_1 + 0x2e;
    param_1 = param_1 + 0x2f;
    lVar11 = 0x8a20;
  }
  else {
    lVar10 = 0x89e0;
    plVar18 = param_1 + 0x68;
    plVar7 = param_1 + 0x32;
    param_1 = param_1 + 0x33;
    lVar11 = 0x8a40;
  }
  pcVar17 = (char *)*param_1;
  pcVar12 = (char *)*plVar7;
  plVar7 = (long *)(lVar14 + lVar10);
  lVar11 = lVar14 + lVar11;
  if (*plVar18 != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *plVar18 = 0;
  }
  pcVar13 = "";
  if (pcVar12 != (char *)0x0) {
    pcVar13 = pcVar12;
  }
  pcVar12 = "";
  if (pcVar17 != (char *)0x0) {
    pcVar12 = pcVar17;
  }
  if (*plVar7 == 0) {
    *(undefined1 *)(lVar11 + 0x18) = 0;
    return 0;
  }
  *(undefined1 *)(lVar11 + 0x18) = 1;
  if ((int)plVar7[7] == 0) {
    *(undefined4 *)(plVar7 + 7) = 1;
  }
  if (plVar7[1] == 0) {
    uVar1 = FUN_019c2a2c(lVar14);
    uVar2 = FUN_019c2a2c(lVar14);
    uVar3 = FUN_019c2a2c(lVar14);
    uVar4 = FUN_019c2a2c(lVar14);
    FUN_019d5bc0(acStack_108,0x21,"%08x%08x%08x%08x",uVar1,uVar2,uVar3,uVar4);
    sVar16 = strlen(acStack_108);
    uVar6 = FUN_019f0ec4(lVar14,acStack_108,sVar16,&local_110,&local_118);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    plVar7[1] = local_110;
  }
  lVar14 = FUN_019d5c34("%s:%s:%s",pcVar13,plVar7[2],pcVar12);
  if (lVar14 == 0) {
    return 0x1b;
  }
  FUN_019dbf54(local_78,lVar14);
  (*(code *)PTR_free_02bf74b0)(lVar14);
  lVar14 = 0;
  puVar15 = auStack_c0;
  do {
    FUN_019d5bc0(puVar15,3,"%02x",local_78[lVar14]);
    lVar14 = lVar14 + 1;
    puVar15 = puVar15 + 2;
  } while (lVar14 != 0x10);
  if ((int)plVar7[3] == 1) {
    lVar14 = FUN_019d5c34("%s:%s:%s",auStack_c0,*plVar7,plVar7[1]);
    if (lVar14 == 0) {
      return 0x1b;
    }
    FUN_019dbf54(local_78,lVar14);
    (*(code *)PTR_free_02bf74b0)(lVar14);
    lVar14 = 0;
    puVar15 = auStack_c0;
    do {
      FUN_019d5bc0(puVar15,3,"%02x",local_78[lVar14]);
      lVar14 = lVar14 + 1;
      puVar15 = puVar15 + 2;
    } while (lVar14 != 0x10);
  }
  if ((*(char *)(lVar11 + 0x1a) == '\0') || (pcVar12 = strchr(param_4,0x3f), pcVar12 == (char *)0x0)
     ) {
    sVar16 = strlen(param_4);
  }
  else {
    sVar16 = (long)pcVar12 - (long)param_4;
  }
  lVar11 = FUN_019d5c34("%s:%.*s",param_3,sVar16,param_4);
  lVar14 = lVar11;
  if (((plVar7[5] != 0) && (iVar5 = FUN_019e23a8(plVar7[5],"auth-int"), iVar5 != 0)) &&
     (lVar14 = FUN_019d5c34("%s:%s",lVar11,&DAT_01e2451c), lVar11 != 0)) {
    (*(code *)PTR_free_02bf74b0)(lVar11);
  }
  if (lVar14 == 0) {
    return 0x1b;
  }
  FUN_019dbf54(local_78,lVar14);
  (*(code *)PTR_free_02bf74b0)(lVar14);
  lVar14 = 0;
  puVar15 = auStack_e4;
  do {
    FUN_019d5bc0(puVar15,3,"%02x",local_78[lVar14]);
    lVar14 = lVar14 + 1;
    puVar15 = puVar15 + 2;
  } while (lVar14 != 0x10);
  if (plVar7[5] == 0) {
    lVar14 = FUN_019d5c34("%s:%s:%s",auStack_c0,*plVar7,auStack_e4);
  }
  else {
    lVar14 = FUN_019d5c34("%s:%s:%08x:%s:%s:%s",auStack_c0,*plVar7,(int)plVar7[7],plVar7[1],
                          plVar7[5],auStack_e4);
  }
  if (lVar14 == 0) {
    return 0x1b;
  }
  FUN_019dbf54(local_78,lVar14);
  (*(code *)PTR_free_02bf74b0)(lVar14);
  lVar14 = 0;
  puVar15 = auStack_9c;
  do {
    FUN_019d5bc0(puVar15,3,"%02x",local_78[lVar14]);
    lVar14 = lVar14 + 1;
    puVar15 = puVar15 + 2;
  } while (lVar14 != 0x10);
  lVar14 = 1;
  pcVar12 = pcVar13;
  do {
    cVar9 = *pcVar12;
    if (cVar9 == '\"') {
LAB_019dbd20:
      lVar14 = lVar14 + 2;
    }
    else {
      if (cVar9 == '\0') {
        pcVar17 = (char *)(*(code *)PTR_malloc_02bf74a8)(lVar14);
        pcVar12 = pcVar17;
        if (pcVar17 == (char *)0x0) {
          return 0x1b;
        }
        do {
          cVar9 = *pcVar13;
          if ((cVar9 == '\"') || (cVar9 == '\\')) {
            pcVar8 = pcVar12 + 1;
            *pcVar12 = '\\';
            cVar9 = *pcVar13;
          }
          else {
            pcVar8 = pcVar12;
            if (cVar9 == '\0') {
              *pcVar12 = '\0';
              pcVar12 = "Proxy-";
              if ((param_2 & 1) == 0) {
                pcVar12 = "";
              }
              if (plVar7[5] == 0) {
                lVar14 = FUN_019d5c34("%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%.*s\", response=\"%s\""
                                      ,pcVar12,pcVar17,plVar7[2],*plVar7,sVar16,param_4,auStack_9c);
                *plVar18 = lVar14;
              }
              else {
                lVar14 = FUN_019d5c34("%sAuthorization: Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%.*s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                      ,pcVar12,pcVar17,plVar7[2],*plVar7,sVar16,param_4,plVar7[1],
                                      (int)plVar7[7],plVar7[5],auStack_9c);
                *plVar18 = lVar14;
                iVar5 = FUN_019e23a8(plVar7[5],"auth");
                if (iVar5 != 0) {
                  *(int *)(plVar7 + 7) = (int)plVar7[7] + 1;
                }
              }
              (*(code *)PTR_free_02bf74b0)(pcVar17);
              pcVar12 = (char *)*plVar18;
              if (pcVar12 == (char *)0x0) {
                return 0x1b;
              }
              if (plVar7[4] != 0) {
                pcVar12 = (char *)FUN_019d5c34("%s, opaque=\"%s\"",pcVar12);
                if (pcVar12 == (char *)0x0) {
                  return 0x1b;
                }
                (*(code *)PTR_free_02bf74b0)(*plVar18);
                *plVar18 = (long)pcVar12;
              }
              if (plVar7[6] != 0) {
                pcVar12 = (char *)FUN_019d5c34("%s, algorithm=\"%s\"",pcVar12);
                if (pcVar12 == (char *)0x0) {
                  return 0x1b;
                }
                (*(code *)PTR_free_02bf74b0)(*plVar18);
                *plVar18 = (long)pcVar12;
              }
              sVar16 = strlen(pcVar12);
              lVar14 = (*(code *)PTR_realloc_02bf74b8)(pcVar12,sVar16 + 3);
              if (lVar14 == 0) {
                return 0x1b;
              }
              *(undefined1 *)((undefined2 *)(lVar14 + sVar16) + 1) = 0;
              *(undefined2 *)(lVar14 + sVar16) = 0xa0d;
              *plVar18 = lVar14;
              return 0;
            }
          }
          pcVar13 = pcVar13 + 1;
          *pcVar8 = cVar9;
          pcVar12 = pcVar8 + 1;
        } while( true );
      }
      if (cVar9 == '\\') goto LAB_019dbd20;
      lVar14 = lVar14 + 1;
    }
    pcVar12 = pcVar12 + 1;
  } while( true );
}




void FUN_019dbf24(long param_1)

{
  FUN_019db824(param_1 + 0x89a0);
  FUN_019db824(param_1 + 0x89e0);
  return;
}




int FUN_019dbf54(uchar *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  MD5_CTX MStack_80;
  
  MD5_Init(&MStack_80);
  strlen(param_2);
  uVar2 = FUN_019c1e8c();
  MD5_Update(&MStack_80,param_2,uVar2 & 0xffffffff);
  iVar1 = MD5_Final(param_1,&MStack_80);
  return iVar1;
}




long * FUN_019dbfac(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(*(code *)PTR_malloc_02bf74a8)(0x10);
  if (plVar1 != (long *)0x0) {
    lVar2 = (*(code *)PTR_malloc_02bf74a8)(*(undefined4 *)(param_1 + 3));
    plVar1[1] = lVar2;
    if (lVar2 == 0) {
      (*(code *)PTR_free_02bf74b0)(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      *plVar1 = (long)param_1;
      (*(code *)*param_1)();
    }
  }
  return plVar1;
}

