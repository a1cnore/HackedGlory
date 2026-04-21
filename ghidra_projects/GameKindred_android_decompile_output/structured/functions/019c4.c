// functions/019c4 — 12 functions
#include "libGameKindred.h"




void FUN_019c4410(long param_1)

{
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)(param_1 + 0x800) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = 0;
  *(undefined8 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(uint *)(param_1 + 0x7d8) = *(uint *)(param_1 + 0x7d8) & 0xffffff9f;
  return;
}




void FUN_019c4438(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    uVar1 = *(uint *)(param_1 + 0x7d8) & 0xffffffbf;
  }
  else {
    *(long *)(param_1 + 0x7a8) = param_2;
    uVar1 = *(uint *)(param_1 + 0x7d8) | 0x40;
  }
  *(uint *)(param_1 + 0x7d8) = uVar1;
  return;
}




void FUN_019c4460(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    uVar1 = *(uint *)(param_1 + 0x7d8) & 0xffffffdf;
  }
  else {
    *(long *)(param_1 + 0x7b0) = param_2;
    uVar1 = *(uint *)(param_1 + 0x7d8) | 0x20;
  }
  *(uint *)(param_1 + 0x7d8) = uVar1;
  return;
}




void FUN_019c4488(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  uVar1 = FUN_019c338c();
  switch(param_2) {
  case 1:
    *(undefined8 *)(param_1 + 0x848) = uVar1;
    *(ulong *)(param_1 + 0x850) = CONCAT44(extraout_var,extraout_w1);
    break;
  case 2:
    *(undefined8 *)(param_1 + 0x838) = uVar1;
    *(ulong *)(param_1 + 0x840) = CONCAT44(extraout_var,extraout_w1);
    break;
  case 3:
    uVar1 = FUN_019c341c(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x838),
                         *(undefined8 *)(param_1 + 0x840));
    *(undefined8 *)(param_1 + 0x7f8) = uVar1;
    break;
  case 4:
    uVar1 = FUN_019c341c(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x838),
                         *(undefined8 *)(param_1 + 0x840));
    *(undefined8 *)(param_1 + 0x800) = uVar1;
    break;
  case 5:
    uVar1 = FUN_019c341c(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x838),
                         *(undefined8 *)(param_1 + 0x840));
    *(undefined8 *)(param_1 + 0x808) = uVar1;
    break;
  case 6:
    uVar1 = FUN_019c341c(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x838),
                         *(undefined8 *)(param_1 + 0x840));
    *(undefined8 *)(param_1 + 0x810) = uVar1;
    break;
  case 7:
    uVar1 = FUN_019c341c(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x838),
                         *(undefined8 *)(param_1 + 0x840));
    *(undefined8 *)(param_1 + 0x818) = uVar1;
    break;
  case 9:
    uVar1 = FUN_019c338c();
    *(undefined8 *)(param_1 + 0x858) = uVar1;
    *(ulong *)(param_1 + 0x860) = CONCAT44(extraout_var_00,extraout_w1_00);
    break;
  case 10:
    uVar1 = FUN_019c341c(uVar1,extraout_w1,*(undefined8 *)(param_1 + 0x828),
                         *(undefined8 *)(param_1 + 0x830));
    *(undefined8 *)(param_1 + 0x820) = uVar1;
  }
  return;
}




void FUN_019c4568(long param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  auVar1 = FUN_019c338c();
  *(undefined1 (*) [16])(param_1 + 0x828) = auVar1;
  *(uint *)(param_1 + 0x7d8) = *(uint *)(param_1 + 0x7d8) & 0x90;
  return;
}




void FUN_019c45a4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x7b8) = param_2;
  return;
}




void FUN_019c45ac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x7c0) = param_2;
  return;
}




void FUN_019c45b4(undefined8 *param_1,ulong param_2)

{
  if ((long)param_2 < 1) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0x2d2d3a2d2d3a2d2d;
    return;
  }
  if ((long)param_2 < 360000) {
    FUN_019d5bc0(param_1,9,"%2ld:%02ld:%02ld",param_2 / 0xe10,(param_2 % 0xe10) / 0x3c,
                 (param_2 % 0xe10) % 0x3c);
    return;
  }
  if ((long)param_2 < 86400000) {
    FUN_019d5bc0(param_1,9,"%3ldd %02ldh",param_2 / 0x15180,(param_2 % 0x15180) / 0xe10);
    return;
  }
  FUN_019d5bc0(param_1,9,"%7ldd");
  return;
}




undefined8 FUN_019c46a8(ulong param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((long)param_1 < 100000) {
    pcVar1 = "%5ld";
  }
  else if ((long)param_1 < 0x9c4000) {
    param_1 = param_1 >> 10 & 0x3fffff;
    pcVar1 = "%4ldk";
  }
  else {
    if ((long)param_1 < 0x6400000) {
      uVar2 = param_1 >> 0x14 & 0xfff;
      uVar3 = (ulong)(((uint)param_1 & 0xfffff) / 0x19999);
      pcVar1 = "%2ld.%0ldM";
LAB_019c478c:
      FUN_019d5bc0(param_2,6,pcVar1,uVar2,uVar3);
      return param_2;
    }
    if ((long)param_1 < 0x271000000) {
      param_1 = param_1 >> 0x14;
      pcVar1 = "%4ldM";
    }
    else {
      if ((long)param_1 < 0x1900000000) {
        uVar2 = param_1 >> 0x1e;
        uVar3 = (ulong)((uint)param_1 >> 1 & 0x1fffffff) / 0x3333333;
        pcVar1 = "%2ld.%0ldG";
        goto LAB_019c478c;
      }
      if ((long)param_1 < 0x9c400000000) {
        param_1 = param_1 >> 0x1e;
        pcVar1 = "%4ldG";
      }
      else if ((long)param_1 < 0x27100000000000) {
        param_1 = param_1 >> 0x28;
        pcVar1 = "%4ldT";
      }
      else {
        param_1 = param_1 >> 0x32;
        pcVar1 = "%4ldP";
      }
    }
  }
  FUN_019d5bc0(param_2,6,pcVar1,param_1);
  return param_2;
}




void FUN_019c4804(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x788);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_019c1238(param_1,2,2);
    uVar1 = *(undefined8 *)(param_1 + 0x798);
    do {
      uVar1 = FUN_019c4878(param_1,*puVar2,uVar1,*(undefined1 *)(param_1 + 0x3c9));
      *(undefined8 *)(param_1 + 0x798) = uVar1;
      puVar2 = (undefined8 *)puVar2[1];
    } while (puVar2 != (undefined8 *)0x0);
    FUN_019c1dcc(*(undefined8 *)(param_1 + 0x788));
    *(undefined8 *)(param_1 + 0x788) = 0;
    FUN_019c1288(param_1,2);
    return;
  }
  return;
}




long FUN_019c4878(undefined8 param_1,char *param_2,long param_3,byte param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  FILE *__stream;
  
  if (param_3 == 0) {
    param_3 = (*(code *)PTR_calloc_02bf74c8)(1,0x28);
    if (param_3 == 0) {
      return 0;
    }
    pcVar4 = "none";
    if (param_2 != (char *)0x0) {
      pcVar4 = param_2;
    }
    uVar3 = (*(code *)PTR_strdup_02bf74c0)(pcVar4);
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  param_4 = param_4 & 1;
  *(undefined1 *)(param_3 + 0x10) = 0;
  if (param_2 == (char *)0x0) {
LAB_019c4a04:
    *(byte *)(param_3 + 0x20) = param_4;
  }
  else {
    iVar2 = FUN_019d9df0(param_2,0x1e21c1a);
    if (iVar2 == 0) {
      if (*param_2 == '\0') goto LAB_019c4a04;
      __stream = fopen(param_2,"r");
      *(byte *)(param_3 + 0x20) = param_4;
      if (__stream == (FILE *)0x0) goto LAB_019c4a08;
      bVar1 = true;
    }
    else {
      *(byte *)(param_3 + 0x20) = param_4;
      __stream = (FILE *)&__sF;
      bVar1 = false;
    }
    pcVar4 = (char *)(*(code *)PTR_malloc_02bf74a8)(5000);
    if (pcVar4 != (char *)0x0) {
      pcVar5 = fgets(pcVar4,5000,__stream);
      if (pcVar5 != (char *)0x0) {
        do {
          iVar2 = FUN_019e2430("Set-Cookie:",pcVar4,0xb);
          pcVar5 = pcVar4;
          if (iVar2 != 0) {
            pcVar5 = pcVar4 + 0xb;
          }
          for (; (*pcVar5 == ' ' || (*pcVar5 == '\t')); pcVar5 = pcVar5 + 1) {
          }
          FUN_019c4a2c(param_1,param_3,iVar2 != 0,pcVar5,0,0);
          pcVar5 = fgets(pcVar4,5000,__stream);
        } while (pcVar5 != (char *)0x0);
      }
      (*(code *)PTR_free_02bf74b0)(pcVar4);
    }
    if (bVar1) {
      fclose(__stream);
    }
  }
LAB_019c4a08:
  *(undefined1 *)(param_3 + 0x10) = 1;
  return param_3;
}




/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_019c4a2c(undefined8 param_1,undefined8 *param_2,ulong param_3,char *param_4,char *param_5,
            char *param_6)

{
  char *__s;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  time_t tVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  size_t sVar9;
  size_t sVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  void *__dest;
  bool bVar17;
  undefined8 *puVar18;
  undefined8 *__dest_00;
  char *pcVar19;
  char *local_468 [129];
  
  tVar5 = time((time_t *)0x0);
  puVar6 = (undefined8 *)(*(code *)PTR_calloc_02bf74c8)(1,0x60);
  if (puVar6 == (void *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((param_3 & 1) == 0) {
    local_468[0] = (char *)0x0;
    iVar4 = strncmp(param_4,"#HttpOnly_",10);
    if (iVar4 == 0) {
      param_4 = param_4 + 10;
      *(undefined1 *)((long)puVar6 + 0x5a) = 1;
    }
    if (*param_4 == '#') goto LAB_019c4f00;
    pcVar7 = strchr(param_4,0xd);
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = '\0';
    }
    pcVar7 = strchr(param_4,10);
    if (pcVar7 != (char *)0x0) {
      *pcVar7 = '\0';
    }
    pcVar7 = strtok_r(param_4,"\t",local_468);
    if (pcVar7 == (char *)0x0) goto LAB_019c5218;
    iVar4 = 0;
    bVar2 = false;
    do {
      switch(iVar4) {
      case 0:
        pcVar8 = pcVar7 + 1;
        if (*pcVar7 != '.') {
          pcVar8 = pcVar7;
        }
        lVar11 = (*(code *)PTR_strdup_02bf74c0)(pcVar8);
        iVar4 = 0;
        puVar6[5] = lVar11;
        bVar2 = (bool)(bVar2 | lVar11 == 0);
        break;
      case 1:
        iVar4 = FUN_019e23a8(pcVar7,&DAT_01e2199e);
        *(bool *)(puVar6 + 8) = iVar4 != 0;
        iVar4 = 1;
        break;
      case 2:
        iVar4 = strcmp("TRUE",pcVar7);
        if ((iVar4 == 0) || (iVar4 = strcmp("FALSE",pcVar7), iVar4 == 0)) {
          lVar11 = (*(code *)PTR_strdup_02bf74c0)("/");
          puVar6[3] = lVar11;
          lVar16 = (*(code *)PTR_strdup_02bf74c0)("/");
          bVar2 = (bool)(bVar2 | lVar11 == 0 | lVar16 == 0);
          puVar6[4] = lVar16;
          goto switchD_019c5000_caseD_3;
        }
        lVar11 = (*(code *)PTR_strdup_02bf74c0)(pcVar7);
        puVar6[3] = lVar11;
        if (lVar11 == 0) {
          iVar4 = 2;
          bVar2 = true;
        }
        else {
          lVar11 = FUN_019c550c();
          puVar6[4] = lVar11;
          bVar2 = (bool)(bVar2 | lVar11 == 0);
          iVar4 = 2;
        }
        break;
      case 3:
switchD_019c5000_caseD_3:
        iVar4 = FUN_019e23a8(pcVar7,&DAT_01e2199e);
        *(bool *)(puVar6 + 0xb) = iVar4 != 0;
        iVar4 = 3;
        break;
      case 4:
        lVar11 = strtol(pcVar7,(char **)0x0,10);
        puVar6[6] = lVar11;
        iVar4 = 4;
        break;
      case 5:
        lVar11 = (*(code *)PTR_strdup_02bf74c0)(pcVar7);
        puVar6[1] = lVar11;
        bVar2 = (bool)(bVar2 | lVar11 == 0);
        iVar4 = 5;
        break;
      case 6:
        lVar11 = (*(code *)PTR_strdup_02bf74c0)(pcVar7);
        bVar2 = (bool)(bVar2 | lVar11 == 0);
        iVar4 = 6;
        puVar6[2] = lVar11;
      }
      pcVar7 = strtok_r((char *)0x0,"\t",local_468);
      iVar4 = iVar4 + 1;
    } while ((pcVar7 != (char *)0x0) && (!bVar2));
    if (iVar4 == 6) {
      lVar11 = (*(code *)PTR_strdup_02bf74c0)(&DAT_01e277f2);
      iVar4 = 6;
      bVar2 = (bool)(bVar2 | lVar11 == 0);
      if (lVar11 != 0) {
        iVar4 = 7;
      }
      puVar6[2] = lVar11;
    }
    if ((bVar2) || (iVar4 != 7)) goto LAB_019c5218;
  }
  else {
    pcVar7 = (char *)(*(code *)PTR_malloc_02bf74a8)(5000);
    if (pcVar7 == (char *)0x0) {
LAB_019c4f00:
      (*(code *)PTR_free_02bf74b0)(puVar6);
      return (undefined8 *)0x0;
    }
    pcVar8 = strchr(param_4,0x3b);
    for (; (*param_4 == '\t' || (*param_4 == ' ')); param_4 = param_4 + 1) {
    }
    bVar2 = false;
LAB_019c4af4:
    *pcVar7 = '\0';
    local_468[0] = (char *)((ulong)local_468[0] & 0xffffffffffffff00);
    iVar4 = sscanf(param_4,"%1023[^;\r\n =]=%4999[^;\r\n]",local_468,pcVar7);
    if (iVar4 < 1) {
joined_r0x019c4d8c:
      bVar17 = bVar2;
      if ((pcVar8 == (char *)0x0) || (param_4 = pcVar8, *pcVar8 == '\0')) goto LAB_019c4f9c;
      do {
        do {
          param_4 = param_4 + 1;
          cVar1 = *param_4;
        } while (cVar1 == ' ');
      } while (cVar1 == '\t');
      pcVar8 = strchr(param_4,0x3b);
      if (pcVar8 == (char *)0x0) {
        if (cVar1 == '\0') goto LAB_019c4f9c;
        sVar9 = strlen(param_4);
        pcVar8 = param_4 + sVar9;
      }
      bVar2 = bVar17;
      if (pcVar8 == (char *)0x0) goto LAB_019c4f9c;
      goto LAB_019c4af4;
    }
    sVar9 = strlen(pcVar7);
    sVar10 = strlen((char *)local_468);
    for (param_4 = param_4 + sVar10; (cVar1 = *param_4, cVar1 == ' ' || (cVar1 == '\t'));
        param_4 = param_4 + 1) {
    }
    for (; pcVar19 = pcVar7, sVar9 != 0; sVar9 = sVar9 - 1) {
      if ((pcVar7[sVar9 - 1] != ' ') && (pcVar7[sVar9 - 1] != '\t')) {
        bVar17 = true;
        goto LAB_019c4b8c;
      }
      pcVar7[sVar9 - 1] = '\0';
    }
    bVar17 = false;
LAB_019c4b8c:
    for (; (*pcVar19 == ' ' || (*pcVar19 == '\t')); pcVar19 = pcVar19 + 1) {
    }
    if (!bVar17) {
      iVar4 = FUN_019e23a8("secure",local_468);
      if (iVar4 == 0) {
        iVar4 = FUN_019e23a8("httponly",local_468);
        if (iVar4 == 0) {
          if (cVar1 == '=') goto LAB_019c4ba4;
        }
        else {
          *(undefined1 *)((long)puVar6 + 0x5a) = 1;
        }
      }
      else {
        *(undefined1 *)(puVar6 + 0xb) = 1;
      }
      goto joined_r0x019c4d8c;
    }
LAB_019c4ba4:
    iVar4 = FUN_019e23a8("path",local_468);
    if (iVar4 == 0) {
      iVar4 = FUN_019e23a8("domain",local_468);
      if (iVar4 == 0) {
        iVar4 = FUN_019e23a8("version",local_468);
        if (iVar4 == 0) {
          iVar4 = FUN_019e23a8("max-age",local_468);
          if (iVar4 == 0) {
            iVar4 = FUN_019e23a8("expires",local_468);
            if (iVar4 != 0) {
              if (puVar6[7] != 0) {
                (*(code *)PTR_free_02bf74b0)();
              }
              lVar11 = (*(code *)PTR_strdup_02bf74c0)(pcVar19);
              puVar6[7] = lVar11;
              goto joined_r0x019c4d10;
            }
            if (puVar6[1] == 0) {
              uVar15 = (*(code *)PTR_strdup_02bf74c0)(local_468);
              puVar6[1] = uVar15;
              lVar11 = (*(code *)PTR_strdup_02bf74c0)(pcVar19);
              bVar17 = true;
              puVar6[2] = lVar11;
              if ((lVar11 == 0) || (puVar6[1] == 0)) goto LAB_019c4f9c;
            }
          }
          else {
            if (puVar6[10] != 0) {
              (*(code *)PTR_free_02bf74b0)();
            }
            lVar11 = (*(code *)PTR_strdup_02bf74c0)(pcVar19);
            puVar6[10] = lVar11;
            if (lVar11 == 0) {
              bVar17 = true;
              goto LAB_019c51cc;
            }
          }
        }
        else {
          if (puVar6[9] != 0) {
            (*(code *)PTR_free_02bf74b0)();
          }
          lVar11 = (*(code *)PTR_strdup_02bf74c0)(pcVar19);
          puVar6[9] = lVar11;
joined_r0x019c4d10:
          if (lVar11 == 0) goto LAB_019c51c0;
        }
      }
      else {
        __s = pcVar19 + 1;
        if (*pcVar19 != '.') {
          __s = pcVar19;
        }
        pcVar19 = __s;
        if (param_5 != (char *)0x0) {
          pcVar19 = param_5;
        }
        uVar12 = FUN_019c55ec(pcVar19);
        pcVar13 = strchr(__s,0x2e);
        pcVar19 = ":";
        if (pcVar13 != (char *)0x0) {
          pcVar19 = param_5;
        }
        param_5 = pcVar19;
        if (pcVar19 != (char *)0x0) {
          if ((uVar12 & 1) == 0) {
            uVar14 = FUN_019c5644(__s,pcVar19);
            if ((uVar14 & 1) == 0) goto LAB_019c4c88;
          }
          else {
            iVar4 = strcmp(__s,pcVar19);
            if (iVar4 != 0) {
LAB_019c4c88:
              FUN_019c9f64(param_1,"skipped cookie with bad tailmatch domain: %s\n",__s);
              bVar2 = true;
              goto joined_r0x019c4d8c;
            }
          }
        }
        if (puVar6[5] != 0) {
          (*(code *)PTR_free_02bf74b0)();
        }
        lVar11 = (*(code *)PTR_strdup_02bf74c0)(__s);
        puVar6[5] = lVar11;
        if ((uVar12 & 1) == 0 && lVar11 != 0) {
          *(undefined1 *)(puVar6 + 8) = 1;
        }
        else {
          if (lVar11 == 0) goto LAB_019c51c0;
          bVar2 = (bool)(bVar2 | lVar11 == 0);
        }
      }
      goto joined_r0x019c4d8c;
    }
    if (puVar6[3] != 0) {
      (*(code *)PTR_free_02bf74b0)();
    }
    lVar11 = (*(code *)PTR_strdup_02bf74c0)(pcVar19);
    puVar6[3] = lVar11;
    if (lVar11 != 0) {
      lVar11 = FUN_019c550c();
      puVar6[4] = lVar11;
      if (lVar11 != 0) goto joined_r0x019c4d8c;
    }
LAB_019c51c0:
    bVar17 = true;
LAB_019c4f9c:
    pcVar8 = (char *)puVar6[10];
    if (pcVar8 == (char *)0x0) {
LAB_019c51cc:
      if (puVar6[7] != 0) {
        lVar11 = FUN_019dc270(puVar6[7],0);
        puVar6[6] = lVar11;
        if (lVar11 == 0) {
          lVar11 = 1;
          goto LAB_019c51fc;
        }
        if (lVar11 < 0) {
          puVar6[6] = 0;
        }
      }
    }
    else {
      pcVar19 = pcVar8 + 1;
      if (*pcVar8 != '\"') {
        pcVar19 = pcVar8;
      }
      lVar16 = strtol(pcVar19,(char **)0x0,10);
      lVar11 = 0x7fffffffffffffff;
      puVar6[6] = lVar16;
      if (lVar16 <= 0x7fffffffffffffff - tVar5) {
        lVar11 = lVar16 + tVar5;
      }
LAB_019c51fc:
      puVar6[6] = lVar11;
    }
    if (bVar17) {
LAB_019c5204:
      (*(code *)PTR_free_02bf74b0)(pcVar7);
      goto LAB_019c5218;
    }
    if ((param_5 != (char *)0x0) && (puVar6[5] == 0)) {
      lVar11 = (*(code *)PTR_strdup_02bf74c0)(param_5);
      puVar6[5] = lVar11;
      if (lVar11 == 0) goto LAB_019c5204;
    }
    if ((param_6 == (char *)0x0) || (puVar6[3] != 0)) {
LAB_019c5318:
      (*(code *)PTR_free_02bf74b0)(pcVar7);
    }
    else {
      pcVar8 = strchr(param_6,0x3f);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = strrchr(param_6,0x2f);
      }
      else {
        pcVar8 = memrchr(param_6,0x2f,(long)pcVar8 - (long)param_6);
      }
      if (pcVar8 == (char *)0x0) goto LAB_019c5318;
      __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(pcVar8 + (2 - (long)param_6));
      puVar6[3] = __dest;
      if (__dest == (void *)0x0) goto LAB_019c5204;
      memcpy(__dest,param_6,(size_t)(pcVar8 + (1 - (long)param_6)));
      (pcVar8 + (1 - (long)param_6))[puVar6[3]] = '\0';
      lVar11 = FUN_019c550c(puVar6[3]);
      puVar6[4] = lVar11;
      (*(code *)PTR_free_02bf74b0)(pcVar7);
      if (lVar11 == 0) goto LAB_019c5218;
    }
    if (puVar6[1] == 0) goto LAB_019c5218;
  }
  if (((*(char *)(param_2 + 2) != '\0') || (*(char *)(param_2 + 4) == '\0')) || (puVar6[6] != 0)) {
    *(char *)((long)puVar6 + 0x59) = *(char *)(param_2 + 2);
    FUN_019c57ac(param_2);
    puVar3 = (undefined8 *)*param_2;
    if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      do {
        __dest_00 = puVar3;
        iVar4 = FUN_019e23a8(__dest_00[1],puVar6[1]);
        if (iVar4 != 0) {
          if (__dest_00[5] == 0) {
            if (puVar6[5] == 0) {
LAB_019c5388:
              if (__dest_00[4] == 0) {
                if (puVar6[4] == 0) goto LAB_019c5438;
              }
              else if ((puVar6[4] != 0) && (iVar4 = FUN_019e23a8(), iVar4 != 0)) {
LAB_019c5438:
                if ((*(char *)((long)puVar6 + 0x59) != '\0') ||
                   (*(char *)((long)__dest_00 + 0x59) == '\0')) {
                  *puVar6 = *__dest_00;
                  (*(code *)PTR_free_02bf74b0)(__dest_00[1]);
                  if (__dest_00[2] != 0) {
                    (*(code *)PTR_free_02bf74b0)();
                  }
                  if (__dest_00[5] != 0) {
                    (*(code *)PTR_free_02bf74b0)();
                  }
                  if (__dest_00[3] != 0) {
                    (*(code *)PTR_free_02bf74b0)();
                  }
                  if (__dest_00[4] != 0) {
                    (*(code *)PTR_free_02bf74b0)();
                  }
                  if (__dest_00[7] != 0) {
                    (*(code *)PTR_free_02bf74b0)();
                  }
                  if (__dest_00[9] != 0) {
                    (*(code *)PTR_free_02bf74b0)();
                  }
                  if (__dest_00[10] != 0) {
                    (*(code *)PTR_free_02bf74b0)();
                  }
                  memcpy(__dest_00,puVar6,0x60);
                  (*(code *)PTR_free_02bf74b0)(puVar6);
                  puVar6 = __dest_00;
                  do {
                    puVar18 = puVar6;
                    puVar6 = (undefined8 *)*puVar18;
                  } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
                  bVar2 = true;
                  goto LAB_019c53dc;
                }
                goto LAB_019c5218;
              }
            }
          }
          else if ((puVar6[5] != 0) && (iVar4 = FUN_019e23a8(), iVar4 != 0)) goto LAB_019c5388;
        }
        puVar3 = (undefined8 *)*__dest_00;
        puVar18 = __dest_00;
      } while ((undefined8 *)*__dest_00 != (undefined8 *)0x0);
    }
    bVar2 = false;
    __dest_00 = puVar6;
LAB_019c53dc:
    if (*(char *)(param_2 + 2) != '\0') {
      pcVar7 = "Replaced";
      if (!bVar2) {
        pcVar7 = "Added";
      }
      FUN_019c9f64(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %ld\n",pcVar7,
                   __dest_00[1],__dest_00[2],__dest_00[5],__dest_00[3],__dest_00[6]);
    }
    if (!bVar2) {
      puVar6 = param_2;
      if (puVar18 != (undefined8 *)0x0) {
        puVar6 = puVar18;
      }
      *puVar6 = __dest_00;
      param_2[3] = param_2[3] + 1;
      return __dest_00;
    }
    return __dest_00;
  }
LAB_019c5218:
  FUN_019c56c0(puVar6);
  return (undefined8 *)0x0;
}

