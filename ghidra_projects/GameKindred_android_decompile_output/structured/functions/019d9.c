// functions/019d9 — 14 functions
#include "libGameKindred.h"




ulong FUN_019d927c(long *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(code **)(param_1[100] + 0x58) == (code *)0x0) {
    uVar3 = 0;
    if (1 < param_3) {
      lVar4 = *param_1;
      uVar5 = *(uint *)(lVar4 + 0x1e4);
      bVar1 = (uVar5 & 0x15) == 1;
      if (bVar1) {
        *param_2 = (int)param_1[0x67];
        uVar5 = *(uint *)(lVar4 + 0x1e4);
      }
      uVar3 = (uint)bVar1;
      if ((uVar5 & 0x2a) == 2) {
        uVar6 = 0x10;
        if (((uVar5 & 1) == 0) || ((int)param_1[0x67] != *(int *)((long)param_1 + 0x33c))) {
          uVar6 = uVar5 & 1 | 0x10;
          param_2[uVar5 & 1] = *(int *)((long)param_1 + 0x33c);
        }
        uVar3 = 1 << (ulong)uVar6 | uVar3;
      }
    }
    return (ulong)uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x019d9288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_1[100] + 0x58))();
  return uVar2;
}




long FUN_019d9310(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != 0) {
    if (param_1 + (param_1 >> 10) < param_2) {
      param_1 = param_1 - (param_1 >> 6);
      lVar2 = 1;
    }
    else if (param_2 < param_1 - (param_1 >> 10)) {
      lVar2 = 0;
      param_1 = param_1 + (param_1 >> 6);
    }
    else {
      lVar2 = 0;
    }
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = (long)(param_3 * 8000) / param_1;
    }
    if (lVar2 <= lVar1) {
      lVar2 = lVar1;
    }
    if (0x7ffffffe < lVar2) {
      lVar2 = 0x7fffffff;
    }
  }
  return lVar2;
}




undefined8 FUN_019d9374(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x768) == 0) {
    FUN_019ca0fc(param_1,"No URL set!");
    uVar2 = 3;
  }
  else {
    uVar2 = FUN_019c30d0(param_1,*(undefined8 *)(param_1 + 0x480));
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined1 *)(param_1 + 0x8948) = 0;
      *(undefined1 *)(param_1 + 0x8988) = 0;
      *(undefined4 *)(param_1 + 0x8acc) = 0;
      *(undefined1 *)(param_1 + 0x8b20) = 0;
      *(undefined1 *)(param_1 + 0x8a60) = 0;
      *(ulong *)(param_1 + 0x8a20) = *(ulong *)(param_1 + 0x268);
      plVar1 = (long *)(param_1 + 0x8bb8);
      *(ulong *)(param_1 + 0x8a40) = *(ulong *)(param_1 + 0x270);
      if (*plVar1 != 0) {
        (*(code *)PTR_free_02bf74b0)();
        *plVar1 = 0;
      }
      *plVar1 = 0;
      if (*(long *)(param_1 + 0x788) != 0) {
        FUN_019c4804(param_1);
      }
      if ((*(long *)(param_1 + 0x790) == 0) || (uVar2 = FUN_019c3d30(param_1), (int)uVar2 == 0)) {
        *(undefined1 *)(param_1 + 0x8998) = 1;
        FUN_019d7c00(param_1);
        FUN_019c4568(param_1);
        if (*(long *)(param_1 + 0x358) != 0) {
          FUN_019be274(param_1);
        }
        if (*(long *)(param_1 + 0x360) != 0) {
          FUN_019be274(param_1);
        }
        uVar2 = 0;
        *(ulong *)(param_1 + 0x8a28) = *(ulong *)(param_1 + 0x8a28) & *(ulong *)(param_1 + 0x8a20);
        *(ulong *)(param_1 + 0x8a48) = *(ulong *)(param_1 + 0x8a48) & *(ulong *)(param_1 + 0x8a40);
      }
    }
  }
  return uVar2;
}




undefined8 FUN_019d94c8(void)

{
  return 0;
}




undefined8 FUN_019d94d0(long param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  size_t __n;
  bool bVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char cVar11;
  undefined1 auStack_70 [16];
  undefined1 auStack_54 [4];
  
  if (param_3 == 3) {
    if ((*(long *)(param_1 + 0x280) != -1) &&
       (*(long *)(param_1 + 0x280) <= *(long *)(param_1 + 0x278))) {
      FUN_019ca0fc(param_1,"Maximum (%ld) redirects followed");
      return 0x2f;
    }
    *(undefined1 *)(param_1 + 0x8948) = 1;
    *(long *)(param_1 + 0x278) = *(long *)(param_1 + 0x278) + 1;
    if (*(char *)(param_1 + 0x516) != '\0') {
      if (*(char *)(param_1 + 0x780) != '\0') {
        if (*(long *)(param_1 + 0x778) != 0) {
          (*(code *)PTR_free_02bf74b0)();
          *(undefined8 *)(param_1 + 0x778) = 0;
        }
        *(undefined1 *)(param_1 + 0x780) = 0;
      }
      lVar3 = (*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(param_1 + 0x768));
      *(long *)(param_1 + 0x778) = lVar3;
      if (lVar3 == 0) {
        return 0x1b;
      }
      *(undefined1 *)(param_1 + 0x780) = 1;
    }
  }
  iVar2 = sscanf(param_2,"%15[^?&/:]://%c",auStack_70,auStack_54);
  if (iVar2 != 2) {
    pcVar4 = (char *)(*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(param_1 + 0x768));
    if (pcVar4 == (char *)0x0) {
      return 0x1b;
    }
    pcVar9 = strstr(pcVar4,"//");
    cVar11 = *param_2;
    pcVar10 = pcVar4;
    if (pcVar9 != (char *)0x0) {
      pcVar10 = pcVar9 + 2;
    }
    pcVar9 = param_2;
    if (cVar11 == '/') {
      if (param_2[1] == '/') {
        *pcVar10 = '\0';
        pcVar9 = param_2 + 2;
      }
      else {
        pcVar7 = strchr(pcVar10,0x2f);
        pcVar5 = strchr(pcVar10,0x3f);
        if (pcVar7 == (char *)0x0) {
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
          }
        }
        else {
          if (pcVar5 == (char *)0x0 || pcVar7 <= pcVar5) {
            pcVar5 = pcVar7;
          }
          *pcVar5 = '\0';
        }
      }
    }
    else {
      pcVar5 = strchr(pcVar10,0x3f);
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
        cVar11 = *param_2;
      }
      if ((cVar11 != '?') && (pcVar5 = strrchr(pcVar10,0x2f), pcVar5 != (char *)0x0)) {
        *pcVar5 = '\0';
        cVar11 = *param_2;
      }
      pcVar5 = strchr(pcVar10,0x2f);
      iVar2 = 0;
      pcVar10 = (char *)0x0;
      if (pcVar5 != (char *)0x0) {
        pcVar10 = pcVar5 + 1;
      }
      if (cVar11 == '.') {
        pcVar9 = param_2 + 2;
        if (param_2[1] != '/') {
          pcVar9 = param_2;
        }
        if (param_2[(ulong)(param_2[1] == '/') * 2] == '.') {
          iVar2 = 0;
          do {
            if ((pcVar9[1] != '.') || (pcVar9[2] != '/')) break;
            pcVar9 = pcVar9 + 3;
            iVar2 = iVar2 + 1;
          } while (*pcVar9 == '.');
        }
        else {
          iVar2 = 0;
        }
      }
      if (pcVar5 == (char *)0x0) {
        pcVar10 = (char *)0x0;
      }
      else if (iVar2 == 0) {
        pcVar10 = pcVar5 + 1;
      }
      else {
        do {
          pcVar5 = strrchr(pcVar10,0x2f);
          if (pcVar5 == (char *)0x0) {
            *pcVar10 = '\0';
            break;
          }
          iVar2 = iVar2 + -1;
          *pcVar5 = '\0';
        } while (iVar2 != 0);
      }
    }
    lVar3 = 0;
    bVar6 = true;
    pcVar5 = pcVar9;
    do {
      cVar11 = *pcVar5;
      if (cVar11 == ' ') {
        lVar8 = 3;
        if (!bVar6) {
          lVar8 = 1;
        }
      }
      else {
        if (cVar11 == '?') {
          bVar6 = false;
        }
        else if (cVar11 == '\0') goto code_r0x019d98a0;
        lVar8 = 1;
      }
      lVar3 = lVar3 + lVar8;
      pcVar5 = pcVar5 + 1;
    } while( true );
  }
  pcVar4 = strchr(param_2,0x20);
  if (pcVar4 != (char *)0x0) {
    lVar3 = 0;
    bVar6 = true;
    pcVar4 = param_2;
    do {
      cVar11 = *pcVar4;
      if (cVar11 == ' ') {
        lVar8 = 3;
        if (!bVar6) {
          lVar8 = 1;
        }
      }
      else {
        if (cVar11 == '?') {
          bVar6 = false;
        }
        else if (cVar11 == '\0') goto code_r0x019d9614;
        lVar8 = 1;
      }
      lVar3 = lVar3 + lVar8;
      pcVar4 = pcVar4 + 1;
    } while( true );
  }
  bVar6 = true;
  pcVar5 = param_2;
LAB_019d999c:
  if (param_3 == 1) {
    *(char **)(param_1 + 0x8bb8) = pcVar5;
    return 0;
  }
  if (bVar6) {
    *(undefined1 *)(param_1 + 0x8998) = 0;
  }
  if (*(char *)(param_1 + 0x770) != '\0') {
    if (*(long *)(param_1 + 0x768) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 0x768) = 0;
    }
    *(undefined1 *)(param_1 + 0x770) = 0;
  }
  *(char **)(param_1 + 0x768) = pcVar5;
  *(undefined1 *)(param_1 + 0x770) = 1;
  FUN_019c9f64(param_1,"Issue another request to this URL: \'%s\'\n",pcVar5);
  iVar2 = *(int *)(param_1 + 0x8b68);
  if (iVar2 == 0x12f) {
    if ((*(int *)(param_1 + 0x420) != 1) && ((*(byte *)(param_1 + 0x288) >> 2 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x420) = 1;
      pcVar4 = "GET";
      if (*(char *)(param_1 + 0x517) != '\0') {
        pcVar4 = "HEAD";
      }
      FUN_019c9f64(param_1,"Disables POST, goes with %s\n",pcVar4);
    }
  }
  else {
    if (iVar2 == 0x12e) {
      if ((*(uint *)(param_1 + 0x420) & 0xfffffffe) != 2) goto LAB_019d9adc;
      bVar1 = *(byte *)(param_1 + 0x288) >> 1;
    }
    else {
      if ((iVar2 != 0x12d) || ((*(uint *)(param_1 + 0x420) & 0xfffffffe) != 2)) goto LAB_019d9adc;
      bVar1 = *(byte *)(param_1 + 0x288);
    }
    if ((bVar1 & 1) == 0) {
      FUN_019c9f64(param_1,"Switch from POST to GET\n");
      *(undefined4 *)(param_1 + 0x420) = 1;
    }
  }
LAB_019d9adc:
  FUN_019c4488(param_1,10);
  FUN_019c4410(param_1);
  return 0;
code_r0x019d98a0:
  __n = strlen(pcVar4);
  pcVar5 = (char *)(*(code *)PTR_malloc_02bf74a8)(lVar3 + __n + 1 + 1);
  if (pcVar5 == (char *)0x0) {
    (*(code *)PTR_free_02bf74b0)(pcVar4);
    return 0x1b;
  }
  memcpy(pcVar5,pcVar4,__n);
  cVar11 = *pcVar9;
  if (cVar11 != '/') {
    if (pcVar10 == (char *)0x0) {
      if (cVar11 == '?') goto LAB_019d9908;
    }
    else if ((cVar11 == '?') || (*pcVar10 == '\0')) goto LAB_019d9908;
    pcVar5[__n] = '/';
    __n = __n + 1;
  }
LAB_019d9908:
  bVar6 = true;
  pcVar10 = pcVar5 + __n;
  do {
    cVar11 = *pcVar9;
    if (cVar11 == ' ') {
      if (bVar6) {
        pcVar10[0] = '%';
        pcVar10[1] = '2';
        pcVar10[2] = '0';
        pcVar7 = pcVar10 + 3;
        bVar6 = true;
      }
      else {
        pcVar7 = pcVar10 + 1;
        bVar6 = false;
        *pcVar10 = '+';
      }
    }
    else {
      if (cVar11 == '?') {
        bVar6 = false;
      }
      else if (cVar11 == '\0') break;
      pcVar7 = pcVar10 + 1;
      *pcVar10 = cVar11;
    }
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar7;
  } while( true );
  *pcVar10 = '\0';
  (*(code *)PTR_free_02bf74b0)(pcVar4);
  (*(code *)PTR_free_02bf74b0)(param_2);
  bVar6 = false;
  goto LAB_019d999c;
code_r0x019d9614:
  pcVar5 = (char *)(*(code *)PTR_malloc_02bf74a8)(lVar3 + 1);
  if (pcVar5 == (char *)0x0) {
    return 0x1b;
  }
  bVar6 = true;
  pcVar4 = param_2;
  pcVar10 = pcVar5;
  do {
    cVar11 = *pcVar4;
    if (cVar11 == ' ') {
      if (bVar6) {
        pcVar10[0] = '%';
        pcVar10[1] = '2';
        pcVar10[2] = '0';
        pcVar9 = pcVar10 + 3;
        bVar6 = true;
      }
      else {
        pcVar9 = pcVar10 + 1;
        bVar6 = false;
        *pcVar10 = '+';
      }
    }
    else {
      if (cVar11 == '?') {
        bVar6 = false;
      }
      else if (cVar11 == '\0') break;
      pcVar9 = pcVar10 + 1;
      *pcVar10 = cVar11;
    }
    pcVar4 = pcVar4 + 1;
    pcVar10 = pcVar9;
  } while( true );
  *pcVar10 = '\0';
  (*(code *)PTR_free_02bf74b0)(param_2);
  bVar6 = true;
  goto LAB_019d999c;
}




undefined8 FUN_019d9b20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_40 [4];
  char local_3c [4];
  undefined8 *local_38;
  
  puVar3 = (undefined8 *)*param_1;
  uVar2 = *puVar3;
  local_38 = puVar3;
  FUN_019c9f64(uVar2,"Re-used connection seems dead, get a new one\n");
  *(undefined1 *)(puVar3 + 0x5c) = 1;
  uVar1 = FUN_019d2460(&local_38,0,0);
  *param_1 = 0;
  if (((int)uVar1 == 0x37) || ((int)uVar1 == 0)) {
    local_40[0] = 1;
    uVar1 = FUN_019d0194(uVar2,param_1,local_3c,local_40);
    if (((int)uVar1 == 0) && (local_3c[0] != '\0')) {
      uVar1 = 6;
    }
  }
  return uVar1;
}




undefined8 FUN_019d9bc0(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = 0;
  if ((*(char *)(lVar3 + 0x519) == '\0') || ((*(uint *)(param_1[100] + 0x78) & 0x40003) != 0)) {
    if (*(char *)(lVar3 + 0x8b20) == '\0') {
      if (*(long *)(lVar3 + 0x98) + *(long *)(lVar3 + 0xa8) != 0) {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x2e1) == '\0') {
        return 0;
      }
      if (*(char *)(lVar3 + 0x517) != '\0') {
        return 0;
      }
      if (*(int *)(lVar3 + 0x6fc) == 0xb) {
        return 0;
      }
    }
    FUN_019c9f64(*param_1,"Connection died, retrying a fresh connect\n");
    lVar1 = (*(code *)PTR_strdup_02bf74c0)(*(undefined8 *)(*param_1 + 0x768));
    *param_2 = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *(undefined1 *)((long)param_1 + 0x2ec) = 1;
    if (((*(byte *)(param_1[100] + 0x78) & 3) != 0) &&
       (*(long *)(*(long *)(lVar3 + 0x218) + 0x30) != 0)) {
      uVar2 = FUN_019d83ec(param_1);
      return uVar2;
    }
  }
  return 0;
}




void FUN_019d9cd0(long *param_1,int param_2,long param_3,byte param_4,undefined8 param_5,int param_6
                 ,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *param_1;
  if (param_2 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0);
  }
  *(undefined4 *)(param_1 + 0x67) = uVar1;
  if (param_6 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)((long)param_1 + (long)param_6 * 4 + 0x1d0);
  }
  *(undefined4 *)((long)param_1 + 0x33c) = uVar1;
  *(byte *)(lVar2 + 0x212) = param_4 & 1;
  *(long *)(lVar2 + 0x78) = param_3;
  *(undefined8 *)(lVar2 + 0x80) = param_5;
  *(undefined8 *)(lVar2 + 0x90) = param_7;
  if (((param_4 & 1) != 0) ||
     (((*(undefined1 *)(lVar2 + 0xd8) = 0, 0 < param_3 &&
       (FUN_019c4438(lVar2,param_3), *(char *)(lVar2 + 0x212) != '\0')) ||
      (*(char *)(lVar2 + 0x517) == '\0')))) {
    if ((int)param_1[0x67] != -1) {
      *(uint *)(lVar2 + 0x1e4) = *(uint *)(lVar2 + 0x1e4) | 1;
    }
    if (*(int *)((long)param_1 + 0x33c) != -1) {
      if (*(char *)(lVar2 + 0x8ad0) != '\0') {
        if (((*(byte *)(param_1[100] + 0x78) & 3) != 0) &&
           (*(int *)(*(long *)(lVar2 + 0x218) + 0x78) == 2)) {
          *(undefined4 *)(lVar2 + 0x140) = 1;
          auVar3 = FUN_019c338c();
          *(undefined1 (*) [16])(lVar2 + 0x130) = auVar3;
          FUN_019be274(lVar2,*(undefined8 *)(lVar2 + 0x760));
          return;
        }
        *(undefined4 *)(lVar2 + 0x140) = 2;
      }
      *(uint *)(lVar2 + 0x1e4) = *(uint *)(lVar2 + 0x1e4) | 2;
    }
  }
  return;
}




bool FUN_019d9df0(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcasecmp(param_1,param_2);
  return iVar1 == 0;
}




bool FUN_019d9e0c(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = strncasecmp(param_1,param_2,param_3);
  return iVar1 == 0;
}




undefined4 FUN_019d9e28(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_019da388(FUN_019f73ac);
  *(long *)(param_1 + 0x18) = lVar1;
  uVar2 = 0x1b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_019d9e64(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(code **)(param_1 + 10) != (code *)0x0) {
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if (*(long *)(param_1 + 6) != 0) {
      FUN_019da520(*(long *)(param_1 + 6),0);
      *(undefined8 *)(param_1 + 6) = 0;
    }
    if (*(long *)(param_1 + 2) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 2) = 0;
    }
    if (*(long *)(param_1 + 4) != 0) {
      (*(code *)PTR_free_02bf74b0)();
      *(undefined8 *)(param_1 + 4) = 0;
    }
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0;
  }
  return;
}




void FUN_019d9eec(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_019d9ef8(long *param_1,byte *param_2,long param_3,long *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  char *pcStack_68;
  
  lVar8 = *param_1;
  *param_4 = 0;
  if (((*(char *)(lVar8 + 0x548) != '\0') && (*(char *)(lVar8 + 0x1e9) == '\0')) &&
     (iVar4 = FUN_019ca574(param_1,1,param_2,param_3), iVar4 != 0)) {
    return 4;
  }
  if (param_3 == 0) {
    return 0;
  }
  do {
    switch((int)param_1[4]) {
    case 0:
      bVar1 = *param_2;
      if ((bVar1 - 0x30 < 10) ||
         ((uVar3 = bVar1 - 0x41, uVar3 < 0x26 &&
          ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
        if (0xf < *(int *)((long)param_1 + 0x1c)) {
          return 1;
        }
        *(byte *)((long)param_1 + (long)*(int *)((long)param_1 + 0x1c) + 8) = bVar1;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        goto joined_r0x019da270;
      }
      if (*(int *)((long)param_1 + 0x1c) == 0) {
        return 2;
      }
      *(undefined1 *)((long)param_1 + (long)*(int *)((long)param_1 + 0x1c) + 8) = 0;
      lVar5 = strtol((char *)(param_1 + 1),&pcStack_68,0x10);
      param_1[5] = lVar5;
      if ((lVar5 == 0x7fffffffffffffff) && (piVar6 = (int *)__errno(), *piVar6 == 0x22)) {
        return 2;
      }
      *(undefined4 *)(param_1 + 4) = 1;
      break;
    case 1:
      if (*param_2 == 10) {
        if (param_1[5] == 0) {
          *(undefined4 *)(param_1 + 4) = 5;
          *(undefined4 *)((long)param_1 + 0x544) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 4) = 2;
        }
      }
      goto joined_r0x019da270;
    case 2:
      lVar5 = param_1[5];
      if (param_3 <= param_1[5]) {
        lVar5 = param_3;
      }
      lVar5 = FUN_019c1ea8(lVar5);
      if (*(char *)(*param_1 + 0x549) == '\0') {
        iVar4 = *(int *)(lVar8 + 0x148);
        if (iVar4 == 2) {
          *(byte **)(lVar8 + 0xf8) = param_2;
          iVar4 = FUN_019db008(param_1,lVar8 + 0x78,lVar5);
        }
        else {
          if (iVar4 != 1) {
            if (iVar4 != 0) {
              FUN_019ca0fc(*param_1,
                           "Unrecognized content encoding type. libcurl understands `identity\', `deflate\' and `gzip\' content encodings."
                          );
              return 5;
            }
            goto LAB_019da014;
          }
          *(byte **)(lVar8 + 0xf8) = param_2;
          iVar4 = FUN_019dad34(param_1,lVar8 + 0x78,lVar5);
        }
joined_r0x019da1d4:
        if (iVar4 != 0) {
          return 4;
        }
      }
      else {
LAB_019da014:
        if ((*(char *)(lVar8 + 0x1e9) == '\0') && (*(char *)(lVar8 + 0x548) == '\0')) {
          iVar4 = FUN_019ca574(param_1,1,param_2,lVar5);
          goto joined_r0x019da1d4;
        }
      }
      param_2 = param_2 + lVar5;
      param_3 = param_3 - lVar5;
      *param_4 = *param_4 + lVar5;
      lVar7 = param_1[5];
      param_1[5] = lVar7 - lVar5;
      if (lVar7 - lVar5 != 0) goto switchD_019d9f74_default;
      *(undefined4 *)(param_1 + 4) = 3;
      break;
    case 3:
      if (*param_2 != 0xd) {
        if (*param_2 != 10) {
          return 3;
        }
        param_1[6] = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 4) = 0;
      }
      goto joined_r0x019da270;
    case 4:
      if (*param_2 == 10) {
        lVar8 = FUN_019c1ea8(param_3 + -1);
        param_1[6] = lVar8;
        return 0xffffffff;
      }
      return 3;
    case 5:
      bVar1 = *param_2;
      if ((bVar1 == 0xd) || (bVar1 == 10)) {
        iVar4 = *(int *)((long)param_1 + 0x544);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 4) = 7;
          break;
        }
        *(int *)((long)param_1 + 0x544) = iVar4 + 1;
        *(undefined1 *)(param_1[0xa7] + (long)iVar4) = 0xd;
        iVar4 = *(int *)((long)param_1 + 0x544);
        *(int *)((long)param_1 + 0x544) = iVar4 + 1;
        *(undefined1 *)(param_1[0xa7] + (long)iVar4) = 10;
        *(undefined1 *)(param_1[0xa7] + (long)*(int *)((long)param_1 + 0x544)) = 0;
        if ((*(char *)(lVar8 + 0x548) == '\0') &&
           (iVar4 = FUN_019ca574(param_1,2,param_1[0xa7],(long)*(int *)((long)param_1 + 0x544)),
           iVar4 != 0)) {
          return 4;
        }
        *(undefined4 *)((long)param_1 + 0x544) = 0;
        *(undefined4 *)(param_1 + 4) = 6;
        if (*param_2 == 10) goto switchD_019d9f74_default;
      }
      else {
        iVar4 = *(int *)((long)param_1 + 0x544);
        iVar2 = (int)param_1[0xa8];
        if (iVar4 < iVar2) {
          lVar5 = param_1[0xa7];
        }
        else {
          if (iVar2 == 0) {
            *(undefined4 *)(param_1 + 0xa8) = 0x80;
            lVar5 = (*(code *)PTR_malloc_02bf74a8)(0x83);
          }
          else {
            *(int *)(param_1 + 0xa8) = (int)((long)iVar2 * 2);
            lVar5 = (*(code *)PTR_realloc_02bf74b8)(param_1[0xa7],(long)iVar2 * 2 + 3);
          }
          if (lVar5 == 0) {
            return 6;
          }
          param_1[0xa7] = lVar5;
          bVar1 = *param_2;
          iVar4 = *(int *)((long)param_1 + 0x544);
        }
        *(int *)((long)param_1 + 0x544) = iVar4 + 1;
        *(byte *)(lVar5 + iVar4) = bVar1;
      }
      goto joined_r0x019da270;
    case 6:
      if (*param_2 != 10) {
        return 3;
      }
      *(undefined4 *)(param_1 + 4) = 7;
joined_r0x019da270:
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      break;
    case 7:
      bVar1 = *param_2;
      if ((bVar1 == 10) || (bVar1 == 0xd)) {
        if (bVar1 == 0xd) {
          param_2 = param_2 + 1;
        }
        param_3 = param_3 - (ulong)(bVar1 == 0xd);
        *(undefined4 *)(param_1 + 4) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 5;
      }
      break;
    default:
switchD_019d9f74_default:
    }
    if (param_3 == 0) {
      return 0;
    }
  } while( true );
}

