// functions/019c6 — 2 functions
#include "libGameKindred.h"




undefined4 FUN_019c6084(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = (*(code *)PTR_calloc_02bf74c8)(1,0x88);
  uVar2 = 0x1b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  *(long *)(*param_1 + 0x218) = lVar1;
  return uVar2;
}




int FUN_019c60d0(long *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  size_t sVar18;
  size_t __n;
  size_t sVar19;
  undefined8 uVar20;
  char *pcVar21;
  long *plVar22;
  undefined1 *puVar23;
  undefined1 uVar24;
  undefined4 uVar25;
  long lVar26;
  long lVar27;
  char *pcVar28;
  long lVar29;
  undefined1 *puVar30;
  uint uVar31;
  long lVar32;
  size_t __n_00;
  undefined8 *puVar33;
  undefined8 uVar34;
  char *pcVar35;
  long *plVar36;
  char *pcVar37;
  undefined1 *puVar38;
  long *plVar39;
  long *plVar40;
  ulong uVar41;
  undefined1 *puVar42;
  long *plVar43;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  lVar29 = *param_1;
  puVar1 = (undefined8 *)(lVar29 + 0x8ae8);
  pcVar35 = (char *)*puVar1;
  local_70 = 0;
  local_78 = 0;
  lVar32 = param_1[0x18];
  uVar31 = *(uint *)(lVar29 + 0x420);
  *param_2 = 1;
  if (0x13 < *(int *)((long)param_1 + 0x1a4)) {
    return 1;
  }
  if ((int)param_1[0xd9] == 2) {
    return 1;
  }
  pcVar21 = (char *)(lVar29 + 0x8948);
  plVar36 = *(long **)(lVar29 + 0x218);
  if (*pcVar21 == '\0') {
    lVar26 = *(long *)(lVar29 + 0x8950);
    lVar14 = lVar32;
    if (lVar26 != 0) {
      (*(code *)PTR_free_02bf74b0)(lVar26);
      lVar14 = param_1[0x18];
    }
    lVar14 = (*(code *)PTR_strdup_02bf74c0)(lVar14);
    *(long *)(lVar29 + 0x8950) = lVar14;
    if (lVar14 == 0) {
      return 0x1b;
    }
  }
  plVar39 = plVar36 + 5;
  *plVar39 = 0;
  plVar40 = plVar36 + 6;
  *plVar40 = 0;
  if (((*(byte *)(param_1[100] + 0x78) & 7) != 0) && (*(char *)(lVar29 + 0x519) != '\0')) {
    uVar31 = 4;
  }
  pcVar37 = *(char **)(lVar29 + 0x588);
  if (pcVar37 == (char *)0x0) {
    if (*(char *)(lVar29 + 0x517) == '\0') {
      if (uVar31 - 2 < 4) {
        pcVar37 = (&PTR_s_POST_02bafef0)[(int)(uVar31 - 2)];
      }
      else {
        pcVar37 = "GET";
      }
    }
    else {
      pcVar37 = "HEAD";
    }
  }
  lVar14 = FUN_019c78b4(param_1,"User-Agent:");
  if ((lVar14 != 0) && (param_1[0x69] != 0)) {
    (*(code *)PTR_free_02bf74b0)();
    param_1[0x69] = 0;
  }
  iVar11 = FUN_019c7e94(param_1,pcVar37,pcVar35,0);
  if (iVar11 != 0) {
    return iVar11;
  }
  if (*(char *)(lVar29 + 0x8a39) == '\0') {
    if (((uVar31 | 4) != 5) && (*(char *)(lVar29 + 0x8a59) != '\0')) goto LAB_019c6284;
LAB_019c628c:
    uVar24 = 0;
  }
  else {
    if ((uVar31 | 4) == 5) goto LAB_019c628c;
LAB_019c6284:
    uVar24 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x2ee) = uVar24;
  if (param_1[0x6d] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    param_1[0x6d] = 0;
  }
  if ((*(long *)(lVar29 + 0x778) == 0) || (lVar14 = FUN_019c78b4(param_1,"Referer:"), lVar14 != 0))
  {
    param_1[0x6d] = 0;
  }
  else {
    lVar14 = FUN_019d5c34("Referer: %s\r\n",*(undefined8 *)(lVar29 + 0x778));
    param_1[0x6d] = lVar14;
    if (lVar14 == 0) {
      return 0x1b;
    }
  }
  lVar14 = 0;
  if (*(long *)(lVar29 + 0x578) != 0) {
    lVar26 = FUN_019c78b4(param_1,"Cookie:");
    lVar14 = 0;
    if (lVar26 == 0) {
      lVar14 = *(long *)(lVar29 + 0x578);
    }
  }
  lVar26 = FUN_019c78b4(param_1,"Accept-Encoding:");
  if ((lVar26 == 0) && (lVar26 = *(long *)(lVar29 + 0x598), lVar26 != 0)) {
    if (param_1[0x6a] != 0) {
      (*(code *)PTR_free_02bf74b0)();
      param_1[0x6a] = 0;
      lVar26 = *(long *)(lVar29 + 0x598);
    }
    lVar26 = FUN_019d5c34("Accept-Encoding: %s\r\n",lVar26);
    param_1[0x6a] = lVar26;
    if (lVar26 == 0) {
      return 0x1b;
    }
  }
  lVar26 = FUN_019c78b4(param_1,&DAT_01e21fbd);
  if ((lVar26 == 0) && (*(char *)(lVar29 + 0x512) != '\0')) {
    lVar26 = FUN_019c78b4(param_1,"Connection:");
    if (param_1[0x71] != 0) {
      (*(code *)PTR_free_02bf74b0)(param_1[0x71]);
      param_1[0x71] = 0;
    }
    if (lVar26 == 0) {
      lVar26 = (*(code *)PTR_strdup_02bf74c0)("Connection: TE\r\nTE: gzip\r\n");
    }
    else {
      lVar26 = FUN_019d5c34("%s, TE\r\nTE: gzip\r\n",lVar26);
    }
    param_1[0x71] = lVar26;
    if (lVar26 == 0) {
      return 0x1b;
    }
  }
  pcVar28 = "";
  if (*(int *)((long)param_1 + 0x1a4) != 0x14) {
    lVar26 = FUN_019c78b4(param_1,"Transfer-Encoding:");
    if (lVar26 == 0) {
      if ((((*(byte *)(param_1[100] + 0x78) & 3) != 0) && (*(char *)(lVar29 + 0x519) != '\0')) &&
         (*(long *)(lVar29 + 0x8b28) == -1)) {
        if (*(char *)((long)param_1 + 0x2ee) == '\0') {
          if ((*(long *)(lVar29 + 0x428) < 2) &&
             (((*(long *)(lVar29 + 0x428) == 1 || (*(int *)((long)param_1 + 0x1a4) == 10)) ||
              ((*(int *)((long)param_1 + 0x1a4) != 0xb && (*(int *)(lVar29 + 0x8acc) == 10)))))) {
            FUN_019ca0fc(lVar29,"Chunky upload is not supported by HTTP 1.0");
            return 0x19;
          }
          *(undefined1 *)(lVar29 + 0x211) = 1;
        }
        else if (*(char *)(lVar29 + 0x211) == '\0') goto LAB_019c6444;
        pcVar28 = "Transfer-Encoding: chunked\r\n";
        goto LAB_019c644c;
      }
      *(undefined1 *)(lVar29 + 0x211) = 0;
    }
    else {
      bVar10 = FUN_019c89d0(lVar26,"Transfer-Encoding:","chunked");
      *(byte *)(lVar29 + 0x211) = bVar10 & 1;
    }
LAB_019c6444:
    pcVar28 = "";
  }
LAB_019c644c:
  if (param_1[0x6e] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    param_1[0x6e] = 0;
  }
  lVar26 = FUN_019c78b4(param_1,"Host:");
  if ((lVar26 == 0) ||
     ((*pcVar21 != '\0' &&
      (iVar11 = FUN_019e23a8(*(undefined8 *)(lVar29 + 0x8950),param_1[0x18]), iVar11 == 0)))) {
    if ((((*(uint *)(param_1[0x65] + 0x78) >> 1 & 1) == 0) || ((int)param_1[0x1f] != 0x1bb)) &&
       (((*(uint *)(param_1[0x65] + 0x78) & 1) == 0 || ((int)param_1[0x1f] != 0x50)))) {
      pcVar15 = "]";
      pcVar16 = "[";
      if (*(char *)((long)param_1 + 0x2e6) == '\0') {
        pcVar15 = "";
        pcVar16 = "";
      }
      lVar26 = FUN_019d5c34("Host: %s%s%s:%hu\r\n",pcVar16,lVar32,pcVar15);
    }
    else {
      pcVar15 = "]";
      pcVar16 = "[";
      if (*(char *)((long)param_1 + 0x2e6) == '\0') {
        pcVar15 = "";
        pcVar16 = "";
      }
      lVar26 = FUN_019d5c34("Host: %s%s%s\r\n",pcVar16,lVar32,pcVar15);
    }
    param_1[0x6e] = lVar26;
    if (lVar26 == 0) {
      return 0x1b;
    }
  }
  else {
    pcVar15 = (char *)FUN_019c79a0(lVar26);
    if (pcVar15 == (char *)0x0) {
      return 0x1b;
    }
    if (*pcVar15 == '[') {
      sVar18 = strlen(pcVar15);
      memmove(pcVar15,pcVar15 + 1,sVar18 - 1);
      iVar11 = 0x5d;
LAB_019c65b0:
      pcVar16 = strchr(pcVar15,iVar11);
      if (pcVar16 != (char *)0x0) {
        *pcVar16 = '\0';
      }
      if (param_1[0x6f] != 0) {
        (*(code *)PTR_free_02bf74b0)();
        param_1[0x6f] = 0;
      }
      param_1[0x6f] = (long)pcVar15;
    }
    else {
      if (*pcVar15 != '\0') {
        iVar11 = 0x3a;
        goto LAB_019c65b0;
      }
      (*(code *)PTR_free_02bf74b0)(pcVar15);
    }
    param_1[0x6e] = 0;
  }
  if (*(char *)((long)param_1 + 0x2e3) == '\0') {
LAB_019c6844:
    bVar9 = false;
  }
  else {
    bVar9 = false;
    if (*(char *)((long)param_1 + 0x2ed) == '\0') {
      pcVar15 = (char *)param_1[0x18];
      pcVar16 = (char *)param_1[0x19];
      pcVar35 = *(char **)(lVar29 + 0x768);
      if ((pcVar16 != pcVar15) && (pcVar17 = strstr(pcVar35,pcVar16), pcVar17 != (char *)0x0)) {
        sVar18 = strlen(pcVar16);
        __n = strlen(pcVar15);
        sVar19 = strlen(pcVar35);
        pcVar15 = (char *)(*(code *)PTR_malloc_02bf74a8)((1 - sVar18) + __n + sVar19);
        if (pcVar15 == (char *)0x0) {
          return 0x1b;
        }
        __n_00 = (long)pcVar17 - (long)pcVar35;
        memcpy(pcVar15,pcVar35,__n_00);
        memcpy(pcVar15 + __n_00,(void *)param_1[0x18],__n);
        memcpy(pcVar15 + __n_00 + __n,pcVar17 + sVar18,((1 - __n_00) - sVar18) + sVar19);
        if (*(char *)(lVar29 + 0x770) != '\0') {
          if (*(long *)(lVar29 + 0x768) != 0) {
            (*(code *)PTR_free_02bf74b0)();
            *(undefined8 *)(lVar29 + 0x768) = 0;
          }
          *(undefined1 *)(lVar29 + 0x770) = 0;
        }
        *(char **)(lVar29 + 0x768) = pcVar15;
        *(undefined1 *)(lVar29 + 0x770) = 1;
        pcVar35 = pcVar15;
      }
      iVar11 = FUN_019e2430("ftp://",pcVar35,6);
      if (iVar11 != 0) {
        if (*(char *)(lVar29 + 0x560) != '\0') {
          pcVar15 = strstr(pcVar35,";type=");
          if (pcVar15 == (char *)0x0) {
LAB_019c6794:
            if (*(char *)*puVar1 == '\0') {
              puVar33 = &local_78;
              sVar18 = strlen(pcVar35);
              if (pcVar35[sVar18 - 1] != '/') {
                puVar33 = (undefined8 *)((ulong)puVar33 | 1);
                local_78 = CONCAT71(local_78._1_7_,0x2f);
              }
            }
            else {
              puVar33 = &local_78;
            }
            uVar25 = 0x69;
            if (*(char *)(lVar29 + 0x50b) != '\0') {
              uVar25 = 0x61;
            }
            FUN_019d5bc0(puVar33,8,";type=%c",uVar25);
          }
          else if ((pcVar15[6] != '\0') && (pcVar15[7] == '\0')) {
            uVar12 = FUN_019e22b8();
            uVar12 = (uVar12 & 0xff) - 0x41;
            if ((8 < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x109U) == 0)) goto LAB_019c6794;
          }
        }
        if (*(char *)((long)param_1 + 0x2e4) != '\0') {
          bVar9 = *(char *)((long)param_1 + 0x2f3) == '\0';
          goto LAB_019c6848;
        }
      }
      goto LAB_019c6844;
    }
  }
LAB_019c6848:
  if (uVar31 == 3) {
    uVar34 = *(undefined8 *)(lVar29 + 0x3c0);
    uVar20 = FUN_019c78b4(param_1,"Content-Type:");
    iVar11 = FUN_019f2090(lVar29,plVar36,uVar34,uVar20,plVar36 + 1);
    if (iVar11 != 0) {
      return iVar11;
    }
  }
  lVar26 = FUN_019c78b4(param_1,"Accept:");
  pcVar15 = "Accept: */*\r\n";
  if (lVar26 != 0) {
    pcVar15 = (char *)0x0;
  }
  plVar36[4] = (long)pcVar15;
  if (uVar31 - 2 < 3) {
    plVar22 = (long *)(lVar29 + 0x8b00);
    lVar26 = *plVar22;
    if (lVar26 != 0) {
      if (lVar26 < 0) {
        *plVar22 = 0;
      }
      else if (*pcVar21 == '\0') {
        if (((code *)param_1[0x78] != (code *)0x0) &&
           (iVar11 = (*(code *)param_1[0x78])(param_1[0x79],lVar26,0), iVar11 != 0)) {
          if (iVar11 != 2) {
            FUN_019ca0fc(lVar29,"Could not seek stream");
            return 0x1a;
          }
          lVar27 = *plVar22;
          lVar26 = 0;
          do {
            if (lVar27 - lVar26 < 0x4001) {
              uVar41 = FUN_019c1ea8();
            }
            else {
              uVar41 = 0x4000;
            }
            lVar27 = (**(code **)(lVar29 + 0x2c8))
                               (lVar29 + 0x938,1,uVar41,*(undefined8 *)(lVar29 + 0x248));
            lVar26 = lVar27 + lVar26;
            if (uVar41 <= lVar27 - 1U) {
              FUN_019ca0fc(lVar29,"Could only read %ld bytes from the input",lVar26);
              return 0x1a;
            }
            lVar27 = *plVar22;
          } while (lVar26 < lVar27);
        }
        lVar26 = *(long *)(lVar29 + 0x8b28);
        if ((0 < lVar26) &&
           (lVar26 = lVar26 - *plVar22, *(long *)(lVar29 + 0x8b28) = lVar26, lVar26 < 1)) {
          FUN_019ca0fc(lVar29,"File already completely uploaded");
          return 0x12;
        }
      }
    }
  }
  if (*(char *)(lVar29 + 0x8af1) != '\0') {
    if (((uVar31 | 4) == 5) && (lVar26 = FUN_019c78b4(param_1,"Range:"), lVar26 == 0)) {
      if (param_1[0x6c] != 0) {
        (*(code *)PTR_free_02bf74b0)();
      }
      lVar26 = FUN_019d5c34("Range: bytes=%s\r\n",*(undefined8 *)(lVar29 + 0x8af8));
      param_1[0x6c] = lVar26;
    }
    else if ((uVar31 != 1) && (lVar26 = FUN_019c78b4(param_1,"Content-Range:"), lVar26 == 0)) {
      if (param_1[0x6c] != 0) {
        (*(code *)PTR_free_02bf74b0)();
      }
      if (*(long *)(lVar29 + 0x3a8) < 0) {
        lVar27 = *(long *)(lVar29 + 0x8b28);
        pcVar21 = "Content-Range: bytes 0-%ld/%ld\r\n";
        lVar26 = lVar27 + -1;
LAB_019c6ab4:
        lVar26 = FUN_019d5c34(pcVar21,lVar26,lVar27);
      }
      else {
        if (*(long *)(lVar29 + 0x8b00) == 0) {
          lVar26 = *(long *)(lVar29 + 0x8af8);
          lVar27 = *(long *)(lVar29 + 0x8b28);
          pcVar21 = "Content-Range: bytes %s/%ld\r\n";
          goto LAB_019c6ab4;
        }
        lVar26 = FUN_019d5c34("Content-Range: bytes %s%ld/%ld\r\n",*(undefined8 *)(lVar29 + 0x8af8),
                              *(long *)(lVar29 + 0x8b28) + *(long *)(lVar29 + 0x8b00) + -1);
      }
      param_1[0x6c] = lVar26;
      if (lVar26 == 0) {
        return 0x1b;
      }
    }
  }
  if ((*(long *)(lVar29 + 0x428) < 2) &&
     (((*(long *)(lVar29 + 0x428) == 1 || (*(int *)((long)param_1 + 0x1a4) == 10)) ||
      ((*(int *)((long)param_1 + 0x1a4) != 0xb && (*(int *)(lVar29 + 0x8acc) == 10)))))) {
    pcVar21 = "1.0";
  }
  else {
    pcVar21 = "1.1";
  }
  lVar26 = (*(code *)PTR_calloc_02bf74c8)(1,0x18);
  if (lVar26 == 0) {
    return 0x1b;
  }
  iVar11 = FUN_019c87cc(lVar26,&DAT_01e1ba24,pcVar37);
  if (iVar11 != 0) {
    return iVar11;
  }
  if (bVar9) {
    iVar11 = FUN_019c87cc(lVar26,"ftp://%s:%s@%s",param_1[0x2e],param_1[0x2f],pcVar35 + 6);
  }
  else {
    sVar18 = strlen(pcVar35);
    iVar11 = FUN_019c88c0(lVar26,pcVar35,sVar18);
  }
  if (iVar11 != 0) {
    return iVar11;
  }
  puVar2 = &DAT_01e277f2;
  if ((undefined1 *)param_1[0x68] != (undefined1 *)0x0) {
    puVar2 = (undefined1 *)param_1[0x68];
  }
  puVar3 = &DAT_01e277f2;
  if ((undefined1 *)param_1[0x6b] != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)param_1[0x6b];
  }
  puVar23 = &DAT_01e277f2;
  if ((*(char *)(lVar29 + 0x8af1) != '\0') && ((undefined1 *)param_1[0x6c] != (undefined1 *)0x0)) {
    puVar23 = (undefined1 *)param_1[0x6c];
  }
  if (*(char **)(lVar29 + 0x630) == (char *)0x0) {
    puVar38 = &DAT_01e277f2;
  }
  else {
    puVar38 = &DAT_01e277f2;
    if ((**(char **)(lVar29 + 0x630) != '\0') && ((undefined1 *)param_1[0x69] != (undefined1 *)0x0))
    {
      puVar38 = (undefined1 *)param_1[0x69];
    }
  }
  puVar4 = &DAT_01e277f2;
  if ((undefined1 *)param_1[0x6e] != (undefined1 *)0x0) {
    puVar4 = (undefined1 *)param_1[0x6e];
  }
  puVar5 = &DAT_01e277f2;
  if ((undefined1 *)plVar36[4] != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)plVar36[4];
  }
  puVar6 = &DAT_01e277f2;
  if ((undefined1 *)param_1[0x71] != (undefined1 *)0x0) {
    puVar6 = (undefined1 *)param_1[0x71];
  }
  puVar42 = &DAT_01e277f2;
  if (((*(char **)(lVar29 + 0x598) != (char *)0x0) &&
      (puVar42 = &DAT_01e277f2, **(char **)(lVar29 + 0x598) != '\0')) &&
     ((undefined1 *)param_1[0x6a] != (undefined1 *)0x0)) {
    puVar42 = (undefined1 *)param_1[0x6a];
  }
  puVar30 = &DAT_01e277f2;
  if ((*(long *)(lVar29 + 0x778) != 0) && ((undefined1 *)param_1[0x6d] != (undefined1 *)0x0)) {
    puVar30 = (undefined1 *)param_1[0x6d];
  }
  pcVar35 = "";
  if ((*(char *)((long)param_1 + 0x2e3) != '\0') &&
     (pcVar35 = "", *(char *)((long)param_1 + 0x2ed) == '\0')) {
    lVar27 = FUN_019c791c(param_1,"Proxy-Connection:");
    pcVar35 = "Proxy-Connection: Keep-Alive\r\n";
    if (lVar27 != 0) {
      pcVar35 = "";
    }
  }
  iVar11 = FUN_019c87cc(lVar26,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",&local_78,pcVar21,puVar2,
                        puVar3,puVar23,puVar38,puVar4,puVar5,puVar6,puVar42,puVar30,pcVar35,pcVar28)
  ;
  if (param_1[0x6b] != 0) {
    (*(code *)PTR_free_02bf74b0)(param_1[0x6b]);
    param_1[0x6b] = 0;
  }
  param_1[0x6b] = 0;
  if (iVar11 != 0) {
    return iVar11;
  }
  if (((*(byte *)(param_1[100] + 0x7c) & 1) == 0) && (*(long *)(lVar29 + 0x428) == 3)) {
    return 1;
  }
  if ((lVar14 != 0) || (*(long *)(lVar29 + 0x798) != 0)) {
    if (*(long *)(lVar29 + 0x798) == 0) {
LAB_019c6e90:
      iVar11 = 0;
      iVar13 = 0;
    }
    else {
      FUN_019c1238(lVar29,2,2);
      if (param_1[0x6f] != 0) {
        lVar32 = param_1[0x6f];
      }
      plVar22 = (long *)FUN_019c5840(*(undefined8 *)(lVar29 + 0x798),lVar32,*puVar1,
                                     *(uint *)(param_1[100] + 0x78) >> 1 & 1);
      FUN_019c1288(lVar29,2);
      if (plVar22 == (long *)0x0) goto LAB_019c6e90;
      iVar11 = 0;
      plVar43 = plVar22;
      do {
        lVar32 = plVar43[2];
        if (lVar32 != 0) {
          if (iVar11 == 0) {
            iVar13 = FUN_019c87cc(lVar26,"Cookie: ");
            if (iVar13 != 0) {
              iVar11 = 0;
              goto LAB_019c6eac;
            }
            lVar32 = plVar43[2];
          }
          puVar7 = &DAT_01e277f2;
          if (iVar11 != 0) {
            puVar7 = &DAT_01e221f6;
          }
          iVar13 = FUN_019c87cc(lVar26,"%s%s=%s",puVar7,plVar43[1],lVar32);
          if (iVar13 != 0) goto LAB_019c6eac;
          iVar11 = iVar11 + 1;
        }
        plVar43 = (long *)*plVar43;
      } while (plVar43 != (long *)0x0);
      iVar13 = 0;
LAB_019c6eac:
      FUN_019c5c3c(plVar22,0);
    }
    if ((lVar14 != 0) && (iVar13 == 0)) {
      if ((iVar11 == 0) && (iVar13 = FUN_019c87cc(lVar26,"Cookie: "), iVar13 != 0)) {
        return iVar13;
      }
      puVar7 = &DAT_01e221f6;
      if (iVar11 == 0) {
        puVar7 = &DAT_01e277f2;
      }
      iVar13 = FUN_019c87cc(lVar26,"%s%s",puVar7,lVar14);
      iVar11 = iVar11 + 1;
    }
    if ((iVar11 != 0) && (iVar13 == 0)) {
      iVar13 = FUN_019c88c0(lVar26,"\r\n",2);
    }
    if (iVar13 != 0) {
      return iVar13;
    }
  }
  if ((*(int *)(lVar29 + 0x410) != 0) && (iVar11 = FUN_019c8c94(lVar29,lVar26), iVar11 != 0)) {
    return iVar11;
  }
  iVar11 = FUN_019c8ab4(param_1,0,lVar26);
  if (iVar11 != 0) {
    return iVar11;
  }
  plVar22 = plVar36 + 2;
  *plVar22 = 0;
  FUN_019c4460(lVar29,0xffffffffffffffff);
  if (uVar31 == 2) {
    sVar18 = 0;
    if ((*(char *)((long)param_1 + 0x2ee) == '\0') &&
       (sVar18 = *(size_t *)(lVar29 + 0x2a0), sVar18 == 0xffffffffffffffff)) {
      if (*(char **)(lVar29 + 0x290) == (char *)0x0) {
        sVar18 = 0xffffffffffffffff;
      }
      else {
        sVar18 = strlen(*(char **)(lVar29 + 0x290));
        if (sVar18 != 0xffffffffffffffff) goto LAB_019c7014;
      }
    }
    else {
LAB_019c7014:
      if (((*(char *)(lVar29 + 0x211) == '\0') &&
          (lVar32 = FUN_019c78b4(param_1,"Content-Length:"), lVar32 == 0)) &&
         (iVar11 = FUN_019c87cc(lVar26,"Content-Length: %ld\r\n",sVar18), iVar11 != 0)) {
        return iVar11;
      }
    }
    lVar32 = FUN_019c78b4(param_1,"Content-Type:");
    if ((lVar32 == 0) &&
       (iVar11 = FUN_019c87cc(lVar26,"Content-Type: application/x-www-form-urlencoded\r\n"),
       iVar11 != 0)) {
      return iVar11;
    }
    lVar32 = FUN_019c78b4(param_1,"Expect:");
    if (lVar32 == 0) {
      if (sVar18 < 0x401) {
        *(undefined1 *)(lVar29 + 0x8ad0) = 0;
      }
      else {
        iVar11 = FUN_019c8d98(lVar29,param_1,lVar26);
        if (iVar11 != 0) {
          return iVar11;
        }
      }
    }
    else {
      bVar10 = FUN_019c89d0(lVar32,"Expect:","100-continue");
      *(byte *)(lVar29 + 0x8ad0) = bVar10 & 1;
    }
    lVar32 = *(long *)(lVar29 + 0x290);
    if (lVar32 == 0) {
      iVar11 = FUN_019c88c0(lVar26,"\r\n",2);
      if (iVar11 != 0) {
        return iVar11;
      }
      if ((*(char *)(lVar29 + 0x211) != '\0') && (*(char *)((long)param_1 + 0x2ee) != '\0')) {
        pcVar35 = "0\r\n\r\n";
        uVar20 = 5;
        goto LAB_019c7284;
      }
      if (*(long *)(lVar29 + 0x2a0) != 0) {
        uVar41 = sVar18;
        if (sVar18 == 0) {
          uVar41 = 0xffffffffffffffff;
        }
        FUN_019c4460(lVar29,uVar41);
        uVar41 = 0;
        if (*(char *)((long)param_1 + 0x2ee) == '\0') {
          uVar41 = 0;
          plVar36[1] = sVar18;
          plVar36[2] = (long)plVar22;
        }
        goto LAB_019c7298;
      }
LAB_019c7294:
      uVar41 = 0;
    }
    else {
      if (((*(int *)((long)param_1 + 0x1a4) == 0x14) || (0xffff < (long)sVar18)) ||
         (*(char *)(lVar29 + 0x8ad0) != '\0')) {
        plVar36[1] = sVar18;
        plVar36[2] = lVar32;
        *(undefined4 *)(plVar36 + 0xf) = 2;
        param_1[0x7a] = (long)&LAB_019c870c;
        param_1[0x7b] = (long)param_1;
        FUN_019c4460(lVar29,sVar18);
        pcVar35 = "\r\n";
        uVar20 = 2;
LAB_019c7284:
        iVar11 = FUN_019c88c0(lVar26,pcVar35,uVar20);
        if (iVar11 != 0) {
          return iVar11;
        }
        goto LAB_019c7294;
      }
      iVar11 = FUN_019c88c0(lVar26,"\r\n",2);
      if (iVar11 != 0) {
        return iVar11;
      }
      if (*(char *)(lVar29 + 0x211) == '\0') {
        iVar11 = FUN_019c88c0(lVar26,*(undefined8 *)(lVar29 + 0x290),sVar18);
        uVar41 = sVar18;
      }
      else {
        if (sVar18 == 0) {
          uVar41 = 5;
        }
        else {
          iVar11 = FUN_019c87cc(lVar26,&DAT_01e222f5,sVar18 & 0xffffffff);
          if (iVar11 != 0) {
            return iVar11;
          }
          iVar11 = FUN_019c88c0(lVar26,*(undefined8 *)(lVar29 + 0x290),sVar18);
          if (iVar11 != 0) {
            return iVar11;
          }
          iVar11 = FUN_019c88c0(lVar26,"\r\n",2);
          if (iVar11 != 0) {
            return iVar11;
          }
          uVar41 = sVar18 + 7;
        }
        iVar11 = FUN_019c88c0(lVar26,"0\r\n\r\n",5);
      }
      if (iVar11 != 0) {
        return iVar11;
      }
      FUN_019c4460(lVar29,sVar18);
    }
LAB_019c7298:
    iVar11 = FUN_019c851c(lVar26,param_1,lVar29 + 0x8b90,uVar41,0);
    if (iVar11 != 0) {
      pcVar35 = "Failed sending HTTP POST request";
LAB_019c72c4:
      FUN_019ca0fc(lVar29,pcVar35);
      return iVar11;
    }
    bVar9 = *plVar22 == 0;
    bVar10 = bVar9;
  }
  else {
    if (uVar31 != 4) {
      plVar43 = plVar40;
      if (uVar31 == 3) {
        if ((*plVar36 == 0) || (*(char *)((long)param_1 + 0x2ee) != '\0')) {
          iVar11 = FUN_019c87cc(lVar26,"Content-Length: 0\r\n\r\n");
          if (iVar11 != 0) {
            return iVar11;
          }
          iVar11 = FUN_019c851c(lVar26,param_1,lVar29 + 0x8b90,0,0);
          if (iVar11 != 0) {
            pcVar35 = "Failed sending POST request";
            goto LAB_019c72c4;
          }
          iVar11 = -1;
          plVar43 = (long *)0x0;
        }
        else {
          plVar22 = plVar36 + 7;
          iVar11 = FUN_019f2554(plVar22);
          if (iVar11 != 0) {
            pcVar35 = "Internal HTTP POST error!";
LAB_019c71dc:
            FUN_019ca0fc(lVar29,pcVar35);
            return 0x22;
          }
          plVar36[10] = param_1[0x7a];
          param_1[0x7a] = (long)&LAB_019f2ad4;
          param_1[0x7b] = (long)plVar22;
          *(undefined4 *)(plVar36 + 0xf) = 2;
          if (((*(char *)(lVar29 + 0x211) == '\0') &&
              (lVar32 = FUN_019c78b4(param_1,"Content-Length:"), lVar32 == 0)) &&
             (iVar11 = FUN_019c87cc(lVar26,"Content-Length: %ld\r\n",plVar36[1]), iVar11 != 0)) {
            return iVar11;
          }
          iVar11 = FUN_019c8d98(lVar29,param_1,lVar26);
          if (iVar11 != 0) {
            return iVar11;
          }
          local_80 = 0;
          lVar32 = FUN_019f2bbc(plVar22,&local_80);
          if (lVar32 == 0) {
            pcVar35 = "Could not get Content-Type header line!";
            goto LAB_019c71dc;
          }
          iVar11 = FUN_019c88c0(lVar26,lVar32,local_80);
          if (iVar11 != 0) {
            return iVar11;
          }
          iVar11 = FUN_019c88c0(lVar26,"\r\n",2);
          if (iVar11 != 0) {
            return iVar11;
          }
          FUN_019c4460(lVar29,plVar36[1]);
          iVar11 = FUN_019c851c(lVar26,param_1,lVar29 + 0x8b90,0,0);
          if (iVar11 != 0) {
            FUN_019ca0fc(lVar29,"Failed sending POST request");
            FUN_019f1e60(plVar36);
            return iVar11;
          }
          iVar11 = 0;
        }
      }
      else {
        iVar11 = FUN_019c88c0(lVar26,"\r\n",2);
        if (iVar11 != 0) {
          return iVar11;
        }
        iVar11 = FUN_019c851c(lVar26,param_1,lVar29 + 0x8b90,0,0);
        if (iVar11 != 0) {
          pcVar35 = "Failed sending HTTP request";
          goto LAB_019c72c4;
        }
        iVar11 = -(uint)(*plVar22 == 0);
        if (*plVar22 == 0) {
          plVar43 = (long *)0x0;
        }
      }
      FUN_019d9cd0(param_1,0,0xffffffffffffffff,1,plVar39,iVar11,plVar43);
      sVar18 = 0;
      goto LAB_019c7530;
    }
    sVar18 = 0;
    if ((*(char *)((long)param_1 + 0x2ee) == '\0') &&
       (sVar18 = *(ulong *)(lVar29 + 0x8b28), sVar18 == 0xffffffffffffffff)) {
LAB_019c70b8:
      iVar11 = FUN_019c8d98(lVar29,param_1,lVar26);
      if (iVar11 != 0) {
        return iVar11;
      }
      bVar8 = true;
    }
    else {
      if ((*(char *)(lVar29 + 0x211) == '\0') &&
         ((lVar32 = FUN_019c78b4(param_1,"Content-Length:"), lVar32 == 0 &&
          (iVar11 = FUN_019c87cc(lVar26,"Content-Length: %ld\r\n",sVar18), iVar11 != 0)))) {
        return iVar11;
      }
      if (sVar18 != 0) goto LAB_019c70b8;
      bVar8 = false;
    }
    iVar11 = FUN_019c88c0(lVar26,"\r\n",2);
    if (iVar11 != 0) {
      return iVar11;
    }
    FUN_019c4460(lVar29,sVar18);
    iVar11 = FUN_019c851c(lVar26,param_1,lVar29 + 0x8b90,0,0);
    if (iVar11 != 0) {
      pcVar35 = "Failed sending PUT request";
      goto LAB_019c72c4;
    }
    bVar9 = !bVar8;
    bVar10 = ~bVar8;
  }
  plVar36 = plVar40;
  if (bVar9) {
    plVar36 = (long *)0x0;
  }
  FUN_019d9cd0(param_1,0,0xffffffffffffffff,1,plVar39,-(uint)bVar10,plVar36);
LAB_019c7530:
  if (*plVar40 == 0) {
    return 0;
  }
  FUN_019c45ac(lVar29);
  iVar13 = FUN_019c3f38(param_1);
  iVar11 = 0;
  if (iVar13 != 0) {
    iVar11 = 0x2a;
  }
  if ((long)sVar18 <= *plVar40) {
    FUN_019c9f64(lVar29,"upload completely sent off: %ld out of %ld bytes\n",*plVar40,sVar18);
    *(undefined1 *)(lVar29 + 0x1e8) = 1;
    *(undefined4 *)(lVar29 + 0x140) = 0;
    *(uint *)(lVar29 + 0x1e4) = *(uint *)(lVar29 + 0x1e4) & 0xfffffffd;
    return iVar11;
  }
  return iVar11;
}

