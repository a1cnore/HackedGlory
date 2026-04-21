// functions/019e9 — 9 functions
#include "libGameKindred.h"




undefined8 FUN_019e9018(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *param_1 = 0;
  }
  return 0;
}




int FUN_019e90a0(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  undefined4 uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  size_t sVar16;
  char *pcVar17;
  size_t sVar18;
  char *pcVar19;
  char *pcVar20;
  long lVar21;
  char *local_68;
  
  lVar14 = *param_1;
  uVar6 = *(uint *)(lVar14 + 0x6fc);
  lVar21 = *(long *)(lVar14 + 0x218);
  *param_2 = 1;
  plVar1 = (long *)(lVar14 + 0x8b08);
  *(long *)(lVar21 + 0x88) = *plVar1;
  *(undefined8 *)(lVar21 + 0x90) = 0;
  *(undefined1 *)(lVar14 + 0x517) = 1;
  pcVar17 = "OPTIONS";
  switch(uVar6) {
  case 0:
    pcVar17 = "Got invalid RTSP request: RTSPREQ_NONE";
    goto LAB_019e94a4;
  case 1:
    break;
  case 2:
    pcVar17 = "DESCRIBE";
    *(undefined1 *)(lVar14 + 0x517) = 0;
    break;
  case 3:
    pcVar17 = "ANNOUNCE";
    break;
  case 4:
    pcVar17 = "SETUP";
    break;
  case 5:
    pcVar17 = "PLAY";
    break;
  case 6:
    pcVar17 = "PAUSE";
    break;
  case 7:
    pcVar17 = "TEARDOWN";
    break;
  case 8:
    pcVar17 = "GET_PARAMETER";
    *(undefined1 *)(lVar14 + 0x517) = 0;
    goto LAB_019e91a0;
  case 9:
    pcVar17 = "SET_PARAMETER";
    goto LAB_019e91a0;
  case 10:
    pcVar17 = "RECORD";
    goto LAB_019e91a0;
  case 0xb:
    *(undefined1 *)(lVar14 + 0x517) = 0;
    FUN_019d9cd0(param_1,0,0xffffffffffffffff,1,lVar21 + 0x28,0xffffffff,0);
    return 0;
  case 0xc:
    pcVar17 = "Got invalid RTSP request: RTSPREQ_LAST";
    goto LAB_019e94a4;
  default:
    pcVar17 = (char *)0x0;
LAB_019e91a0:
    lVar15 = *(long *)(lVar14 + 0x678);
    if (lVar15 == 0) {
      pcVar9 = "";
      if (pcVar17 != (char *)0x0) {
        pcVar9 = pcVar17;
      }
      FUN_019ca0fc(lVar14,"Refusing to issue an RTSP request [%s] without a session ID.",pcVar9);
      return 0x2b;
    }
    bVar7 = true;
    goto LAB_019e91ac;
  }
  lVar15 = *(long *)(lVar14 + 0x678);
  bVar7 = lVar15 != 0;
LAB_019e91ac:
  puVar2 = &DAT_01e26823;
  if (*(undefined **)(lVar14 + 0x680) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar14 + 0x680);
  }
  pcVar9 = (char *)FUN_019c78b4(param_1,"Transport:");
  if ((uVar6 == 4) && (pcVar9 == (char *)0x0)) {
    lVar11 = *(long *)(lVar14 + 0x688);
    if (lVar11 == 0) {
      pcVar17 = "Refusing to issue an RTSP SETUP without a Transport: header.";
      goto LAB_019e94a4;
    }
    if (param_1[0x70] != 0) {
      (*(code *)PTR_free_02bf74b0)();
      param_1[0x70] = 0;
      lVar11 = *(long *)(lVar14 + 0x688);
    }
    pcVar9 = (char *)FUN_019d5c34("Transport: %s\r\n",lVar11);
    param_1[0x70] = (long)pcVar9;
    if (pcVar9 == (char *)0x0) {
      return 0x1b;
    }
LAB_019e92a4:
    local_68 = (char *)0x0;
LAB_019e92a8:
    pcVar10 = (char *)0x0;
  }
  else {
    if (uVar6 != 2) goto LAB_019e92a4;
    lVar11 = FUN_019c78b4(param_1,"Accept:");
    local_68 = "Accept: application/sdp\r\n";
    if (lVar11 != 0) {
      local_68 = (char *)0x0;
    }
    lVar11 = FUN_019c78b4(param_1,"Accept-Encoding:");
    if ((lVar11 != 0) || (lVar11 = *(long *)(lVar14 + 0x598), lVar11 == 0)) goto LAB_019e92a8;
    if (param_1[0x6a] != 0) {
      (*(code *)PTR_free_02bf74b0)();
      param_1[0x6a] = 0;
      lVar11 = *(long *)(lVar14 + 0x598);
    }
    pcVar10 = (char *)FUN_019d5c34("Accept-Encoding: %s\r\n",lVar11);
    param_1[0x6a] = (long)pcVar10;
    if (pcVar10 == (char *)0x0) {
      return 0x1b;
    }
  }
  lVar11 = FUN_019c78b4(param_1,"User-Agent:");
  if ((lVar11 == 0) || (param_1[0x69] == 0)) {
    lVar11 = FUN_019c78b4(param_1,"User-Agent:");
    pcVar13 = (char *)0x0;
    if ((lVar11 == 0) && (pcVar13 = (char *)0x0, *(long *)(lVar14 + 0x630) != 0)) {
      pcVar13 = (char *)param_1[0x69];
    }
  }
  else {
    (*(code *)PTR_free_02bf74b0)();
    pcVar13 = (char *)0x0;
    param_1[0x69] = 0;
  }
  if (param_1[0x6d] != 0) {
    (*(code *)PTR_free_02bf74b0)();
    param_1[0x6d] = 0;
  }
  if (*(long *)(lVar14 + 0x778) == 0) {
    pcVar19 = (char *)0x0;
  }
  else {
    lVar11 = FUN_019c78b4(param_1,"Referer:");
    pcVar19 = (char *)0x0;
    if (lVar11 == 0) {
      pcVar19 = (char *)FUN_019d5c34("Referer: %s\r\n",*(undefined8 *)(lVar14 + 0x778));
    }
  }
  param_1[0x6d] = (long)pcVar19;
  if ((uVar6 & 0xf) == 0) {
LAB_019e93f0:
    pcVar20 = (char *)0x0;
  }
  else {
    pcVar20 = (char *)0x0;
    if (*(char *)(lVar14 + 0x8af1) != '\0') {
      lVar11 = FUN_019c78b4(param_1,"Range:");
      pcVar20 = (char *)0x0;
      if (lVar11 == 0) {
        lVar11 = *(long *)(lVar14 + 0x8af8);
        if (lVar11 == 0) goto LAB_019e93f0;
        if (param_1[0x6c] != 0) {
          (*(code *)PTR_free_02bf74b0)();
          param_1[0x6c] = 0;
          lVar11 = *(long *)(lVar14 + 0x8af8);
        }
        pcVar20 = (char *)FUN_019d5c34("Range: %s\r\n",lVar11);
        param_1[0x6c] = (long)pcVar20;
      }
    }
  }
  lVar11 = FUN_019c78b4(param_1,"CSeq:");
  if (lVar11 != 0) {
    FUN_019ca0fc(lVar14,"CSeq cannot be set as a custom header.");
    return 0x55;
  }
  lVar11 = FUN_019c78b4(param_1,"Session:");
  if (lVar11 == 0) {
    lVar11 = FUN_019c8504();
    if (lVar11 == 0) {
      return 0x1b;
    }
    pcVar3 = "";
    if (pcVar17 != (char *)0x0) {
      pcVar3 = pcVar17;
    }
    iVar8 = FUN_019c87cc(lVar11,"%s %s RTSP/1.0\r\nCSeq: %ld\r\n",pcVar3,puVar2,
                         *(undefined8 *)(lVar21 + 0x88));
    if (iVar8 != 0) {
      return iVar8;
    }
    if ((bVar7) && (iVar8 = FUN_019c87cc(lVar11,"Session: %s\r\n",lVar15), iVar8 != 0)) {
      return iVar8;
    }
    pcVar17 = "";
    pcVar3 = pcVar17;
    if (pcVar9 != (char *)0x0) {
      pcVar3 = pcVar9;
    }
    pcVar9 = pcVar17;
    if (local_68 != (char *)0x0) {
      pcVar9 = local_68;
    }
    pcVar4 = pcVar17;
    if (pcVar10 != (char *)0x0) {
      pcVar4 = pcVar10;
    }
    pcVar10 = pcVar17;
    if (pcVar20 != (char *)0x0) {
      pcVar10 = pcVar20;
    }
    pcVar20 = pcVar17;
    if (pcVar19 != (char *)0x0) {
      pcVar20 = pcVar19;
    }
    if (pcVar13 != (char *)0x0) {
      pcVar17 = pcVar13;
    }
    iVar8 = FUN_019c87cc(lVar11,"%s%s%s%s%s%s",pcVar3,pcVar9,pcVar4,pcVar10,pcVar20,pcVar17);
    if (iVar8 == 0) {
      if (((uVar6 == 4) || (uVar6 == 2)) && (iVar8 = FUN_019c8c94(lVar14,lVar11), iVar8 != 0)) {
        return iVar8;
      }
      iVar8 = FUN_019c8ab4(param_1,0,lVar11);
      if (iVar8 != 0) {
        return iVar8;
      }
      if (uVar6 < 10) {
        sVar16 = 0;
        sVar18 = 0;
        if ((1 << (ulong)(uVar6 & 0x1f) & 0x308U) != 0) {
          if (*(char *)(lVar14 + 0x519) == '\0') {
            sVar16 = *(size_t *)(lVar14 + 0x2a0);
            if (sVar16 == 0xffffffffffffffff) {
              if (*(char **)(lVar14 + 0x290) == (char *)0x0) {
                sVar16 = 0;
              }
              else {
                sVar16 = strlen(*(char **)(lVar14 + 0x290));
              }
            }
            sVar18 = 0;
            uVar12 = 2;
          }
          else {
            sVar18 = *(size_t *)(lVar14 + 0x8b28);
            sVar16 = 0;
            uVar12 = 4;
          }
          *(undefined4 *)(lVar14 + 0x420) = uVar12;
          if (((long)sVar16 < 1) && ((long)sVar18 < 1)) {
            if (uVar6 == 8) {
              *(undefined4 *)(lVar14 + 0x420) = 5;
              *(undefined1 *)(lVar14 + 0x517) = 1;
            }
          }
          else {
            lVar15 = FUN_019c78b4(param_1,"Content-Length:");
            if (lVar15 == 0) {
              sVar5 = sVar16;
              if (*(char *)(lVar14 + 0x519) != '\0') {
                sVar5 = sVar18;
              }
              iVar8 = FUN_019c87cc(lVar11,"Content-Length: %ld\r\n",sVar5);
              if (iVar8 != 0) {
                return iVar8;
              }
            }
            if ((((uVar6 | 1) == 9) && (lVar15 = FUN_019c78b4(param_1,"Content-Type:"), lVar15 == 0)
                ) && (iVar8 = FUN_019c87cc(lVar11,"Content-Type: text/parameters\r\n"), iVar8 != 0))
            {
              return iVar8;
            }
            if (((uVar6 == 3) && (lVar15 = FUN_019c78b4(param_1,"Content-Type:"), lVar15 == 0)) &&
               (iVar8 = FUN_019c87cc(lVar11,"Content-Type: application/sdp\r\n"), iVar8 != 0)) {
              return iVar8;
            }
            *(undefined1 *)(lVar14 + 0x8ad0) = 0;
          }
        }
      }
      else {
        sVar16 = 0;
        sVar18 = 0;
      }
      *(undefined1 *)(lVar14 + 0x213) = 1;
      iVar8 = FUN_019c88c0(lVar11,"\r\n",2);
      if (iVar8 != 0) {
        return iVar8;
      }
      if ((0 < (long)sVar16) &&
         (iVar8 = FUN_019c88c0(lVar11,*(undefined8 *)(lVar14 + 0x290),sVar16), iVar8 != 0)) {
        return iVar8;
      }
      iVar8 = FUN_019c851c(lVar11,param_1,lVar14 + 0x8b90,0,0);
      if (iVar8 != 0) {
        FUN_019ca0fc(lVar14,"Failed sending RTSP request");
        return iVar8;
      }
      lVar15 = lVar21 + 0x30;
      if (sVar18 == 0) {
        lVar15 = 0;
      }
      FUN_019d9cd0(param_1,0,0xffffffffffffffff,1,lVar21 + 0x28,-(uint)(sVar18 == 0),lVar15);
      *plVar1 = *plVar1 + 1;
      if (*(long *)(lVar21 + 0x30) == 0) {
        return 0;
      }
      FUN_019c45ac(lVar14);
      iVar8 = FUN_019c3f38(param_1);
      if (iVar8 != 0) {
        return 0x2a;
      }
      return 0;
    }
    return iVar8;
  }
  pcVar17 = "Session ID cannot be set as a custom header.";
LAB_019e94a4:
  FUN_019ca0fc(lVar14,pcVar17);
  return 0x2b;
}




undefined4 FUN_019e9810(long *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + 0x218);
  uVar1 = FUN_019c7674(param_1,param_2,*(int *)(lVar2 + 0x6fc) == 0xb | param_3 & 1);
  if (lVar3 != 0) {
    if ((*(long *)(lVar3 + 0x88) == *(long *)(lVar3 + 0x90)) || (*(int *)(lVar2 + 0x6fc) == 0xb)) {
      if ((*(int *)(lVar2 + 0x6fc) == 0xb) && ((int)param_1[0xab] == -1)) {
        FUN_019c9f64(lVar2,"Got an RTP Receive with a CSeq of %ld\n",*(long *)(lVar3 + 0x90));
      }
    }
    else {
      FUN_019ca0fc(lVar2,"The CSeq of this request %ld did not match the response %ld");
      uVar1 = 0x55;
    }
  }
  return uVar1;
}




void FUN_019e98b8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  FUN_019c77b0();
  plVar1 = (long *)(lVar2 + 0x8b08);
  if (*plVar1 == 0) {
    *plVar1 = 1;
  }
  plVar1 = (long *)(lVar2 + 0x8b10);
  if (*plVar1 == 0) {
    *plVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xab) = 0xffffffff;
  return;
}




undefined8 FUN_019e9960(long param_1,long *param_2,size_t *param_3,undefined1 *param_4)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  void *__dest;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  size_t __n;
  long lVar9;
  
  plVar1 = param_2 + 0xa9;
  if (param_2[0xa9] == 0) {
    __n = *param_3;
    plVar6 = (long *)(param_1 + 0xf8);
LAB_019e99f0:
    pcVar8 = (char *)*plVar6;
    while (0 < (long)__n) {
      if (*pcVar8 != '$') goto LAB_019e9b14;
      if ((long)__n < 5) {
LAB_019e9aa8:
        *param_4 = 1;
        goto LAB_019e9ab0;
      }
      *(uint *)(param_2 + 0xab) = (uint)(byte)pcVar8[1];
      lVar3 = (ulong)CONCAT11(pcVar8[2],pcVar8[3]) + 4;
      sVar2 = __n - lVar3;
      if ((long)__n < lVar3) goto LAB_019e9aa8;
      lVar9 = *param_2;
      pcVar7 = *(code **)(lVar9 + 0x2c0);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = *(code **)(lVar9 + 0x2b0);
      }
      lVar4 = (*pcVar7)(pcVar8,1,lVar3,*(undefined8 *)(lVar9 + 600));
      if (lVar4 == 0x10000001) {
        pcVar8 = "Cannot pause RTP";
LAB_019e9b90:
        FUN_019ca0fc(lVar9,pcVar8);
        FUN_019ca0fc(param_1,"Got an error writing an RTP packet");
        *param_4 = 0;
        if (*plVar1 != 0) {
          (*(code *)PTR_free_02bf74b0)();
          *plVar1 = 0;
        }
        *plVar1 = 0;
        param_2[0xaa] = 0;
        return 0x17;
      }
      if (lVar4 != lVar3) {
        pcVar8 = "Failed writing RTP data";
        goto LAB_019e9b90;
      }
      pcVar8 = pcVar8 + lVar3;
      __n = sVar2;
      if (*(int *)(param_1 + 0x6fc) == 0xb) {
        *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xfffffffe;
      }
    }
    if (__n != 0) {
LAB_019e9ab0:
      if (*pcVar8 == '$') {
        __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(__n);
        if (__dest != (void *)0x0) {
          memcpy(__dest,pcVar8,__n);
          if (*plVar1 != 0) {
            (*(code *)PTR_free_02bf74b0)();
            *plVar1 = 0;
          }
          param_2[0xa9] = (long)__dest;
          param_2[0xaa] = __n;
          *param_3 = 0;
          return 0;
        }
        goto LAB_019e9b54;
      }
    }
LAB_019e9b14:
    *(size_t *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + (*param_3 - __n);
    *param_3 = __n;
    if (*plVar1 != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *plVar1 = 0;
    }
    uVar5 = 0;
    *plVar1 = 0;
    param_2[0xaa] = 0;
  }
  else {
    lVar3 = (*(code *)PTR_realloc_02bf74b8)(param_2[0xa9],*param_3 + param_2[0xaa]);
    if (lVar3 != 0) {
      param_2[0xa9] = lVar3;
      memcpy((void *)(lVar3 + param_2[0xaa]),*(void **)(param_1 + 0xf8),*param_3);
      __n = param_2[0xaa] + *param_3;
      param_2[0xaa] = __n;
      plVar6 = plVar1;
      goto LAB_019e99f0;
    }
LAB_019e9b54:
    if (*plVar1 != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *plVar1 = 0;
    }
    *plVar1 = 0;
    param_2[0xaa] = 0;
    uVar5 = 0x1b;
  }
  return uVar5;
}




ulong FUN_019e9bec(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *local_18;
  
  local_18 = param_1;
  uVar2 = FUN_019c14c8((int)param_1[0x3a],0xffffffff,0xffffffff,0);
  if ((uint)uVar2 != 0) {
    if ((((uint)uVar2 & 5) == 1) && (*param_1 != 0)) {
      iVar1 = FUN_019bddd0(*param_1,&local_18);
      uVar2 = (ulong)(iVar1 == -1);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}




undefined8 FUN_019e9c54(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  void *__dest;
  byte *pbVar4;
  long lVar5;
  byte *__s1;
  char *__s;
  byte *pbVar6;
  uint uVar7;
  undefined8 local_48;
  
  lVar5 = *param_1;
  local_48 = 0;
  iVar1 = FUN_019e2430("CSeq:",param_2,5);
  if (iVar1 != 0) {
    iVar1 = sscanf((char *)(param_2 + 4),": %ld",&local_48);
    if (iVar1 == 1) {
      *(undefined8 *)(*(long *)(lVar5 + 0x218) + 0x90) = local_48;
      *(undefined8 *)(lVar5 + 0x8b18) = local_48;
      return 0;
    }
    FUN_019ca0fc(lVar5,"Unable to read the CSeq header: [%s]",param_2);
    return 0x55;
  }
  uVar2 = FUN_019e2430("Session:",param_2,8);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  __s1 = (byte *)(param_2 + 8);
  uVar7 = (uint)*__s1;
  if (*__s1 != 0) {
    do {
      iVar1 = isspace(uVar7);
      if (iVar1 == 0) {
        __s = *(char **)(lVar5 + 0x678);
        pbVar6 = __s1;
        if (__s != (char *)0x0) {
          sVar3 = strlen(__s);
          iVar1 = strncmp((char *)__s1,__s,sVar3);
          if (iVar1 == 0) {
            return 0;
          }
          FUN_019ca0fc(lVar5,"Got RTSP Session ID Line [%s], but wanted ID [%s]",__s1,__s);
          return 0x56;
        }
        goto LAB_019e9db8;
      }
      __s1 = __s1 + 1;
      uVar7 = (uint)*__s1;
    } while (uVar7 != 0);
  }
  FUN_019ca0fc(lVar5,"Got a blank Session ID");
  return 0;
  while( true ) {
    pbVar6 = pbVar4 + 1;
    uVar7 = (uint)*pbVar6;
    if (uVar7 == 0) break;
LAB_019e9db8:
    iVar1 = isalnum(uVar7);
    pbVar4 = pbVar6;
    if ((iVar1 == 0) &&
       ((uVar7 = uVar7 - 0x2b, 0x34 < uVar7 ||
        (((1L << ((ulong)uVar7 & 0x3f) & 0x1000000000000dU) == 0 &&
         (((ulong)uVar7 != 0x31 || (pbVar4 = pbVar6 + 1, *pbVar4 != 0x24)))))))) break;
  }
  sVar3 = (long)pbVar6 - (long)__s1;
  __dest = (void *)(*(code *)PTR_malloc_02bf74a8)(sVar3 + 1);
  *(void **)(lVar5 + 0x678) = __dest;
  if (__dest == (void *)0x0) {
    uVar2 = 0x1b;
  }
  else {
    memcpy(__dest,__s1,sVar3);
    uVar2 = 0;
    *(undefined1 *)(*(long *)(lVar5 + 0x678) + sVar3) = 0;
  }
  return uVar2;
}




int FUN_019e9e2c(char *param_1,size_t param_2)

{
  int iVar1;
  char *pcVar2;
  
  *param_1 = '\0';
  iVar1 = gethostname(param_1,param_2);
  param_1[param_2 - 1] = '\0';
  if ((iVar1 == 0) && (pcVar2 = strchr(param_1,0x2e), iVar1 = 0, pcVar2 != (char *)0x0)) {
    iVar1 = 0;
    *pcVar2 = '\0';
  }
  return iVar1;
}




int FUN_019e9e78(long *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar5 = *param_1;
  uVar1 = (undefined4)param_1[0x3a];
  pcVar6 = *(char **)(lVar5 + 0x8ae8);
  *param_2 = 1;
  sVar3 = strlen(pcVar6);
  if (sVar3 < 3) {
    pcVar7 = (char *)0x0;
    pcVar6 = "";
  }
  else {
    pcVar6 = pcVar6 + 2;
    sVar3 = strlen(pcVar6);
    pcVar7 = pcVar6;
    for (; sVar3 != 0; sVar3 = sVar3 - 1) {
      if (*pcVar7 == '?') {
        *pcVar7 = '\t';
      }
      pcVar7 = pcVar7 + 1;
    }
    pcVar7 = (char *)FUN_019d4834(lVar5,pcVar6,0,auStack_5c);
    pcVar6 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      return 0x1b;
    }
  }
  strlen(pcVar6);
  lVar4 = FUN_019c1ea0();
  iVar2 = FUN_019ca368(param_1,uVar1,pcVar6,lVar4,&local_58);
  if (iVar2 == 0) {
    do {
      iVar2 = FUN_019ca574(param_1,2,pcVar6,local_58);
      if (iVar2 != 0) goto joined_r0x019e9ff4;
      lVar4 = lVar4 - local_58;
      if (lVar4 < 1) {
        if (pcVar7 != (char *)0x0) {
          (*(code *)PTR_free_02bf74b0)(pcVar7);
        }
        iVar2 = FUN_019ca208(uVar1,param_1,"\r\n");
        if (iVar2 != 0) {
          FUN_019ca0fc(lVar5,"Failed sending Gopher request");
          return iVar2;
        }
        iVar2 = FUN_019ca574(param_1,2,"\r\n",2);
        if (iVar2 != 0) {
          return iVar2;
        }
        FUN_019d9cd0(param_1,0,0xffffffffffffffff,0,lVar5 + 0x98,0xffffffff,0);
        return 0;
      }
      pcVar6 = pcVar6 + local_58;
      FUN_019c14c8(0xffffffff,0xffffffff,uVar1,100);
      iVar2 = FUN_019ca368(param_1,uVar1,pcVar6,lVar4,&local_58);
    } while (iVar2 == 0);
  }
  FUN_019ca0fc(lVar5,"Failed sending Gopher request");
joined_r0x019e9ff4:
  if (pcVar7 != (char *)0x0) {
    (*(code *)PTR_free_02bf74b0)(pcVar7);
  }
  return iVar2;
}

