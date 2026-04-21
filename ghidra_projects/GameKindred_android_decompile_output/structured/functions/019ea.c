// functions/019ea — 6 functions
#include "libGameKindred.h"




undefined8 FUN_019ea0a4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [136];
  
  if ((*(char *)((long)param_1 + 0x2ed) != '\0') && (*(char *)((long)param_1 + 0x2e3) != '\0')) {
    lVar2 = *param_1;
    uVar3 = *(undefined8 *)(lVar2 + 0x218);
    memset(auStack_b8,0,0x88);
    *(undefined1 **)(lVar2 + 0x218) = auStack_b8;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    uVar1 = FUN_019ea128(param_1,0,param_1[0x18],(int)param_1[0x1f]);
    *(undefined8 *)(*param_1 + 0x218) = uVar3;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

int FUN_019ea128(long *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  char *pcVar23;
  char *pcVar24;
  long local_e0;
  undefined8 local_80;
  long local_78;
  undefined4 local_6c [3];
  
  local_6c[0] = 0;
  if (*(int *)((long)param_1 + (long)param_2 * 4 + 0x6b8) == 2) {
    return 0;
  }
  lVar21 = *param_1;
  puVar1 = (undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0);
  uVar7 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0);
  piVar2 = (int *)((long)param_1 + (long)param_2 * 4 + 0x6b8);
  *(undefined1 *)((long)param_1 + 0x2f6) = 0;
  local_e0 = 0;
  piVar5 = (int *)(lVar21 + 0x8b6c);
  pcVar3 = (char *)(lVar21 + 0x938);
  piVar4 = (int *)(lVar21 + 0x128);
  bVar9 = false;
LAB_019ea1dc:
  if (*piVar2 != 0) {
LAB_019ea408:
    lVar13 = FUN_019bccd8(lVar21,0,1);
    if (lVar13 < 1) {
LAB_019eaa60:
      FUN_019ca0fc(lVar21,"Proxy CONNECT aborted due to timeout");
      return 0x38;
    }
    iVar12 = FUN_019c14c8(uVar7,0xffffffff,0xffffffff,0);
    bVar11 = false;
    if (iVar12 == 0) {
      return 0;
    }
    uVar22 = 0;
    lVar13 = 0;
    uVar19 = 1;
    bVar10 = false;
    pcVar23 = pcVar3;
    pcVar24 = pcVar3;
    do {
      do {
        if (bVar11 || (0x3fff < uVar22 || uVar19 == 0)) {
          if (bVar11) {
            return 0x38;
          }
          if (*piVar5 == 200) {
            if (bVar10) goto LAB_019eaadc;
LAB_019eaa24:
            lVar13 = *(long *)(lVar21 + 0x1f8);
            if (lVar13 != 0) {
              if (*piVar2 == 2) {
                *piVar2 = 0;
                FUN_019c9f64(lVar21,"TUNNEL_STATE switched to: %d\n",0);
                lVar13 = *(long *)(lVar21 + 0x1f8);
              }
              if (lVar13 != 0) goto LAB_019ea1dc;
            }
            bVar9 = false;
          }
          else {
            iVar12 = FUN_019c7a9c(param_1);
            if (iVar12 != 0) {
              return iVar12;
            }
            if (!bVar10 && (char)param_1[0x5c] == '\0') goto LAB_019eaa24;
LAB_019eaadc:
            if (*(long *)(lVar21 + 0x1f8) != 0) {
              FUN_019bd51c(param_1,*puVar1);
              *puVar1 = 0xffffffff;
            }
            bVar9 = true;
          }
          if (*piVar4 == 200) {
            *piVar2 = 2;
            if (param_1[0x68] != 0) {
              (*(code *)PTR_free_02bf74b0)();
              param_1[0x68] = 0;
            }
            param_1[0x68] = 0;
            *(undefined1 *)(lVar21 + 0x8a58) = 1;
            FUN_019c9f64(lVar21,"Proxy replied OK to CONNECT request\n");
            *(undefined1 *)(lVar21 + 0x1e9) = 0;
            *(undefined1 *)((long)param_1 + 0x2ef) = 0;
            return 0;
          }
          if (bVar9) {
            if (*(long *)(lVar21 + 0x1f8) != 0) {
              *(undefined1 *)((long)param_1 + 0x2f6) = 1;
              FUN_019c9f64(lVar21,"Connect me again please\n");
              goto LAB_019eabdc;
            }
          }
          else if (*(long *)(lVar21 + 0x1f8) != 0) {
            (*(code *)PTR_free_02bf74b0)();
            *(undefined8 *)(lVar21 + 0x1f8) = 0;
          }
          *(undefined1 *)(param_1 + 0x5c) = 1;
          FUN_019bd51c(param_1,*puVar1);
          *puVar1 = 0xffffffff;
LAB_019eabdc:
          *piVar2 = 0;
          if (*(char *)((long)param_1 + 0x2f6) == '\0') {
            FUN_019ca0fc(lVar21,"Received HTTP code %d from proxy after CONNECT",
                         *(undefined4 *)(lVar21 + 0x128));
            return 0x38;
          }
          return 0;
        }
        lVar14 = FUN_019bccd8(lVar21,0,1);
        if (lVar14 < 1) goto LAB_019eaa60;
        if (999 < lVar14) {
          lVar14 = 1000;
        }
        iVar12 = FUN_019c14c8(uVar7,0xffffffff,0xffffffff,lVar14);
        bVar11 = false;
        if (iVar12 == 0) goto LAB_019ea9b8;
        if (iVar12 == -1) {
          FUN_019ca0fc(lVar21,"Proxy CONNECT aborted due to select/poll error");
          bVar11 = true;
          goto LAB_019ea9b8;
        }
        iVar12 = FUN_019ca940(param_1,uVar7,pcVar24,0x4000 - uVar22,&local_78);
        bVar11 = false;
      } while (iVar12 == 0x51);
      if (iVar12 == 0) {
        if (local_78 < 1) {
          if ((*(long *)(lVar21 + 0x270) != 0) && (*(long *)(lVar21 + 0x8a50) != 0)) {
            *(undefined1 *)((long)param_1 + 0x2f6) = 1;
            FUN_019c9f64(lVar21,"Proxy CONNECT connection closed");
            goto LAB_019ea664;
          }
          FUN_019ca0fc(lVar21,"Proxy CONNECT aborted");
          uVar19 = 0;
          bVar11 = true;
        }
        else {
          if (uVar19 < 2) {
            lVar14 = 0;
            uVar22 = local_78 + uVar22;
            lVar15 = local_78;
            do {
              lVar13 = (long)(int)lVar13 + 1;
              if (*pcVar24 == '\n') {
                if (*(char *)(lVar21 + 0x520) != '\0') {
                  FUN_019ca014(lVar21,1,pcVar23,lVar13,param_1);
                }
                uVar20 = 2;
                if (*(char *)(lVar21 + 0x514) != '\0') {
                  uVar20 = 3;
                }
                iVar12 = FUN_019ca574(param_1,uVar20,pcVar23,lVar13);
                *(long *)(lVar21 + 0x8b88) = *(long *)(lVar21 + 0x8b88) + lVar13;
                *(long *)(lVar21 + 0xa8) = *(long *)(lVar21 + 0xa8) + lVar13;
                if (iVar12 != 0) {
                  return iVar12;
                }
                if ((*pcVar23 == '\r') || (*pcVar23 == '\n')) {
                  uVar19 = (uint)lVar14;
                  if ((*piVar4 == 0x197) && (*(char *)(lVar21 + 0x8a60) == '\0')) {
                    if (local_e0 == 0) {
                      if (bVar9) {
                        *(undefined1 *)(lVar21 + 0x1e9) = 1;
                        FUN_019c9f64(lVar21,"%zd bytes of chunk left\n",local_78 - lVar14);
                        if (pcVar23[1] == '\n') {
                          uVar19 = uVar19 + 1;
                          pcVar23 = pcVar23 + 1;
                        }
                        iVar12 = FUN_019d9ef8(param_1,pcVar23 + 1,local_78 - (ulong)uVar19,&local_78
                                             );
                        if (iVar12 == -1) {
                          FUN_019c9f64(lVar21,"chunk reading DONE\n");
                          uVar19 = 0;
                          local_e0 = 0;
                          *piVar2 = 2;
                          goto LAB_019ea978;
                        }
                        FUN_019c9f64(lVar21,"Read %zd bytes of chunk, continue\n",local_78);
                        uVar19 = 2;
                      }
                      else {
                        uVar19 = 0;
                      }
                      local_e0 = 0;
                    }
                    else {
                      FUN_019c9f64(lVar21,"Ignore %ld bytes of response-body\n",local_e0);
                      local_e0 = (local_e0 - local_78) + lVar14;
                      uVar19 = 0;
                      if (0 < local_e0) {
                        uVar19 = 2;
                      }
                    }
                  }
                  else {
                    if ((*piVar5 == 200) && (lVar14 = local_78 - (ulong)(uVar19 + 1), lVar14 != 0))
                    {
                      FUN_019ca0fc(lVar21,
                                   "Proxy CONNECT followed by %zd bytes of opaque data. Data ignored (known bug #39)"
                                   ,lVar14);
                    }
                    uVar19 = 0;
                  }
LAB_019ea978:
                  *piVar2 = 2;
                  goto LAB_019ea9b0;
                }
                cVar8 = pcVar23[lVar13];
                pcVar23[lVar13] = '\0';
                iVar12 = FUN_019e2430("WWW-Authenticate:",pcVar23,0x11);
                if ((iVar12 == 0) || (*piVar4 != 0x191)) {
                  iVar12 = FUN_019e2430("Proxy-authenticate:",pcVar23,0x13);
                  if ((iVar12 != 0) && (*piVar4 == 0x197)) {
                    iVar12 = 0x197;
                    goto LAB_019ea770;
                  }
                  iVar12 = FUN_019e2430("Content-Length:",pcVar23,0xf);
                  if (iVar12 == 0) {
                    uVar17 = FUN_019c89d0(pcVar23,"Connection:","close");
                    if ((uVar17 & 1) == 0) {
                      uVar17 = FUN_019c89d0(pcVar23,"Transfer-Encoding:","chunked");
                      if ((uVar17 & 1) == 0) {
                        uVar17 = FUN_019c89d0(pcVar23,"Proxy-Connection:","close");
                        if ((uVar17 & 1) != 0) goto LAB_019ea804;
                        iVar12 = sscanf(pcVar23,"HTTP/1.%d %d",local_6c,piVar4);
                        if (iVar12 == 2) {
                          *piVar5 = *piVar4;
                        }
                      }
                      else {
                        FUN_019c9f64(lVar21,"CONNECT responded chunked\n");
                        FUN_019d9eec(param_1);
                        bVar9 = true;
                      }
                    }
                    else {
LAB_019ea804:
                      bVar10 = true;
                    }
                  }
                  else {
                    local_e0 = strtol(pcVar23 + 0xf,(char **)0x0,10);
                  }
                }
                else {
                  iVar12 = 0x191;
LAB_019ea770:
                  lVar15 = FUN_019c79a0(pcVar23);
                  if (lVar15 == 0) {
                    return 0x1b;
                  }
                  iVar12 = FUN_019c8268(param_1,iVar12 == 0x197,lVar15);
                  (*(code *)PTR_free_02bf74b0)(lVar15);
                  if (iVar12 != 0) {
                    return iVar12;
                  }
                }
                pcVar23[lVar13] = cVar8;
                pcVar23 = pcVar24 + 1;
                lVar13 = 0;
                lVar15 = local_78;
              }
              pcVar24 = pcVar24 + 1;
              lVar14 = lVar14 + 1;
            } while (lVar14 < lVar15);
          }
          else {
            if (local_e0 == 0) {
              local_80 = 0;
              iVar12 = FUN_019d9ef8(param_1,pcVar3,local_78,&local_80);
              if (iVar12 == -1) {
                FUN_019c9f64(lVar21,"chunk reading DONE\n");
                uVar19 = 0;
                *piVar2 = 2;
              }
              else {
                FUN_019c9f64(lVar21,"Read %zd bytes of chunk, continue\n",local_80);
              }
              local_e0 = 0;
            }
            else {
              local_e0 = local_e0 - local_78;
              if (local_e0 < 1) {
                uVar22 = 0;
                pcVar24 = pcVar3;
                goto LAB_019ea664;
              }
            }
LAB_019ea9b0:
            uVar22 = 0;
            pcVar24 = pcVar3;
          }
          bVar11 = false;
        }
      }
      else {
LAB_019ea664:
        bVar11 = false;
        uVar19 = 0;
      }
LAB_019ea9b8:
      iVar12 = FUN_019c3f38(param_1);
      if (iVar12 != 0) {
        return 0x2a;
      }
    } while( true );
  }
  FUN_019c9f64(lVar21,"Establish HTTP proxy tunnel to %s:%hu\n",param_3,param_4);
  if (*(long *)(lVar21 + 0x1f8) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(lVar21 + 0x1f8) = 0;
  }
  lVar13 = FUN_019c8504();
  if (lVar13 != 0) {
    lVar14 = FUN_019d5c34("%s:%hu",param_3,param_4);
    if (lVar14 != 0) {
      iVar12 = FUN_019c7e94(param_1,"CONNECT",lVar14,1);
      (*(code *)PTR_free_02bf74b0)(lVar14);
      if (iVar12 != 0) {
        (*(code *)PTR_free_02bf74b0)(lVar13);
        return iVar12;
      }
      pcVar23 = "1.0";
      if ((int)param_1[0x34] != 1) {
        pcVar23 = "1.1";
      }
      bVar11 = *(char *)((long)param_1 + 0x2e6) == '\0';
      pcVar24 = "";
      pcVar16 = "[";
      if (bVar11) {
        pcVar16 = pcVar24;
      }
      pcVar6 = "]";
      if (bVar11) {
        pcVar6 = pcVar24;
      }
      lVar14 = FUN_019d5c34("%s%s%s:%hu",pcVar16,param_3,pcVar6,param_4);
      if (lVar14 != 0) {
        lVar15 = FUN_019c791c(param_1,"Host:");
        pcVar16 = pcVar24;
        if ((lVar15 != 0) ||
           (pcVar16 = (char *)FUN_019d5c34("Host: %s\r\n",lVar14), pcVar16 != (char *)0x0)) {
          lVar15 = FUN_019c791c(param_1,"Proxy-Connection:");
          pcVar6 = "Proxy-Connection: Keep-Alive\r\n";
          if (lVar15 != 0) {
            pcVar6 = pcVar24;
          }
          lVar15 = FUN_019c791c(param_1,"User-Agent:");
          pcVar18 = pcVar24;
          if ((lVar15 == 0) && (*(long *)(lVar21 + 0x630) != 0)) {
            pcVar18 = (char *)param_1[0x69];
          }
          if ((char *)param_1[0x68] != (char *)0x0) {
            pcVar24 = (char *)param_1[0x68];
          }
          iVar12 = FUN_019c87cc(lVar13,"CONNECT %s HTTP/%s\r\n%s%s%s%s",lVar14,pcVar23,pcVar16,
                                pcVar24,pcVar18,pcVar6);
          if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
            (*(code *)PTR_free_02bf74b0)(pcVar16);
          }
          (*(code *)PTR_free_02bf74b0)(lVar14);
          if ((((iVar12 != 0) || (iVar12 = FUN_019c8ab4(param_1,1,lVar13), iVar12 != 0)) ||
              (iVar12 = FUN_019c87cc(lVar13,"\r\n"), iVar12 != 0)) ||
             (iVar12 = FUN_019c851c(lVar13,param_1,lVar21 + 0x8b90,0,param_2), iVar12 != 0)) {
            FUN_019ca0fc(lVar21,"Failed sending CONNECT to proxy");
            return iVar12;
          }
          *piVar2 = 1;
          goto LAB_019ea408;
        }
        (*(code *)PTR_free_02bf74b0)(lVar14);
      }
    }
    (*(code *)PTR_free_02bf74b0)(lVar13);
  }
  return 0x1b;
}




undefined8 FUN_019eac24(undefined8 *param_1,ulong param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  
  piVar1 = (int *)(param_1 + 0x80);
  if ((param_2 & 1) == 0) {
    piVar1 = (int *)(param_1 + 0x7c);
  }
  uVar3 = FUN_019e2430(&DAT_01e21e68,param_3,4);
  if ((int)uVar3 != 0) {
    pbVar5 = (byte *)(param_3 + 4);
    uVar4 = (uint)*pbVar5;
    if (*pbVar5 != 0) {
      do {
        iVar2 = isspace(uVar4);
        if (iVar2 == 0) {
          uVar3 = FUN_019eb8e8(*param_1,pbVar5,piVar1);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar2 = 2;
          goto LAB_019eacd4;
        }
        pbVar5 = pbVar5 + 1;
        uVar4 = (uint)*pbVar5;
      } while (uVar4 != 0);
    }
    if (*piVar1 == 0) {
      uVar3 = 0;
      iVar2 = 1;
LAB_019eacd4:
      *piVar1 = iVar2;
    }
    else {
      if (*piVar1 == 3) {
        FUN_019c9f64(*param_1,"NTLM handshake rejected\n");
        FUN_019ead00(param_1);
        *piVar1 = 0;
      }
      else {
        FUN_019c9f64(*param_1,"NTLM handshake failure (internal error)\n");
      }
      uVar3 = 9;
    }
  }
  return uVar3;
}




void FUN_019ead00(long param_1)

{
  FUN_019eaf4c();
  if (*(long *)(param_1 + 0x3f0) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x3f0) = 0;
  }
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  if (*(long *)(param_1 + 0x410) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x410) = 0;
  }
  *(undefined4 *)(param_1 + 0x418) = 0;
  return;
}




undefined8 FUN_019ead60(long *param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 local_48;
  long local_38;
  
  local_38 = 0;
  local_48 = 0;
  if ((param_2 & 1) == 0) {
    lVar3 = *param_1;
    plVar10 = param_1 + 0x6b;
    plVar6 = param_1 + 0x2e;
    plVar8 = param_1 + 0x2f;
    param_1 = param_1 + 0x7c;
    lVar5 = 0x8a20;
  }
  else {
    lVar3 = *param_1;
    plVar10 = param_1 + 0x68;
    plVar6 = param_1 + 0x32;
    plVar8 = param_1 + 0x33;
    param_1 = param_1 + 0x80;
    lVar5 = 0x8a40;
  }
  lVar3 = lVar3 + lVar5;
  pcVar7 = (char *)*plVar6;
  pcVar9 = (char *)*plVar8;
  *(undefined1 *)(lVar3 + 0x18) = 0;
  pcVar1 = "";
  pcVar2 = pcVar1;
  if (pcVar7 != (char *)0x0) {
    pcVar2 = pcVar7;
  }
  pcVar7 = pcVar1;
  if (pcVar9 != (char *)0x0) {
    pcVar7 = pcVar9;
  }
  if ((int)*param_1 == 2) {
    uVar4 = FUN_019ebaf4();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (local_38 != 0) {
      if (*plVar10 != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *plVar10 = 0;
      }
      pcVar2 = "Proxy-";
      if ((param_2 & 1) == 0) {
        pcVar2 = pcVar1;
      }
      lVar5 = FUN_019d5c34("%sAuthorization: NTLM %s\r\n",pcVar2,local_38);
      *plVar10 = lVar5;
      (*(code *)PTR_free_02bf74b0)(local_38);
      if (*plVar10 == 0) {
        return 0x1b;
      }
      *(int *)param_1 = 3;
      *(undefined1 *)(lVar3 + 0x18) = 1;
    }
  }
  else if ((int)*param_1 == 3) {
    if (*plVar10 != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *plVar10 = 0;
    }
    *(undefined1 *)(lVar3 + 0x18) = 1;
  }
  else {
    uVar4 = FUN_019eba38(pcVar2,pcVar7,param_1,&local_38,&local_48);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    if (local_38 != 0) {
      if (*plVar10 != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *plVar10 = 0;
      }
      pcVar2 = "Proxy-";
      if ((param_2 & 1) == 0) {
        pcVar2 = pcVar1;
      }
      lVar3 = FUN_019d5c34("%sAuthorization: NTLM %s\r\n",pcVar2,local_38);
      *plVar10 = lVar3;
      (*(code *)PTR_free_02bf74b0)(local_38);
      if (*plVar10 == 0) {
        return 0x1b;
      }
    }
  }
  return 0;
}




void FUN_019eaf4c(long param_1)

{
  uint uVar1;
  __pid_t _Var2;
  int *piVar3;
  int __sig;
  int __pid;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x420) != -1) {
    close(*(int *)(param_1 + 0x420));
    *(undefined4 *)(param_1 + 0x420) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x424) != 0) {
    _Var2 = waitpid(*(int *)(param_1 + 0x424),(int *)0x0,1);
    __pid = *(int *)(param_1 + 0x424);
    if (_Var2 != __pid) {
      piVar3 = (int *)__errno();
      uVar4 = 0;
      do {
        if (*piVar3 == 10) break;
        uVar1 = uVar4 & 0x7fffffff;
        if (uVar1 == 2) {
          __sig = 9;
LAB_019eafd4:
          kill(__pid,__sig);
        }
        else if (uVar1 == 1) {
          FUN_019c1418(1);
        }
        else if (uVar1 == 0) {
          __sig = 0xf;
          goto LAB_019eafd4;
        }
        uVar4 = uVar4 + 1;
        if (3 < uVar4) break;
        _Var2 = waitpid(*(__pid_t *)(param_1 + 0x424),(int *)0x0,1);
        __pid = *(int *)(param_1 + 0x424);
      } while (_Var2 != __pid);
    }
    *(undefined4 *)(param_1 + 0x424) = 0;
  }
  if (*(long *)(param_1 + 0x428) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x428) = 0;
  }
  *(undefined8 *)(param_1 + 0x428) = 0;
  if (*(long *)(param_1 + 0x430) != 0) {
    (*(code *)PTR_free_02bf74b0)();
    *(undefined8 *)(param_1 + 0x430) = 0;
  }
  *(undefined8 *)(param_1 + 0x430) = 0;
  return;
}

