// functions/019d0 — 2 functions
#include "libGameKindred.h"




undefined8 FUN_019d0074(long *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  FUN_019c4488(lVar3,3);
  if ((*(byte *)(param_1[100] + 0x7c) >> 4 & 1) == 0) {
    *param_2 = 0;
    *(undefined1 *)((long)param_1 + 0x2f6) = 0;
    lVar2 = *(long *)(lVar3 + 0x630);
    if (lVar2 != 0) {
      if (param_1[0x69] != 0) {
        (*(code *)PTR_free_02bf74b0)();
        param_1[0x69] = 0;
        lVar2 = *(long *)(lVar3 + 0x630);
      }
      lVar2 = FUN_019d5c34("User-Agent: %s\r\n",lVar2);
      param_1[0x69] = lVar2;
      if (lVar2 == 0) {
        return 0x1b;
      }
    }
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    *(undefined8 *)(lVar3 + 0x8ad8) = 0;
    auVar4 = FUN_019c338c();
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar4;
    if ((int)param_1[0x3a] == -1) {
      *(undefined1 *)((long)param_1 + 0x2e9) = 0;
      uVar1 = FUN_019bd598(param_1,param_1[0xb]);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    else {
      FUN_019c4488(lVar3,4);
      FUN_019c4488(lVar3,5);
      *(undefined1 *)((long)param_1 + 0x2e9) = 1;
      *param_2 = 1;
      FUN_019bce18(param_1,(int)param_1[0x3a]);
      FUN_019cfef0(param_1);
    }
    auVar4 = FUN_019c338c();
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar4;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}




ulong FUN_019d0194(long param_1,long *param_2,char *param_3,undefined1 *param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  size_t sVar11;
  undefined1 *puVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  size_t sVar16;
  size_t sVar17;
  size_t sVar18;
  void *__dest;
  char *pcVar19;
  int *piVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  undefined **ppuVar30;
  char **ppcVar31;
  char **ppcVar32;
  byte *pbVar33;
  byte *pbVar34;
  long *plVar35;
  long *plVar36;
  undefined8 *puVar37;
  byte *__s;
  ulong uVar38;
  long *plVar39;
  undefined1 auVar40 [16];
  uint local_2dc;
  char *local_2b0;
  char **local_2a0;
  char *local_288;
  long local_280;
  long local_278;
  char *local_270;
  char *local_268;
  undefined8 uStack_260;
  undefined1 local_169;
  char *local_168;
  undefined4 local_160;
  undefined1 local_157;
  undefined1 local_69;
  
  *param_3 = '\0';
  local_288 = (char *)0x0;
  local_280 = 0;
  uVar7 = FUN_019c0cd0(*(undefined8 *)(param_1 + 0x60));
  uVar8 = FUN_019c0cdc(*(undefined8 *)(param_1 + 0x60));
  *param_3 = '\0';
  if (*(long *)(param_1 + 0x768) == 0) {
    uVar6 = 3;
  }
  else {
    plVar9 = (long *)(*(code *)PTR_calloc_02bf74c8)(1,0x6d0);
    if (plVar9 == (long *)0x0) goto LAB_019d05e4;
    plVar9[100] = (long)&PTR_s_<no_protocol>_02baff10;
    plVar9[10] = -1;
    plVar9[0x1e] = -1;
    *(undefined4 *)(plVar9 + 0x1f) = 0xffffffff;
    plVar9[0x3a] = -1;
    plVar9[0x3b] = -1;
    *(undefined1 *)(plVar9 + 0x5c) = 1;
    auVar40 = FUN_019c338c();
    *(undefined1 (*) [16])(plVar9 + 0x38) = auVar40;
    *plVar9 = param_1;
    iVar5 = *(int *)(param_1 + 0x4b8);
    *(int *)(plVar9 + 0x34) = iVar5;
    if (*(char **)(param_1 + 0x5e8) == (char *)0x0) {
      bVar4 = false;
      *(undefined1 *)((long)plVar9 + 0x2e2) = 0;
    }
    else {
      cVar1 = **(char **)(param_1 + 0x5e8);
      *(bool *)((long)plVar9 + 0x2e2) = cVar1 != '\0';
      if (cVar1 == '\0') {
        bVar4 = false;
      }
      else if (iVar5 == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = iVar5 == 1;
      }
    }
    *(bool *)((long)plVar9 + 0x2e3) = bVar4;
    *(bool *)((long)plVar9 + 0x2e5) = *(long *)(param_1 + 0x660) != 0;
    *(undefined1 *)((long)plVar9 + 0x2ed) = *(undefined1 *)(param_1 + 0x50a);
    *(bool *)((long)plVar9 + 0x2e4) = *(long *)(param_1 + 0x648) != 0;
    *(undefined1 *)(plVar9 + 0x5e) = *(undefined1 *)(param_1 + 0x524);
    *(undefined1 *)((long)plVar9 + 0x2f1) = *(undefined1 *)(param_1 + 0x525);
    *(undefined1 *)(plVar9 + 0xd4) = *(undefined1 *)(param_1 + 0x440);
    *(undefined1 *)((long)plVar9 + 0x6a1) = *(undefined1 *)(param_1 + 0x441);
    lVar27 = *(long *)(param_1 + 0x4e0);
    *(undefined4 *)(plVar9 + 0x84) = 0xffffffff;
    *(undefined4 *)((long)plVar9 + 0x434) = 0;
    plVar9[0x66] = lVar27;
    *(undefined8 *)((long)plVar9 + 0x42c) = 0;
    *(undefined8 *)((long)plVar9 + 0x424) = 0;
    uVar10 = FUN_019be9cc(*(undefined8 *)(param_1 + 0x60));
    if (((uVar10 & 1) == 0) || (plVar9[0x75] != 0)) {
LAB_019d0338:
      lVar27 = FUN_019da388(&DAT_019d2f44);
      plVar9[0x73] = lVar27;
      lVar27 = FUN_019da388(&DAT_019d2f44);
      plVar9[0x74] = lVar27;
      if ((lVar27 == 0) || (plVar9[0x73] == 0)) goto LAB_019d0574;
      if (*(long *)(param_1 + 0x590) != 0) {
        lVar27 = (*(code *)PTR_strdup_02bf74c0)();
        plVar9[0xd5] = lVar27;
        if (lVar27 == 0) goto LAB_019d0574;
      }
      *(undefined4 *)((long)plVar9 + 0x6b4) = *(undefined4 *)(param_1 + 0x2ac);
      *(undefined2 *)(plVar9 + 0xd6) = *(undefined2 *)(param_1 + 0x2a8);
      lVar27 = *(long *)(param_1 + 0x318);
      plVar9[8] = *(long *)(param_1 + 800);
      plVar9[7] = lVar27;
      *param_2 = (long)plVar9;
      sVar11 = strlen(*(char **)(param_1 + 0x768));
      plVar24 = (long *)(param_1 + 0x8ae0);
      if (sVar11 < 0x101) {
        sVar11 = 0x100;
      }
      if (*plVar24 != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *plVar24 = 0;
      }
      plVar35 = (long *)(param_1 + 0x8ae8);
      *plVar35 = 0;
      lVar27 = (*(code *)PTR_malloc_02bf74a8)(sVar11 + 2);
      *plVar24 = lVar27;
      if (lVar27 != 0) {
        *plVar35 = lVar27;
        puVar12 = (undefined1 *)(*(code *)PTR_malloc_02bf74a8)(sVar11 + 2);
        plVar9[0x16] = (long)puVar12;
        if (puVar12 != (undefined1 *)0x0) {
          plVar39 = plVar9 + 0x18;
          *plVar39 = (long)puVar12;
          *puVar12 = 0;
          lVar27 = (*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
          local_280 = lVar27;
          pcVar13 = (char *)(*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
          local_288 = pcVar13;
          local_2b0 = (char *)(*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
          uVar6 = 0x1b;
          if (((lVar27 != 0) && (pcVar13 != (char *)0x0)) && (local_2b0 != (char *)0x0)) {
            pcVar13 = (char *)*plVar35;
            local_268 = (char *)0x0;
            uStack_260 = 0;
            iVar5 = sscanf(*(char **)(param_1 + 0x768),"%15[^:]:%[^\n]",&local_268,pcVar13);
            if ((iVar5 == 2) && (iVar5 = FUN_019e23a8(&local_268,"file"), iVar5 != 0)) {
              if (*pcVar13 == '/') {
                if (pcVar13[1] == '/') {
                  sVar11 = strlen(pcVar13 + 2);
                  memmove(pcVar13,pcVar13 + 2,sVar11 + 1);
                  if (*pcVar13 != '/') goto LAB_019d052c;
                }
              }
              else {
LAB_019d052c:
                pcVar14 = strchr(pcVar13,0x2f);
                if (pcVar14 != (char *)0x0) {
                  pcVar15 = pcVar14 + 1;
                  if (pcVar14[1] != '/') {
                    pcVar15 = pcVar14;
                  }
                  sVar11 = strlen(pcVar15);
                  memmove(pcVar13,pcVar15,sVar11 + 1);
                }
              }
              local_2a0 = (char **)0x1e211ca;
              bVar4 = false;
            }
            else {
              *pcVar13 = '\0';
              local_2a0 = &local_268;
              iVar5 = sscanf(*(char **)(param_1 + 0x768),"%15[^\n:]://%[^\n/?]%[^\n]",&local_268,
                             *plVar39,pcVar13);
              if (iVar5 < 2) {
                iVar5 = sscanf(*(char **)(param_1 + 0x768),"%[^\n/?]%[^\n]",*plVar39,pcVar13);
                if (iVar5 < 1) {
                  pcVar13 = "<url> malformed";
LAB_019d0768:
                  FUN_019ca0fc(param_1,pcVar13);
                  uVar6 = 3;
                  goto joined_r0x019d19d4;
                }
                iVar5 = FUN_019e2430(&DAT_01e23116,*plVar39,4);
                if (iVar5 == 0) {
                  iVar5 = FUN_019e2430("DICT.",*plVar39,5);
                  if (iVar5 == 0) {
                    iVar5 = FUN_019e2430("LDAP.",*plVar39,5);
                    if (iVar5 == 0) {
                      iVar5 = FUN_019e2430("IMAP.",*plVar39,5);
                      if (iVar5 == 0) {
                        iVar5 = FUN_019e2430("SMTP.",*plVar39,5);
                        if (iVar5 == 0) {
                          iVar5 = FUN_019e2430("POP3.",*plVar39,5);
                          local_2a0 = (char **)&DAT_01b96a79;
                          if (iVar5 != 0) {
                            local_2a0 = (char **)&DAT_01e2314d;
                          }
                        }
                        else {
                          local_2a0 = (char **)&DAT_01e23142;
                        }
                      }
                      else {
                        local_2a0 = (char **)&DAT_01e23137;
                      }
                    }
                    else {
                      local_2a0 = (char **)&DAT_01e2312c;
                    }
                  }
                  else {
                    local_2a0 = (char **)&DAT_01e23121;
                  }
                }
                else {
                  local_2a0 = (char **)&DAT_01e2b2be;
                }
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
            }
            pcVar14 = (char *)*plVar39;
            pcVar15 = strchr(pcVar14,0x40);
            if (pcVar15 != (char *)0x0) {
              pcVar14 = pcVar15 + 1;
            }
            pcVar14 = strchr(pcVar14,0x3f);
            if (pcVar14 != (char *)0x0) {
              sVar11 = strlen(pcVar14);
              sVar16 = strlen(pcVar13);
              memmove(pcVar13 + sVar11 + 1,pcVar13,sVar16 + 1);
              memcpy(pcVar13 + 1,pcVar14,sVar11);
              *pcVar13 = '/';
              *pcVar14 = '\0';
              cVar1 = *pcVar13;
              bVar3 = true;
LAB_019d08d0:
              if (cVar1 != '?') goto LAB_019d090c;
              sVar11 = strlen(pcVar13);
              memmove(pcVar13 + 1,pcVar13,sVar11 + 1);
              *pcVar13 = '/';
              goto LAB_019d095c;
            }
            cVar1 = *pcVar13;
            if (cVar1 != '\0') {
              bVar3 = false;
              goto LAB_019d08d0;
            }
            bVar3 = true;
            pcVar13[0] = '/';
            pcVar13[1] = '\0';
LAB_019d090c:
            pcVar14 = (char *)FUN_019ecd08(pcVar13);
            if (pcVar14 == (char *)0x0) {
LAB_019d0ec4:
              uVar6 = 0x1b;
              goto joined_r0x019d19d4;
            }
            iVar5 = strcmp(pcVar14,pcVar13);
            if (iVar5 == 0) {
              (*(code *)PTR_free_02bf74b0)(pcVar14);
              if (bVar3) goto LAB_019d095c;
            }
            else {
              (*(code *)PTR_free_02bf74b0)(*plVar24);
              *plVar24 = (long)pcVar14;
              *plVar35 = (long)pcVar14;
              pcVar13 = pcVar14;
LAB_019d095c:
              sVar16 = strlen(pcVar13);
              sVar17 = strlen(*(char **)(param_1 + 0x768));
              sVar11 = strlen((char *)*plVar39);
              if (!bVar4) {
                sVar18 = strlen((char *)local_2a0);
                sVar11 = sVar11 + sVar18 + 3;
              }
              __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(sVar17 + 2);
              if (__dest == (void *)0x0) goto LAB_019d0ec4;
              memcpy(__dest,*(void **)(param_1 + 0x768),sVar11);
              memcpy((void *)((long)__dest + sVar11),pcVar13,sVar16 + 1);
              if (*(char *)(param_1 + 0x770) != '\0') {
                if (*(long *)(param_1 + 0x768) != 0) {
                  (*(code *)PTR_free_02bf74b0)();
                  *(undefined8 *)(param_1 + 0x768) = 0;
                }
                *(undefined1 *)(param_1 + 0x770) = 0;
              }
              FUN_019c9f64(param_1,"Rebuilt URL to: %s\n",__dest);
              *(void **)(param_1 + 0x768) = __dest;
              *(undefined1 *)(param_1 + 0x770) = 1;
            }
            local_168 = (char *)0x0;
            local_278 = 0;
            local_270 = (char *)0x0;
            pcVar15 = (char *)*plVar39;
            pcVar14 = strchr(pcVar15,0x40);
            if (pcVar14 == (char *)0x0) {
LAB_019d0a50:
              uVar6 = 0;
            }
            else {
              *plVar39 = (long)(pcVar14 + 1);
              if (*(int *)(param_1 + 0x51c) == 2) goto LAB_019d0a50;
              uVar6 = FUN_019d281c(pcVar15,pcVar14 + 1 + ~(ulong)pcVar15,&local_168,&local_270,
                                   &local_278);
              if (uVar6 == 0) {
                if (local_168 == (char *)0x0) {
LAB_019d0ac4:
                  if (local_270 != (char *)0x0) {
                    pcVar14 = (char *)FUN_019d4834(param_1,local_270,0,0);
                    if (pcVar14 == (char *)0x0) goto LAB_019d0b3c;
                    (*(code *)PTR_free_02bf74b0)(local_288);
                    local_288 = pcVar14;
                  }
                  if (local_278 == 0) goto LAB_019d0a50;
                  pcVar14 = (char *)FUN_019d4834(param_1,local_278,0,0);
                  if (pcVar14 != (char *)0x0) {
                    (*(code *)PTR_free_02bf74b0)(local_2b0);
                    uVar6 = 0;
                    local_2b0 = pcVar14;
                    goto LAB_019d0b40;
                  }
                }
                else {
                  *(undefined1 *)((long)plVar9 + 0x2f3) = 1;
                  *(undefined1 *)((long)plVar9 + 0x2e4) = 1;
                  lVar27 = FUN_019d4834(param_1,local_168,0,0);
                  if (lVar27 != 0) {
                    (*(code *)PTR_free_02bf74b0)(local_280);
                    local_280 = lVar27;
                    goto LAB_019d0ac4;
                  }
                }
LAB_019d0b3c:
                uVar6 = 0x1b;
              }
            }
LAB_019d0b40:
            if (local_168 != (char *)0x0) {
              (*(code *)PTR_free_02bf74b0)();
              local_168 = (char *)0x0;
            }
            if (local_270 != (char *)0x0) {
              (*(code *)PTR_free_02bf74b0)();
              local_270 = (char *)0x0;
            }
            if (local_278 != 0) {
              (*(code *)PTR_free_02bf74b0)();
              local_278 = 0;
            }
            if (uVar6 == 0) {
              if ((*(char *)*plVar39 == '[') &&
                 (pcVar14 = strchr((char *)*plVar39,0x25), pcVar14 != (char *)0x0)) {
                lVar27 = 3;
                iVar5 = strncmp("%25",pcVar14,3);
                if (iVar5 != 0) {
                  FUN_019c9f64(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
                  lVar27 = 1;
                }
                pcVar15 = pcVar14 + lVar27;
                uVar10 = strtoul(pcVar15,&local_270,10);
                pcVar19 = local_270;
                if (*local_270 == ']') {
                  sVar11 = strlen(local_270);
                  memmove(pcVar14,pcVar19,sVar11 + 1);
                  *(int *)(plVar9 + 0x15) = (int)uVar10;
                }
                else {
                  strncpy((char *)&local_168,pcVar15,0x12);
                  local_157 = 0;
                  pcVar19 = strchr((char *)&local_168,0x5d);
                  if (pcVar19 != (char *)0x0) {
                    *pcVar19 = '\0';
                    uVar6 = if_nametoindex((char *)&local_168);
                    if (uVar6 != 0) {
                      sVar11 = strlen((char *)&local_168);
                      memmove(pcVar14,pcVar15 + sVar11,sVar11 + lVar27);
                      *(uint *)(plVar9 + 0x15) = uVar6;
                      goto LAB_019d0cc8;
                    }
                    piVar20 = (int *)__errno();
                    pcVar14 = strerror(*piVar20);
                    FUN_019c9f64(param_1,"Invalid network interface: %s; %s\n",&local_168,pcVar14);
                  }
                  FUN_019c9f64(param_1,"Invalid IPv6 address format\n");
                }
              }
LAB_019d0cc8:
              if (*(int *)(param_1 + 0x6d8) != 0) {
                *(int *)(plVar9 + 0x15) = *(int *)(param_1 + 0x6d8);
              }
              pcVar13 = strchr(pcVar13,0x23);
              if (pcVar13 != (char *)0x0) {
                *pcVar13 = '\0';
                pcVar13 = strchr(*(char **)(param_1 + 0x768),0x23);
                if (pcVar13 != (char *)0x0) {
                  *pcVar13 = '\0';
                }
              }
              ppuVar30 = &PTR_DAT_02bafdf0;
              puVar37 = (undefined8 *)&UNK_02baff90;
LAB_019d0d18:
              puVar37 = puVar37 + 1;
              iVar5 = FUN_019e23a8(*ppuVar30,local_2a0);
              if (iVar5 == 0) goto code_r0x019d0d28;
              if (((*(ulong *)(param_1 + 0x6e0) & (ulong)*(uint *)(ppuVar30 + 0xf)) == 0) ||
                 ((*(char *)(param_1 + 0x8948) != '\0' &&
                  ((*(ulong *)(param_1 + 0x6e8) & (ulong)*(uint *)(ppuVar30 + 0xf)) == 0))))
              goto LAB_019d0ecc;
              plVar9[0x65] = (long)ppuVar30;
              plVar9[100] = (long)ppuVar30;
              if (bVar4) {
                lVar27 = FUN_019d5c34("%s://%s",*ppuVar30,*(undefined8 *)(param_1 + 0x768));
                if (lVar27 == 0) goto LAB_019d0ec4;
                if (*(char *)(param_1 + 0x770) != '\0') {
                  if (*(long *)(param_1 + 0x768) != 0) {
                    (*(code *)PTR_free_02bf74b0)();
                    *(undefined8 *)(param_1 + 0x768) = 0;
                  }
                  *(undefined1 *)(param_1 + 0x770) = 0;
                }
                *(long *)(param_1 + 0x768) = lVar27;
                *(undefined1 *)(param_1 + 0x770) = 1;
                ppuVar30 = (undefined **)plVar9[0x65];
              }
              if (((*(byte *)((long)ppuVar30 + 0x7c) >> 6 & 1) != 0) &&
                 (pcVar13 = strchr(*(char **)(*plVar9 + 0x8ae8),0x3f), pcVar13 != (char *)0x0)) {
                *pcVar13 = '\0';
              }
              if (*(long *)(param_1 + 0x6d0) != 0) {
                lVar27 = (*(code *)PTR_strdup_02bf74c0)();
                plVar9[0x31] = lVar27;
                if (lVar27 == 0) goto LAB_019d0ec4;
              }
              if (*(char *)((long)plVar9 + 0x2e5) != '\0') {
                memset(&local_168,0,0x100);
                memset(&local_268,0,0x100);
                if (*(char **)(param_1 + 0x660) != (char *)0x0) {
                  strncpy((char *)&local_168,*(char **)(param_1 + 0x660),0x100);
                  local_69 = 0;
                }
                if (*(char **)(param_1 + 0x668) != (char *)0x0) {
                  strncpy((char *)&local_268,*(char **)(param_1 + 0x668),0x100);
                  local_169 = 0;
                }
                lVar27 = FUN_019d4834(param_1,&local_168,0,0);
                plVar9[0x32] = lVar27;
                if (lVar27 == 0) goto LAB_019d0ec4;
                lVar27 = FUN_019d4834(param_1,&local_268,0,0);
                plVar9[0x33] = lVar27;
                if (lVar27 == 0) goto LAB_019d0ec4;
              }
              if (*(long *)(param_1 + 0x5e8) == 0) {
                pbVar21 = (byte *)0x0;
              }
              else {
                pbVar21 = (byte *)(*(code *)PTR_strdup_02bf74c0)();
                if (pbVar21 == (byte *)0x0) {
                  FUN_019ca0fc(param_1,"memory shortage");
                  goto LAB_019d0ec4;
                }
              }
              if ((*(long *)(param_1 + 0x670) != 0) &&
                 (uVar10 = FUN_019d2ae8(*plVar39), (uVar10 & 1) != 0)) {
                if (pbVar21 == (byte *)0x0) goto LAB_019d109c;
                goto LAB_019d1088;
              }
              if (pbVar21 != (byte *)0x0) goto LAB_019d102c;
              lVar27 = FUN_019d4670("no_proxy");
              if (lVar27 == 0) {
                lVar27 = FUN_019d4670("NO_PROXY");
              }
              uVar10 = FUN_019d2ae8(*plVar39,lVar27);
              pbVar21 = (byte *)0x0;
              if ((uVar10 & 1) == 0) {
                pbVar21 = *(byte **)plVar9[100];
                uVar6 = (uint)*pbVar21;
                if (*pbVar21 == 0) {
                  ppcVar32 = &local_168;
                }
                else {
                  ppcVar31 = &local_168;
                  do {
                    pbVar21 = pbVar21 + 1;
                    iVar5 = tolower(uVar6);
                    ppcVar32 = (char **)((long)ppcVar31 + 1);
                    *(char *)ppcVar31 = (char)iVar5;
                    uVar6 = (uint)*pbVar21;
                    ppcVar31 = ppcVar32;
                  } while (uVar6 != 0);
                }
                *(undefined1 *)((long)ppcVar32 + 6) = 0;
                *(undefined2 *)((long)ppcVar32 + 4) = 0x7978;
                *(undefined4 *)ppcVar32 = 0x6f72705f;
                pbVar21 = (byte *)FUN_019d4670(&local_168);
                if (pbVar21 == (byte *)0x0) {
                  iVar5 = FUN_019e23a8("http_proxy",&local_168);
                  if (iVar5 == 0) {
                    FUN_019e24d4(&local_168,&local_168,0x80);
                    pbVar21 = (byte *)FUN_019d4670(&local_168);
                    if (pbVar21 != (byte *)0x0) goto LAB_019d0fc4;
                  }
LAB_019d0fe4:
                  pbVar21 = (byte *)FUN_019d4670("all_proxy");
                  if (pbVar21 == (byte *)0x0) {
                    pbVar21 = (byte *)FUN_019d4670("ALL_PROXY");
                  }
                }
                else {
LAB_019d0fc4:
                  if (*pbVar21 == 0) goto LAB_019d0fe4;
                }
              }
              if (lVar27 != 0) {
                (*(code *)PTR_free_02bf74b0)(lVar27);
              }
              if (pbVar21 == (byte *)0x0) {
LAB_019d109c:
                *(undefined2 *)((long)plVar9 + 0x2e2) = 0;
                *(undefined1 *)((long)plVar9 + 0x2e5) = 0;
                *(undefined1 *)((long)plVar9 + 0x2ed) = 0;
LAB_019d10c4:
                iVar5 = sscanf((char *)*plVar39,"[%*45[0123456789abcdefABCDEF:.]%c",&local_268);
                if ((iVar5 != 1) || ((char)local_268 != ']')) {
                  iVar5 = inet_pton(10,(char *)*plVar39,&local_168);
                  if (iVar5 < 1) {
                    pcVar13 = strrchr((char *)*plVar39,0x3a);
                    goto LAB_019d115c;
                  }
                  pcVar13 = "IPv6 numerical address used in URL without brackets";
                  goto LAB_019d0768;
                }
                lVar27 = plVar9[0x18];
                *(undefined1 *)((long)plVar9 + 0x2e6) = 1;
                plVar9[0x18] = lVar27 + 1;
                pcVar13 = strchr((char *)(lVar27 + 1),0x5d);
                if (pcVar13 == (char *)0x0) {
                  pcVar13 = (char *)0x0;
                }
                else {
                  *pcVar13 = '\0';
                  pcVar13 = pcVar13 + 1;
                  if (*pcVar13 != ':') {
                    pcVar13 = (char *)0x0;
                  }
                }
LAB_019d115c:
                if ((*(long *)(param_1 + 0x260) != 0) && (*(char *)(param_1 + 0x8998) != '\0')) {
                  *(uint *)(plVar9 + 0x1f) = (uint)*(long *)(param_1 + 0x260) & 0xffff;
                  if (pcVar13 != (char *)0x0) {
                    *pcVar13 = '\0';
                  }
                  if (*(char *)((long)plVar9 + 0x2e3) == '\0') goto LAB_019d1300;
                  local_160 = 0;
                  local_168 = (char *)0x0;
                  if ((char)plVar9[0x5f] != '\0') {
                    if (*(char *)(param_1 + 0x50b) == '\0') {
                      uVar26 = 0x49;
                      if (*(char *)(param_1 + 0x50d) != '\0') {
                        uVar26 = 0x44;
                      }
                    }
                    else {
                      uVar26 = 0x41;
                    }
                    FUN_019d5bc0(&local_168,0xc,";type=%c",uVar26);
                  }
                  pcVar13 = "";
                  pcVar14 = "]";
                  pcVar15 = "[";
                  if (*(char *)((long)plVar9 + 0x2e6) == '\0') {
                    pcVar14 = pcVar13;
                    pcVar15 = pcVar13;
                  }
                  if (*(char *)(param_1 + 0x8af0) != '\0') {
                    pcVar13 = "/";
                  }
                  lVar27 = FUN_019d5c34("%s://%s%s%s:%hu%s%s%s",*(undefined8 *)plVar9[0x65],pcVar15,
                                        plVar9[0x18],pcVar14,(int)plVar9[0x1f],pcVar13,*plVar35,
                                        &local_168);
                  if (lVar27 != 0) {
                    if (*(char *)(param_1 + 0x770) != '\0') {
                      if (*(long *)(param_1 + 0x768) != 0) {
                        (*(code *)PTR_free_02bf74b0)();
                        *(undefined8 *)(param_1 + 0x768) = 0;
                      }
                      *(undefined1 *)(param_1 + 0x770) = 0;
                    }
                    *(long *)(param_1 + 0x768) = lVar27;
                    *(undefined1 *)(param_1 + 0x770) = 1;
                    goto LAB_019d1300;
                  }
LAB_019d1540:
                  uVar6 = 0x1b;
                  goto joined_r0x019d19d4;
                }
                if (pcVar13 != (char *)0x0) {
                  uVar10 = strtol(pcVar13 + 1,&local_168,10);
                  if (0xffff < uVar10) {
                    FUN_019ca0fc(param_1,"Port number out of range");
                    uVar6 = 3;
                    goto joined_r0x019d19d4;
                  }
                  *pcVar13 = '\0';
                  if (local_168 != pcVar13 + 1) {
                    uVar6 = FUN_019c1e68();
                    *(uint *)(plVar9 + 0x1f) = uVar6 & 0xffff;
                  }
                }
LAB_019d1300:
                if (*(long *)(param_1 + 0x648) != 0) {
                  (*(code *)PTR_free_02bf74b0)(local_280);
                  local_280 = (*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(param_1 + 0x648));
                  if (local_280 == 0) goto LAB_019d1540;
                }
                if (*(long *)(param_1 + 0x650) != 0) {
                  (*(code *)PTR_free_02bf74b0)(local_288);
                  local_288 = (char *)(*(code *)PTR_strdup_02bf74c0)
                                                (*(undefined8 *)(param_1 + 0x650));
                  if (local_288 == (char *)0x0) goto LAB_019d1540;
                }
                if (*(long *)(param_1 + 0x658) == 0) {
LAB_019d13a8:
                  *(undefined1 *)((long)plVar9 + 0x2f2) = 0;
                  if (*(int *)(param_1 + 0x51c) != 0) {
                    iVar5 = FUN_019d7824(*plVar39,&local_280,&local_288,
                                         *(undefined8 *)(param_1 + 0x5d8));
                    if (iVar5 < 1) {
                      if (iVar5 < 0) goto LAB_019d1540;
                      *(undefined1 *)((long)plVar9 + 0x2f2) = 1;
                      *(undefined1 *)((long)plVar9 + 0x2e4) = 1;
                    }
                    else {
                      FUN_019c9f64(param_1,
                                   "Couldn\'t find host %s in the .netrc file; using defaults\n",
                                   *plVar39);
                    }
                  }
                  pcVar13 = local_288;
                  if (((*(byte *)(plVar9[100] + 0x7c) >> 5 & 1) == 0) ||
                     (*(char *)((long)plVar9 + 0x2e4) != '\0')) {
                    lVar27 = (*(code *)PTR_strdup_02bf74c0)(local_280);
                    plVar9[0x2e] = lVar27;
                    if (lVar27 == 0) goto LAB_019d153c;
                  }
                  else {
                    lVar27 = (*(code *)PTR_strdup_02bf74c0)("anonymous");
                    plVar9[0x2e] = lVar27;
                    if (lVar27 == 0) {
LAB_019d153c:
                      plVar9[0x2f] = 0;
                      goto LAB_019d1540;
                    }
                    pcVar13 = "ftp@example.com";
                  }
                  lVar27 = (*(code *)PTR_strdup_02bf74c0)(pcVar13);
                  uVar6 = 0x1b;
                  plVar9[0x2f] = lVar27;
                  if ((lVar27 == 0) || (plVar9[0x2e] == 0)) goto joined_r0x019d19d4;
                  if (*local_2b0 == '\0') {
LAB_019d148c:
                    lVar27 = *plVar9;
                    if (*(long *)(lVar27 + 0x218) != 0) {
                      (*(code *)PTR_free_02bf74b0)();
                      *(undefined8 *)(lVar27 + 0x218) = 0;
                    }
                    if (*(long *)(lVar27 + 0x1f8) != 0) {
                      (*(code *)PTR_free_02bf74b0)();
                      *(undefined8 *)(lVar27 + 0x1f8) = 0;
                    }
                    memset((void *)(lVar27 + 0x78),0,0x1a8);
                    *(undefined8 *)(lVar27 + 0x88) = 0xffffffffffffffff;
                    lVar27 = plVar9[100];
                    *(undefined4 *)((long)plVar9 + 0xac) = 1;
                    if (*(code **)(lVar27 + 8) != (code *)0x0) {
                      uVar6 = (**(code **)(lVar27 + 8))(plVar9);
                      if (uVar6 == 0) {
                        lVar27 = plVar9[100];
                        goto LAB_019d1590;
                      }
                      goto LAB_019d0ef0;
                    }
LAB_019d1590:
                    if (plVar9[0x1e] < 0) {
                      plVar9[0x1e] = *(long *)(lVar27 + 0x70);
                    }
                    if ((int)plVar9[0x1f] < 0) {
                      *(uint *)(plVar9 + 0x1f) = (uint)*(ushort *)(plVar9[0x65] + 0x70);
                    }
                    plVar9[0x3e] = (long)&LAB_019ca4c4;
                    plVar9[0x3d] = (long)&LAB_019ca4c4;
                    plVar9[0x40] = (long)FUN_019ca3d8;
                    plVar9[0x3f] = (long)FUN_019ca3d8;
                    if ((*(byte *)(lVar27 + 0x7c) >> 4 & 1) != 0) {
                      uVar6 = (**(code **)(lVar27 + 0x28))(plVar9,&local_168);
                      if (uVar6 == 0) {
                        *plVar9 = param_1;
                        *(undefined1 *)((long)plVar9 + 0x2e9) = 1;
                        FUN_019c1fbc(*(undefined8 *)(param_1 + 0x900),plVar9);
                        uVar6 = FUN_019d2c50(param_1);
                        if (uVar6 != 0) {
                          (**(code **)(plVar9[100] + 0x18))(plVar9,uVar6,0);
                          goto LAB_019d0ef0;
                        }
                        FUN_019d9cd0(plVar9,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
                      }
                      FUN_019d2d14(plVar9);
                      goto LAB_019d0ef0;
                    }
                    *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_1 + 0x610);
                    *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(param_1 + 0x608);
                    *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_1 + 0x640);
                    *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_1 + 0x638);
                    *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(param_1 + 0x628);
                    *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(param_1 + 0x620);
                    *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_1 + 0x618);
                    *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0x6c8);
                    *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x6c0);
                    uVar10 = FUN_019c2878(param_1 + 0x430);
                    if ((uVar10 & 1) == 0) goto LAB_019d16bc;
                    auVar40 = FUN_019c338c();
                    lVar27 = FUN_019c33ec(auVar40._0_8_,auVar40._8_8_,
                                          *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x18),
                                          *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x20));
                    if (999 < lVar27) {
                      FUN_019c216c(*(undefined8 *)(param_1 + 0x900),param_1,FUN_019d2f48);
                      *(undefined1 (*) [16])(*(long *)(param_1 + 0x900) + 0x18) = auVar40;
                    }
                    if ((*(char *)(param_1 + 0x523) == '\0') ||
                       (*(char *)(param_1 + 0x8948) != '\0')) {
                      uVar10 = FUN_019d2db8(param_1,plVar9);
                      if ((*(byte *)(param_1 + 0x8a20) & 0x28) == 0) {
                        local_2dc = 0;
                      }
                      else {
                        local_2dc = (uint)((*(byte *)(plVar9[100] + 0x78) & 3) != 0);
                      }
                      uVar6 = 0;
                      if ((uVar10 & 1) != 0) {
                        uVar6 = FUN_019c23e8(param_1,plVar9);
                        uVar6 = uVar6 ^ 1;
                      }
                      pcVar13 = (char *)FUN_019c1f80(*(undefined8 *)(param_1 + 0x900),*plVar39);
                      if (pcVar13 == (char *)0x0) goto LAB_019d1f44;
                      uVar10 = FUN_019c0ce8(*(undefined8 *)(param_1 + 0x60));
                      FUN_019c9f64(param_1,"Found bundle for host %s: %p\n",*plVar39,pcVar13);
                      bVar4 = false;
                      if ((uVar6 & 1) != 0) {
                        if (*pcVar13 == '\0') {
                          FUN_019c9f64(param_1,"Server doesn\'t support pipelining\n");
                          bVar4 = false;
                        }
                        else {
                          bVar4 = true;
                        }
                      }
                      puVar37 = (undefined8 *)**(undefined8 **)(pcVar13 + 0x10);
                      if (puVar37 == (undefined8 *)0x0) goto LAB_019d1f44;
                      plVar24 = plVar9 + 0x2e;
                      plVar35 = (long *)0x0;
                      uVar38 = uVar10;
                      while( true ) {
                        plVar36 = (long *)*puVar37;
                        puVar37 = (undefined8 *)puVar37[2];
                        uVar22 = FUN_019d2f60(plVar36,param_1);
                        if ((uVar22 & 1) == 0) break;
LAB_019d1ebc:
                        uVar22 = uVar38;
                        plVar36 = plVar35;
LAB_019d1ec4:
                        plVar35 = plVar36;
                        uVar38 = uVar22;
                        if (puVar37 == (undefined8 *)0x0) {
                          if (plVar36 != (long *)0x0) {
LAB_019d1ed0:
                            uVar10 = FUN_019d2db8(param_1,plVar36);
                            if ((((uVar10 & 1) == 0) ||
                                (lVar27 = *(long *)(plVar36[0x74] + 0x18) +
                                          *(long *)(plVar36[0x73] + 0x18), lVar27 == 0)) ||
                               ((FUN_019c9f64(param_1,
                                              "Found connection %ld, with requests in the pipe (%zu)\n"
                                              ,plVar36[10],lVar27),
                                uVar7 <= *(ulong *)(plVar36[0xd8] + 8) ||
                                (uVar8 <= *(ulong *)(*(long *)(param_1 + 0x900) + 8)))))
                            goto LAB_019d1fe8;
                            FUN_019c9f64(param_1,
                                         "We can reuse, but we want a new connection anyway\n");
                          }
                          goto LAB_019d1f44;
                        }
                      }
                      uVar22 = ((long *)plVar36[0x74])[3] + ((undefined8 *)plVar36[0x73])[3];
                      if (!bVar4) {
                        if (uVar22 == 0) {
                          if (((int)plVar36[0x3a] != -1) && ((char)plVar36[0x5c] == '\0'))
                          goto LAB_019d1c5c;
                          FUN_019c9f64(param_1,"Connection #%ld isn\'t open enough, can\'t reuse\n",
                                       plVar36[10]);
                        }
                        goto LAB_019d1ebc;
                      }
                      plVar29 = *(long **)plVar36[0x73];
                      if (plVar29 == (long *)0x0) {
                        lVar27 = 0;
                      }
                      else {
                        lVar27 = *plVar29;
                      }
                      plVar29 = *(long **)plVar36[0x74];
                      lVar28 = 0;
                      if (plVar29 != (long *)0x0) {
                        lVar28 = *plVar29;
                      }
                      if (((lVar27 != 0) || (lVar27 = lVar28, lVar28 != 0)) &&
                         (uVar23 = FUN_019d2db8(lVar27,plVar36), (uVar23 & 1) == 0))
                      goto LAB_019d1ebc;
LAB_019d1c5c:
                      uVar6 = *(uint *)(plVar9[100] + 0x7c);
                      if (((((((*(uint *)(plVar36[100] + 0x7c) ^ uVar6) & 1) != 0) &&
                            ((*(uint *)(plVar36[100] + 0x78) & *(uint *)(plVar9[100] + 0x78)) == 0))
                           || (((uVar6 & 1) != 0 &&
                               ((*(char *)(param_1 + 0x440) != (char)plVar36[0xd4] ||
                                (*(char *)(param_1 + 0x441) != *(char *)((long)plVar36 + 0x6a1))))))
                           ) || (*(char *)((long)plVar9 + 0x2e2) != *(char *)((long)plVar36 + 0x2e2)
                                )) || ((!bVar4 && ((char)plVar36[9] != '\0')))) goto LAB_019d1ebc;
                      pcVar13 = (char *)plVar9[0xd5];
                      if (((pcVar13 != (char *)0x0) || ((short)plVar9[0xd6] != 0)) &&
                         (((((short)plVar36[0xd6] != (short)plVar9[0xd6] ||
                            (*(int *)((long)plVar36 + 0x6b4) != *(int *)((long)plVar9 + 0x6b4))) ||
                           (pcVar13 == (char *)0x0)) ||
                          (((char *)plVar36[0xd5] == (char *)0x0 ||
                           (iVar5 = strcmp((char *)plVar36[0xd5],pcVar13), iVar5 != 0))))))
                      goto LAB_019d1ebc;
                      bVar3 = false;
                      if ((~local_2dc & (uVar6 & 0x80) >> 7) == 0) {
                        iVar5 = FUN_019d9df0(*plVar24,plVar36[0x2e]);
                        if ((iVar5 == 0) ||
                           (iVar5 = FUN_019d9df0(plVar9[0x2f],plVar36[0x2f]), iVar5 == 0))
                        goto LAB_019d1ebc;
                        bVar3 = true;
                      }
                      if (((*(char *)((long)plVar9 + 0x2e3) != '\0') &&
                          ((*(byte *)(plVar9[100] + 0x7c) & 1) == 0)) &&
                         (((*(char *)((long)plVar36 + 0x2e3) == '\0' ||
                           (((*(char *)((long)plVar9 + 0x2ed) == '\0' ||
                             (*(char *)((long)plVar36 + 0x2ed) == '\0')) ||
                            (iVar5 = FUN_019e23a8(plVar9[0x1c],plVar36[0x1c]), iVar5 == 0)))) ||
                          (plVar9[0x1e] != plVar36[0x1e])))) {
                        if (((*(char *)((long)plVar36 + 0x2e2) != '\0') &&
                            ((int)plVar9[0x34] == (int)plVar36[0x34])) &&
                           ((*(char *)((long)plVar9 + 0x2ed) == *(char *)((long)plVar36 + 0x2ed) &&
                            ((iVar5 = FUN_019e23a8(plVar9[0x1c],plVar36[0x1c]), iVar5 != 0 &&
                             (plVar9[0x1e] == plVar36[0x1e])))))) goto LAB_019d1dc4;
                        goto LAB_019d1ebc;
                      }
                      iVar5 = FUN_019e23a8(*(undefined8 *)plVar9[100],*(undefined8 *)plVar36[100]);
                      if (((iVar5 == 0) &&
                          ((*(uint *)(plVar36[100] + 0x78) & *(uint *)(plVar9[100] + 0x78)) == 0))
                         || (((iVar5 = FUN_019e23a8(*plVar39,plVar36[0x18]), iVar5 == 0 ||
                              ((int)plVar9[0x1f] != (int)plVar36[0x1f])) ||
                             (((*(byte *)(plVar9[100] + 0x7c) & 1) != 0 &&
                              ((uVar23 = FUN_019c276c(plVar9 + 0x4b,plVar36 + 0x4b),
                               (uVar23 & 1) == 0 || (*(int *)((long)plVar36 + 0x20c) != 2))))))))
                      goto LAB_019d1ebc;
LAB_019d1dc4:
                      if (local_2dc == 0) {
                        if (uVar22 != 0 && !(bool)(bVar4 ^ 1)) {
                          if (((uVar10 <= uVar22) ||
                              (uVar23 = FUN_019c223c(param_1,plVar36), (uVar23 & 1) != 0)) ||
                             (uVar38 <= uVar22)) goto LAB_019d1ebc;
                          goto LAB_019d1ec4;
                        }
                        goto LAB_019d1ed0;
                      }
                      if ((!bVar3) || ((int)plVar36[0x7c] == 0)) {
                        uVar22 = uVar38;
                        if (!bVar3) {
                          plVar36 = plVar35;
                        }
                        goto LAB_019d1ec4;
                      }
LAB_019d1fe8:
                      *(undefined1 *)(plVar36 + 9) = 1;
                      if (plVar9[0x1a] != 0) {
                        uVar7 = FUN_019d301c(&PTR_free_02bf74b0);
                        return uVar7;
                      }
                      FUN_019c2984(plVar9 + 0x4b);
                      *plVar36 = *plVar9;
                      cVar1 = *(char *)((long)plVar9 + 0x2e4);
                      *(char *)((long)plVar36 + 0x2e4) = cVar1;
                      if (cVar1 != '\0') {
                        if (plVar36[0x2e] != 0) {
                          (*(code *)PTR_free_02bf74b0)();
                          plVar36[0x2e] = 0;
                        }
                        if (plVar36[0x2f] != 0) {
                          (*(code *)PTR_free_02bf74b0)();
                          plVar36[0x2f] = 0;
                        }
                        lVar27 = *plVar24;
                        plVar36[0x2f] = plVar9[0x2f];
                        plVar36[0x2e] = lVar27;
                        *plVar24 = 0;
                        plVar9[0x2f] = 0;
                      }
                      cVar1 = *(char *)((long)plVar9 + 0x2e5);
                      *(char *)((long)plVar36 + 0x2e5) = cVar1;
                      if (cVar1 != '\0') {
                        if (plVar36[0x32] != 0) {
                          (*(code *)PTR_free_02bf74b0)();
                          plVar36[0x32] = 0;
                        }
                        if (plVar36[0x33] != 0) {
                          (*(code *)PTR_free_02bf74b0)();
                          plVar36[0x33] = 0;
                        }
                        lVar27 = plVar9[0x32];
                        plVar36[0x33] = plVar9[0x33];
                        plVar36[0x32] = lVar27;
                        plVar9[0x32] = 0;
                        plVar9[0x33] = 0;
                      }
                      plVar35 = plVar36 + 0x16;
                      if (*plVar35 != 0) {
                        (*(code *)PTR_free_02bf74b0)();
                        *plVar35 = 0;
                      }
                      lVar27 = plVar9[0x18];
                      plVar36[0x19] = plVar9[0x19];
                      plVar36[0x18] = lVar27;
                      lVar27 = plVar9[0x16];
                      plVar36[0x17] = plVar9[0x17];
                      *plVar35 = lVar27;
                      FUN_019bcd9c(plVar36);
                      *(undefined1 *)((long)plVar36 + 0x2e1) = 1;
                      if (*plVar24 != 0) {
                        (*(code *)PTR_free_02bf74b0)();
                        *plVar24 = 0;
                      }
                      if (plVar9[0x2f] != 0) {
                        (*(code *)PTR_free_02bf74b0)();
                        plVar9[0x2f] = 0;
                      }
                      if (plVar9[0x32] != 0) {
                        (*(code *)PTR_free_02bf74b0)();
                        plVar9[0x32] = 0;
                      }
                      if (plVar9[0x33] != 0) {
                        (*(code *)PTR_free_02bf74b0)();
                        plVar9[0x33] = 0;
                      }
                      if (plVar9[0xd5] != 0) {
                        (*(code *)PTR_free_02bf74b0)();
                        plVar9[0xd5] = 0;
                      }
                      FUN_019da520(plVar9[0x73],0);
                      FUN_019da520(plVar9[0x74],0);
                      plVar9[0x73] = 0;
                      plVar9[0x74] = 0;
                      if (plVar9[0x75] != 0) {
                        (*(code *)PTR_free_02bf74b0)();
                        plVar9[0x75] = 0;
                      }
                      (*(code *)PTR_free_02bf74b0)(plVar9);
                      *param_2 = (long)plVar36;
                      FUN_019d2e18(param_1,plVar35);
                      lVar27 = 200;
                      if (plVar36[0x1c] != 0) {
                        lVar27 = 0xe8;
                      }
                      FUN_019c9f64(param_1,"Re-using existing connection! (#%ld) with host %s\n",
                                   plVar36[10],*(undefined8 *)((long)plVar36 + lVar27));
                      plVar9 = plVar36;
LAB_019d2308:
                      *(undefined1 *)(plVar9 + 9) = 1;
                      FUN_019d2d14(plVar9);
                      uVar6 = FUN_019d2c50(param_1);
                      if (uVar6 == 0) {
                        plVar9[0x7a] = *(long *)(param_1 + 0x2c8);
                        plVar9[0x7b] = *(long *)(param_1 + 0x248);
                        plVar9[0x78] = *(long *)(param_1 + 0x298);
                        plVar9[0x79] = *(long *)(param_1 + 0x328);
                        uVar25 = FUN_019bccd8(param_1,0,1);
                        if (*(char *)((long)plVar9 + 0x2e1) == '\0') {
                          FUN_019d2e18(param_1,plVar9 + 0x16);
                          if (((char *)plVar9[0x1c] == (char *)0x0) ||
                             (*(char *)plVar9[0x1c] == '\0')) {
                            plVar9[0x1e] = (long)(int)plVar9[0x1f];
                            iVar5 = FUN_019c3a58(plVar9,plVar9[0x18],(long)(int)plVar9[0x1f],
                                                 &local_168,uVar25);
                            if (iVar5 == -2) goto LAB_019d2428;
                            if (iVar5 == 1) goto LAB_019d2418;
                            uVar6 = 0;
                            if (local_168 == (char *)0x0) {
                              FUN_019ca0fc(param_1,"Couldn\'t resolve host \'%s\'",plVar9[0x19]);
                              uVar6 = 6;
                            }
                          }
                          else {
                            FUN_019d2e18(param_1,plVar9 + 0x1a);
                            iVar5 = FUN_019c3a58(plVar9,plVar9[0x1c],(int)plVar9[0x1e],&local_168,
                                                 uVar25);
                            if (iVar5 == -2) {
LAB_019d2428:
                              uVar6 = 0x1c;
                            }
                            else if (iVar5 == 1) {
LAB_019d2418:
                              uVar6 = 0;
                              *param_3 = '\x01';
                            }
                            else {
                              uVar6 = 0;
                              if (local_168 == (char *)0x0) {
                                FUN_019ca0fc(param_1,"Couldn\'t resolve proxy \'%s\'",plVar9[0x1d]);
                                uVar6 = 5;
                              }
                            }
                          }
                          plVar9[0xb] = (long)local_168;
                        }
                        else {
                          uVar6 = 0;
                          *param_3 = '\0';
                        }
                      }
                    }
                    else {
LAB_019d1f44:
                      lVar27 = FUN_019c1f80(*(undefined8 *)(param_1 + 0x900),*plVar39);
                      if (uVar7 == 0) {
LAB_019d1fe0:
                        bVar4 = false;
                      }
                      else {
                        bVar4 = false;
                        if ((lVar27 != 0) && (bVar4 = false, uVar7 <= *(ulong *)(lVar27 + 8))) {
                          auVar40 = FUN_019c338c();
                          puVar37 = (undefined8 *)**(undefined8 **)(lVar27 + 0x10);
                          if (puVar37 != (undefined8 *)0x0) {
                            plVar24 = (long *)0x0;
                            lVar27 = -1;
                            do {
                              plVar39 = (long *)*puVar37;
                              plVar35 = plVar24;
                              lVar28 = lVar27;
                              if (((char)plVar39[9] == '\0') &&
                                 (lVar28 = FUN_019c33ec(auVar40._0_8_,auVar40._8_8_,plVar39[0x36],
                                                        plVar39[0x37]), plVar35 = plVar39,
                                 lVar28 <= lVar27)) {
                                plVar35 = plVar24;
                                lVar28 = lVar27;
                              }
                              puVar37 = (undefined8 *)puVar37[2];
                              plVar24 = plVar35;
                              lVar27 = lVar28;
                            } while (puVar37 != (undefined8 *)0x0);
                            if (plVar35 != (long *)0x0) {
                              *plVar35 = param_1;
                              FUN_019cf8e8(plVar35,0);
                              goto LAB_019d1fe0;
                            }
                          }
                          bVar4 = true;
                        }
                      }
                      if ((uVar8 == 0) || (*(ulong *)(*(long *)(param_1 + 0x900) + 8) < uVar8)) {
LAB_019d2260:
                        if (!bVar4) {
                          FUN_019c1fbc(*(undefined8 *)(param_1 + 0x900),plVar9);
                          pbVar21 = (byte *)(param_1 + 0x8a28);
                          if (((*pbVar21 & 0x28) != 0) && (*(char *)(param_1 + 0x8a38) != '\0')) {
                            FUN_019c9f64(param_1,"NTLM picked AND auth done set, clear picked!\n");
                            pbVar21[0] = 0;
                            pbVar21[1] = 0;
                            pbVar21[2] = 0;
                            pbVar21[3] = 0;
                            pbVar21[4] = 0;
                            pbVar21[5] = 0;
                            pbVar21[6] = 0;
                            pbVar21[7] = 0;
                          }
                          pbVar21 = (byte *)(param_1 + 0x8a48);
                          if (((*pbVar21 & 0x28) != 0) && (*(char *)(param_1 + 0x8a58) != '\0')) {
                            FUN_019c9f64(param_1,
                                         "NTLM-proxy picked AND auth done set, clear picked!\n");
                            pbVar21[0] = 0;
                            pbVar21[1] = 0;
                            pbVar21[2] = 0;
                            pbVar21[3] = 0;
                            pbVar21[4] = 0;
                            pbVar21[5] = 0;
                            pbVar21[6] = 0;
                            pbVar21[7] = 0;
                          }
                          goto LAB_019d2308;
                        }
                      }
                      else {
                        plVar24 = (long *)FUN_019d2e94(param_1);
                        if (plVar24 != (long *)0x0) {
                          *plVar24 = param_1;
                          FUN_019cf8e8(plVar24,0);
                          goto LAB_019d2260;
                        }
                      }
                      FUN_019c9f64(param_1,"No connections available.\n");
                      FUN_019cfa14(plVar9);
                      uVar6 = 0x59;
                      *param_2 = 0;
                    }
                    goto joined_r0x019d19d4;
                  }
                  lVar27 = (*(code *)PTR_strdup_02bf74c0)(local_2b0);
                  plVar9[0x30] = lVar27;
                  if (lVar27 != 0) goto LAB_019d148c;
LAB_019d16bc:
                  uVar6 = 0x1b;
                  goto LAB_019d0ef0;
                }
                (*(code *)PTR_free_02bf74b0)(local_2b0);
                local_2b0 = (char *)(*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(param_1 + 0x658))
                ;
                if (local_2b0 != (char *)0x0) goto LAB_019d13a8;
                goto LAB_019d05e4;
              }
LAB_019d102c:
              if ((*pbVar21 == 0) || ((*(byte *)(plVar9[100] + 0x7c) >> 4 & 1) != 0)) {
LAB_019d1088:
                (*(code *)PTR_free_02bf74b0)(pbVar21);
                goto LAB_019d109c;
              }
              pcVar13 = strstr((char *)pbVar21,"://");
              pbVar34 = pbVar21;
              if (pcVar13 != (char *)0x0) {
                pbVar34 = (byte *)(pcVar13 + 3);
                iVar5 = FUN_019e2430("socks5h",pbVar21,7);
                if (iVar5 == 0) {
                  iVar5 = FUN_019e2430("socks5",pbVar21,6);
                  if (iVar5 == 0) {
                    iVar5 = FUN_019e2430("socks4a",pbVar21,7);
                    if (iVar5 == 0) {
                      iVar5 = FUN_019e2430("socks4",pbVar21,6);
                      if ((iVar5 == 0) && (iVar5 = FUN_019e2430("socks",pbVar21,5), iVar5 == 0))
                      goto LAB_019d1720;
                      uVar26 = 4;
                    }
                    else {
                      uVar26 = 6;
                    }
                  }
                  else {
                    uVar26 = 5;
                  }
                  *(undefined4 *)(plVar9 + 0x34) = uVar26;
                }
                else {
                  *(undefined4 *)(plVar9 + 0x34) = 7;
                }
              }
LAB_019d1720:
              pcVar13 = strchr((char *)pbVar34,0x40);
              if (pcVar13 != (char *)0x0) {
                local_168 = (char *)0x0;
                local_268 = (char *)0x0;
                uVar6 = FUN_019d281c(pbVar34,(long)pcVar13 - (long)pbVar34,&local_168,&local_268,0);
                if (uVar6 == 0) {
                  if (plVar9[0x32] != 0) {
                    (*(code *)PTR_free_02bf74b0)();
                    plVar9[0x32] = 0;
                  }
                  pcVar14 = local_168;
                  if ((local_168 == (char *)0x0) || (sVar11 = strlen(local_168), 0xff < sVar11)) {
                    lVar27 = (*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
                  }
                  else {
                    lVar27 = FUN_019d4834(param_1,pcVar14,0,0);
                  }
                  plVar9[0x32] = lVar27;
                  if (lVar27 != 0) {
                    if (plVar9[0x33] != 0) {
                      (*(code *)PTR_free_02bf74b0)();
                      plVar9[0x33] = 0;
                    }
                    pcVar14 = local_268;
                    if ((local_268 == (char *)0x0) || (sVar11 = strlen(local_268), 0xff < sVar11)) {
                      lVar27 = (*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
                    }
                    else {
                      lVar27 = FUN_019d4834(param_1,pcVar14,0,0);
                    }
                    plVar9[0x33] = lVar27;
                    if (lVar27 != 0) {
                      uVar6 = 0;
                      pbVar34 = (byte *)(pcVar13 + 1);
                      *(undefined1 *)((long)plVar9 + 0x2e5) = 1;
                      goto LAB_019d1850;
                    }
                  }
                  uVar6 = 0x1b;
                }
LAB_019d1850:
                if (local_168 != (char *)0x0) {
                  (*(code *)PTR_free_02bf74b0)();
                  local_168 = (char *)0x0;
                }
                if (local_268 != (char *)0x0) {
                  (*(code *)PTR_free_02bf74b0)();
                  local_268 = (char *)0x0;
                }
                if (uVar6 == 0) goto LAB_019d188c;
LAB_019d19b4:
                (*(code *)PTR_free_02bf74b0)(pbVar21);
                goto joined_r0x019d19d4;
              }
LAB_019d188c:
              __s = pbVar34;
              if (*pbVar34 == 0x5b) {
                __s = pbVar34 + 1;
                uVar6 = (uint)*__s;
                pbVar33 = __s;
                if (*__s != 0) {
                  pbVar34 = pbVar34 + 2;
LAB_019d18ac:
                  pbVar33 = pbVar34;
                  iVar5 = isxdigit(uVar6);
                  if (((iVar5 != 0) || (uVar6 == 0x2e)) || (uVar6 == 0x3a)) goto LAB_019d18cc;
                  if (uVar6 == 0x25) {
                    iVar5 = strncmp("%25",(char *)(pbVar33 + -1),3);
                    if (iVar5 != 0) {
                      FUN_019c9f64(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
                    }
                    bVar2 = *pbVar33;
                    while( true ) {
                      uVar6 = (uint)bVar2;
                      if (uVar6 == 0) goto LAB_019d18d8;
                      iVar5 = isalpha(uVar6);
                      if (((iVar5 == 0) && (iVar5 = isxdigit(uVar6), iVar5 == 0)) &&
                         ((1 < uVar6 - 0x2d && ((uVar6 != 0x7e && (uVar6 != 0x5f)))))) break;
                      pbVar33 = pbVar33 + 1;
                      bVar2 = *pbVar33;
                    }
                  }
                  else {
                    pbVar33 = pbVar33 + -1;
                  }
                  if (uVar6 == 0x5d) {
                    pbVar34 = pbVar33 + 1;
                    *pbVar33 = 0;
                    goto LAB_019d18ec;
                  }
                }
LAB_019d18d8:
                FUN_019c9f64(param_1,"Invalid IPv6 address format\n");
                pbVar34 = pbVar33;
              }
LAB_019d18ec:
              pcVar13 = strchr((char *)pbVar34,0x3a);
              if (pcVar13 == (char *)0x0) {
                if (*__s == 0x2f) {
                  uVar6 = 5;
                  goto LAB_019d19b4;
                }
                pcVar13 = strchr((char *)__s,0x2f);
                if (pcVar13 != (char *)0x0) {
                  *pcVar13 = '\0';
                }
                lVar27 = *(long *)(param_1 + 0x238);
                if (lVar27 != 0) goto LAB_019d190c;
              }
              else {
                *pcVar13 = '\0';
                lVar27 = strtol(pcVar13 + 1,(char **)0x0,10);
LAB_019d190c:
                plVar9[0x1e] = lVar27;
              }
              lVar27 = (*(code *)PTR_strdup_02bf74c0)(__s);
              plVar9[0x1a] = lVar27;
              plVar9[0x1c] = lVar27;
              if (lVar27 == 0) {
                uVar6 = 0x1b;
                goto LAB_019d19b4;
              }
              (*(code *)PTR_free_02bf74b0)(pbVar21);
              bVar4 = false;
              if (*(uint *)(plVar9 + 0x34) < 2) {
                if (((*(byte *)(plVar9[100] + 0x78) & 3) == 0) &&
                   (*(char *)((long)plVar9 + 0x2ed) == '\0')) {
                  plVar9[100] = (long)&PTR_DAT_02bafdf0;
                }
                bVar4 = true;
              }
              *(bool *)((long)plVar9 + 0x2e3) = bVar4;
              *(undefined1 *)((long)plVar9 + 0x2e2) = 1;
              if ((bVar4) && ((*(uint *)(plVar9[0x65] + 0x7c) & 1) != 0)) {
                *(undefined1 *)((long)plVar9 + 0x2ed) = 1;
              }
              goto LAB_019d10c4;
            }
          }
joined_r0x019d19d4:
          if (local_2b0 != (char *)0x0) {
LAB_019d0ef0:
            (*(code *)PTR_free_02bf74b0)(local_2b0);
          }
          goto LAB_019d05e8;
        }
        if (*plVar24 != 0) {
          (*(code *)PTR_free_02bf74b0)();
          *plVar24 = 0;
        }
        *plVar35 = 0;
      }
    }
    else {
      lVar27 = (*(code *)PTR_calloc_02bf74c8)(0x4000,1);
      plVar9[0x75] = lVar27;
      if (lVar27 != 0) goto LAB_019d0338;
LAB_019d0574:
      FUN_019da520(plVar9[0x73],0);
      FUN_019da520(plVar9[0x74],0);
      plVar9[0x74] = 0;
      plVar9[0x73] = 0;
      if (plVar9[0x75] != 0) {
        (*(code *)PTR_free_02bf74b0)();
        plVar9[0x75] = 0;
      }
      if (plVar9[0xd5] != 0) {
        (*(code *)PTR_free_02bf74b0)();
        plVar9[0xd5] = 0;
      }
      (*(code *)PTR_free_02bf74b0)(plVar9);
    }
LAB_019d05e4:
    uVar6 = 0x1b;
  }
LAB_019d05e8:
  if (local_288 != (char *)0x0) {
    (*(code *)PTR_free_02bf74b0)();
    local_288 = (char *)0x0;
  }
  if (local_280 != 0) {
    (*(code *)PTR_free_02bf74b0)();
    local_280 = 0;
  }
  if (uVar6 == 0) {
    lVar27 = *param_2;
    if ((*(long *)(*(long *)(lVar27 + 0x398) + 0x18) != 0) ||
       (*(long *)(*(long *)(lVar27 + 0x3a0) + 0x18) != 0)) {
      uVar6 = 0;
      *param_4 = 1;
      goto LAB_019d0670;
    }
    uVar6 = 0;
    if (*param_3 != '\0') goto LAB_019d0670;
    uVar6 = FUN_019d0074(lVar27,param_4);
  }
  if (uVar6 != 0) {
    if (uVar6 != 0x59) {
      if (*param_2 == 0) goto LAB_019d0670;
      FUN_019cf8e8(*param_2,0);
    }
    *param_2 = 0;
  }
LAB_019d0670:
  return (ulong)uVar6;
code_r0x019d0d28:
  ppuVar30 = (undefined **)*puVar37;
  if (ppuVar30 == (undefined **)0x0) goto LAB_019d0ecc;
  goto LAB_019d0d18;
LAB_019d0ecc:
  FUN_019ca0fc(param_1,"Protocol \"%s\" not supported or disabled in libcurl",local_2a0);
  uVar6 = 1;
  goto joined_r0x019d19d4;
LAB_019d18cc:
  uVar6 = (uint)*pbVar33;
  pbVar34 = pbVar33 + 1;
  if (uVar6 == 0) goto LAB_019d18d8;
  goto LAB_019d18ac;
}

