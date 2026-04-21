// functions/019ff — 2 functions
#include "libGameKindred.h"




undefined8
FUN_019ff304(long param_1,char *param_2,uint param_3,undefined8 param_4,long param_5,long param_6)

{
  int *piVar1;
  size_t *psVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  size_t sVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  
  piVar1 = (int *)(param_1 + 0xd3c0);
  iVar6 = *piVar1;
  switch(iVar6) {
  case 0:
    break;
  default:
    iVar12 = iVar6;
    if (param_6 != 0 || param_5 != 0) goto LAB_019ff454;
    goto LAB_019ff5b8;
  case 2:
    goto switchD_019ff35c_caseD_2;
  case 3:
    lVar11 = *(long *)(param_1 + 0xd4e0);
    goto LAB_019ff4a8;
  case 4:
    goto LAB_019ff538;
  }
  sVar7 = strlen(param_2);
  lVar11 = 10;
  if (param_6 != 0 || param_5 != 0) {
    lVar11 = 0xb;
  }
  sVar7 = lVar11 + sVar7 * 3;
  psVar2 = (size_t *)(param_1 + 0xd3d0);
  *psVar2 = sVar7;
  pcVar8 = (char *)(**(code **)(param_1 + 8))(sVar7,param_1);
  plVar3 = (long *)(param_1 + 0xd3c8);
  *plVar3 = (long)pcVar8;
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "Unable to allocate a command buffer for scp session";
    uVar10 = 0xfffffffa;
    goto LAB_019ff76c;
  }
  puVar4 = &DAT_01e664df;
  if (param_6 == 0 && param_5 == 0) {
    puVar4 = &DAT_01e277f2;
  }
  snprintf(pcVar8,*psVar2,"scp -%st ",puVar4);
  pcVar8 = (char *)*plVar3;
  sVar7 = strlen(pcVar8);
  FUN_019ff974(param_2,pcVar8 + (int)sVar7,*(int *)psVar2 - (int)sVar7);
  *(undefined1 *)(*plVar3 + *psVar2 + -1) = 0;
  *piVar1 = 2;
switchD_019ff35c_caseD_2:
  lVar11 = _libssh2_channel_open(param_1,"session",7,0x40000,0x8000,0,0);
  *(long *)(param_1 + 0xd4e0) = lVar11;
  if (lVar11 == 0) {
    iVar6 = libssh2_session_last_errno(param_1);
    if (iVar6 != -0x25) {
      (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0xd3c8),param_1);
      *(undefined8 *)(param_1 + 0xd3c8) = 0;
      goto LAB_019ff89c;
    }
    pcVar8 = "Would block starting up channel";
  }
  else {
    *piVar1 = 3;
LAB_019ff4a8:
    puVar13 = (undefined8 *)(param_1 + 0xd3c8);
    iVar6 = _libssh2_channel_process_startup
                      (lVar11,&DAT_01e2ab42,4,*puVar13,*(undefined8 *)(param_1 + 0xd3d0));
    if (iVar6 != -0x25) {
      (**(code **)(param_1 + 0x18))(*puVar13,param_1);
      *puVar13 = 0;
      if (iVar6 == 0) {
        *piVar1 = 4;
LAB_019ff538:
        pcVar8 = (char *)(param_1 + 0xd3d8);
        uVar10 = _libssh2_channel_read(*(undefined8 *)(param_1 + 0xd4e0),0,pcVar8,1);
        iVar6 = (int)uVar10;
        if (iVar6 == -0x25) {
          pcVar8 = "Would block waiting for response from remote";
          goto LAB_019ff76c;
        }
        if (-1 < iVar6) {
          if (iVar6 == 0) {
LAB_019ff854:
            iVar6 = libssh2_channel_eof(*(undefined8 *)(param_1 + 0xd4e0));
            if (iVar6 == 0) goto LAB_019ff8bc;
            pcVar8 = "Unexpected channel close";
          }
          else {
            if (*pcVar8 == '\0') {
              if (param_6 != 0 || param_5 != 0) {
                iVar6 = snprintf(pcVar8,0x100,"T%ld 0 %ld 0\n",param_5,param_6);
                *(long *)(param_1 + 0xd4d8) = (long)iVar6;
              }
              iVar12 = 5;
              iVar6 = 5;
              *piVar1 = 5;
              if (param_6 != 0 || param_5 != 0) {
LAB_019ff454:
                if (iVar6 != 5) {
                  switch(iVar6) {
                  case 6:
LAB_019ff6b0:
                    uVar10 = _libssh2_channel_read
                                       (*(undefined8 *)(param_1 + 0xd4e0),0,
                                        (char *)(param_1 + 0xd3d8),1);
                    iVar6 = (int)uVar10;
                    if (iVar6 == -0x25) {
                      pcVar8 = "Would block waiting for response";
                      goto LAB_019ff76c;
                    }
                    if (iVar6 < 0) goto LAB_019ff844;
                    if (iVar6 == 0) goto LAB_019ff854;
                    if (*(char *)(param_1 + 0xd3d8) != '\0') {
                      pcVar8 = "Invalid SCP ACK response";
                      goto LAB_019ff868;
                    }
                    goto LAB_019ff5c0;
                  case 7:
                    goto switchD_019ff5f8_caseD_7;
                  case 8:
switchD_019ff5f8_caseD_8:
                    lVar11 = *(long *)(param_1 + 0xd4d8);
                    break;
                  case 9:
                    goto switchD_019ff5f8_caseD_9;
                  default:
                    goto switchD_019ff5f8_default;
                  }
                  goto LAB_019ff704;
                }
                iVar6 = _libssh2_channel_write
                                  (*(undefined8 *)(param_1 + 0xd4e0),0,param_1 + 0xd3d8,
                                   *(undefined8 *)(param_1 + 0xd4d8));
                if (iVar6 == -0x25) {
                  pcVar8 = "Would block sending time data for SCP file";
                  goto LAB_019ff768;
                }
                if (iVar6 == *(int *)(param_1 + 0xd4d8)) {
                  *piVar1 = 6;
                  goto LAB_019ff6b0;
                }
                pcVar8 = "Unable to send time data for SCP file";
LAB_019ff820:
                uVar10 = 0xfffffff9;
                goto LAB_019ff870;
              }
LAB_019ff5b8:
              if (iVar12 == 5) {
LAB_019ff5c0:
                *piVar1 = 7;
switchD_019ff5f8_caseD_7:
                pcVar8 = strrchr(param_2,0x2f);
                if (pcVar8 != (char *)0x0) {
                  param_2 = pcVar8 + 1;
                }
                iVar6 = snprintf((char *)(param_1 + 0xd3d8),0x100,"C0%o %lld %s\n",(ulong)param_3,
                                 param_4,param_2);
                lVar11 = (long)iVar6;
                *(long *)(param_1 + 0xd4d8) = lVar11;
                *piVar1 = 8;
LAB_019ff704:
                iVar6 = _libssh2_channel_write
                                  (*(undefined8 *)(param_1 + 0xd4e0),0,param_1 + 0xd3d8,lVar11);
                if (iVar6 == -0x25) {
                  pcVar8 = "Would block send core file data for SCP file";
                  goto LAB_019ff768;
                }
                if (iVar6 != *(int *)(param_1 + 0xd4d8)) {
                  pcVar8 = "Unable to send core file data for SCP file";
                  goto LAB_019ff820;
                }
                *piVar1 = 9;
LAB_019ff744:
                puVar13 = (undefined8 *)(param_1 + 0xd4e0);
                iVar6 = _libssh2_channel_read(*puVar13,0,(char *)(param_1 + 0xd3d8),1);
                if (iVar6 == -0x25) {
                  pcVar8 = "Would block waiting for response";
                  goto LAB_019ff768;
                }
                if (iVar6 < 0) goto LAB_019ff800;
                if (iVar6 == 0) goto LAB_019ff854;
                if (*(char *)(param_1 + 0xd3d8) != '\0') {
                  lVar11 = _libssh2_channel_packet_data_len(*puVar13,0);
                  lVar9 = (**(code **)(param_1 + 8))(lVar11 + 1,param_1);
                  if (lVar9 != 0) {
                    iVar6 = _libssh2_channel_read(*puVar13,0,lVar9,lVar11);
                    if (0 < iVar6) {
                      *(undefined1 *)(lVar9 + lVar11) = 0;
                    }
                    (**(code **)(param_1 + 0x18))(lVar9,param_1);
                    pcVar8 = "failed to send file";
                    goto LAB_019ff868;
                  }
                  pcVar8 = "failed to get memory";
                  uVar10 = 0xfffffffa;
                  goto LAB_019ff870;
                }
              }
              else {
                if (iVar12 == 9) {
switchD_019ff5f8_caseD_9:
                  goto LAB_019ff744;
                }
                if (iVar12 == 8) goto switchD_019ff5f8_caseD_8;
                if (iVar12 == 7) goto switchD_019ff5f8_caseD_7;
              }
switchD_019ff5f8_default:
              *piVar1 = 0;
LAB_019ff8bc:
              return *(undefined8 *)(param_1 + 0xd4e0);
            }
LAB_019ff800:
            pcVar8 = "Invalid ACK response from remote";
          }
          goto LAB_019ff868;
        }
LAB_019ff844:
        pcVar8 = "SCP failure";
      }
      else {
        pcVar8 = "Unknown error while getting error string";
LAB_019ff868:
        uVar10 = 0xffffffe4;
      }
LAB_019ff870:
      _libssh2_error(param_1,uVar10,pcVar8);
      uVar5 = *(undefined4 *)(param_1 + 0x218);
      uVar10 = *(undefined8 *)(param_1 + 0x210);
      do {
        iVar6 = libssh2_channel_free(*(undefined8 *)(param_1 + 0xd4e0));
      } while (iVar6 == -0x25);
      *(undefined4 *)(param_1 + 0x218) = uVar5;
      *(undefined8 *)(param_1 + 0x210) = uVar10;
      *(undefined8 *)(param_1 + 0xd4e0) = 0;
LAB_019ff89c:
      *piVar1 = 0;
      return 0;
    }
    pcVar8 = "Would block requesting SCP startup";
  }
LAB_019ff768:
  uVar10 = 0xffffffdb;
LAB_019ff76c:
  _libssh2_error(param_1,uVar10,pcVar8);
  return 0;
}




void FUN_019ff974(char *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  
  pcVar1 = param_2 + (param_3 & 0xffffffff);
  if ((param_2 < pcVar1 + -1) && (cVar4 = *param_1, cVar4 != '\0')) {
    iVar5 = 0;
    do {
      pcVar3 = param_2;
      if (cVar4 == '!') {
        if (iVar5 == 2) {
          if (pcVar1 <= pcVar3 + 2) {
            return;
          }
          iVar5 = 0;
          pcVar3[0] = '\"';
          pcVar3[1] = '\\';
          pcVar3 = pcVar3 + 2;
        }
        else if (iVar5 == 1) {
          if (pcVar1 <= pcVar3 + 2) {
            return;
          }
          iVar5 = 0;
          pcVar3[0] = '\'';
          pcVar3[1] = '\\';
          pcVar3 = pcVar3 + 2;
        }
        else if (iVar5 == 0) {
          if (pcVar1 <= pcVar3 + 1) {
            return;
          }
          iVar5 = 0;
          *pcVar3 = '\\';
          pcVar3 = pcVar3 + 1;
        }
        else {
          iVar5 = 0;
        }
      }
      else if (cVar4 == '\'') {
        if (iVar5 == 1) {
          if (pcVar1 <= pcVar3 + 2) {
            return;
          }
          pcVar3[0] = '\'';
          pcVar3[1] = '\"';
          iVar5 = 2;
          pcVar3 = pcVar3 + 2;
        }
        else if (iVar5 == 0) {
          if (pcVar1 <= pcVar3 + 1) {
            return;
          }
          *pcVar3 = '\"';
          iVar5 = 2;
          pcVar3 = pcVar3 + 1;
        }
        else {
          iVar5 = 2;
        }
      }
      else {
        if (iVar5 == 2) {
          pcVar2 = pcVar3 + 2;
          if (pcVar1 <= pcVar2) {
            return;
          }
          pcVar3[0] = '\"';
          pcVar3[1] = '\'';
        }
        else {
          if (iVar5 != 0) {
            iVar5 = 1;
            goto LAB_019ffaac;
          }
          pcVar2 = pcVar3 + 1;
          if (pcVar1 <= pcVar2) {
            return;
          }
          *pcVar3 = '\'';
        }
        iVar5 = 1;
        pcVar3 = pcVar2;
      }
LAB_019ffaac:
      pcVar2 = pcVar3 + 1;
      if (pcVar1 <= pcVar2) {
        return;
      }
      *pcVar3 = *param_1;
      param_2 = pcVar2;
    } while ((pcVar2 < pcVar1 + -1) && (cVar4 = param_1[1], param_1 = param_1 + 1, cVar4 != '\0'));
    if (iVar5 == 1) {
      if (pcVar1 <= pcVar3 + 2) {
        return;
      }
      cVar4 = '\'';
    }
    else {
      if (iVar5 != 2) goto LAB_019ffb10;
      if (pcVar1 <= pcVar3 + 2) {
        return;
      }
      cVar4 = '\"';
    }
    param_2 = pcVar3 + 2;
    *pcVar2 = cVar4;
  }
LAB_019ffb10:
  if (param_2 + 1 < pcVar1) {
    *param_2 = '\0';
  }
  return;
}

