// functions/1005d — 385 functions
#include "GameKindred.h"




void thunk_FUN_1005d0478(void)

{
  FUN_1005d0478();
  return;
}




void thunk_FUN_1005d04c8(void)

{
  FUN_1005d04c8();
  return;
}




void FUN_1005d01e8(void *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  if (*(int *)((long)param_1 + 0x208) + 2 < param_2) {
    _bzero((void *)((long)param_1 + 0x100),0x108);
  }
  else {
    iVar2 = *(int *)((long)param_1 + 0x20c);
    if (0 < iVar2) {
      _bzero((void *)((long)param_1 + 0x100),0x108);
      lVar3 = 0;
      *(undefined4 *)((long)param_1 + 0x20c) = 0;
      *(int *)((long)param_1 + 0x100) = iVar2;
      do {
        pfVar1 = (float *)((long)param_1 + lVar3);
        pfVar1[0x41] = pfVar1[0x20];
        if (*pfVar1 / (float)iVar2 <= 0.0) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = SQRT(*pfVar1 / (float)iVar2);
        }
        pfVar1[0x61] = fVar4;
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0x80);
      _memset(param_1,0,0x100);
      *(undefined2 *)((long)param_1 + 0x204) = *(undefined2 *)((long)param_1 + 0x210);
    }
  }
  return;
}




undefined8 FUN_1005d0298(long *param_1,ulong *param_2,uint *param_3,uint *param_4)

{
  ulong *puVar1;
  
  if (param_1 == (long *)0x0) {
    return 0x1f;
  }
  puVar1 = (ulong *)*param_1;
  if (param_2 != (ulong *)0x0) {
    *param_2 = *puVar1 >> 0x14;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)*(ushort *)((long)puVar1 + 0x84);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)*(ushort *)((long)puVar1 + 0x86);
    return 0;
  }
  return 0;
}




undefined8 FUN_1005d02e0(long *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = 0x1f;
  if ((param_1 != (long *)0x0) && (param_2 != (undefined4 *)0x0)) {
    if (*param_1 == 0) {
      if (7 < *(uint *)(param_1 + 6)) {
        return 0x1e;
      }
      plVar2 = (long *)(PTR_DAT_10186d408 + (long)(int)*(uint *)(param_1 + 6) * 8 + 0x98);
    }
    else {
      plVar2 = (long *)(*param_1 + 0x90);
    }
    if (*plVar2 == 0) {
      return 0x1c;
    }
    uVar1 = 0;
    *param_2 = *(undefined4 *)(*plVar2 + 0x708);
  }
  return uVar1;
}




undefined8 FUN_1005d0348(long *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = 0x1f;
  if ((param_1 != (long *)0x0) && (param_2 != (undefined4 *)0x0)) {
    if (*param_1 == 0) {
      if (7 < *(uint *)(param_1 + 6)) {
        return 0x1e;
      }
      plVar2 = (long *)(PTR_DAT_10186d408 + (long)(int)*(uint *)(param_1 + 6) * 8 + 0x98);
    }
    else {
      plVar2 = (long *)(*param_1 + 0x90);
    }
    if (*plVar2 == 0) {
      return 0x1c;
    }
    uVar1 = 0;
    *param_2 = *(undefined4 *)(*plVar2 + 0x710);
  }
  return uVar1;
}




undefined8 FUN_1005d03b0(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 == (long *)0x0) {
    return 0x1f;
  }
  if (*param_1 == 0) {
    if (7 < *(uint *)(param_1 + 6)) {
      return 0x1e;
    }
    plVar2 = (long *)(PTR_DAT_10186d408 + (long)(int)*(uint *)(param_1 + 6) * 8 + 0x98);
  }
  else {
    plVar2 = (long *)(*param_1 + 0x90);
  }
  lVar1 = *plVar2;
  if (lVar1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(lVar1 + 0x160b0);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(*(long *)(lVar1 + 0x6b8) + 0x4c);
      return 0;
    }
    return 0;
  }
  return 0x1c;
}




undefined8 FUN_1005d0438(long *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (param_2 == 0) {
    *(undefined4 *)(lVar3 + 0x178) = *(undefined4 *)(*(long *)(lVar3 + 0x90) + 0x710);
    return 0;
  }
  uVar1 = *(uint *)(lVar3 + 0x178);
  if (uVar1 != 0) {
    iVar2 = uVar1 - param_3;
    if (uVar1 < param_3 || iVar2 == 0) {
      iVar2 = 0;
    }
    *(int *)(lVar3 + 0x178) = iVar2;
    return 0;
  }
  return 9;
}




undefined8 FUN_1005d0478(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_10186d408;
  if (param_1 == 0) {
    *(undefined4 *)(PTR_DAT_10186d408 + 4) = 0;
    FUN_1005dbf14(*(undefined8 *)(puVar1 + 0x48));
  }
  else {
    FUN_1005dbee4(*(undefined8 *)(PTR_DAT_10186d408 + 0x48));
    *(undefined4 *)(PTR_DAT_10186d408 + 4) = 1;
  }
  return 0;
}




undefined8 FUN_1005d04c8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(PTR_DAT_10186d408 + 4);
    return 0;
  }
  return 0x1f;
}




undefined8 thunk_FUN_1005d04fc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x178) != '\0') {
    FUN_1005dbee4(*(undefined8 *)(param_1 + 0x1a8));
    plVar2 = (long *)*(long *)(param_1 + 0x180);
    while (*(long **)(param_1 + 0x198) = plVar2, plVar2 != (long *)(param_1 + 0x180)) {
      lVar3 = *plVar2;
      *(long *)(param_1 + 0x1a0) = lVar3;
      lVar1 = 0;
      if (plVar2 != (long *)0x0) {
        lVar1 = (long)(plVar2 + -1);
      }
      plVar2 = (long *)lVar3;
      if ((*(uint *)(lVar1 + 0x1a4) >> 7 & 1) != 0) {
        FUN_1005dbf14(*(undefined8 *)(param_1 + 0x1a8));
        FUN_1005d059c(lVar1,0);
        FUN_1005dbee4(*(undefined8 *)(param_1 + 0x1a8));
        plVar2 = (long *)*(long *)(param_1 + 0x1a0);
      }
    }
    FUN_1005dbf14(*(undefined8 *)(param_1 + 0x1a8));
  }
  return 0;
}




undefined8 FUN_1005d04fc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x178) != '\0') {
    FUN_1005dbee4(*(undefined8 *)(param_1 + 0x1a8));
    plVar2 = (long *)*(long *)(param_1 + 0x180);
    while (*(long **)(param_1 + 0x198) = plVar2, plVar2 != (long *)(param_1 + 0x180)) {
      lVar3 = *plVar2;
      *(long *)(param_1 + 0x1a0) = lVar3;
      lVar1 = 0;
      if (plVar2 != (long *)0x0) {
        lVar1 = (long)(plVar2 + -1);
      }
      plVar2 = (long *)lVar3;
      if ((*(uint *)(lVar1 + 0x1a4) >> 7 & 1) != 0) {
        FUN_1005dbf14(*(undefined8 *)(param_1 + 0x1a8));
        FUN_1005d059c(lVar1,0);
        FUN_1005dbee4(*(undefined8 *)(param_1 + 0x1a8));
        plVar2 = (long *)*(long *)(param_1 + 0x1a0);
      }
    }
    FUN_1005dbf14(*(undefined8 *)(param_1 + 0x1a8));
  }
  return 0;
}




ulong FUN_1005d059c(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  uint local_74;
  
  if (*(int *)((long)param_1 + 0x1ec) == 0x2e) {
    uVar13 = 0x2e;
  }
  else {
    iVar11 = (int)param_2;
    if (((param_2 & 1) == 0) && ((int)param_1[0x34] == 0)) {
      uVar13 = 0x2e;
    }
    else {
      iVar14 = 0;
      uVar13 = 0;
      uVar15 = ((int)param_1[0x2f] - *(uint *)((long)param_1 + 0x174)) - *(uint *)(param_1 + 0x3d);
      *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) | 0x10;
      lVar12 = param_1[0x3e] +
               (ulong)*(uint *)(param_1 + 0x3d) + (ulong)*(uint *)((long)param_1 + 0x174) +
               (ulong)*(uint *)((long)param_1 + 0x17c);
      uVar7 = 0;
      if (iVar11 == 0) {
        uVar7 = 0x32;
      }
      do {
        if (uVar15 == 0) goto LAB_1005d0824;
        local_74 = 0;
        uVar3 = *(uint *)((long)param_1 + 0x1ec);
        if (uVar3 == 0 || uVar3 == 0x10) {
          uVar4 = *(uint *)(param_1 + 0x3b);
          if (uVar4 != 0) {
            *(uint *)(param_1 + 0x3d) = (int)param_1[0x3d] + uVar4;
            *(undefined4 *)(param_1 + 0x3b) = 0;
            local_74 = uVar4;
LAB_1005d0688:
            *(undefined4 *)((long)param_1 + 0x1ec) = 0;
            uVar13 = (ulong)uVar3;
            goto LAB_1005d0768;
          }
          if (iVar11 == 0) {
            iVar8 = (int)param_1[0x31];
          }
          else {
            iVar8 = *(int *)((long)param_1 + 0x184) + iVar14;
          }
          if (((*(uint *)(param_1 + 4) == 0xffffffff) || (iVar8 <= *(int *)((long)param_1 + 0x18c)))
             || ((uint)(iVar8 - *(int *)((long)param_1 + 0x18c)) < *(uint *)(param_1 + 4))) {
            param_1[0x3a] = lVar12;
            *(undefined4 *)(param_1 + 0x3b) = 0;
            param_1[0x36] = (long)param_1;
            *(int *)(param_1 + 0x37) = iVar8;
            uVar2 = uVar7;
            if ((*(uint *)((long)param_1 + 0x1a4) & 0x1000) != 0) {
              uVar2 = 100;
            }
            *(undefined4 *)(param_1 + 0x38) = uVar2;
            param_1[0x39] = 0;
            *(undefined4 *)((long)param_1 + 0x1ec) = 0;
            *(uint *)((long)param_1 + 0x1bc) = uVar15;
            if ((param_1[0x35] != 0) && (*(uint *)(param_1 + 8) != 3)) {
              plVar1 = (long *)(param_1[0x35] + (ulong)*(uint *)(param_1 + 8) * 8 + 0x15c08);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = *plVar1 + (long)(int)uVar15;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            uVar13 = (**(code **)(*param_1 + 0x50))(param_1,param_1 + 0x36,&local_74,param_2);
            if ((int)uVar13 == 0x2e && iVar11 == 0) {
              return 0x2e;
            }
            *(undefined4 *)(param_1 + 0x3b) = 0;
            goto LAB_1005d0768;
          }
          local_74 = 0;
LAB_1005d0790:
          uVar13 = 0x10;
          uVar15 = local_74;
        }
        else {
          if (uVar3 != 0x2e) goto LAB_1005d0688;
LAB_1005d0768:
          if ((int)uVar13 == 0) {
            uVar13 = 0;
          }
          else {
            uVar15 = local_74;
            if (((int)uVar13 == 0x10) && ((int)param_1[4] == -1)) {
              iVar8 = (int)param_1[0x31];
              if (iVar8 != 0) {
                *(int *)(param_1 + 4) = iVar8;
                *(int *)((long)param_1 + 0x24) = iVar8;
              }
              goto LAB_1005d0790;
            }
          }
        }
        if ((param_1[0x35] != 0) &&
           (pcVar10 = *(code **)(param_1[0x35] + 0x15e38), pcVar10 != (code *)0x0)) {
          (*pcVar10)(param_1[6],lVar12,local_74,0,param_1[5]);
        }
        if (uVar15 <= local_74 - 1) goto LAB_1005d0824;
        uVar15 = uVar15 - local_74;
        lVar12 = lVar12 + (ulong)local_74;
        iVar14 = local_74 + iVar14;
        local_74 = (int)param_1[0x31] + local_74;
        *(uint *)(param_1 + 0x31) = local_74;
        fVar16 = (float)NEON_ucvtf((int)param_1[0x30]);
        fVar17 = (float)NEON_ucvtf((int)param_1[0x2e]);
        iVar9 = (int)((((float)local_74 - fVar16) / fVar17) * 100.0);
        iVar8 = 0;
        if (-1 < iVar9) {
          iVar8 = iVar9;
        }
        *(int *)(param_1 + 0x32) = iVar8;
      } while (*(char *)((long)param_1 + 0x3c) == '\0');
      *(undefined1 *)((long)param_1 + 0x3c) = 0;
LAB_1005d0824:
      if (*(int *)((long)param_1 + 0x17c) == 0) {
        uVar15 = *(uint *)((long)param_1 + 0x1a4) | 0x100;
      }
      else {
        uVar15 = *(uint *)((long)param_1 + 0x1a4) | 0x200;
      }
      *(uint *)((long)param_1 + 0x1a4) = uVar15;
      uVar15 = *(int *)((long)param_1 + 0x17c) + (int)param_1[0x2f];
      if (*(uint *)(param_1 + 0x2e) <= uVar15) {
        uVar15 = 0;
      }
      *(uint *)((long)param_1 + 0x17c) = uVar15;
      *(undefined4 *)((long)param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x3d) = 0;
      *(int *)((long)param_1 + 0x194) = (int)uVar13;
      *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) & 0xffffef6f;
      if ((param_2 & 1) == 0) {
        *(int *)(param_1 + 0x34) = (int)param_1[0x34] + -1;
      }
    }
  }
  return uVar13;
}




long FUN_1005d08c0(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1005fb738(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(long *)(param_1 + 0x180) = param_1 + 0x180;
  *(long *)(param_1 + 0x188) = param_1 + 0x180;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  return param_1;
}




long FUN_1005d090c(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1005fb738(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(long *)(param_1 + 0x180) = param_1 + 0x180;
  *(long *)(param_1 + 0x188) = param_1 + 0x180;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  return param_1;
}




undefined8 FUN_1005d0958(long *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x36) = param_2;
  *(char *)((long)param_1 + 0x1b4) = (char)param_3;
  uVar1 = FUN_1005dbd48(param_1 + 0x35,0);
  if ((int)uVar1 == 0) {
    if (param_3 == 0) {
      param_4 = 0;
    }
    uVar1 = FUN_1005fb770(param_1 + 3,"FMOD file thread",thunk_FUN_1005d04fc,param_1,3,1,0,0x4000,0,
                          param_4,1);
    if ((int)uVar1 == 0) {
      if (*(char *)((long)param_1 + 0x1b4) == '\0') {
        *(long *)(PTR_DAT_10186d408 + 0x40) = param_1[0x25];
      }
      *(undefined1 *)(param_1 + 0x2f) = 1;
      plVar2 = (long *)(PTR_DAT_10186d408 + 0x28);
      lVar3 = *plVar2;
      uVar1 = 0;
      *param_1 = lVar3;
      param_1[1] = (long)plVar2;
      *(long **)(lVar3 + 8) = param_1;
      *(long **)param_1[1] = param_1;
    }
    else {
      FUN_1005dbe84(param_1[0x35],0);
    }
  }
  return uVar1;
}




undefined8 FUN_1005d0a64(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *plVar1 = *param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  FUN_1005fb958(param_1 + 3);
  if (*(char *)((long)param_1 + 0x1b4) == '\0') {
    *(undefined8 *)(PTR_DAT_10186d408 + 0x40) = 0;
  }
  if (param_1[0x35] != 0) {
    FUN_1005dbe84(param_1[0x35],0);
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp",
                0x115);
  return 0;
}




undefined8 FUN_1005d0af0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_1005ed180("http://",param_1 + 0x44,7);
  uVar2 = 3;
  if (iVar1 != 0) {
    uVar2 = 4;
    for (puVar3 = *(undefined8 **)(PTR_DAT_10186d408 + 0x28);
        puVar3 != (undefined8 *)(PTR_DAT_10186d408 + 0x28); puVar3 = (undefined8 *)*puVar3) {
      if (*(int *)(puVar3 + 0x36) == 4) goto LAB_1005d0bfc;
    }
  }
  puVar3 = (undefined8 *)
           FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x1b8,
                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp"
                         ,0x14f,0,0);
  *puVar3 = puVar3;
  puVar3[1] = puVar3;
  puVar3[2] = 0;
  FUN_1005fb738(puVar3 + 3);
  puVar3[0x35] = 0;
  puVar3[0x30] = puVar3 + 0x30;
  puVar3[0x31] = puVar3 + 0x30;
  puVar3[0x33] = 0;
  puVar3[0x34] = 0;
  puVar3[0x32] = 0;
  *(undefined1 *)(puVar3 + 0x2f) = 0;
  *(undefined4 *)(puVar3 + 0x36) = 0;
  *(undefined1 *)((long)puVar3 + 0x1b4) = 0;
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = 0x26;
  }
  else {
    uVar4 = FUN_1005d0958(puVar3,uVar2,iVar1 == 0,*(undefined8 *)(param_1 + 0x1a8));
    if ((int)uVar4 == 0) {
LAB_1005d0bfc:
      uVar4 = 0;
      *(undefined8 **)(param_1 + 0x198) = puVar3;
    }
    else {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar3,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp"
                    ,0x158);
    }
  }
  return uVar4;
}




void FUN_1005d0c24(long *param_1)

{
  undefined *puVar1;
  
  param_1[1] = (long)(param_1 + 1);
  param_1[2] = (long)(param_1 + 1);
  puVar1 = PTR_DAT_1014441d0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x1a4) = 3;
  return;
}




undefined8 FUN_1005d0c4c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x178) = param_4;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = param_2;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x40) = 3;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  _bzero((void *)(param_1 + 0x44),0x120);
  return 0;
}




undefined8 FUN_1005d0cdc(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(PTR_DAT_10186d408 + 0x28);
  if (plVar3 != (long *)(PTR_DAT_10186d408 + 0x28)) {
    do {
      plVar1 = (long *)*plVar3;
      plVar2 = (long *)plVar3[1];
      *plVar2 = (long)plVar1;
      *(long **)(*plVar3 + 8) = plVar2;
      *plVar3 = (long)plVar3;
      plVar3[1] = (long)plVar3;
      *(undefined1 *)(plVar3 + 0x2f) = 0;
      FUN_1005fb958(plVar3 + 3);
      if (*(char *)((long)plVar3 + 0x1b4) == '\0') {
        *(undefined8 *)(PTR_DAT_10186d408 + 0x40) = 0;
      }
      if (plVar3[0x35] != 0) {
        FUN_1005dbe84(plVar3[0x35],0);
      }
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar3,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp"
                    ,0x115);
      plVar3 = plVar1;
    } while (plVar1 != (long *)(PTR_DAT_10186d408 + 0x28));
  }
  return 0;
}




undefined8 FUN_1005d0d8c(long *param_1,long param_2,int param_3,int param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  int *piVar8;
  
  *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) & 0xfffffff7;
  *(int *)((long)param_1 + 0x18c) = param_4;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) & 0xffffffdf;
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(int *)(param_1 + 4) = param_3;
  piVar8 = (int *)((long)param_1 + 0x24);
  *piVar8 = param_4 + param_3;
  if (param_5 != 0) {
    iVar3 = FUN_1005ecb6c(param_5);
    iVar1 = 0x20;
    if (iVar3 < 0x21) {
      iVar1 = iVar3;
    }
    *(int *)((long)param_1 + 0x164) = iVar1;
    *(undefined8 *)((long)param_1 + 0x15c) = 0;
    *(undefined8 *)((long)param_1 + 0x154) = 0;
    *(undefined8 *)((long)param_1 + 0x14c) = 0;
    *(undefined8 *)((long)param_1 + 0x144) = 0;
    FUN_1005ecc98((undefined8 *)((long)param_1 + 0x144),param_5);
  }
  iVar1 = (int)param_1[0x2f];
  *(int *)(param_1 + 0x2e) = iVar1;
  if ((iVar1 != 0) && (param_1[0x3e] == 0)) {
    lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar1 + 1,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp"
                          ,0x1fd,0);
    param_1[0x3f] = lVar4;
    if (lVar4 == 0) {
      return 0x26;
    }
    param_1[0x3e] = lVar4;
  }
  uVar5 = (**(code **)(*param_1 + 0x28))(param_1,param_2,piVar8);
  if ((int)uVar5 == 0) {
    if ((param_2 != 0) && ((*(uint *)((long)param_1 + 0x1a4) >> 1 & 1) != 0)) {
      FUN_1005ecc98((long)param_1 + 0x44,param_2,0x100);
    }
    if ((param_1[0x35] != 0) &&
       (pcVar6 = *(code **)(param_1[0x35] + 0x15e28), pcVar6 != (code *)0x0)) {
      (*pcVar6)(param_2,piVar8,param_1 + 6,param_1 + 5);
    }
    uVar2 = *(uint *)((long)param_1 + 0x24);
    uVar7 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 4) == 0) {
      *(uint *)(param_1 + 4) = uVar2;
      uVar7 = uVar2;
    }
    if (uVar2 < uVar7 + *(int *)((long)param_1 + 0x18c)) {
      uVar5 = 0;
      *(uint *)(param_1 + 4) = uVar2 - *(int *)((long)param_1 + 0x18c);
    }
    else {
      uVar5 = 0;
    }
  }
  else if (param_1[0x3f] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x3f],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp"
                  ,0x20b);
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  return uVar5;
}




undefined8 FUN_1005d0f74(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  (**(code **)(*param_1 + 0x48))(param_1,param_1 + 0x36);
  if ((*(uint *)((long)param_1 + 0x1a4) >> 4 & 1) != 0) {
    while ((int)param_1[0x34] != 0) {
      FUN_1005dbaa8(10);
    }
  }
  if (param_1[0x33] != 0) {
    FUN_1005dbee4(*(undefined8 *)(param_1[0x33] + 0x1a8));
    plVar6 = param_1 + 1;
    lVar4 = *plVar6;
    lVar3 = param_1[0x33];
    if (plVar6 == *(long **)(lVar3 + 0x1a0)) {
      *(long *)(lVar3 + 0x1a0) = lVar4;
    }
    plVar5 = (long *)param_1[2];
    *plVar5 = lVar4;
    *(long **)(param_1[1] + 8) = plVar5;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)plVar6;
    FUN_1005dbf14(*(undefined8 *)(lVar3 + 0x1a8));
    plVar6 = (long *)param_1[0x33];
    if (*(char *)((long)plVar6 + 0x1b4) != '\0') {
      plVar5 = (long *)plVar6[1];
      *plVar5 = *plVar6;
      *(long **)(*plVar6 + 8) = plVar5;
      *plVar6 = (long)plVar6;
      plVar6[1] = (long)plVar6;
      *(undefined1 *)(plVar6 + 0x2f) = 0;
      FUN_1005fb958(plVar6 + 3);
      if (*(char *)((long)plVar6 + 0x1b4) == '\0') {
        *(undefined8 *)(PTR_DAT_10186d408 + 0x40) = 0;
      }
      if (plVar6[0x35] != 0) {
        FUN_1005dbe84(plVar6[0x35],0);
      }
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar6,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp"
                    ,0x115);
    }
    param_1[0x33] = 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((param_1[0x35] != 0) && (pcVar2 = *(code **)(param_1[0x35] + 0x15e30), pcVar2 != (code *)0x0))
  {
    (*pcVar2)(param_1[6],param_1[5]);
  }
  if (param_1[0x3f] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x3f],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp"
                  ,0x26f);
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  return uVar1;
}




void FUN_1005d10ec(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001005d1100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_1 + 0x36);
  return;
}




undefined8 FUN_1005d1104(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  if ((*(uint *)((long)param_1 + 0x1a4) >> 4 & 1) != 0) {
    while ((int)param_1[0x34] != 0) {
      FUN_1005dbaa8(10);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x2e);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_1 + 0x30) / uVar1;
  }
  iVar2 = uVar3 * uVar1;
  *(uint *)((long)param_1 + 0x16c) = *(uint *)(param_1 + 0x30) - iVar2;
  *(undefined4 *)((long)param_1 + 0x17c) = 0;
  *(int *)((long)param_1 + 0x184) = iVar2;
  *(int *)(param_1 + 0x31) = iVar2;
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) & 0xfffffeff;
  *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) & 0xfffffdff;
  uVar4 = (**(code **)(*param_1 + 0x40))(param_1,iVar2);
  if ((param_1[0x35] != 0) && (pcVar5 = *(code **)(param_1[0x35] + 0x15e40), pcVar5 != (code *)0x0))
  {
    (*pcVar5)(param_1[6],iVar2,param_1[5]);
  }
  return uVar4;
}




ulong FUN_1005d11c8(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  
  uVar1 = *(uint *)(param_1 + 0x194);
  if (0x10 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x18001U) == 0) {
    return (ulong)uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x184);
  uVar2 = *(uint *)(param_1 + 0x180);
  if (uVar1 < uVar2) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x178);
    if (((uVar3 < *(uint *)(param_1 + 0x170)) && ((*(uint *)(param_1 + 0x1a4) & 0x280) == 0)) &&
       (uVar2 < uVar1 - uVar3)) {
      uVar8 = 0xffffffff;
    }
    else {
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x188));
      iVar7 = (int)(((fVar9 - (float)uVar2) / (float)*(uint *)(param_1 + 0x170)) * 100.0);
      *(int *)(param_1 + 400) = iVar7;
      if ((iVar7 < 0) || (*(int *)(param_1 + 0x174) != 0)) {
        *(undefined4 *)(param_1 + 400) = 0;
      }
      uVar8 = 0;
      if (uVar3 != 0) {
        uVar8 = (((uVar1 - 1) - uVar2) + uVar3) / uVar3;
      }
    }
  }
  if (*(int *)(param_1 + 0x174) == 0) {
    bVar4 = 0;
    if (uVar8 != 2) {
      bVar5 = false;
      goto LAB_1005d12ec;
    }
    bVar5 = true;
    uVar8 = 2;
LAB_1005d137c:
    uVar1 = *(uint *)(param_1 + 0x170);
    uVar2 = *(uint *)(param_1 + 0x178);
    if ((bool)(bVar5 & (uVar2 <= uVar1 && uVar1 != uVar2))) {
      return 0;
    }
    if ((bool)(bVar4 & uVar1 == uVar2)) {
      return 0;
    }
    if (((uVar8 != 0) && ((*(uint *)(param_1 + 0x1a4) & 1) != 0)) &&
       (uVar6 = FUN_1005d1104(param_1), (int)uVar6 != 0)) {
      return uVar6;
    }
    uVar6 = FUN_1005d059c(param_1,1);
    iVar7 = (int)uVar6;
    if ((iVar7 == 0) || (iVar7 == 0x10)) {
      *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) & 0xffffffdf;
      uVar1 = *(uint *)(param_1 + 0x178);
      if ((iVar7 == 0x10) &&
         ((*(uint *)(param_1 + 0x170) == uVar1 && (*(int *)(param_1 + 0x20) == -1)))) {
        return 0x10;
      }
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x184);
      *(uint *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + uVar1;
      if (*(uint *)(param_1 + 0x16c) < uVar1) {
        return uVar6;
      }
      uVar6 = FUN_1005d059c(param_1,1);
      if (((int)uVar6 == 0) || ((int)uVar6 == 0x10)) {
        *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) & 0xffffffdf;
        goto LAB_1005d1444;
      }
    }
    if ((int)uVar6 == 0xf) {
      *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) | 0x20;
      uVar6 = 0xf;
    }
  }
  else {
    if ((int)uVar8 < 3) {
      *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x174);
      *(uint *)(param_1 + 0x184) = uVar2 - *(int *)(param_1 + 0x16c);
      uVar8 = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    bVar5 = uVar8 == 2;
LAB_1005d12ec:
    if ((*(uint *)(param_1 + 0x1a4) >> 4 & 1) != 0) {
      *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) | 0x20;
      while (*(int *)(param_1 + 0x1a0) != 0) {
        FUN_1005dbaa8(10);
      }
      *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) & 0xffffffdf;
    }
    if (uVar8 != 1) {
      bVar4 = 0;
      goto LAB_1005d137c;
    }
    if (*(uint *)(param_1 + 0x170) <= *(uint *)(param_1 + 0x178)) {
      bVar4 = 1;
      uVar8 = 1;
      goto LAB_1005d137c;
    }
    while (*(int *)(param_1 + 0x1a0) != 0) {
      FUN_1005dbaa8(10);
    }
    uVar6 = 0;
    *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) | 0x90;
    *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
LAB_1005d1444:
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x184);
    *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + *(int *)(param_1 + 0x178);
  }
  return uVar6;
}




ulong FUN_1005d148c(long *param_1,undefined1 (*param_2) [16],uint param_3,int param_4,uint *param_5)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined2 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  code *pcVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [14];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 uVar25;
  uint local_64;
  
  if (param_2 == (undefined1 (*) [16])0x0) {
    return 0x1f;
  }
  uVar20 = param_4 * param_3;
  if ((int)uVar20 < 0) {
    return 0x1f;
  }
  uVar18 = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  if ((int)param_1[4] != -1) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar12 = *(int *)((long)param_1 + 0x18c) + (int)param_1[4];
    if (uVar12 < uVar2 + uVar20) {
      uVar20 = uVar12 - uVar2;
      if (uVar12 < uVar2) {
        return 0xd;
      }
      uVar18 = 0x10;
    }
    else {
      uVar18 = 0;
    }
  }
  if (uVar20 == 0) {
    uVar19 = 0;
    uVar8 = 0;
  }
  else {
    uVar19 = 0;
    do {
      uVar12 = *(uint *)(param_1 + 0x2f);
      local_64 = uVar20;
      if (((uVar12 < uVar20 && uVar12 == *(uint *)(param_1 + 0x2e)) &&
          (*(int *)((long)param_1 + 0x16c) == 0)) && ((*(uint *)((long)param_1 + 0x1a4) & 1) != 0))
      {
        if (uVar12 != 0) {
          if ((int)param_1[0x30] != *(int *)((long)param_1 + 0x184)) {
            uVar8 = FUN_1005d1104(param_1);
            if ((int)uVar8 != 0) {
              return uVar8;
            }
            uVar12 = *(uint *)(param_1 + 0x2f);
          }
          uVar2 = 0;
          if (uVar12 != 0) {
            uVar2 = local_64 / uVar12;
          }
          local_64 = uVar2 * uVar12;
        }
        param_1[0x3a] = (long)(*param_2 + uVar19);
        *(undefined4 *)(param_1 + 0x3b) = 0;
        param_1[0x36] = (long)param_1;
        *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)((long)param_1 + 0x184);
        uVar9 = 100;
        if ((*(uint *)((long)param_1 + 0x1a4) & 0x1000) == 0) {
          uVar9 = 0;
        }
        *(undefined4 *)(param_1 + 0x38) = uVar9;
        *(uint *)((long)param_1 + 0x1bc) = local_64;
        if ((param_1[0x35] != 0) && (*(uint *)(param_1 + 8) != 3)) {
          plVar1 = (long *)(param_1[0x35] + (ulong)*(uint *)(param_1 + 8) * 8 + 0x15c08);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + (long)(int)local_64;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar8 = (**(code **)(*param_1 + 0x50))(param_1,param_1 + 0x36,&local_64,1);
        *(undefined4 *)(param_1 + 0x3b) = 0;
        *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) & 0xffffffef;
        if ((param_1[0x35] != 0) &&
           (pcVar10 = *(code **)(param_1[0x35] + 0x15e38), pcVar10 != (code *)0x0)) {
          (*pcVar10)(param_1[6],*param_2 + uVar19,local_64,0,param_1[5]);
        }
        if (((uint)uVar8 | 0x10) != 0x10) {
          return uVar8;
        }
        *(int *)(param_1 + 0x31) = *(int *)((long)param_1 + 0x184);
        *(uint *)((long)param_1 + 0x184) = *(int *)((long)param_1 + 0x184) + local_64;
        uVar12 = 0x10;
        if (local_64 != 0) {
          uVar12 = (uint)uVar8;
        }
        uVar8 = (ulong)uVar12;
        if (uVar12 == 0x10) {
LAB_1005d173c:
          uVar8 = 0x10;
          break;
        }
      }
      else {
        uVar8 = FUN_1005d11c8(param_1);
        if ((int)uVar8 == 0x10) {
          uVar12 = *(uint *)(param_1 + 0x2f);
          if ((uVar12 == *(uint *)(param_1 + 0x2e)) && ((int)param_1[4] == -1)) goto LAB_1005d173c;
        }
        else {
          if ((int)uVar8 != 0) break;
          uVar12 = *(uint *)(param_1 + 0x2f);
        }
        uVar2 = *(uint *)((long)param_1 + 0x16c);
        uVar6 = 0;
        if (uVar12 != 0) {
          uVar6 = uVar2 / uVar12;
        }
        uVar12 = uVar12 - (uVar2 - uVar6 * uVar12);
        if (uVar12 < local_64) {
          local_64 = uVar12;
        }
        uVar6 = local_64;
        _memcpy(*param_2 + uVar19,(void *)(param_1[0x3e] + (ulong)uVar2),(ulong)local_64);
        uVar8 = 0;
        uVar12 = *(int *)((long)param_1 + 0x16c) + uVar6;
        if (*(uint *)(param_1 + 0x2e) <= uVar12) {
          uVar12 = 0;
        }
        *(uint *)((long)param_1 + 0x16c) = uVar12;
        local_64 = uVar6;
      }
      *(uint *)(param_1 + 0x30) = (int)param_1[0x30] + local_64;
      uVar20 = uVar20 - local_64;
      uVar19 = (ulong)(local_64 + (int)uVar19);
    } while (uVar20 != 0);
  }
  uVar20 = (uint)uVar19;
  if (param_3 == 4) {
    if ((*(uint *)((long)param_1 + 0x1a4) >> 3 & 1) != 0) {
      uVar13 = uVar19 >> 2;
      uVar12 = (uint)uVar13;
      if (uVar12 != 0) {
        if (uVar12 == 0) {
          uVar11 = 0;
        }
        else {
          uVar2 = uVar20 >> 2 & 3;
          if (uVar12 == uVar2) {
            uVar11 = 0;
          }
          else {
            uVar11 = uVar13 - uVar2;
            lVar15 = uVar13 - (uVar19 >> 2 & 3);
            pauVar16 = param_2;
            do {
              auVar23 = NEON_rev32(*pauVar16,1);
              *(long *)*pauVar16 = auVar23._0_8_;
              auVar23 = NEON_ext(auVar23,auVar23,8,1);
              *(long *)(*pauVar16 + 8) = auVar23._0_8_;
              lVar15 = lVar15 + -4;
              pauVar16 = pauVar16 + 1;
            } while (lVar15 != 0);
          }
          if (uVar13 == uVar11) goto LAB_1005d1894;
        }
        do {
          uVar12 = (*(uint *)(*param_2 + uVar11 * 4) & 0xff00ff00) >> 8 |
                   (*(uint *)(*param_2 + uVar11 * 4) & 0xff00ff) << 8;
          *(uint *)(*param_2 + uVar11 * 4) = uVar12 >> 0x10 | uVar12 << 0x10;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar13);
      }
    }
  }
  else if ((param_3 == 2) && ((*(uint *)((long)param_1 + 0x1a4) >> 3 & 1) != 0)) {
    uVar12 = uVar20 >> 1;
    uVar13 = (ulong)uVar12;
    if (uVar12 != 0) {
      if (uVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar2 = uVar20 >> 1 & 7;
        if (uVar12 == uVar2) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar13 - uVar2;
          lVar15 = uVar13 - (uVar19 >> 1 & 7);
          puVar17 = (undefined8 *)(*param_2 + 8);
          do {
            uVar21 = *(undefined8 *)*(undefined1 (*) [16])(puVar17 + -1);
            uVar24 = *puVar17;
            uVar25 = (undefined1)((ulong)uVar21 >> 0x28);
            uVar7 = CONCAT11((char)((ulong)uVar21 >> 0x20),uVar25);
            auVar22._0_12_ = ZEXT312(CONCAT12(uVar25,uVar7)) << 0x40;
            auVar22[0xc] = (char)((ulong)uVar21 >> 0x38);
            auVar22[0xd] = (undefined1)((ulong)uVar21 >> 0x30);
            *(ulong *)*(undefined1 (*) [16])(puVar17 + -1) =
                 CONCAT26(auVar22._12_2_,
                          CONCAT24(uVar7,CONCAT22(CONCAT11((char)((ulong)uVar21 >> 0x10),
                                                           (char)((ulong)uVar21 >> 0x18)),
                                                  CONCAT11((char)uVar21,(char)((ulong)uVar21 >> 8)))
                                  ));
            *puVar17 = CONCAT26(CONCAT11((char)((ulong)uVar24 >> 0x30),(char)((ulong)uVar24 >> 0x38)
                                        ),
                                CONCAT24(CONCAT11((char)((ulong)uVar24 >> 0x20),
                                                  (char)((ulong)uVar24 >> 0x28)),
                                         CONCAT22(CONCAT11((char)((ulong)uVar24 >> 0x10),
                                                           (char)((ulong)uVar24 >> 0x18)),
                                                  CONCAT11((char)uVar24,(char)((ulong)uVar24 >> 8)))
                                        ));
            lVar15 = lVar15 + -8;
            puVar17 = puVar17 + 2;
          } while (lVar15 != 0);
        }
        if (uVar13 == uVar11) goto LAB_1005d1894;
      }
      do {
        *(ushort *)(*param_2 + uVar11 * 2) =
             *(ushort *)(*param_2 + uVar11 * 2) >> 8 | *(ushort *)(*param_2 + uVar11 * 2) << 8;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13);
    }
  }
LAB_1005d1894:
  uVar12 = 0;
  if (param_3 != 0) {
    uVar12 = uVar20 / param_3;
  }
  if (*(int *)((long)param_1 + 0x164) != 0) {
    if ((*(uint *)((long)param_1 + 0x1a4) >> 10 & 1) == 0) {
      if (uVar12 != 0) {
        uVar19 = 0;
        do {
          bVar3 = (*param_2)[uVar19];
          bVar3 = (bVar3 >> 1 & 1) << 6 | bVar3 << 7 | (bVar3 >> 2 & 1) << 5 |
                  bVar3 >> 7 | (bVar3 >> 3 & 1) << 4 | bVar3 >> 1 & 8 | bVar3 >> 3 & 4 |
                  bVar3 >> 5 & 2;
          (*param_2)[uVar19] = bVar3;
          (*param_2)[uVar19] = bVar3 ^ *(byte *)((long)param_1 + (long)(int)param_1[0x2d] + 0x144);
          iVar14 = 0;
          if ((int)param_1[0x2d] + 1 < *(int *)((long)param_1 + 0x164)) {
            iVar14 = (int)param_1[0x2d] + 1;
          }
          *(int *)(param_1 + 0x2d) = iVar14;
          uVar19 = uVar19 + 1;
        } while (uVar19 < uVar12);
      }
    }
    else if (uVar12 != 0) {
      uVar19 = 0;
      iVar14 = (int)param_1[0x2d];
      do {
        bVar3 = *(byte *)((long)param_1 + (long)iVar14 + 0x144) ^ (*param_2)[uVar19];
        (*param_2)[uVar19] =
             (bVar3 >> 1 & 1) << 6 | bVar3 << 7 | (bVar3 >> 2 & 1) << 5 |
             bVar3 >> 7 | (bVar3 >> 3 & 1) << 4 | bVar3 >> 1 & 8 | bVar3 >> 3 & 4 | bVar3 >> 5 & 2;
        iVar14 = 0;
        if ((int)param_1[0x2d] + 1 < *(int *)((long)param_1 + 0x164)) {
          iVar14 = (int)param_1[0x2d] + 1;
        }
        *(int *)(param_1 + 0x2d) = iVar14;
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar12);
    }
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar12;
  }
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  return uVar18;
}




void FUN_1005d19f8(undefined8 param_1,undefined1 *param_2)

{
  undefined1 local_25;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_25,1,1,auStack_24);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = local_25;
  }
  return;
}




void FUN_1005d1a3c(undefined8 param_1,ushort *param_2)

{
  byte local_25;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_25,1,1,auStack_24);
  if (param_2 != (ushort *)0x0) {
    *param_2 = (ushort)local_25;
  }
  return;
}




void FUN_1005d1a80(undefined8 param_1,uint *param_2)

{
  byte local_25;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_25,1,1,auStack_24);
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)local_25;
  }
  return;
}




void FUN_1005d1ac4(undefined8 param_1,undefined1 *param_2)

{
  undefined1 local_25;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_25,1,1,auStack_24);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = local_25;
  }
  return;
}




void FUN_1005d1b08(undefined8 param_1,short *param_2)

{
  char local_25;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_25,1,1,auStack_24);
  if (param_2 != (short *)0x0) {
    *param_2 = (short)local_25;
  }
  return;
}




void FUN_1005d1b4c(undefined8 param_1,int *param_2)

{
  char local_25;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_25,1,1,auStack_24);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)local_25;
  }
  return;
}




void FUN_1005d1b90(undefined8 param_1,undefined2 *param_2)

{
  undefined2 local_26;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_26,2,1,auStack_24);
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = local_26;
  }
  return;
}




void FUN_1005d1bd4(undefined8 param_1,uint *param_2)

{
  ushort local_26;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_26,2,1,auStack_24);
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)local_26;
  }
  return;
}




void FUN_1005d1c18(undefined8 param_1,undefined2 *param_2)

{
  undefined2 local_26;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_26,2,1,auStack_24);
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = local_26;
  }
  return;
}




void FUN_1005d1c5c(undefined8 param_1,int *param_2)

{
  short local_26;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_26,2,1,auStack_24);
  if (param_2 != (int *)0x0) {
    *param_2 = (int)local_26;
  }
  return;
}




void FUN_1005d1ca0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_28,4,1,auStack_24);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_28;
  }
  return;
}




void FUN_1005d1ce4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  FUN_1005d148c(param_1,&local_28,4,1,auStack_24);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_28;
  }
  return;
}




undefined8 FUN_1005d1d28(long *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (param_3 < 3) {
    *(undefined1 *)((long)param_1 + 0x3c) = 0;
    if (param_3 == 2) {
      uVar5 = *(int *)((long)param_1 + 0x18c) + param_2 + (int)param_1[4];
    }
    else if (param_3 == 1) {
      uVar5 = (int)param_1[0x30] + param_2;
    }
    else {
      uVar5 = 0;
      if (param_3 == 0) {
        uVar5 = *(int *)((long)param_1 + 0x18c) + param_2;
      }
    }
    if ((int)param_1[4] != -1) {
      uVar1 = *(int *)((long)param_1 + 0x18c) + (int)param_1[4];
      uVar2 = uVar1;
      if (param_2 < 0) {
        uVar2 = 0;
      }
      if (uVar1 < uVar5) {
        uVar5 = uVar2;
      }
    }
    uVar1 = *(uint *)((long)param_1 + 0x184);
    if (((uVar1 == 0) && ((*(uint *)((long)param_1 + 0x1a4) & 1) == 0)) &&
       (*(uint *)(param_1 + 0x2f) <= uVar5)) {
      uVar6 = 0xe;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x2f);
      uVar3 = *(uint *)(param_1 + 0x2e);
      if (((uVar2 == uVar3) && ((*(uint *)((long)param_1 + 0x1a4) & 1) == 0)) && (uVar2 <= uVar1)) {
        if (uVar2 + uVar1 <= uVar5) {
          return 0xe;
        }
        if (uVar1 != 0 && uVar5 < uVar1 - uVar2) {
          return 0xe;
        }
      }
      *(uint *)(param_1 + 0x30) = uVar5;
      uVar1 = *(uint *)((long)param_1 + 0x164);
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar5 / uVar1;
        }
        *(uint *)(param_1 + 0x2d) = uVar5 - uVar2 * uVar1;
      }
      if (uVar3 == 0) {
        *(uint *)((long)param_1 + 0x184) = uVar5;
        *(uint *)(param_1 + 0x31) = uVar5;
        uVar6 = (**(code **)(*param_1 + 0x40))(param_1,uVar5);
        if ((param_1[0x35] != 0) &&
           (pcVar4 = *(code **)(param_1[0x35] + 0x15e40), pcVar4 != (code *)0x0)) {
          (*pcVar4)(param_1[6],uVar5,param_1[5]);
        }
      }
      else {
        uVar6 = 0;
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar5 / uVar3;
        }
        *(uint *)((long)param_1 + 0x16c) = uVar5 - uVar1 * uVar3;
      }
    }
  }
  else {
    uVar6 = 0x1f;
  }
  return uVar6;
}




undefined8 FUN_1005d1ea8(long param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    iVar1 = *(int *)(param_1 + 0x180);
    *param_2 = iVar1;
    *param_2 = iVar1 - *(int *)(param_1 + 0x18c);
    return 0;
  }
  return 0x1f;
}




undefined4 FUN_1005d1edc(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x18c);
  *(int *)(param_1 + 0x18c) = param_2;
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + (iVar2 - param_2);
  uVar3 = 0x1c;
  if ((uint)(iVar1 + iVar2) <= *(uint *)(param_1 + 0x24)) {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005d1f08(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18c);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d1f2c(long param_1,uint param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x178);
  if (uVar2 != 0) {
    uVar3 = 0x800;
    if (0x7ff < param_2) {
      uVar3 = param_2;
    }
    uVar1 = uVar2;
    if (uVar2 <= uVar3) {
      uVar1 = uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0x170);
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar1 / uVar2;
    }
    iVar4 = uVar5 * uVar2;
    *(int *)(param_1 + 0x178) = iVar4;
    *(uint *)(param_1 + 0x174) = uVar2;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(int *)(param_1 + 0x184) = iVar4;
    *(int *)(param_1 + 0x188) = iVar4;
    uVar2 = iVar4 * 2;
    *(uint *)(param_1 + 0x170) = uVar2;
    if (param_3 == (void *)0x0) {
      lVar7 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                            *(undefined8 *)(param_1 + 0x1f8),uVar2 | 1,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp"
                            ,0x77b,1);
      *(long *)(param_1 + 0x1f8) = lVar7;
      if (lVar7 == 0) {
        return 0x26;
      }
    }
    else {
      pvVar6 = (void *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar2 | 1,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file.cpp"
                                     ,0x772,1);
      *(void **)(param_1 + 0x1f8) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        return 0x26;
      }
      _memcpy(pvVar6,param_3,(ulong)uVar3);
      lVar7 = *(long *)(param_1 + 0x1f8);
    }
    *(long *)(param_1 + 0x1f0) = lVar7;
    uVar8 = FUN_1005d0af0(param_1);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    FUN_1005dbee4(*(undefined8 *)(*(long *)(param_1 + 0x198) + 0x1a8));
    lVar7 = *(long *)(param_1 + 0x198);
    lVar9 = *(long *)(lVar7 + 0x180);
    *(long *)(param_1 + 8) = lVar9;
    *(long *)(param_1 + 0x10) = lVar7 + 0x180;
    *(long *)(lVar9 + 8) = param_1 + 8;
    **(long **)(param_1 + 0x10) = param_1 + 8;
    FUN_1005dbf14(*(undefined8 *)(lVar7 + 0x1a8));
    uVar8 = FUN_1005d11c8(param_1);
    if (((uint)uVar8 | 0x10) != 0x10) {
      return uVar8;
    }
  }
  return 0;
}




undefined8 FUN_1005d2068(long param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    *param_2 = param_1 + 0x44;
  }
  return 0;
}




undefined8 FUN_1005d207c(long param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1005ecc98(param_1 + 0x44,param_2,0x100);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d20ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1005ecb6c(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_1005db840(param_2,"rb",param_3,param_1 + 0x200);
    return uVar2;
  }
  return 0x12;
}




undefined8 FUN_1005d210c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x200) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1005db8b4();
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  return uVar1;
}




int FUN_1005d2140(long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  char local_35;
  int local_34;
  
  local_35 = '\0';
  if (*(long *)(param_1 + 0x1a8) != 0) {
    FUN_1005fbaa8(*(long *)(param_1 + 0x1a8) + 0x10,&local_35);
    if (local_35 != '\0') {
      FUN_1005d0478(1);
    }
  }
  iVar1 = FUN_1005db8d8(*(undefined8 *)(param_1 + 0x200),param_2,param_3,&local_34);
  if (local_35 != '\0') {
    FUN_1005d0478(0);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = local_34;
  }
  iVar2 = iVar1;
  if (local_34 != (int)param_3) {
    iVar2 = 0x10;
  }
  if (iVar1 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}




void FUN_1005d21e8(long param_1)

{
  FUN_1005db948(*(undefined8 *)(param_1 + 0x200));
  return;
}




void FUN_1005d21f0(long param_1)

{
  FUN_1005db8d0(*(undefined8 *)(param_1 + 0x200));
  return;
}




undefined8 FUN_1005d21f8(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x4;
  
  uVar1 = FUN_1005d0c4c();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x208) = in_x4;
  }
  return uVar1;
}




undefined8 FUN_1005d222c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x208) = param_2;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) & 0xfffffffd;
  return 0;
}




undefined8 FUN_1005d2248(void)

{
  return 0;
}




long FUN_1005d2250(long param_1,void *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x200);
  uVar3 = *(uint *)(param_1 + 0x24);
  uVar1 = uVar3 - uVar2;
  if (uVar2 + param_3 <= uVar3) {
    uVar1 = param_3;
  }
  _memcpy(param_2,(void *)(*(long *)(param_1 + 0x208) + (ulong)uVar2),(ulong)uVar1);
  *param_4 = uVar1;
  *(uint *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + uVar1;
  return (ulong)(uVar3 < uVar2 + param_3) << 4;
}




undefined8 FUN_1005d22c4(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if (param_2 <= *(uint *)(param_1 + 0x24)) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x200) = uVar1;
  return 0;
}




undefined8 FUN_1005d22dc(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x200) + param_3;
  if (*(uint *)(param_1 + 0x24) < uVar1) {
    return 0x10;
  }
  *param_2 = *(long *)(param_1 + 0x208) + (ulong)*(uint *)(param_1 + 0x200);
  *(uint *)(param_1 + 0x200) = uVar1;
  return 0;
}




void FUN_1005d2318(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005d0c24();
  *(undefined4 *)(puVar1 + 0x4b) = 0;
  *puVar1 = &PTR_FUN_1014a29a8;
  puVar1[0x45] = puVar1 + 0x44;
  puVar1[0x44] = puVar1 + 0x44;
  puVar1[0x4a] = 0;
  puVar1[0x49] = 0;
  puVar1[0x48] = 0;
  puVar1[0x47] = 0;
  puVar1[0x46] = 0;
  *(undefined1 *)((long)puVar1 + 0x25c) = 1;
  *(undefined1 *)((long)puVar1 + 0x25d) = 0;
  *(undefined4 *)(puVar1 + 0x4c) = 0;
  puVar1[0x40] = 0xffffffffffffffff;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  puVar1[0x41] = 0;
  *(uint *)((long)puVar1 + 0x1a4) = *(uint *)((long)puVar1 + 0x1a4) & 0xfffffffe;
  *(undefined1 *)(puVar1 + 0x4d) = 0;
  *(undefined4 *)((long)puVar1 + 0x26c) = 0;
  *(undefined4 *)(puVar1 + 7) = 3;
  return;
}




void FUN_1005d23a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005d0c24();
  *(undefined4 *)(puVar1 + 0x4b) = 0;
  *puVar1 = &PTR_FUN_1014a29a8;
  puVar1[0x45] = puVar1 + 0x44;
  puVar1[0x44] = puVar1 + 0x44;
  puVar1[0x4a] = 0;
  puVar1[0x49] = 0;
  puVar1[0x48] = 0;
  puVar1[0x47] = 0;
  puVar1[0x46] = 0;
  *(undefined1 *)((long)puVar1 + 0x25c) = 1;
  *(undefined1 *)((long)puVar1 + 0x25d) = 0;
  *(undefined4 *)(puVar1 + 0x4c) = 0;
  puVar1[0x40] = 0xffffffffffffffff;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  puVar1[0x41] = 0;
  *(uint *)((long)puVar1 + 0x1a4) = *(uint *)((long)puVar1 + 0x1a4) & 0xfffffffe;
  *(undefined1 *)(puVar1 + 0x4d) = 0;
  *(undefined4 *)((long)puVar1 + 0x26c) = 0;
  *(undefined4 *)(puVar1 + 7) = 3;
  return;
}




void FUN_1005d2428(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined4 param_6,undefined2 *param_7,long param_8,int param_9,
                  undefined1 *param_10)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  byte local_1468 [5120];
  long local_68;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = 0;
  }
  local_68 = lVar9;
  iVar2 = FUN_1005ed180("http://",param_2,7);
  if ((iVar2 == 0) || (iVar2 = FUN_1005ed180("http:\\\\",param_2,7), iVar2 == 0)) {
    pbVar5 = (byte *)(param_2 + 7);
    pbVar7 = pbVar5;
  }
  else {
    iVar2 = FUN_1005ed180("https://",param_2,8);
    if ((iVar2 == 0) || (iVar2 = FUN_1005ed180("https:\\\\",param_2,8), iVar2 == 0)) {
      pbVar5 = (byte *)(param_2 + 8);
      pbVar7 = pbVar5;
    }
    else {
      iVar2 = FUN_1005ed180("mms://",param_2,6);
      if ((iVar2 != 0) && (iVar2 = FUN_1005ed180("mms:\\\\",param_2,6), iVar2 != 0)) {
        uVar3 = 0x1f;
        goto LAB_1005d26d0;
      }
      if (param_10 != (undefined1 *)0x0) {
        *param_10 = 1;
      }
      pbVar5 = (byte *)(param_2 + 6);
      pbVar7 = pbVar5;
    }
  }
  for (; bVar1 = *pbVar5, pbVar8 = pbVar7, bVar1 != 0; pbVar5 = pbVar5 + 1) {
    if (bVar1 == 0x2f) {
      bVar1 = 0;
      goto LAB_1005d25b0;
    }
    if (bVar1 == 0x40) {
      FUN_1005ecc98(local_1468 + 0x400,pbVar7,0x1000);
      pbVar5[(long)(local_1468 + (0x400 - (long)pbVar7))] = 0;
      pbVar7 = pbVar5 + 1;
      bVar1 = 1;
      pbVar8 = pbVar7;
      goto LAB_1005d25b0;
    }
  }
  bVar1 = 0;
LAB_1005d25b0:
  for (; 0x3a < (ulong)*pbVar7 || (1L << ((ulong)*pbVar7 & 0x3f) & 0x400800000000001U) == 0;
      pbVar7 = pbVar7 + 1) {
  }
  iVar2 = FUN_1005ecb6c(pbVar8);
  if (iVar2 < (int)param_4) {
    FUN_1005ecc98(param_3,pbVar8,param_4);
    pbVar7[param_3 - (long)pbVar8] = 0;
    if ((*pbVar7 == 0) || (*pbVar7 == 0x2f)) {
      *param_7 = 0x50;
    }
    else {
      lVar4 = 0;
      pbVar5 = pbVar7 + 1;
      pbVar8 = pbVar7;
      do {
        pbVar6 = pbVar5;
        pbVar7 = pbVar6;
        if (9 < *pbVar6 - 0x30) break;
        local_1468[lVar4] = *pbVar6;
        lVar4 = lVar4 + 1;
        pbVar7 = pbVar8 + 2;
        pbVar5 = pbVar7;
        pbVar8 = pbVar6;
      } while (lVar4 < 0x400);
      local_1468[(int)lVar4] = 0;
      iVar2 = _atoi((char *)local_1468);
      *param_7 = (short)iVar2;
    }
    if ((ulong)*pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100000601U) != 0) {
      FUN_1005ecc98(param_8,"/",param_9);
    }
    else {
      iVar2 = FUN_1005ecb6c(pbVar7);
      if (param_9 <= iVar2) {
        uVar3 = 0x1f;
        goto LAB_1005d26d0;
      }
      iVar2 = FUN_1005ecb6c(pbVar7);
      pbVar5 = pbVar7 + (long)iVar2 + -1;
      if (1 < iVar2) {
        do {
          if (0x20 < (ulong)*pbVar5 || (1L << ((ulong)*pbVar5 & 0x3f) & 0x100000600U) == 0) break;
          pbVar5 = pbVar5 + -1;
        } while (pbVar7 < pbVar5);
      }
      FUN_1005ecc98(param_8,pbVar7,(int)((long)pbVar5 - (long)pbVar7) + 2);
      *(undefined1 *)(((long)pbVar5 - (long)pbVar7) + param_8 + 1) = 0;
    }
    if ((!(bool)(param_5 != 0 & bVar1)) ||
       (uVar3 = FUN_1005d9edc(local_1468 + 0x400,param_5,param_6), (int)uVar3 == 0)) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x1f;
  }
LAB_1005d26d0:
  if (lVar9 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




ulong FUN_1005d2780(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,char *param_5,
                   short param_6,int *param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined4 uVar23;
  short local_876;
  int local_874;
  undefined1 auStack_870 [4];
  undefined4 local_86c;
  undefined1 local_868 [1024];
  char local_468 [1032];
  
  lVar19 = *(long *)PTR____stack_chk_guard_101444218;
  _sprintf((char *)(param_1 + 0xce),"FMODStudio/%x.%02x.%02x");
  pcVar12 = (char *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x2000,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file_net.cpp"
                                  ,0xde,0,0);
  lVar20 = lVar19;
  if (pcVar12 != (char *)0x0) {
    iVar11 = 0;
    bVar7 = false;
    plVar1 = param_1 + 0x40;
    pcVar2 = pcVar12 + 10;
LAB_1005d288c:
    lVar22 = param_3;
    sVar8 = param_6;
    if (DAT_101dbce18 != 0) {
      lVar22 = DAT_101dbce18;
      sVar8 = DAT_101dbce20;
    }
    uVar13 = FUN_100617810(lVar22,sVar8,1,plVar1);
    if ((int)uVar13 != 0) goto switchD_1005d2cdc_caseD_191;
    uVar15 = param_2;
    if (DAT_101dbce18 == 0) {
      uVar15 = param_4;
    }
    _sprintf(pcVar12,"GET %s HTTP/1.1\r\nHost: %s\r\nUser-Agent: %s\r\nIcy-MetaData:1\r\n");
    if (DAT_101dbce28 != 0) {
      FUN_1005ecd8c(pcVar12,"Proxy-Authorization: Basic ",0x2000);
      FUN_1005ecd8c(pcVar12,DAT_101dbce28,0x2000);
      FUN_1005ecd8c(pcVar12,"\r\n",0x2000);
    }
    if (*param_5 != '\0') {
      FUN_1005ecd8c(pcVar12,"Authorization: Basic ",0x2000);
      FUN_1005ecd8c(pcVar12,param_5,0x2000);
      FUN_1005ecd8c(pcVar12,"\r\n",0x2000);
    }
    if (((int)param_8 != 0) && ((*(uint *)((long)param_1 + 0x1a4) >> 0xd & 1) != 0)) {
      uVar15 = param_8;
      _sprintf(local_468,"Range: bytes=%d-%d\r\n");
      FUN_1005ecd8c(pcVar12,local_468,0x2000);
    }
    FUN_1005ecd8c(pcVar12,"Connection: close\r\n\r\n",0x2000);
    local_86c = 0;
    lVar22 = *plVar1;
    uVar14 = FUN_1005ecb6c(pcVar12);
    uVar13 = FUN_100617d0c(lVar22,pcVar12,uVar14,&local_86c);
    if (((int)uVar13 != 0) || (uVar13 = FUN_1005da3e0(*plVar1,pcVar12,0x1fff), (int)uVar13 != 0))
    goto switchD_1005d2cdc_caseD_191;
    uVar14 = FUN_1005ecb6c(pcVar12);
    uVar13 = FUN_1005d9dac(pcVar12,uVar14,auStack_870,&local_874);
    if ((int)uVar13 != 0) goto switchD_1005d2cdc_caseD_191;
    *(int *)((long)param_1 + 0x20c) = local_874;
    if (local_874 < 500) {
      if (400 < local_874) {
        uVar13 = 0x16;
        uVar21 = 0x19;
        switch(local_874) {
        case 0x191:
          goto switchD_1005d2cdc_caseD_191;
        default:
          goto switchD_1005d2cdc_caseD_192;
        case 0x193:
          goto switchD_1005d2cdc_caseD_193;
        case 0x194:
          uVar21 = 0x12;
          goto switchD_1005d2cdc_caseD_198;
        case 0x197:
          uVar21 = 0x17;
        case 0x198:
          goto switchD_1005d2cdc_caseD_198;
        }
      }
      if (local_874 < 0x12d) {
        if ((local_874 != 200) && (local_874 != 0xce)) goto switchD_1005d2cdc_caseD_192;
        pcVar16 = pcVar12 + 0xc;
        pcVar3 = pcVar12 + 9;
        pcVar4 = pcVar12 + 8;
        goto LAB_1005d2d84;
      }
      if ((local_874 - 0x12dU < 7) && ((1 << (ulong)(local_874 - 0x12dU & 0x1f) & 0x57U) != 0)) {
        bVar6 = false;
        bVar5 = false;
        bVar9 = false;
        if (iVar11 < 0x10) {
          do {
            bVar5 = bVar9;
            iVar10 = FUN_1005da3e0(*plVar1,pcVar12,0x1fff);
            if (iVar10 != 0) break;
            iVar10 = FUN_1005ed180("Location: ",pcVar12,10);
            uVar23 = (undefined4)((ulong)uVar15 >> 0x20);
            if (iVar10 == 0) {
              local_868[0] = 0;
              local_468[0] = '\0';
              local_876 = 0;
              uVar14 = FUN_1005ed180(pcVar2,"http://",7);
              pcVar16 = pcVar2;
              if (((((int)uVar14 != 0) &&
                   (uVar14 = FUN_1005ed180(pcVar2,"https://",8), (int)uVar14 != 0)) &&
                  (uVar14 = FUN_1005ed180(pcVar2,"https:\\\\",8), (int)uVar14 != 0)) &&
                 (uVar14 = FUN_1005ed180(pcVar2,"http:\\\\",7), (int)uVar14 != 0)) {
                builtin_strncpy(pcVar12 + 3,"http://",7);
                pcVar16 = pcVar12 + 3;
              }
              uVar15 = CONCAT44(uVar23,0x3ff);
              FUN_1005d2428(uVar14,pcVar16,local_468,0x3ff,0,0,&local_876,local_868,uVar15,0);
              iVar10 = FUN_1005ecb6c(local_468);
              if (iVar10 != 0) {
                iVar10 = FUN_1005ed12c(local_468,param_3);
                if (iVar10 != 0) {
                  bVar6 = true;
                }
                FUN_1005ecc98(param_3,local_468,0x400);
              }
              iVar10 = FUN_1005ecb6c(local_868);
              if (iVar10 != 0) {
                iVar10 = FUN_1005ed12c(local_868,param_4);
                if (iVar10 != 0) {
                  bVar6 = true;
                }
                FUN_1005ecc98(param_4,local_868,0x400);
              }
              bVar9 = bVar6;
              if (local_876 != param_6) {
                bVar9 = true;
              }
              if (local_876 != 0) {
                bVar6 = bVar9;
                param_6 = local_876;
              }
              iVar11 = iVar11 + 1;
              bVar9 = bVar5;
            }
            else {
              iVar10 = FUN_1005ed180("content-security-policy: sandbox",pcVar12,0x20);
              bVar9 = true;
              if (iVar10 != 0) {
                bVar9 = bVar5;
              }
            }
            bVar5 = bVar9;
            iVar10 = FUN_1005ecb6c(pcVar12);
            bVar9 = bVar5;
          } while (iVar10 != 0);
          if (bVar6) {
            FUN_100617cc0(*plVar1);
            *plVar1 = -1;
            lVar20 = *(long *)PTR____stack_chk_guard_101444218;
            goto LAB_1005d288c;
          }
        }
        uVar18 = 0x15;
        if (bVar5) {
          uVar18 = 0x16;
        }
        lVar20 = *(long *)PTR____stack_chk_guard_101444218;
        uVar21 = (ulong)uVar18;
        goto switchD_1005d2cdc_caseD_198;
      }
    }
    else if (local_874 - 500U < 6) {
      uVar21 = 0x18;
      goto switchD_1005d2cdc_caseD_198;
    }
switchD_1005d2cdc_caseD_192:
    uVar21 = 0x15;
    goto switchD_1005d2cdc_caseD_198;
  }
  uVar21 = 0x26;
  goto LAB_1005d34a4;
switchD_1005d2cdc_caseD_193:
  if (bVar7) goto code_r0x0001005d2cec;
  *(undefined1 *)((long)param_1 + 0x676) = 0;
  *(undefined2 *)((long)param_1 + 0x674) = 0x706d;
  *(undefined4 *)(param_1 + 0xce) = 0x616e6957;
  FUN_100617cc0(*plVar1);
  *plVar1 = -1;
  bVar7 = true;
  goto LAB_1005d288c;
code_r0x0001005d2cec:
  uVar13 = 0x16;
switchD_1005d2cdc_caseD_191:
  uVar21 = uVar13;
  goto switchD_1005d2cdc_caseD_198;
LAB_1005d2d84:
  do {
    iVar11 = FUN_1005da3e0(*plVar1,pcVar12,0x1fff);
    if (iVar11 != 0) break;
    iVar11 = FUN_1005ed0f8("Content-Length:",pcVar12,0xf);
    if (iVar11 == 0) {
      if (param_7 != (int *)0x0) {
        iVar11 = _atoi(pcVar12 + 0xf);
        *param_7 = iVar11;
      }
    }
    else {
      iVar11 = FUN_1005ed0f8("Content-Range: bytes",pcVar12,0x14);
      if (iVar11 != 0) {
        iVar11 = FUN_1005ed0f8("Accept-Ranges: bytes",pcVar12,0x14);
        if (iVar11 == 0) {
          *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) | 0x2000;
        }
        else {
          iVar11 = FUN_1005ed0f8("Transfer-Encoding: chunked",pcVar12,0x1a);
          if (iVar11 == 0) {
            *(undefined1 *)(param_1 + 0x4d) = 1;
          }
          else {
            iVar11 = FUN_1005ed0f8("icy-metaint:",pcVar12,0xc);
            if (iVar11 == 0) {
              iVar11 = _atoi(pcVar16);
              *(int *)(param_1 + 0x42) = iVar11;
            }
            else {
              iVar11 = FUN_1005ed0f8("icy-br:",pcVar12,7);
              if (iVar11 == 0) {
                uVar15 = FUN_1005ed44c(pcVar12 + 7);
                iVar11 = FUN_1005ecb6c();
                iVar11 = iVar11 + 1;
                pcVar17 = "icy-br";
              }
              else {
                iVar11 = FUN_1005ed0f8("icy-pub:",pcVar12,8);
                if (iVar11 == 0) {
                  uVar15 = FUN_1005ed44c(pcVar4);
                  iVar11 = FUN_1005ecb6c();
                  iVar11 = iVar11 + 1;
                  pcVar17 = "icy-pub";
                }
                else {
                  iVar11 = FUN_1005ed0f8("icy-notice1:",pcVar12,0xc);
                  if (iVar11 == 0) {
                    uVar15 = FUN_1005ed44c(pcVar16);
                    iVar11 = FUN_1005ecb6c();
                    iVar11 = iVar11 + 1;
                    pcVar17 = "icy-notice1";
                  }
                  else {
                    iVar11 = FUN_1005ed0f8("icy-notice2:",pcVar12,0xc);
                    if (iVar11 == 0) {
                      uVar15 = FUN_1005ed44c(pcVar16);
                      iVar11 = FUN_1005ecb6c();
                      iVar11 = iVar11 + 1;
                      pcVar17 = "icy-notice2";
                    }
                    else {
                      iVar11 = FUN_1005ed0f8("icy-name:",pcVar12,9);
                      if (iVar11 == 0) {
                        uVar15 = FUN_1005ed44c(pcVar3);
                        iVar11 = FUN_1005ecb6c();
                        iVar11 = iVar11 + 1;
                        pcVar17 = "icy-name";
                      }
                      else {
                        iVar11 = FUN_1005ed0f8("icy-genre:",pcVar12,10);
                        if (iVar11 == 0) {
                          uVar15 = FUN_1005ed44c(pcVar2);
                          iVar11 = FUN_1005ecb6c();
                          iVar11 = iVar11 + 1;
                          pcVar17 = "icy-genre";
                        }
                        else {
                          iVar11 = FUN_1005ed0f8("icy-url:",pcVar12,8);
                          if (iVar11 == 0) {
                            uVar15 = FUN_1005ed44c(pcVar4);
                            iVar11 = FUN_1005ecb6c();
                            iVar11 = iVar11 + 1;
                            pcVar17 = "icy-url";
                          }
                          else {
                            iVar11 = FUN_1005ed0f8("icy-irc:",pcVar12,8);
                            if (iVar11 == 0) {
                              uVar15 = FUN_1005ed44c(pcVar4);
                              iVar11 = FUN_1005ecb6c();
                              iVar11 = iVar11 + 1;
                              pcVar17 = "icy-irc";
                            }
                            else {
                              iVar11 = FUN_1005ed0f8("icy-icq:",pcVar12,8);
                              if (iVar11 == 0) {
                                uVar15 = FUN_1005ed44c(pcVar4);
                                iVar11 = FUN_1005ecb6c();
                                iVar11 = iVar11 + 1;
                                pcVar17 = "icy-icq";
                              }
                              else {
                                iVar11 = FUN_1005ed0f8("icy-aim:",pcVar12,8);
                                if (iVar11 != 0) goto LAB_1005d3108;
                                uVar15 = FUN_1005ed44c(pcVar4);
                                iVar11 = FUN_1005ecb6c();
                                iVar11 = iVar11 + 1;
                                pcVar17 = "icy-aim";
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              FUN_1005d8e44(param_1 + 0x44,4,pcVar17,uVar15,iVar11,3,0);
            }
          }
        }
      }
    }
LAB_1005d3108:
    iVar11 = FUN_1005ed0f8("ice-bitrate: ",pcVar12,0xd);
    if (iVar11 == 0) {
      uVar15 = FUN_1005ed44c(pcVar12 + 0xd);
      iVar11 = FUN_1005ecb6c();
      iVar11 = iVar11 + 1;
      pcVar17 = "ice-bitrate";
LAB_1005d33ec:
      FUN_1005d8e44(param_1 + 0x44,5,pcVar17,uVar15,iVar11,3,0);
    }
    else {
      iVar11 = FUN_1005ed0f8("ice-description: ",pcVar12,0x11);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar12 + 0x11);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-description";
        goto LAB_1005d33ec;
      }
      iVar11 = FUN_1005ed0f8("ice-public: ",pcVar12,0xc);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar16);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-public";
        goto LAB_1005d33ec;
      }
      iVar11 = FUN_1005ed0f8("ice-name: ",pcVar12,10);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar2);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-name";
        goto LAB_1005d33ec;
      }
      iVar11 = FUN_1005ed0f8("ice-genre: ",pcVar12,0xb);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar12 + 0xb);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-genre";
        goto LAB_1005d33ec;
      }
      iVar11 = FUN_1005ed0f8("ice-url: ",pcVar12,9);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar3);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-url";
        goto LAB_1005d33ec;
      }
      iVar11 = FUN_1005ed0f8("ice-irc: ",pcVar12,9);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar3);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-irc";
        goto LAB_1005d33ec;
      }
      iVar11 = FUN_1005ed0f8("ice-icq: ",pcVar12,9);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar3);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-icq";
        goto LAB_1005d33ec;
      }
      iVar11 = FUN_1005ed0f8("ice-aim: ",pcVar12,9);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar3);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-aim";
        goto LAB_1005d33ec;
      }
      iVar11 = FUN_1005ed0f8("ice-audio-info: ",pcVar12,0x10);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar12 + 0x10);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-audio-info";
        goto LAB_1005d33ec;
      }
      iVar11 = FUN_1005ed0f8("ice-private: ",pcVar12,0xd);
      if (iVar11 == 0) {
        uVar15 = FUN_1005ed44c(pcVar12 + 0xd);
        iVar11 = FUN_1005ecb6c();
        iVar11 = iVar11 + 1;
        pcVar17 = "ice-private";
        goto LAB_1005d33ec;
      }
    }
    iVar11 = FUN_1005ecb6c(pcVar12);
  } while (iVar11 != 0);
  if ((int)param_1[0x42] == 0) {
    uVar21 = 0;
  }
  else {
    *(int *)((long)param_1 + 0x214) = (int)param_1[0x42];
    lVar22 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0xff1,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file_net.cpp"
                           ,0x263,0,0);
    param_1[0x43] = lVar22;
    uVar21 = 0;
    if (lVar22 == 0) {
      (**(code **)(*param_1 + 0x30))();
      uVar21 = 0x26;
    }
  }
switchD_1005d2cdc_caseD_198:
  if (pcVar12 != (char *)0x0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),pcVar12,"../../src/fmod_autocleanup.h",
                  0xbe);
  }
LAB_1005d34a4:
  if (lVar20 != lVar19) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar21;
}




undefined8 FUN_1005d3528(void)

{
  return 0x44;
}




void FUN_1005d365c(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x200) != -1) {
    iVar1 = FUN_100617cc0();
    *(undefined8 *)(param_1 + 0x200) = 0xffffffffffffffff;
    if (iVar1 != 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x218),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_file_net.cpp"
                  ,0x2d4);
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  FUN_1005d9d7c();
  return;
}




undefined8 FUN_1005d3820(long param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte local_61;
  
  *param_4 = 0;
  uVar9 = param_3;
  if (*(int *)(param_1 + 0x210) != 0) {
    uVar9 = *(uint *)(param_1 + 0x214);
    if (uVar9 == 0) {
      uVar5 = FUN_1005d36cc(param_1,&local_61,1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      _bzero(*(void **)(param_1 + 0x218),0xff1);
      uVar5 = FUN_1005d36cc(param_1,*(undefined8 *)(param_1 + 0x218),(ulong)local_61 << 4);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      lVar6 = FUN_1005ed260(*(undefined8 *)(param_1 + 0x218),"StreamTitle=\'");
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0xb) = 0;
        pcVar1 = (char *)(lVar6 + 0xd);
        for (pcVar8 = pcVar1; (*pcVar8 != '\0' && (*pcVar8 != ';')); pcVar8 = pcVar8 + 1) {
        }
        pcVar8[-1] = '\0';
        puVar7 = (undefined1 *)FUN_1005ed260(pcVar1," - ");
        if (puVar7 == (undefined1 *)0x0) {
          puVar10 = (undefined1 *)0x0;
        }
        else {
          puVar10 = puVar7 + 3;
          *puVar7 = 0;
        }
        iVar4 = FUN_1005ecb6c(pcVar1);
        FUN_1005d8e44(param_1 + 0x220,4,"ARTIST",pcVar1,iVar4 + 1,3,1);
        if (puVar10 == (undefined1 *)0x0) {
          *(undefined1 *)(lVar6 + 0xb) = 0x20;
          pcVar8[-1] = ' ';
        }
        else {
          iVar4 = FUN_1005ecb6c(puVar10);
          FUN_1005d8e44(param_1 + 0x220,4,"TITLE",puVar10,iVar4 + 1,3,1);
          *(undefined1 *)(lVar6 + 0xb) = 0x20;
          pcVar8[-1] = ' ';
          puVar10[-3] = 0x20;
        }
      }
      lVar6 = FUN_1005ed260(*(undefined8 *)(param_1 + 0x218),"StreamUrl=\'");
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 9) = 0;
        pcVar1 = (char *)(lVar6 + 0xb);
        for (pcVar8 = pcVar1; (*pcVar8 != '\0' && (*pcVar8 != ';')); pcVar8 = pcVar8 + 1) {
        }
        pcVar8[-1] = '\0';
        iVar4 = FUN_1005ecb6c(pcVar1);
        FUN_1005d8e44(param_1 + 0x220,4,lVar6,pcVar1,iVar4 + 1,3,1);
      }
      *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x210);
      uVar9 = param_3;
    }
    else if (param_3 <= uVar9) {
      uVar9 = param_3;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x24) - *(int *)(param_1 + 0x208);
  if (uVar3 == 0) {
    uVar5 = 0x10;
  }
  else {
    if (*(int *)(param_1 + 0x208) + uVar9 <= *(uint *)(param_1 + 0x24)) {
      uVar3 = uVar9;
    }
    uVar9 = 0x1000;
    if (uVar3 < 0x1001) {
      uVar9 = uVar3;
    }
    uVar2 = *(uint *)(param_1 + 0x214);
    uVar3 = uVar2;
    if (uVar9 <= uVar2) {
      uVar3 = uVar9;
    }
    if (uVar2 == 0) {
      uVar3 = uVar9;
    }
    uVar5 = FUN_1005d36cc(param_1,param_2,uVar3);
    if ((int)uVar5 == 0) {
      *param_4 = uVar3;
      *(uint *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + uVar3;
      if (*(int *)(param_1 + 0x210) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        *(uint *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) - uVar3;
      }
    }
  }
  return uVar5;
}




void FUN_1005d3aac(long *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_1005d2780(param_1,(long)param_1 + 0x44,param_1 + 0x4e,(long)param_1 + 0x44,param_1 + 0xd2,
                (short)param_1[0x2d2],0,param_2);
  return;
}




undefined8 FUN_1005d3b0c(long param_1)

{
  FUN_100617cc0(*(undefined8 *)(param_1 + 0x200));
  *(undefined8 *)(param_1 + 0x200) = 0xffffffffffffffff;
  return 0;
}




undefined8 FUN_1005d3b3c(long param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    *param_2 = param_1 + 0x220;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d3b60(long param_1,undefined8 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x200) = 0;
  *param_3 = 0;
  return 0;
}




undefined8 FUN_1005d3b70(void)

{
  return 0;
}




undefined4 FUN_1005d3b78(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar1 = *(int *)(param_1 + 0x200) + param_3;
  uVar3 = *(uint *)(param_1 + 0x20);
  iVar2 = uVar3 - *(int *)(param_1 + 0x200);
  if (uVar1 <= uVar3) {
    iVar2 = param_3;
  }
  uVar4 = 0x1f;
  if (uVar1 <= uVar3) {
    uVar4 = 0;
  }
  *param_4 = iVar2;
  *(int *)(param_1 + 0x200) = iVar2 + *(int *)(param_1 + 0x200);
  return uVar4;
}




undefined8 FUN_1005d3bb0(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= *(uint *)(param_1 + 0x20)) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x200) = uVar1;
  return 0;
}




void FUN_1005d3bc8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1005dc058(*(long *)(param_1 + 0x50),0);
    return;
  }
  return;
}




void FUN_1005d3be0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}




undefined8 FUN_1005d3be8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)param_1[0x41];
  if ((((pcVar2 == (code *)0x0) &&
       (pcVar2 = *(code **)(param_1[0x35] + 0x15df8), pcVar2 == (code *)0x0)) ||
      (uVar1 = (*pcVar2)(param_2,param_3,param_1 + 0x47,param_1[0x48]), (int)uVar1 == 0)) &&
     (uVar1 = (**(code **)(*param_1 + 0x40))(param_1,0), (int)uVar1 == 0xe)) {
    uVar1 = 0;
    *(uint *)((long)param_1 + 0x1a4) = *(uint *)((long)param_1 + 0x1a4) & 0xfffffffe;
  }
  param_1[0x40] = 0;
  if ((param_1[0x45] == 0) && ((param_1[0x43] != 0 || (*(long *)(param_1[0x35] + 0x15e18) == 0)))) {
    return uVar1;
  }
  uVar1 = FUN_1005dbf7c(param_1 + 0x40);
  return uVar1;
}




undefined8 FUN_1005d3ca0(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x210);
  if ((pcVar1 != (code *)0x0) ||
     (pcVar1 = *(code **)(*(long *)(param_1 + 0x1a8) + 0x15e00), pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x238),*(undefined8 *)(param_1 + 0x240));
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    FUN_1005dbfe4();
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  return 0;
}




void FUN_1005d3cf8(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_1 + 0x218);
  if ((pcVar2 == (code *)0x0) &&
     (pcVar2 = *(code **)(*(long *)(param_1 + 0x1a8) + 0x15e08), pcVar2 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*pcVar2)(*(undefined8 *)(param_1 + 0x238));
  }
  *(undefined4 *)(param_1 + 0x1ec) = uVar1;
  return;
}




undefined8 FUN_1005d3d48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if ((((*(long *)(param_1 + 0x228) != 0) ||
       ((*(long *)(param_1 + 0x218) == 0 && (*(long *)(*(long *)(param_1 + 0x1a8) + 0x15e18) != 0)))
       ) || ((pcVar2 = *(code **)(param_1 + 0x220), pcVar2 == (code *)0x0 &&
             (pcVar2 = *(code **)(*(long *)(param_1 + 0x1a8) + 0x15e10), pcVar2 == (code *)0x0))))
     || (uVar1 = (*pcVar2)(*(undefined8 *)(param_1 + 0x238),param_2,*(undefined8 *)(param_1 + 0x240)
                          ), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}




ulong FUN_1005d3db0(long *param_1,long *param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  ulong uVar2;
  code *pcVar3;
  uint *puVar4;
  
  *param_2 = param_1[0x47];
  pcVar3 = (code *)param_1[0x45];
  if (pcVar3 == (code *)0x0) {
    if ((param_1[0x43] != 0) || (*(long *)(param_1[0x35] + 0x15e18) == 0)) {
      uVar2 = (**(code **)(*param_1 + 0x38))
                        (param_1,param_2[4],*(undefined4 *)((long)param_2 + 0xc),param_2 + 5);
      goto LAB_1005d3ef0;
    }
    *(undefined4 *)((long)param_1 + 0x1ec) = 0x2e;
    pcVar3 = FUN_1005d3bc8;
    if (param_4 == 0) {
      pcVar3 = FUN_1005d3be0;
    }
    param_2[6] = (long)pcVar3;
    pcVar3 = *(code **)(param_1[0x35] + 0x15e18);
    if (pcVar3 != (code *)0x0) goto LAB_1005d3e0c;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1ec) = 0x2e;
    pcVar1 = FUN_1005d3bc8;
    if (param_4 == 0) {
      pcVar1 = FUN_1005d3be0;
    }
    param_2[6] = (long)pcVar1;
LAB_1005d3e0c:
    (*pcVar3)(param_2,param_1[0x48]);
  }
  puVar4 = (uint *)((long)param_1 + 0x1ec);
  if (param_4 == 0) {
    uVar2 = (ulong)*puVar4;
    if (*puVar4 == 0x2e) {
      return 0x2e;
    }
  }
  else if (param_1[0x40] == 0) {
    while (uVar2 = (ulong)*puVar4, *puVar4 == 0x2e) {
      if (*(char *)((long)param_1 + 0x3c) != '\0') {
        uVar2 = 0x2e;
        break;
      }
      FUN_1005dbaa8(10);
    }
  }
  else {
    FUN_1005dc028();
    uVar2 = (ulong)*puVar4;
  }
LAB_1005d3ef0:
  *param_3 = (int)param_2[5];
  return uVar2;
}




undefined8 FUN_1005d3f0c(long param_1,long param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((*(long *)(param_1 + 0x228) != 0) ||
       ((*(long *)(param_1 + 0x218) == 0 && (*(long *)(*(long *)(param_1 + 0x1a8) + 0x15e18) != 0)))
       ) && (*(long *)(param_2 + 0x30) != 0)) &&
     ((UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x230), UNRECOVERED_JUMPTABLE != (code *)0x0 ||
      (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x1a8) + 0x15e20),
      UNRECOVERED_JUMPTABLE != (code *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x0001005d3f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_2,*(undefined8 *)(param_1 + 0x240));
    return uVar1;
  }
  return 0;
}




void FUN_1005d3f6c(undefined8 param_1)

{
  int iVar1;
  undefined8 local_18;
  
  iVar1 = FUN_1005d74e4(param_1,&local_18);
  if (iVar1 == 0) {
    FUN_1005d5460(local_18);
  }
  return;
}




void FUN_1005d3f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 local_48;
  
  iVar1 = FUN_1005d74e4(param_3,&local_48);
  if (iVar1 == 0) {
    FUN_1005d5770(param_1,param_2,local_48,param_4,param_5,param_6,param_7);
  }
  return;
}




void FUN_1005d400c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d5914(local_28,param_2);
  }
  return;
}




void FUN_1005d4048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d5938(local_28,param_2,param_3);
  }
  return;
}




void FUN_1005d408c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d5958(local_28,param_2,param_3);
  }
  return;
}




void FUN_1005d40d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_38;
  
  iVar1 = FUN_1005d74e4(param_1,&local_38);
  if (iVar1 == 0) {
    FUN_1005d59a8(local_38,param_2,param_3,param_4);
  }
  return;
}




void FUN_1005d4124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_38;
  
  iVar1 = FUN_1005d74e4(param_1,&local_38);
  if (iVar1 == 0) {
    FUN_1005d5b24(local_38,param_2,param_3,param_4);
  }
  return;
}




void FUN_1005d4178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 local_38;
  
  iVar1 = FUN_1005d74e4(param_3,&local_38);
  if (iVar1 == 0) {
    FUN_1005d5b98(param_1,param_2,local_38,param_4,param_5);
  }
  return;
}




void FUN_1005d41d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 local_38;
  
  iVar1 = FUN_1005d74e4(param_1,&local_38);
  if (iVar1 == 0) {
    FUN_1005d5c6c(local_38,param_2,param_3,param_4,param_5);
  }
  return;
}




void FUN_1005d4230(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d5fc0(local_28,param_2);
  }
  return;
}




void FUN_1005d426c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d5ff0(local_28,param_2);
  }
  return;
}




void FUN_1005d42a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d6014(local_28,param_2,param_3);
  }
  return;
}




void FUN_1005d42ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d61f8(local_28,param_2,param_3);
  }
  return;
}




void FUN_1005d4330(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d6228(local_28,param_2);
  }
  return;
}




void FUN_1005d436c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d62f4(local_28,param_2);
  }
  return;
}




void FUN_1005d43a8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d6320(local_28,param_2);
  }
  return;
}




void FUN_1005d43e4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d64e4(local_28,param_2);
  }
  return;
}




void FUN_1005d4420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d6510(local_28,param_2,param_3);
  }
  return;
}




void FUN_1005d4464(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d720c(local_28,param_2);
  }
  return;
}




void FUN_1005d44a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  
  iVar1 = FUN_1005d74e4(param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005d7218(local_28,param_2);
  }
  return;
}




void FUN_1005d44dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005fb700();
  puVar1[0x2d] = puVar1 + 0x2d;
  puVar1[0x2e] = puVar1 + 0x2d;
  *puVar1 = &PTR_FUN_1014a2ae0;
  puVar1[0x2c] = 0;
  *(undefined1 *)((long)puVar1 + 0x15c) = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x2f] = 0;
  return;
}




void FUN_1005d4518(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1005fb700();
  puVar1[0x2d] = puVar1 + 0x2d;
  puVar1[0x2e] = puVar1 + 0x2d;
  *puVar1 = &PTR_FUN_1014a2ae0;
  puVar1[0x2c] = 0;
  *(undefined1 *)((long)puVar1 + 0x15c) = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x2f] = 0;
  return;
}




undefined8 FUN_1005d4554(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  iVar2 = *(int *)(**(long **)(param_1 + 0x188) + 0x1a8);
  FUN_1005dbee4(uVar1);
  uVar3 = FUN_1005dbd48(param_1 + 0x180,0);
  if ((int)uVar3 == 0) {
    lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar2 << 6,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometry_mgr.cpp"
                          ,0x5e,0);
    *(long *)(param_1 + 0x160) = lVar4;
    if (lVar4 == 0) {
      uVar3 = 0x26;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(long *)lVar4 = lVar4;
        *(long *)(lVar4 + 8) = lVar4;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        lVar4 = lVar4 + 0x40;
      }
      uVar3 = FUN_1005dbd48(*(long *)(param_1 + 0x188) + 0x1a0,0);
      if (((int)uVar3 == 0) &&
         (uVar3 = FUN_1005fb770(param_1,"FMOD geometry thread",0,0,5,0xffffffff,0,0x4000,0,
                                **(undefined8 **)(param_1 + 0x188),1), (int)uVar3 == 0)) {
        uVar3 = 0;
        *(undefined1 *)(param_1 + 0x15c) = 1;
      }
    }
  }
  FUN_1005dbf14(uVar1);
  return uVar3;
}




void FUN_1005d4678(long param_1)

{
  FUN_1005dbd48(param_1 + 0x1a0,0);
  return;
}




undefined8 FUN_1005d4684(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  if ((*(long *)(param_1 + 0x180) != 0) && (uVar1 = FUN_1005fb958(param_1), (int)uVar1 == 0)) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x160),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometry_mgr.cpp"
                  ,0x90);
    *(undefined8 *)(param_1 + 0x160) = 0;
    uVar1 = FUN_1005dbe84(*(undefined8 *)(param_1 + 0x180),0);
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  return uVar1;
}




undefined8 FUN_1005d46f4(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  float local_38;
  undefined1 auStack_34 [4];
  
  FUN_1005fbbc4(**(long **)(param_1 + 0x188) + 0x16618);
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  FUN_1005dbee4(uVar2);
  plVar3 = *(long **)(param_1 + 0x168);
  if ((plVar3 == (long *)(param_1 + 0x168)) &&
     (*(long **)(param_1 + 0x170) == (long *)(param_1 + 0x168))) {
    FUN_1005dbf14(uVar2);
  }
  else {
    plVar1 = (long *)plVar3[1];
    *plVar1 = *plVar3;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    FUN_1005dbf14(uVar2);
    if ((plVar3 != (long *)0x0) && ((int)plVar3[3] == 0)) {
      FUN_1005d48c4(*(long **)(param_1 + 0x188),**(long **)(param_1 + 0x188) + 0x156c0,plVar3 + 5,
                    (long)plVar3 + 0x34,plVar3 + 7);
      FUN_1005f9218(**(undefined8 **)(param_1 + 0x188),0,auStack_48,0,0,0);
      FUN_1005d48c4(*(undefined8 *)(param_1 + 0x188),plVar3 + 5,auStack_48,auStack_34,&local_38);
      *(float *)((long)plVar3 + 0x3c) = 1.0 - local_38;
      *(undefined4 *)(plVar3 + 3) = 1;
      FUN_1005fbbf0(**(long **)(param_1 + 0x188) + 0x16618,0x5f);
      return 0;
    }
  }
  FUN_1005fbbf0(**(long **)(param_1 + 0x188) + 0x16618,0x5f);
  FUN_1005dbaa8(10);
  return 0;
}




long * FUN_1005d4850(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x180);
  FUN_1005dbee4(uVar2);
  plVar3 = *(long **)(param_1 + 0x168);
  if ((plVar3 == (long *)(param_1 + 0x168)) &&
     (*(long **)(param_1 + 0x170) == (long *)(param_1 + 0x168))) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar1 = (long *)plVar3[1];
    *plVar1 = *plVar3;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
  }
  FUN_1005dbf14(uVar2);
  return plVar3;
}




undefined8
FUN_1005d48c4(long param_1,undefined8 *param_2,undefined8 *param_3,float *param_4,float *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1a0);
  FUN_1005dbee4(uVar2);
  lVar1 = *(long *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  while (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x130);
    *(undefined8 *)(lVar1 + 0x130) = 0;
    *(undefined1 *)(lVar1 + 0x138) = 0;
    FUN_1005d5d24();
    lVar1 = lVar3;
  }
  local_70 = *(undefined4 *)(param_2 + 1);
  local_78 = *param_2;
  local_64 = *(undefined4 *)(param_3 + 1);
  local_6c = *param_3;
  local_60 = 1.0;
  local_5c = 1.0;
  local_58 = 0;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    FUN_1005db20c(*(long *)(param_1 + 0x1a8),FUN_1005d4db4,&local_78,param_2,param_3);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = 1.0 - local_60;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = 1.0 - local_5c;
  }
  FUN_1005dbf14(uVar2);
  return 0;
}




void FUN_1005d49c0(long param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  
  local_38 = 0;
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_1005d4554(param_1);
  }
  iVar2 = FUN_10058193c(param_2,&local_38,0);
  if (iVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x180);
    FUN_1005dbee4(uVar6);
    iVar2 = *(int *)(local_38 + 0x188);
    lVar4 = *(long *)(param_1 + 0x160);
    plVar1 = (long *)(lVar4 + (long)iVar2 * 0x40);
    if ((int)plVar1[3] != 1) {
      *(undefined4 *)(plVar1 + 3) = 0;
      plVar1[4] = param_2;
      *(undefined4 *)(plVar1 + 5) = *param_3;
      *(undefined4 *)((long)plVar1 + 0x2c) = param_3[1];
      *(undefined4 *)(plVar1 + 6) = param_3[2];
      if (((long *)*plVar1 == plVar1) &&
         (puVar3 = (undefined8 *)(lVar4 + (long)iVar2 * 0x40 + 8), (long *)*puVar3 == plVar1)) {
        *puVar3 = *(undefined8 *)(param_1 + 0x170);
        *plVar1 = param_1 + 0x168;
        *(long **)(param_1 + 0x170) = plVar1;
        *(long **)*puVar3 = plVar1;
      }
    }
  }
  else {
    iVar2 = FUN_10057f6ec(param_2,&local_40,0);
    if (iVar2 != 0) {
      return;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x180);
    FUN_1005dbee4(uVar6);
    if (*(int *)(local_40 + 0x208) != 1) {
      *(undefined4 *)(local_40 + 0x208) = 0;
      lVar4 = local_40 + 0x1f0;
      *(long *)(local_40 + 0x210) = param_2;
      *(undefined4 *)(local_40 + 0x218) = *param_3;
      *(undefined4 *)(local_40 + 0x21c) = param_3[1];
      *(undefined4 *)(local_40 + 0x220) = param_3[2];
      if ((*(long *)(local_40 + 0x1f0) == lVar4) && (*(long *)(local_40 + 0x1f8) == lVar4)) {
        uVar5 = *(undefined8 *)(param_1 + 0x170);
        *(long *)(local_40 + 0x1f0) = param_1 + 0x168;
        *(undefined8 *)(local_40 + 0x1f8) = uVar5;
        *(long *)(param_1 + 0x170) = lVar4;
        **(long **)(local_40 + 0x1f8) = lVar4;
      }
    }
  }
  FUN_1005dbf14(uVar6);
  return;
}




long FUN_1005d4b30(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long local_30;
  long local_28;
  
  if (*(long *)(param_1 + 0x160) == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_10058193c(param_2,&local_28,0);
    if (iVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x160) + (long)*(int *)(local_28 + 0x188) * 0x40;
      if (*(int *)(lVar2 + 0x18) == 1) {
        *(int *)(lVar2 + 0x18) = 2;
      }
      else {
        lVar2 = 0;
      }
    }
    else {
      iVar1 = FUN_10057f6ec(param_2,&local_30,0);
      lVar2 = 0;
      if (iVar1 == 0) {
        if (*(int *)(local_30 + 0x208) == 1) {
          lVar2 = local_30 + 0x1f0;
          *(undefined4 *)(local_30 + 0x208) = 2;
        }
        else {
          lVar2 = 0;
        }
      }
    }
  }
  return lVar2;
}




undefined8 * FUN_1005d4bf0(undefined8 *param_1)

{
  FUN_1005fb700(param_1 + 2);
  param_1[0x2e] = 0;
  param_1[0x2f] = param_1 + 0x2f;
  param_1[0x30] = param_1 + 0x2f;
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *param_1 = 0;
  param_1[2] = &PTR_FUN_1014a2ae0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x447a0000;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x33] = param_1;
  return param_1;
}




undefined8 * FUN_1005d4c60(undefined8 *param_1)

{
  FUN_1005fb700(param_1 + 2);
  param_1[0x2e] = 0;
  param_1[0x2f] = param_1 + 0x2f;
  param_1[0x30] = param_1 + 0x2f;
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *param_1 = 0;
  param_1[2] = &PTR_FUN_1014a2ae0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x447a0000;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0x33] = param_1;
  return param_1;
}




void FUN_1005d4cd0(void)

{
  return;
}




void FUN_1005d4cd4(void)

{
  return;
}




undefined8 FUN_1005d4cd8(long param_1)

{
  long lVar1;
  
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
  if (*(long *)(param_1 + 0x1a8) == 0) {
    lVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometry_mgr.cpp"
                          ,400,0,0);
    *(long *)(param_1 + 0x1a8) = lVar1;
    if (lVar1 == 0) {
      return 0x26;
    }
    FUN_1005da554(*(undefined4 *)(param_1 + 0x1c0));
  }
  return 0;
}




void FUN_1005d4d50(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  iVar2 = iVar1 + -1;
  *(int *)(param_1 + 0x1b0) = iVar2;
  if (iVar2 == 0 || iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    if (*(long *)(param_1 + 0x1a8) != 0) {
      FUN_1005da574();
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x1a8),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometry_mgr.cpp"
                    ,0x1ad);
      *(undefined8 *)(param_1 + 0x1a8) = 0;
    }
  }
  return;
}




void FUN_1005d4db4(long param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xa0);
  FUN_1005d723c();
  return;
}




undefined8 FUN_1005d4dc0(float param_1,long param_2)

{
  if ((*(float *)(param_2 + 0x1c0) != param_1) &&
     (*(float *)(param_2 + 0x1c0) = param_1, *(long *)(param_2 + 0x1a8) != 0)) {
    FUN_1005db1fc();
  }
  return 0;
}




undefined8 FUN_1005d4df0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x130);
    *(undefined8 *)(lVar1 + 0x130) = 0;
    *(undefined1 *)(lVar1 + 0x138) = 0;
    FUN_1005d5d24();
    lVar1 = lVar2;
  }
  return 0;
}




undefined8 FUN_1005d4e34(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x16c) = 0;
  if (*(long *)(param_1 + 400) != 0) {
    uVar1 = FUN_1005fb958(param_1 + 0x10);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(param_1 + 0x170),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometry_mgr.cpp"
                  ,0x90);
    *(undefined8 *)(param_1 + 0x170) = 0;
    uVar1 = FUN_1005dbe84(*(undefined8 *)(param_1 + 400),0);
    *(undefined8 *)(param_1 + 400) = 0;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(long *)(param_1 + 0x1a0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1005dbe84(*(long *)(param_1 + 0x1a0),0);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
  }
  return uVar1;
}




void FUN_1005d4ec8(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *(float *)(param_1 + 0x84);
  fVar2 = *(float *)(param_1 + 0x88);
  fVar3 = *(float *)(param_1 + 0x74);
  fVar5 = *(float *)(param_1 + 0x78);
  fVar11 = *(float *)(param_1 + 0x9c);
  fVar6 = *(float *)(param_1 + 0xa0);
  fVar8 = *(float *)(param_1 + 0x7c);
  fVar9 = *(float *)(param_1 + 0x80);
  fVar10 = *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0xb4) = fVar9 * fVar11;
  *(float *)(param_1 + 0xb8) = fVar1 * fVar11;
  *(float *)(param_1 + 0xbc) = fVar2 * fVar11;
  *(float *)(param_1 + 0xc4) = fVar3 * fVar6;
  *(float *)(param_1 + 200) = fVar5 * fVar6;
  *(float *)(param_1 + 0xcc) = fVar8 * fVar6;
  fVar7 = fVar1 * fVar8 - fVar2 * fVar5;
  *(float *)(param_1 + 0xa4) = fVar10 * fVar7;
  fVar12 = fVar2 * fVar3 - fVar9 * fVar8;
  *(float *)(param_1 + 0xa8) = fVar10 * fVar12;
  fVar4 = fVar9 * fVar5 - fVar1 * fVar3;
  *(float *)(param_1 + 0xac) = fVar10 * fVar4;
  *(float *)(param_1 + 0xd8) = fVar9 / fVar11;
  *(float *)(param_1 + 0xe8) = fVar1 / fVar11;
  *(float *)(param_1 + 0xf8) = fVar2 / fVar11;
  *(float *)(param_1 + 0xdc) = fVar3 / fVar6;
  *(float *)(param_1 + 0xec) = fVar5 / fVar6;
  *(float *)(param_1 + 0xfc) = fVar8 / fVar6;
  *(float *)(param_1 + 0xd4) = fVar7 / fVar10;
  *(float *)(param_1 + 0xe4) = fVar12 / fVar10;
  *(float *)(param_1 + 0xf4) = fVar4 / fVar10;
  return;
}




void FUN_1005d4f94(long param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar2 = (*(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x58)) * 0.5;
  fVar6 = (*(float *)(param_1 + 100) + *(float *)(param_1 + 0x60)) * 0.5;
  fVar7 = (*(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x68)) * 0.5;
  fVar8 = fVar2 * *(float *)(param_1 + 0xa4) + fVar6 * *(float *)(param_1 + 0xa8) +
          fVar7 * *(float *)(param_1 + 0xac) + *(float *)(param_1 + 0x8c);
  fVar9 = fVar2 * *(float *)(param_1 + 0xb4) + fVar6 * *(float *)(param_1 + 0xb8) +
          fVar7 * *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0x90);
  fVar7 = fVar2 * *(float *)(param_1 + 0xc4) + fVar6 * *(float *)(param_1 + 200) +
          fVar7 * *(float *)(param_1 + 0xcc) + *(float *)(param_1 + 0x94);
  fVar2 = (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x58)) * 0.5;
  fVar6 = (*(float *)(param_1 + 100) - *(float *)(param_1 + 0x60)) * 0.5;
  fVar3 = (*(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0x68)) * 0.5;
  fVar4 = fVar2 * ABS(*(float *)(param_1 + 0xa4)) + fVar6 * ABS(*(float *)(param_1 + 0xb4)) +
          fVar3 * ABS(*(float *)(param_1 + 0xc4));
  fVar5 = fVar2 * ABS(*(float *)(param_1 + 0xa8)) + fVar6 * ABS(*(float *)(param_1 + 0xb8)) +
          fVar3 * ABS(*(float *)(param_1 + 200));
  fVar2 = fVar2 * ABS(*(float *)(param_1 + 0xac)) + fVar6 * ABS(*(float *)(param_1 + 0xbc)) +
          fVar3 * ABS(*(float *)(param_1 + 0xcc));
  pfVar1 = *(float **)(param_1 + 0x108);
  pfVar1[1] = fVar8 + fVar4;
  *pfVar1 = fVar8 - fVar4;
  pfVar1[3] = fVar9 + fVar5;
  pfVar1[2] = fVar9 - fVar5;
  pfVar1[4] = fVar7 - fVar2;
  pfVar1[5] = fVar7 + fVar2;
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_1005dae98();
    return;
  }
  FUN_1005daacc(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a8));
  return;
}




void FUN_1005d50e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 8) = 1;
  if (*(char *)(param_1 + 0x138) == '\0') {
    *(undefined1 *)(param_1 + 0x138) = 1;
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar1 + 0x1b8);
    *(long *)(lVar1 + 0x1b8) = param_1;
  }
  return;
}




undefined8 FUN_1005d510c(long param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar8 = *(float *)(param_1 + 0xa4);
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar9 = *(float *)(param_1 + 0xa8);
  fVar10 = *(float *)(param_1 + 0xac);
  fVar13 = param_2[2];
  fVar15 = (fVar8 * fVar11 + fVar9 * fVar12 + fVar10 * fVar13) - *(float *)(param_1 + 0xa0);
  fVar16 = (fVar8 * param_2[3] + fVar9 * param_2[4] + fVar10 * param_2[5]) -
           *(float *)(param_1 + 0xa0);
  if ((((fVar15 < 0.0) || (fVar16 < 0.0)) && ((0.0 < fVar15 || (0.0 < fVar16)))) &&
     (fVar15 <= 0.0 || (*(uint *)(param_1 + 0xb8) & 0x10000) != 0)) {
    fVar15 = fVar15 / (fVar15 - fVar16);
    uVar2 = *(uint *)(param_1 + 0xb8) & 0xffff;
    lVar3 = 0;
    pfVar6 = (float *)(param_1 + 0xc4);
    do {
      lVar5 = lVar3;
      if ((long)(ulong)uVar2 <= lVar5) break;
      lVar3 = 0;
      if (lVar5 + 1 < (long)(ulong)uVar2) {
        lVar3 = lVar5 + 1;
      }
      pfVar7 = (float *)(param_1 + 0xbc + lVar3 * 0xc);
      pfVar1 = pfVar6 + -2;
      pfVar4 = pfVar6 + -1;
      fVar16 = *pfVar7 - *pfVar1;
      fVar14 = pfVar7[1] - *pfVar4;
      fVar18 = *pfVar6;
      fVar17 = pfVar7[2] - fVar18;
      lVar3 = lVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (((fVar13 + fVar15 * (param_2[5] - fVar13)) - fVar18) *
             (fVar16 * fVar9 - fVar14 * fVar8) +
             ((fVar11 + fVar15 * (param_2[3] - fVar11)) - *pfVar1) *
             (fVar14 * fVar10 - fVar17 * fVar9) +
             ((fVar12 + fVar15 * (param_2[4] - fVar12)) - *pfVar4) *
             (fVar17 * fVar8 - fVar16 * fVar10) <= 0.0);
    if ((uint)lVar5 == uVar2) {
      fVar8 = 1.0 - *(float *)(param_1 + 0xb0);
      if ((*(byte *)(**(long **)(*(long *)(param_2 + 8) + 0x18) + 0x4a) >> 2 & 1) == 0) {
        fVar9 = param_2[6];
        param_2[6] = fVar8 * fVar9;
        param_2[7] = param_2[7] * (1.0 - *(float *)(param_1 + 0xb4));
        fVar9 = fVar8 * fVar9;
      }
      else {
        fVar10 = 1.0 - *(float *)(param_1 + 0xb4);
        fVar9 = param_2[6];
        if ((fVar8 < fVar9) || ((fVar8 == fVar9 && (fVar10 < param_2[7])))) {
          param_2[6] = fVar8;
          param_2[7] = fVar10;
          fVar9 = fVar8;
        }
      }
      if ((fVar9 < 0.05) && (param_2[7] < 0.05)) {
        return 0;
      }
    }
  }
  return 1;
}




long FUN_1005d52e8(long param_1,long param_2)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1005da554(*(undefined4 *)(param_2 + 0x1c0),param_1 + 0x110);
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x80) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  return param_1;
}




long FUN_1005d53a4(long param_1,long param_2)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1005da554(*(undefined4 *)(param_2 + 0x1c0),param_1 + 0x110);
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x80) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  return param_1;
}




undefined8 FUN_1005d5460(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1[3] + 0x1a0);
  FUN_1005dbee4(uVar6);
  lVar1 = param_1[3];
  if (*(long **)(lVar1 + 0x1b8) != (long *)0x0) {
    plVar5 = *(long **)(lVar1 + 0x1b8);
    plVar4 = (long *)0x0;
    do {
      plVar2 = plVar5;
      if (plVar2 == param_1) {
        if (plVar4 == (long *)0x0) {
          *(long *)(lVar1 + 0x1b8) = param_1[0x26];
        }
        else {
          plVar4[0x26] = param_1[0x26];
        }
        break;
      }
      plVar5 = (long *)plVar2[0x26];
      plVar4 = plVar2;
    } while ((long *)plVar2[0x26] != (long *)0x0);
  }
  if (param_1[0x21] != 0) {
    FUN_1005daacc(*(undefined8 *)(lVar1 + 0x1a8));
    FUN_1005db0c4(*(undefined8 *)(param_1[3] + 0x1a8),param_1[0x21] + 0x50);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[0x21],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                  ,0x17c);
    param_1[0x21] = 0;
    lVar1 = param_1[3];
  }
  if (*(long *)(lVar1 + 0x1a8) != 0) {
    FUN_1005d4d50();
  }
  if (param_1[8] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[8],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                  ,0x186);
    param_1[8] = 0;
  }
  if (param_1[6] != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1[6],
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                  ,0x18b);
    param_1[6] = 0;
  }
  puVar3 = (undefined8 *)param_1[3];
  *(undefined1 *)(puVar3 + 1) = 1;
  FUN_1005f8894(*puVar3);
  plVar5 = (long *)(*(long *)param_1[3] + 0x16448);
  plVar4 = (long *)*param_1;
  if (((long *)*plVar5 == param_1) && (*plVar5 = (long)plVar4, plVar4 == param_1)) {
    *plVar5 = 0;
  }
  plVar5 = (long *)param_1[1];
  *plVar5 = (long)plVar4;
  *(long **)(*param_1 + 8) = plVar5;
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                ,0x19c);
  FUN_1005dbf14(uVar6);
  return 0;
}




undefined8 FUN_1005d560c(long param_1,int param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
  FUN_1005dbee4(uVar3);
  if (*(long *)(param_1 + 0x40) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      *(int *)(param_1 + 0x20) = param_3;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(int *)(param_1 + 0x28) = param_2;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      lVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_3 << 2,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                            ,0x1bd,0,0);
      *(long *)(param_1 + 0x30) = lVar1;
      if (lVar1 == 0) {
        uVar4 = 0x26;
      }
      else {
        *(undefined4 *)(param_1 + 0x38) = 0;
        lVar1 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                              param_2 * 0xbc + param_3 * 0xc,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                              ,0x1c6,0,0);
        *(long *)(param_1 + 0x40) = lVar1;
        if (lVar1 == 0) {
          uVar4 = 0x26;
        }
        else {
          uVar4 = FUN_1005d4cd8(*(undefined8 *)(param_1 + 0x18));
          if ((int)uVar4 == 0) {
            pvVar2 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0xa8,
                                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                                           ,0x1d2,0,0);
            *(void **)(param_1 + 0x108) = pvVar2;
            if (pvVar2 == (void *)0x0) {
              uVar4 = 0x26;
            }
            else {
              _memset(pvVar2,0,0xa8);
              lVar1 = *(long *)(param_1 + 0x108);
              *(long *)(lVar1 + 0xa0) = param_1;
              FUN_1005db08c(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a8),lVar1 + 0x50);
              uVar4 = 0;
            }
          }
        }
      }
    }
    else {
      uVar4 = 0x1c;
    }
  }
  else {
    uVar4 = 0x1c;
  }
  FUN_1005dbf14(uVar3);
  return uVar4;
}




undefined8
FUN_1005d5770(undefined4 param_1,undefined4 param_2,long param_3,int param_4,uint param_5,
             undefined8 *param_6,int *param_7)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x1a0);
  FUN_1005dbee4(uVar7);
  uVar8 = 0x1f;
  if ((2 < (int)param_5) && (param_6 != (undefined8 *)0x0)) {
    iVar3 = *(int *)(param_3 + 0x2c);
    if (iVar3 < *(int *)(param_3 + 0x28)) {
      iVar4 = *(int *)(param_3 + 0x24);
      if (*(int *)(param_3 + 0x20) < (int)(iVar4 + param_5)) {
        uVar8 = 0x1f;
      }
      else {
        if (param_7 != (int *)0x0) {
          *param_7 = iVar3;
          iVar4 = *(int *)(param_3 + 0x24);
          iVar3 = *(int *)(param_3 + 0x2c);
        }
        *(uint *)(param_3 + 0x24) = iVar4 + param_5;
        *(undefined4 *)(*(long *)(param_3 + 0x30) + (long)iVar3 * 4) =
             *(undefined4 *)(param_3 + 0x38);
        lVar9 = (long)*(int *)(param_3 + 0x38);
        lVar10 = *(long *)(param_3 + 0x40);
        pvVar1 = (void *)(lVar10 + lVar9);
        *(uint *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + param_5 * 0xc + 0xbc;
        *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + 1;
        _memset(pvVar1,0,0x50);
        _memset((void *)((long)pvVar1 + 0x50),0,0x50);
        *(undefined4 *)((long)pvVar1 + 0xb0) = param_1;
        *(undefined4 *)((long)pvVar1 + 0xb4) = param_2;
        uVar2 = param_5 | 0x10000;
        if (param_4 == 0) {
          uVar2 = param_5;
        }
        *(uint *)(lVar10 + lVar9 + 0xb8) = uVar2;
        if ((uVar2 & 0xffff) != 0) {
          lVar5 = 0;
          puVar6 = (undefined8 *)(lVar9 + lVar10 + 0xbc);
          do {
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_6 + 1);
            *puVar6 = *param_6;
            lVar5 = lVar5 + 1;
            puVar6 = (undefined8 *)((long)puVar6 + 0xc);
            param_6 = (undefined8 *)((long)param_6 + 0xc);
          } while (lVar5 < (long)(ulong)*(ushort *)(lVar10 + lVar9 + 0xb8));
        }
        *(undefined8 *)(lVar9 + lVar10 + 0x48) = *(undefined8 *)(param_3 + 0x50);
        *(void **)(param_3 + 0x50) = pvVar1;
        lVar9 = *(long *)(param_3 + 0x18);
        *(undefined1 *)(lVar9 + 8) = 1;
        if (*(char *)(param_3 + 0x138) == '\0') {
          uVar8 = 0;
          *(undefined1 *)(param_3 + 0x138) = 1;
          *(undefined8 *)(param_3 + 0x130) = *(undefined8 *)(lVar9 + 0x1b8);
          *(long *)(lVar9 + 0x1b8) = param_3;
        }
        else {
          uVar8 = 0;
        }
      }
    }
    else {
      uVar8 = 0x1f;
    }
  }
  FUN_1005dbf14(uVar7);
  return uVar8;
}




undefined8 FUN_1005d5914(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x2c);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d5938(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x28);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x20);
  }
  return 0;
}




undefined8 FUN_1005d5958(long param_1,int param_2,uint *param_3)

{
  if (param_2 < 0) {
    return 0x1f;
  }
  if (param_2 < *(int *)(param_1 + 0x2c)) {
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)*(ushort *)
                        ((long)*(int *)(*(long *)(param_1 + 0x30) + (long)param_2 * 4) +
                         *(long *)(param_1 + 0x40) + 0xb8);
      return 0;
    }
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d59a8(long param_1,int param_2,int param_3,float *param_4)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
  FUN_1005dbee4(uVar4);
  if (param_2 < 0) {
    uVar5 = 0x1f;
  }
  else if (param_2 < *(int *)(param_1 + 0x2c)) {
    if (param_3 < 0) {
      uVar5 = 0x1f;
    }
    else {
      uVar5 = 0x1f;
      if (param_4 != (float *)0x0) {
        lVar6 = (long)*(int *)(*(long *)(param_1 + 0x30) + (long)param_2 * 4);
        lVar7 = *(long *)(param_1 + 0x40);
        if (param_3 < (int)(uint)*(ushort *)(lVar6 + lVar7 + 0xb8)) {
          lVar3 = (long)param_3;
          lVar1 = lVar6 + lVar7 + 0xbc;
          pfVar2 = (float *)(lVar1 + lVar3 * 0xc);
          if (((*pfVar2 == *param_4) && (*(float *)(lVar1 + lVar3 * 0xc + 4) == param_4[1])) &&
             (*(float *)(lVar1 + lVar3 * 0xc + 8) == param_4[2])) {
            uVar5 = 0;
          }
          else {
            pfVar2[2] = param_4[2];
            *(undefined8 *)pfVar2 = *(undefined8 *)param_4;
            if ((*(byte *)(lVar6 + lVar7 + 0x18) >> 6 & 1) != 0) {
              FUN_1005daacc(param_1 + 0x110,lVar7 + lVar6);
              *(undefined8 *)(lVar6 + lVar7 + 0x48) = *(undefined8 *)(param_1 + 0x50);
              *(long *)(param_1 + 0x50) = lVar7 + lVar6;
            }
            lVar6 = *(long *)(param_1 + 0x18);
            *(undefined1 *)(lVar6 + 8) = 1;
            if (*(char *)(param_1 + 0x138) == '\0') {
              uVar5 = 0;
              *(undefined1 *)(param_1 + 0x138) = 1;
              *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar6 + 0x1b8);
              *(long *)(lVar6 + 0x1b8) = param_1;
            }
            else {
              uVar5 = 0;
            }
          }
        }
      }
    }
  }
  else {
    uVar5 = 0x1f;
  }
  FUN_1005dbf14(uVar4);
  return uVar5;
}




undefined8 FUN_1005d5b24(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1f;
  if (((-1 < param_2) && (param_4 != (undefined8 *)0x0)) && (param_2 < *(int *)(param_1 + 0x2c))) {
    if (param_3 < 0) {
      return 0x1f;
    }
    lVar1 = (long)*(int *)(*(long *)(param_1 + 0x30) + (long)param_2 * 4) +
            *(long *)(param_1 + 0x40);
    if ((int)(uint)*(ushort *)(lVar1 + 0xb8) <= param_3) {
      return 0x1f;
    }
    uVar2 = 0;
    lVar1 = lVar1 + (long)param_3 * 0xc;
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(lVar1 + 0xc4);
    *param_4 = *(undefined8 *)(lVar1 + 0xbc);
  }
  return uVar2;
}




undefined8 FUN_1005d5b98(undefined4 param_1,undefined4 param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x1a0);
  FUN_1005dbee4(uVar3);
  if (param_4 < 0) {
    uVar4 = 0x1f;
  }
  else if (param_4 < *(int *)(param_3 + 0x2c)) {
    lVar2 = (long)*(int *)(*(long *)(param_3 + 0x30) + (long)param_4 * 4) +
            *(long *)(param_3 + 0x40);
    *(undefined4 *)(lVar2 + 0xb0) = param_1;
    *(undefined4 *)(lVar2 + 0xb4) = param_2;
    uVar1 = *(uint *)(lVar2 + 0xb8) | 0x10000;
    if (param_5 == 0) {
      uVar1 = *(uint *)(lVar2 + 0xb8) & 0xfffeffff;
    }
    *(uint *)(lVar2 + 0xb8) = uVar1;
    lVar2 = *(long *)(param_3 + 0x18);
    *(undefined1 *)(lVar2 + 8) = 1;
    if (*(char *)(param_3 + 0x138) == '\0') {
      uVar4 = 0;
      *(undefined1 *)(param_3 + 0x138) = 1;
      *(undefined8 *)(param_3 + 0x130) = *(undefined8 *)(lVar2 + 0x1b8);
      *(long *)(lVar2 + 0x1b8) = param_3;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x1f;
  }
  FUN_1005dbf14(uVar3);
  return uVar4;
}




undefined8
FUN_1005d5c6c(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4,byte *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 < 0) {
    uVar3 = 0x1f;
  }
  else if (param_2 < *(int *)(param_1 + 0x2c)) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
    FUN_1005dbee4(uVar3);
    lVar1 = (long)*(int *)(*(long *)(param_1 + 0x30) + (long)param_2 * 4);
    lVar2 = *(long *)(param_1 + 0x40);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(lVar1 + lVar2 + 0xb0);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar1 + lVar2 + 0xb4);
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = (byte)*(undefined2 *)(lVar1 + lVar2 + 0xba) & 1;
    }
    FUN_1005dbf14(uVar3);
    uVar3 = 0;
  }
  else {
    uVar3 = 0x1f;
  }
  return uVar3;
}




undefined8 FUN_1005d5d24(long param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  pfVar5 = *(float **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  lVar1 = param_1 + 0x110;
  while (pfVar2 = pfVar5, pfVar2 != (float *)0x0) {
    pfVar5 = *(float **)(pfVar2 + 0x12);
    pfVar2[0x12] = 0.0;
    pfVar2[0x13] = 0.0;
    fVar18 = pfVar2[0x2e];
    if (((uint)fVar18 & 0xffff) < 3) {
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
    }
    else {
      lVar3 = 0;
      fVar19 = pfVar2[0x32];
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      fVar21 = pfVar2[0x33];
      fVar22 = pfVar2[0x34];
      pfVar4 = pfVar2 + 0x37;
      do {
        lVar3 = lVar3 + 1;
        fVar23 = fVar19 - pfVar2[0x2f];
        fVar24 = fVar21 - pfVar2[0x30];
        fVar25 = fVar22 - pfVar2[0x31];
        fVar19 = pfVar4[-2];
        fVar21 = pfVar4[-1];
        fVar26 = fVar19 - pfVar2[0x2f];
        fVar27 = fVar21 - pfVar2[0x30];
        fVar22 = *pfVar4;
        fVar28 = fVar22 - pfVar2[0x31];
        fVar20 = (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) +
                 (fVar24 * fVar28 - fVar25 * fVar27);
        uVar6 = SUB41(fVar20,0);
        uVar7 = (undefined1)((uint)fVar20 >> 8);
        uVar8 = (undefined1)((uint)fVar20 >> 0x10);
        uVar9 = (undefined1)((uint)fVar20 >> 0x18);
        fVar20 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
                 (fVar25 * fVar26 - fVar23 * fVar28);
        uVar14 = SUB41(fVar20,0);
        uVar15 = (undefined1)((uint)fVar20 >> 8);
        uVar16 = (undefined1)((uint)fVar20 >> 0x10);
        uVar17 = (undefined1)((uint)fVar20 >> 0x18);
        fVar20 = (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) +
                 (fVar23 * fVar27 - fVar24 * fVar26);
        uVar10 = SUB41(fVar20,0);
        uVar11 = (undefined1)((uint)fVar20 >> 8);
        uVar12 = (undefined1)((uint)fVar20 >> 0x10);
        uVar13 = (undefined1)((uint)fVar20 >> 0x18);
        pfVar4 = pfVar4 + 3;
      } while (lVar3 < (int)(((uint)fVar18 & 0xffff) - 2));
    }
    fVar19 = SQRT((float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) *
                  (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) +
                  (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) *
                  (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
                  (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) *
                  (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))));
    if (fVar19 <= 0.0) {
      pfVar2[0x2e] = (float)((uint)fVar18 | 0x20000);
    }
    else {
      fVar21 = (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) / fVar19;
      uVar6 = SUB41(fVar21,0);
      uVar7 = (undefined1)((uint)fVar21 >> 8);
      uVar8 = (undefined1)((uint)fVar21 >> 0x10);
      uVar9 = (undefined1)((uint)fVar21 >> 0x18);
      pfVar2[0x2e] = (float)((uint)fVar18 & 0xfffdffff);
      fVar18 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) / fVar19;
      uVar14 = SUB41(fVar18,0);
      uVar15 = (undefined1)((uint)fVar18 >> 8);
      uVar16 = (undefined1)((uint)fVar18 >> 0x10);
      uVar17 = (undefined1)((uint)fVar18 >> 0x18);
      fVar19 = (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) / fVar19;
      uVar10 = SUB41(fVar19,0);
      uVar11 = (undefined1)((uint)fVar19 >> 8);
      uVar12 = (undefined1)((uint)fVar19 >> 0x10);
      uVar13 = (undefined1)((uint)fVar19 >> 0x18);
    }
    pfVar2[0x29] = (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
    pfVar2[0x2a] = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)));
    pfVar2[0x2b] = (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)));
    pfVar2[0x28] = pfVar2[0x2f] * (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) +
                   pfVar2[0x30] * (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) +
                   (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) * pfVar2[0x31];
    FUN_1005db08c(lVar1,pfVar2 + 0x14);
    fVar18 = pfVar2[0x30];
    fVar21 = pfVar2[0x31];
    fVar19 = pfVar2[0x2e];
    fVar22 = pfVar2[0x2f];
    *pfVar2 = fVar22;
    pfVar2[1] = fVar22;
    pfVar2[2] = fVar18;
    pfVar2[3] = fVar18;
    pfVar2[4] = fVar21;
    pfVar2[5] = fVar21;
    uVar14 = SUB41(fVar22,0);
    uVar15 = (undefined1)((uint)fVar22 >> 8);
    uVar16 = (undefined1)((uint)fVar22 >> 0x10);
    uVar17 = (undefined1)((uint)fVar22 >> 0x18);
    uVar10 = SUB41(fVar18,0);
    uVar11 = (undefined1)((uint)fVar18 >> 8);
    uVar12 = (undefined1)((uint)fVar18 >> 0x10);
    uVar13 = (undefined1)((uint)fVar18 >> 0x18);
    uVar6 = SUB41(fVar21,0);
    uVar7 = (undefined1)((uint)fVar21 >> 8);
    uVar8 = (undefined1)((uint)fVar21 >> 0x10);
    uVar9 = (undefined1)((uint)fVar21 >> 0x18);
    if (((uint)fVar19 & 0xfffe) != 0) {
      lVar3 = 1;
      pfVar4 = pfVar2 + 0x34;
      do {
        if (fVar22 <= pfVar4[-2]) {
          fVar22 = pfVar4[-2];
        }
        pfVar2[1] = fVar22;
        fVar20 = pfVar4[-2];
        if (fVar20 <= (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))) {
          uVar14 = SUB41(fVar20,0);
          uVar15 = (undefined1)((uint)fVar20 >> 8);
          uVar16 = (undefined1)((uint)fVar20 >> 0x10);
          uVar17 = (undefined1)((uint)fVar20 >> 0x18);
        }
        *pfVar2 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)));
        if (fVar18 <= pfVar4[-1]) {
          fVar18 = pfVar4[-1];
        }
        pfVar2[3] = fVar18;
        fVar20 = pfVar4[-1];
        if (fVar20 <= (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)))) {
          uVar10 = SUB41(fVar20,0);
          uVar11 = (undefined1)((uint)fVar20 >> 8);
          uVar12 = (undefined1)((uint)fVar20 >> 0x10);
          uVar13 = (undefined1)((uint)fVar20 >> 0x18);
        }
        pfVar2[2] = (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)));
        if (fVar21 <= *pfVar4) {
          fVar21 = *pfVar4;
        }
        pfVar2[5] = fVar21;
        fVar20 = *pfVar4;
        if (fVar20 <= (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)))) {
          uVar6 = SUB41(fVar20,0);
          uVar7 = (undefined1)((uint)fVar20 >> 8);
          uVar8 = (undefined1)((uint)fVar20 >> 0x10);
          uVar9 = (undefined1)((uint)fVar20 >> 0x18);
        }
        pfVar2[4] = (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
        lVar3 = lVar3 + 1;
        pfVar4 = pfVar4 + 3;
      } while (lVar3 < (long)(ulong)((uint)fVar19 & 0xffff));
    }
    fVar20 = fVar22 - (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)));
    fVar23 = fVar18 - (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)));
    if (fVar20 <= fVar23) {
      fVar20 = fVar23;
    }
    fVar23 = fVar21 - (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
    if (fVar20 <= fVar23) {
      fVar20 = fVar23;
    }
    fVar20 = fVar20 * 0.01;
    *pfVar2 = (float)CONCAT13(uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14))) - fVar20;
    pfVar2[1] = fVar22 + fVar20;
    pfVar2[2] = (float)CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10))) - fVar20;
    pfVar2[3] = fVar18 + fVar20;
    pfVar2[4] = (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) - fVar20;
    pfVar2[5] = fVar20 + fVar21;
    if (((uint)fVar19 >> 0x11 & 1) == 0) {
      FUN_1005da578(lVar1,pfVar2);
    }
  }
  FUN_1005dafe4(lVar1,param_1 + 0x58);
  FUN_1005d4f94(param_1);
  return 0;
}




undefined8 FUN_1005d5fc0(long param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 8) = 1;
  if (*(char *)(param_1 + 0x138) == '\0') {
    *(undefined1 *)(param_1 + 0x138) = 1;
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar1 + 0x1b8);
    *(long *)(lVar1 + 0x1b8) = param_1;
  }
  *(undefined1 *)(param_1 + 0x70) = param_2;
  return 0;
}




undefined8 FUN_1005d5ff0(long param_1,undefined1 *param_2)

{
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *(undefined1 *)(param_1 + 0x70);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d6014(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
  FUN_1005dbee4(uVar2);
  uVar3 = 0x1f;
  if ((param_2 != (float *)0x0) && (param_3 != (float *)0x0)) {
    if (((*(float *)(param_1 + 0x74) == *param_2) &&
        (((*(float *)(param_1 + 0x78) == param_2[1] && (*(float *)(param_1 + 0x7c) == param_2[2]))
         && (*(float *)(param_1 + 0x80) == *param_3)))) &&
       ((*(float *)(param_1 + 0x84) == param_3[1] && (*(float *)(param_1 + 0x88) == param_3[2])))) {
      uVar3 = 0;
    }
    else {
      *(float *)(param_1 + 0x7c) = param_2[2];
      *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)param_2;
      *(float *)(param_1 + 0x88) = param_3[2];
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)param_3;
      fVar4 = *(float *)(param_1 + 0x98);
      fVar5 = *(float *)(param_1 + 0x9c);
      fVar6 = *(float *)(param_1 + 0x80);
      fVar8 = *(float *)(param_1 + 0x84);
      *(float *)(param_1 + 0xb4) = fVar6 * fVar5;
      *(float *)(param_1 + 0xb8) = fVar5 * fVar8;
      fVar9 = *(float *)(param_1 + 0x88);
      *(float *)(param_1 + 0xbc) = fVar5 * fVar9;
      fVar10 = *(float *)(param_1 + 0xa0);
      fVar11 = *(float *)(param_1 + 0x74);
      fVar12 = *(float *)(param_1 + 0x78);
      *(float *)(param_1 + 0xc4) = fVar11 * fVar10;
      *(float *)(param_1 + 200) = fVar10 * fVar12;
      fVar13 = *(float *)(param_1 + 0x7c);
      *(float *)(param_1 + 0xcc) = fVar10 * fVar13;
      fVar14 = fVar8 * fVar13 - fVar9 * fVar12;
      *(float *)(param_1 + 0xa4) = fVar4 * fVar14;
      fVar15 = fVar9 * fVar11 - fVar6 * fVar13;
      *(float *)(param_1 + 0xa8) = fVar4 * fVar15;
      fVar7 = fVar6 * fVar12 - fVar8 * fVar11;
      *(float *)(param_1 + 0xac) = fVar4 * fVar7;
      *(float *)(param_1 + 0xd8) = fVar6 / fVar5;
      *(float *)(param_1 + 0xe8) = fVar8 / fVar5;
      *(float *)(param_1 + 0xf8) = fVar9 / fVar5;
      *(float *)(param_1 + 0xdc) = fVar11 / fVar10;
      *(float *)(param_1 + 0xec) = fVar12 / fVar10;
      *(float *)(param_1 + 0xfc) = fVar13 / fVar10;
      *(float *)(param_1 + 0xd4) = fVar14 / fVar4;
      *(float *)(param_1 + 0xe4) = fVar15 / fVar4;
      *(float *)(param_1 + 0xf4) = fVar7 / fVar4;
      lVar1 = *(long *)(param_1 + 0x18);
      *(undefined1 *)(lVar1 + 8) = 1;
      if (*(char *)(param_1 + 0x138) == '\0') {
        uVar3 = 0;
        *(undefined1 *)(param_1 + 0x138) = 1;
        *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar1 + 0x1b8);
        *(long *)(lVar1 + 0x1b8) = param_1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  FUN_1005dbf14(uVar2);
  return uVar3;
}




undefined8 FUN_1005d61f8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x7c);
    *param_2 = *(undefined8 *)(param_1 + 0x74);
  }
  if (param_3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x88);
    *param_3 = *(undefined8 *)(param_1 + 0x80);
  }
  return 0;
}




undefined8 FUN_1005d6228(long param_1,float *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
  FUN_1005dbee4(uVar2);
  if (param_2 == (float *)0x0) {
    uVar3 = 0x1f;
  }
  else if (((*(float *)(param_1 + 0x8c) == *param_2) && (*(float *)(param_1 + 0x90) == param_2[1]))
          && (*(float *)(param_1 + 0x94) == param_2[2])) {
    uVar3 = 0;
  }
  else {
    *(float *)(param_1 + 0x94) = param_2[2];
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)param_2;
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined1 *)(lVar1 + 8) = 1;
    if (*(char *)(param_1 + 0x138) == '\0') {
      uVar3 = 0;
      *(undefined1 *)(param_1 + 0x138) = 1;
      *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar1 + 0x1b8);
      *(long *)(lVar1 + 0x1b8) = param_1;
    }
    else {
      uVar3 = 0;
    }
  }
  FUN_1005dbf14(uVar2);
  return uVar3;
}




undefined8 FUN_1005d62f4(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x94);
    *param_2 = *(undefined8 *)(param_1 + 0x8c);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d6320(long param_1,float *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
  FUN_1005dbee4(uVar2);
  if (param_2 == (float *)0x0) {
    uVar3 = 0x1f;
  }
  else if (*param_2 == 0.0) {
    uVar3 = 0x1f;
  }
  else if (param_2[1] == 0.0) {
    uVar3 = 0x1f;
  }
  else if (param_2[2] == 0.0) {
    uVar3 = 0x1f;
  }
  else if (((*(float *)(param_1 + 0x98) == *param_2) && (*(float *)(param_1 + 0x9c) == param_2[1]))
          && (*(float *)(param_1 + 0xa0) == param_2[2])) {
    uVar3 = 0;
  }
  else {
    *(float *)(param_1 + 0xa0) = param_2[2];
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)param_2;
    fVar4 = *(float *)(param_1 + 0x84);
    fVar5 = *(float *)(param_1 + 0x88);
    fVar6 = *(float *)(param_1 + 0x74);
    fVar7 = *(float *)(param_1 + 0x78);
    fVar13 = *(float *)(param_1 + 0x9c);
    fVar8 = *(float *)(param_1 + 0xa0);
    fVar9 = *(float *)(param_1 + 0x7c);
    fVar10 = *(float *)(param_1 + 0x80);
    fVar12 = *(float *)(param_1 + 0x98);
    *(float *)(param_1 + 0xb4) = fVar10 * fVar13;
    *(float *)(param_1 + 0xb8) = fVar13 * fVar4;
    *(float *)(param_1 + 0xbc) = fVar13 * fVar5;
    *(float *)(param_1 + 0xc4) = fVar6 * fVar8;
    *(float *)(param_1 + 200) = fVar8 * fVar7;
    *(float *)(param_1 + 0xcc) = fVar8 * fVar9;
    fVar14 = fVar4 * fVar9 - fVar5 * fVar7;
    *(float *)(param_1 + 0xa4) = fVar12 * fVar14;
    fVar15 = fVar5 * fVar6 - fVar10 * fVar9;
    *(float *)(param_1 + 0xa8) = fVar12 * fVar15;
    fVar11 = fVar10 * fVar7 - fVar4 * fVar6;
    *(float *)(param_1 + 0xac) = fVar12 * fVar11;
    *(float *)(param_1 + 0xd8) = fVar10 / fVar13;
    *(float *)(param_1 + 0xe8) = fVar4 / fVar13;
    *(float *)(param_1 + 0xf8) = fVar5 / fVar13;
    *(float *)(param_1 + 0xdc) = fVar6 / fVar8;
    *(float *)(param_1 + 0xec) = fVar7 / fVar8;
    *(float *)(param_1 + 0xfc) = fVar9 / fVar8;
    *(float *)(param_1 + 0xd4) = fVar14 / fVar12;
    *(float *)(param_1 + 0xe4) = fVar15 / fVar12;
    *(float *)(param_1 + 0xf4) = fVar11 / fVar12;
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined1 *)(lVar1 + 8) = 1;
    if (*(char *)(param_1 + 0x138) == '\0') {
      uVar3 = 0;
      *(undefined1 *)(param_1 + 0x138) = 1;
      *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar1 + 0x1b8);
      *(long *)(lVar1 + 0x1b8) = param_1;
    }
    else {
      uVar3 = 0;
    }
  }
  FUN_1005dbf14(uVar2);
  return uVar3;
}




undefined8 FUN_1005d64e4(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xa0);
    *param_2 = *(undefined8 *)(param_1 + 0x98);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d6510(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int local_64;
  
  if (param_3 == (int *)0x0) {
    uVar3 = 0x1f;
  }
  else if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    lVar4 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x300,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                          ,0x56b,0,0);
    if (lVar4 == 0) {
      uVar3 = 0x26;
    }
    else {
      if (iVar2 < 1) {
        iVar10 = 0x44;
      }
      else {
        lVar9 = 0;
        iVar8 = 0x14;
        do {
          iVar6 = *(int *)(param_1 + 0x2c);
          if (iVar6 <= lVar9) {
            if (lVar4 == 0) {
              return 0x1f;
            }
            uVar3 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
            uVar5 = 0x578;
            goto LAB_1005d6704;
          }
          uVar7 = *(uint *)((long)*(int *)(*(long *)(param_1 + 0x30) + lVar9 * 4) +
                            *(long *)(param_1 + 0x40) + 0xb8);
          uVar1 = uVar7 & 0xffff;
          if (uVar1 < 0x41) {
            if (uVar1 != 0) goto LAB_1005d663c;
            iVar10 = iVar8 + 4;
          }
          else {
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar4,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                          ,0x580);
            lVar4 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x300,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                                  ,0x581,0,0);
            if (lVar4 == 0) {
              return 0x26;
            }
            iVar6 = *(int *)(param_1 + 0x2c);
LAB_1005d663c:
            uVar7 = uVar7 & 0xffff;
            iVar10 = uVar7 * 0xc + -0xc;
            if (uVar7 < 2) {
              iVar10 = 0;
            }
            iVar10 = iVar8 + iVar10 + 0x10;
          }
          if (iVar6 <= lVar9) {
            if (lVar4 == 0) {
              return 0x1f;
            }
            uVar3 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
            uVar5 = 0x597;
LAB_1005d6704:
            FUN_1005d7f1c(uVar3,lVar4,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                          ,uVar5);
            return 0x1f;
          }
          uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
          FUN_1005dbee4(uVar3);
          FUN_1005dbf14(uVar3);
          iVar8 = iVar10 + 0xc;
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar2);
        iVar10 = iVar10 + 0x3c;
      }
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar4,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                    ,0x5a5);
      uVar3 = 0;
      *param_3 = iVar10;
    }
  }
  else {
    local_64 = *param_3;
    uVar3 = FUN_1005d6748(param_1,param_2,&local_64,1,0,FUN_1005d70c8);
  }
  return uVar3;
}




undefined8
FUN_1005d6748(long param_1,undefined8 param_2,int *param_3,uint param_4,uint param_5,code *param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  float local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined4 local_90 [2];
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  local_68 = 0x444f4d46;
  local_64 = 0;
  uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_68,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (local_68 != 0x444f4d46) {
    return 0x1f;
  }
  local_6c = *param_3;
  uVar1 = (*param_6)(param_2,local_6c,&local_64,&local_6c,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((param_5 & 1) == 0) {
    uVar10 = param_4 | param_5 ^ 1;
  }
  else {
    if (*param_3 != local_6c) {
      return 0x1f;
    }
    uVar10 = 1;
    if (((param_4 & 1) == 0) && (param_5 == 1)) {
      uVar10 = 0;
      goto LAB_1005d6840;
    }
  }
  local_70 = *(int *)(param_1 + 0x2c);
LAB_1005d6840:
  uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_70,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (uVar10 != 0) {
    local_74 = *(undefined4 *)(param_1 + 0x28);
    local_78 = *(undefined4 *)(param_1 + 0x20);
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_74,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_78,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  lVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x300,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                        ,0x56b,0,0);
  if (lVar2 == 0) {
    return 0x26;
  }
  if (((param_5 & 1) != 0) && (uVar1 = FUN_1005d560c(param_1,local_74,local_78), (int)uVar1 != 0)) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                  ,0x571);
    return uVar1;
  }
  if (0 < local_70) {
    lVar6 = 0;
    do {
      if (uVar10 != 0) {
        if (*(int *)(param_1 + 0x2c) <= lVar6) {
          if (lVar2 == 0) {
            return 0x1f;
          }
          uVar1 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
          uVar4 = 0x578;
          goto LAB_1005d6e68;
        }
        local_7c = (uint)*(ushort *)
                          ((long)*(int *)(*(long *)(param_1 + 0x30) + lVar6 * 4) +
                           *(long *)(param_1 + 0x40) + 0xb8);
      }
      uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_7c,4);
      if ((int)uVar1 != 0) {
        if (lVar2 != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                        ,0x57a);
          return uVar1;
        }
        return uVar1;
      }
      if (0x40 < (int)local_7c) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                      ,0x580);
        lVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x300,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                              ,0x581,0,0);
        if (lVar2 == 0) {
          return 0x26;
        }
      }
      if (0 < (int)local_7c) {
        lVar9 = 0;
        lVar7 = 0;
        do {
          if ((param_4 & 1) != 0) {
            if ((lVar2 + lVar9 != 0) && (lVar6 < *(int *)(param_1 + 0x2c))) {
              lVar5 = (long)*(int *)(*(long *)(param_1 + 0x30) + lVar6 * 4);
              if (lVar7 < (long)(ulong)*(ushort *)(lVar5 + *(long *)(param_1 + 0x40) + 0xb8)) {
                lVar5 = *(long *)(param_1 + 0x40) + lVar5 + lVar9;
                puVar3 = (undefined8 *)(lVar2 + lVar9);
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar5 + 0xc4);
                *puVar3 = *(undefined8 *)(lVar5 + 0xbc);
                goto LAB_1005d6a5c;
              }
            }
            if (lVar2 == 0) {
              return 0x1f;
            }
            uVar1 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
            uVar4 = 0x58b;
            goto LAB_1005d6e68;
          }
          puVar3 = (undefined8 *)(lVar2 + lVar7 * 0xc);
LAB_1005d6a5c:
          uVar1 = (*param_6)(param_2,*param_3,&local_64,puVar3,4);
          if ((int)uVar1 != 0) {
            if (lVar2 != 0) {
              FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                            ,0x58d);
              return uVar1;
            }
            return uVar1;
          }
          uVar1 = (*param_6)(param_2,*param_3,&local_64,lVar2 + lVar9 + 4,4);
          if ((int)uVar1 != 0) {
            if (lVar2 != 0) {
              FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                            ,0x58e);
              return uVar1;
            }
            return uVar1;
          }
          uVar1 = (*param_6)(param_2,*param_3,&local_64,lVar2 + lVar9 + 8,4);
          if ((int)uVar1 != 0) {
            if (lVar2 != 0) {
              FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                            ,0x58f);
              return uVar1;
            }
            return uVar1;
          }
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + 0xc;
        } while (lVar7 < (int)local_7c);
      }
      if (uVar10 == 0) {
        uVar8 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x2c) <= lVar6) {
          if (lVar2 == 0) {
            return 0x1f;
          }
          uVar1 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
          uVar4 = 0x597;
LAB_1005d6e68:
          FUN_1005d7f1c(uVar1,lVar2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                        ,uVar4);
          return 0x1f;
        }
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
        FUN_1005dbee4(uVar1);
        lVar7 = (long)*(int *)(*(long *)(param_1 + 0x30) + lVar6 * 4) + *(long *)(param_1 + 0x40);
        local_80 = *(undefined4 *)(lVar7 + 0xb0);
        local_84 = *(undefined4 *)(lVar7 + 0xb4);
        uVar8 = *(ushort *)(lVar7 + 0xba) & 1;
        FUN_1005dbf14(uVar1);
      }
      local_88 = uVar8;
      uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_80,4);
      if ((int)uVar1 != 0) {
        if (lVar2 != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                        ,0x59a);
          return uVar1;
        }
        return uVar1;
      }
      uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_84,4);
      if ((int)uVar1 != 0) {
        if (lVar2 != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                        ,0x59b);
          return uVar1;
        }
        return uVar1;
      }
      uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_88,4);
      if ((int)uVar1 != 0) {
        if (lVar2 != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                        ,0x59c);
          return uVar1;
        }
        return uVar1;
      }
      if ((param_5 != 0) &&
         (uVar1 = FUN_1005d5770(local_80,local_84,param_1,local_88 != 0,local_7c,lVar2,0),
         (int)uVar1 != 0)) {
        if (lVar2 != 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                        ,0x5a1);
          return uVar1;
        }
        return uVar1;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_70);
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_geometryi.cpp"
                ,0x5a5);
  if ((uVar10 & 1) != 0) {
    local_90[0] = *(undefined4 *)(param_1 + 0x7c);
    local_98 = *(undefined8 *)(param_1 + 0x74);
    local_a0[0] = *(undefined4 *)(param_1 + 0x88);
    local_a8 = *(undefined8 *)(param_1 + 0x80);
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_98,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,(ulong)&local_98 | 4,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,local_90,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_a8,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,(ulong)&local_a8 | 4,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,local_a0,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if ((param_5 != 0) && (uVar1 = FUN_1005d6014(param_1,&local_98,&local_a8), (int)uVar1 != 0)) {
    return uVar1;
  }
  if ((uVar10 & 1) != 0) {
    local_b0[0] = *(float *)(param_1 + 0x94);
    local_b8 = *(undefined8 *)(param_1 + 0x8c);
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_b8,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,(ulong)&local_b8 | 4,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = (*param_6)(param_2,*param_3,&local_64,local_b0,4);
  if ((int)uVar1 == 0) {
    if (param_5 != 0) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
      FUN_1005dbee4(uVar1);
      if (((*(float *)(param_1 + 0x8c) != (float)local_b8) ||
          (*(float *)(param_1 + 0x90) != local_b8._4_4_)) ||
         (*(float *)(param_1 + 0x94) != local_b0[0])) {
        *(float *)(param_1 + 0x94) = local_b0[0];
        *(undefined8 *)(param_1 + 0x8c) = local_b8;
        lVar2 = *(long *)(param_1 + 0x18);
        *(undefined1 *)(lVar2 + 8) = 1;
        if (*(char *)(param_1 + 0x138) == '\0') {
          *(undefined1 *)(param_1 + 0x138) = 1;
          *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(lVar2 + 0x1b8);
          *(long *)(lVar2 + 0x1b8) = param_1;
        }
      }
      FUN_1005dbf14(uVar1);
    }
    if ((uVar10 & 1) != 0) {
      local_c0[0] = *(undefined4 *)(param_1 + 0xa0);
      local_c8 = *(undefined8 *)(param_1 + 0x98);
    }
    uVar1 = (*param_6)(param_2,*param_3,&local_64,&local_c8,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = (*param_6)(param_2,*param_3,&local_64,(ulong)&local_c8 | 4,4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = (*param_6)(param_2,*param_3,&local_64,local_c0,4);
    if ((int)uVar1 == 0) {
      if (param_5 == 0) {
        if (param_4 == 0) {
          *param_3 = local_64;
          return 0;
        }
      }
      else {
        uVar1 = FUN_1005d6320(param_1,&local_c8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
      }
      if (*param_3 == local_64) {
        return 0;
      }
      return 0x1f;
    }
    return uVar1;
  }
  return uVar1;
}




undefined8 FUN_1005d70c8(long param_1,int param_2,int *param_3,void *param_4,int param_5)

{
  undefined8 uVar1;
  
  if (param_2 < *param_3 + param_5) {
    uVar1 = 0x1f;
  }
  else {
    _memcpy((void *)(param_1 + *param_3),param_4,(long)param_5);
    uVar1 = 0;
    *param_3 = *param_3 + param_5;
  }
  return uVar1;
}




undefined8
FUN_1005d7120(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5)

{
  *param_3 = *param_3 + param_5;
  return 0;
}




undefined8 FUN_1005d7134(long param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_34;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
  local_34 = param_3;
  FUN_1005dbee4(uVar2);
  if (param_2 == 0) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = FUN_1005d6748(param_1,param_2,&local_34,0,1,FUN_1005d71b4);
  }
  FUN_1005dbf14(uVar2);
  return uVar1;
}




undefined8 FUN_1005d71b4(long param_1,int param_2,int *param_3,void *param_4,int param_5)

{
  undefined8 uVar1;
  
  if (param_2 < *param_3 + param_5) {
    uVar1 = 0x1f;
  }
  else {
    _memcpy(param_4,(void *)(param_1 + *param_3),(long)param_5);
    uVar1 = 0;
    *param_3 = *param_3 + param_5;
  }
  return uVar1;
}




undefined8 FUN_1005d720c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 0;
}




undefined8 FUN_1005d7218(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x48);
    return 0;
  }
  return 0x1f;
}




void FUN_1005d723c(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = param_2[2];
  uVar3 = *(undefined8 *)param_2;
  fVar2 = param_2[5];
  pfVar5 = param_2 + 3;
  uVar4 = *(undefined8 *)pfVar5;
  fVar6 = *param_2 - *(float *)(param_1 + 0x8c);
  fVar7 = param_2[1] - *(float *)(param_1 + 0x90);
  fVar8 = param_2[2] - *(float *)(param_1 + 0x94);
  fVar9 = *pfVar5 - *(float *)(param_1 + 0x8c);
  fVar10 = param_2[4] - *(float *)(param_1 + 0x90);
  fVar11 = param_2[5] - *(float *)(param_1 + 0x94);
  *param_2 = fVar6 * *(float *)(param_1 + 0xd4) + fVar7 * *(float *)(param_1 + 0xd8) +
             fVar8 * *(float *)(param_1 + 0xdc);
  param_2[1] = fVar6 * *(float *)(param_1 + 0xe4) + fVar7 * *(float *)(param_1 + 0xe8) +
               fVar8 * *(float *)(param_1 + 0xec);
  param_2[2] = fVar6 * *(float *)(param_1 + 0xf4) + fVar7 * *(float *)(param_1 + 0xf8) +
               fVar8 * *(float *)(param_1 + 0xfc);
  *pfVar5 = fVar9 * *(float *)(param_1 + 0xd4) + fVar10 * *(float *)(param_1 + 0xd8) +
            fVar11 * *(float *)(param_1 + 0xdc);
  param_2[4] = fVar9 * *(float *)(param_1 + 0xe4) + fVar10 * *(float *)(param_1 + 0xe8) +
               fVar11 * *(float *)(param_1 + 0xec);
  param_2[5] = fVar9 * *(float *)(param_1 + 0xf4) + fVar10 * *(float *)(param_1 + 0xf8) +
               fVar11 * *(float *)(param_1 + 0xfc);
  FUN_1005db20c(param_1 + 0x110,FUN_1005d510c,param_2,param_2,pfVar5);
  param_2[2] = fVar1;
  *(undefined8 *)param_2 = uVar3;
  param_2[5] = fVar2;
  *(undefined8 *)pfVar5 = uVar4;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  return;
}




undefined8 FUN_1005d73b4(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x1a0);
  FUN_1005dbee4(uVar6);
  FUN_1005db1fc(param_1,param_2 + 0x110);
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar7 = 0;
    do {
      FUN_1005daacc(param_2 + 0x110,
                    *(long *)(param_2 + 0x40) +
                    (long)*(int *)(*(long *)(param_2 + 0x30) + lVar7 * 4));
      lVar7 = lVar7 + 1;
      iVar2 = *(int *)(param_2 + 0x2c);
    } while (lVar7 < iVar2);
    if (0 < iVar2) {
      lVar7 = 0;
      lVar3 = *(long *)(param_2 + 0x30);
      lVar4 = *(long *)(param_2 + 0x40);
      lVar5 = *(long *)(param_2 + 0x50);
      do {
        lVar1 = lVar4 + *(int *)(lVar3 + lVar7 * 4);
        *(long *)(lVar1 + 0x48) = lVar5;
        *(long *)(param_2 + 0x50) = lVar1;
        lVar7 = lVar7 + 1;
        lVar5 = lVar1;
      } while (lVar7 < iVar2);
    }
  }
  lVar7 = *(long *)(param_2 + 0x18);
  *(undefined1 *)(lVar7 + 8) = 1;
  if (*(char *)(param_2 + 0x138) == '\0') {
    *(undefined1 *)(param_2 + 0x138) = 1;
    *(undefined8 *)(param_2 + 0x130) = *(undefined8 *)(lVar7 + 0x1b8);
    *(long *)(lVar7 + 0x1b8) = param_2;
  }
  FUN_1005dbf14(uVar6);
  return 0;
}




void FUN_1005d74a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a0);
  FUN_1005dbee4(uVar1);
  FUN_1005daacc(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x1a8),*(undefined8 *)(param_1 + 0x108))
  ;
  FUN_1005dbf14(uVar1);
  return;
}




undefined8 FUN_1005d74e4(long param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    return 0x1f;
  }
  if (param_1 != 0) {
    *param_2 = param_1;
    return 0;
  }
  return 0x1e;
}




void FUN_1005d750c(long param_1)

{
  *(long *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x28) = param_1 + 0x28;
  *(undefined **)(param_1 + 0xd8) = &DAT_101e9aff8;
  DAT_101e9b6a0 = 0x100;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}




void FUN_1005d7538(undefined8 *param_1)

{
  *param_1 = PTR_DAT_10186d408;
  return;
}




void FUN_1005d7548(long param_1)

{
  *(long *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x28) = param_1 + 0x28;
  *(undefined **)(param_1 + 0xd8) = &DAT_101e9aff8;
  DAT_101e9b6a0 = 0x100;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return;
}




undefined8 FUN_1005d7574(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar1 = FUN_1005dbd48(param_1 + 0x14,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005dbd48(param_1 + 0x12,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005dbd48(param_1 + 0x16,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_1005db81c();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + 1;
  return 0;
}




undefined8 FUN_1005d75e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = *param_1;
  iVar2 = iVar1 + -1;
  *param_1 = iVar2;
  if (iVar1 < 1) {
    uVar3 = 0x1c;
  }
  else if (iVar2 == 0) {
    uVar3 = FUN_100579bec();
    if ((((int)uVar3 == 0) && (uVar3 = FUN_1005d0cdc(), (int)uVar3 == 0)) &&
       (uVar3 = FUN_1005db824(), (int)uVar3 == 0)) {
      if (*(long *)(param_1 + 0x16) != 0) {
        FUN_1005dbe84(*(long *)(param_1 + 0x16),0);
        param_1[0x16] = 0;
        param_1[0x17] = 0;
      }
      if (*(long *)(param_1 + 0x14) != 0) {
        FUN_1005dbe84(*(long *)(param_1 + 0x14),0);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
      }
      if (*(long *)(param_1 + 0x12) == 0) {
        uVar3 = 0;
      }
      else {
        FUN_1005dbe84(*(long *)(param_1 + 0x12),0);
        uVar3 = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




void FUN_1005d7680(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}




void FUN_1005d76ac(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}




void FUN_1005d76d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,param_2,param_3,0,0);
  return;
}




int * FUN_1005d7708(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                   int param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  char acStack_168 [256];
  long local_68;
  
  lVar12 = *(long *)PTR____stack_chk_guard_101444218;
  plVar1 = param_1 + 0xd4;
  lVar5 = param_1[0xd4];
  local_68 = lVar12;
  if (lVar5 == 0) {
    iVar4 = FUN_1005dbd48(plVar1,1);
    if (iVar4 != 0) {
      piVar11 = (int *)0x0;
      goto LAB_1005d79f4;
    }
    lVar5 = *plVar1;
  }
  FUN_1005dbee4(lVar5);
  if ((code *)param_1[0xd0] == (code *)0x0) {
    iVar4 = param_2;
    if ((char)param_1[0xca] == '\0') {
      piVar11 = (int *)FUN_100614e50(param_1[0xd3],(long)param_2);
      if (piVar11 != (int *)0x0) {
        iVar4 = FUN_10061754c(piVar11);
        goto LAB_1005d7918;
      }
    }
    else {
      iVar7 = (int)param_1[0xd5];
      iVar2 = 0;
      if (iVar7 != 0) {
        iVar2 = (param_2 + iVar7 + -1) / iVar7;
      }
      uVar6 = *(uint *)((long)param_1 + 0x674);
      iVar3 = (int)param_1[0xcc];
      iVar7 = 0;
      if (0 < iVar2 && (int)uVar6 < iVar3) {
        uVar8 = 1 << (ulong)(uVar6 & 7);
        iVar9 = (int)uVar6 >> 3;
LAB_1005d77fc:
        lVar5 = (long)iVar9;
        do {
          if (iVar3 <= (int)uVar6) break;
          lVar10 = *param_1;
          if ((*(byte *)(lVar10 + lVar5) & uVar8) == 0) {
            if (((uVar6 & 0x1f) != 0) || (*(int *)(lVar10 + lVar5) != -1)) {
              iVar7 = iVar7 + 1;
              goto LAB_1005d7860;
            }
            iVar7 = 0;
          }
          else {
            iVar7 = 0;
LAB_1005d7860:
            if (((uVar6 & 0x1f) != 0) || (*(int *)(lVar10 + lVar5) != -1)) goto LAB_1005d7870;
          }
          uVar6 = uVar6 + 0x20;
          if ((iVar3 <= (int)uVar6) || (lVar5 = lVar5 + 4, iVar2 <= iVar7)) break;
        } while( true );
      }
LAB_1005d7894:
      iVar3 = uVar6 - iVar2;
      if (iVar7 != iVar2) {
        iVar3 = -1;
      }
      if (-1 < iVar3) {
        FUN_1005d857c(param_1,iVar3,1);
        piVar11 = (int *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),8,
                                       "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_memory.cpp"
                                       ,0x2b0,0,0);
        if (piVar11 != (int *)0x0) {
          *piVar11 = param_2;
          piVar11[1] = iVar3;
          goto LAB_1005d7918;
        }
      }
    }
  }
  else {
    param_5 = *(uint *)(PTR_DAT_10186d408 + 0x24) & param_5;
    iVar4 = param_2 + 8;
    piVar11 = (int *)(*(code *)param_1[0xd0])(iVar4,param_5,0);
    if (piVar11 != (int *)0x0) {
      *piVar11 = iVar4;
      piVar11[1] = param_5;
      piVar11 = piVar11 + 2;
LAB_1005d7918:
      if ((param_5 >> 0x16 & 1) == 0) {
        uVar6 = *(int *)((long)param_1 + 0x664) + iVar4;
        *(uint *)((long)param_1 + 0x664) = uVar6;
        if (*(uint *)(param_1 + 0xcd) < uVar6) {
          *(uint *)(param_1 + 0xcd) = uVar6;
        }
      }
      else {
        uVar6 = (int)param_1[0xce] + iVar4;
        *(uint *)(param_1 + 0xce) = uVar6;
        if (*(uint *)((long)param_1 + 0x66c) < uVar6) {
          *(uint *)((long)param_1 + 0x66c) = uVar6;
        }
      }
      if ((piVar11 != (int *)0x0 && param_6 != 0) && (char)param_1[0xca] == '\0') {
        _bzero(piVar11,(long)param_2);
      }
      FUN_1005dbf14(*plVar1);
      goto LAB_1005d79f4;
    }
  }
  FUN_1005dbf14(*plVar1);
  if (*(long *)(PTR_DAT_10186d408 + 8) == 0) {
    piVar11 = (int *)0x0;
  }
  else if (((byte)PTR_DAT_10186d408[0x10] >> 2 & 1) == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    _sprintf(acStack_168,"%s (%d)");
    (**(code **)(PTR_DAT_10186d408 + 8))
              (0,4,acStack_168,(long)iVar4,*(undefined8 *)(PTR_DAT_10186d408 + 0x18));
    piVar11 = (int *)0x0;
  }
LAB_1005d79f4:
  if (lVar12 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar11;
LAB_1005d7870:
  uVar6 = uVar6 + 1;
  uVar8 = uVar8 << 1;
  iVar9 = (int)lVar5;
  if ((uVar6 & 7) == 0) {
    iVar9 = iVar9 + 1;
    uVar8 = 1;
  }
  if ((iVar3 <= (int)uVar6) || (iVar2 <= iVar7)) goto LAB_1005d7894;
  goto LAB_1005d77fc;
}




void FUN_1005d7a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,param_2,param_3,0,1);
  return;
}




void FUN_1005d7a5c(void)

{
  FUN_1005d7708();
  return;
}




void FUN_1005d7a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,param_2,param_3,param_4);
  return;
}




uint * FUN_1005d7a98(long *param_1,uint *param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                    )

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  char acStack_158 [256];
  long local_58;
  
  lVar12 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar12;
  if (param_2 == (uint *)0x0) {
    puVar7 = (uint *)FUN_1005d7708(param_1,param_3,param_4,param_5,0,0);
    return puVar7;
  }
  plVar1 = param_1 + 0xd4;
  lVar6 = param_1[0xd4];
  if (lVar6 == 0) {
    iVar4 = FUN_1005dbd48(plVar1,1);
    if (iVar4 != 0) {
      param_2 = (uint *)0x0;
      goto LAB_1005d7ed0;
    }
    lVar6 = *plVar1;
  }
  FUN_1005dbee4(lVar6);
  if ((param_1[0xd0] == 0) && ((char)param_1[0xca] == '\0')) {
    uVar5 = FUN_10061754c(param_2);
    uVar8 = 0;
  }
  else {
    uVar5 = param_2[-2];
    uVar8 = param_2[-1];
  }
  *(uint *)((long)param_1 + 0x664) = *(int *)((long)param_1 + 0x664) - uVar5;
  uVar11 = (uint)param_3;
  if ((code *)param_1[0xd1] == (code *)0x0) {
    if ((char)param_1[0xca] == '\0') {
      param_2 = (uint *)FUN_100616c8c(param_1[0xd3],param_2,(long)(int)uVar11);
      if (param_2 == (uint *)0x0) goto LAB_1005d7d18;
      param_3 = FUN_10061754c(param_2);
    }
    else {
      iVar4 = (int)param_1[0xd5];
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = (int)(iVar4 + -1 + uVar11) / iVar4;
      }
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = (int)(iVar4 + -1 + uVar5) / iVar4;
      }
      FUN_1005d857c(param_1,param_2[-1],0,iVar3);
      iVar4 = 0;
      uVar5 = param_2[-1];
      if (0 < iVar2) {
        iVar4 = 0;
        iVar3 = uVar5 + iVar2;
        uVar8 = 1 << (ulong)(uVar5 & 7);
        iVar9 = (int)uVar5 >> 3;
LAB_1005d7c08:
        lVar6 = (long)iVar9;
        do {
          if ((int)param_1[0xcc] <= (int)uVar5) break;
          lVar10 = *param_1;
          if ((*(byte *)(lVar10 + lVar6) & uVar8) == 0) {
            if (((uVar5 & 0x1f) != 0) || (*(int *)(lVar10 + lVar6) != -1)) {
              iVar4 = iVar4 + 1;
              goto LAB_1005d7c6c;
            }
            iVar4 = 0;
          }
          else {
            iVar4 = 0;
LAB_1005d7c6c:
            if (((uVar5 & 0x1f) != 0) || (*(int *)(lVar10 + lVar6) != -1)) goto LAB_1005d7c7c;
          }
          uVar5 = uVar5 + 0x20;
          if ((iVar3 <= (int)uVar5) || (lVar6 = lVar6 + 4, iVar2 <= iVar4)) break;
        } while( true );
      }
LAB_1005d7ca0:
      iVar3 = uVar5 - iVar2;
      if (iVar4 != iVar2) {
        iVar3 = -1;
      }
      if (iVar3 < 0) {
        iVar4 = 0;
        uVar5 = *(uint *)((long)param_1 + 0x674);
        if ((0 < iVar2) && (iVar3 = (int)param_1[0xcc], (int)uVar5 < iVar3)) {
          iVar4 = 0;
          uVar8 = 1 << (ulong)(uVar5 & 7);
          iVar9 = (int)uVar5 >> 3;
LAB_1005d7db8:
          lVar6 = (long)iVar9;
          do {
            if (iVar3 <= (int)uVar5) break;
            lVar10 = *param_1;
            if ((*(byte *)(lVar10 + lVar6) & uVar8) == 0) {
              if (((uVar5 & 0x1f) != 0) || (*(int *)(lVar10 + lVar6) != -1)) {
                iVar4 = iVar4 + 1;
                goto LAB_1005d7e1c;
              }
              iVar4 = 0;
            }
            else {
              iVar4 = 0;
LAB_1005d7e1c:
              if (((uVar5 & 0x1f) != 0) || (*(int *)(lVar10 + lVar6) != -1)) goto LAB_1005d7e2c;
            }
            uVar5 = uVar5 + 0x20;
            if ((iVar3 <= (int)uVar5) || (lVar6 = lVar6 + 4, iVar2 <= iVar4)) break;
          } while( true );
        }
LAB_1005d7e50:
        uVar5 = uVar5 - iVar2;
        if (iVar4 != iVar2) {
          uVar5 = 0xffffffff;
        }
        if (-1 < (int)uVar5) {
          FUN_1005d857c(param_1,uVar5,1,iVar2);
          if ((char)param_1[0xca] == '\0') {
            puVar7 = (uint *)(param_1[1] + (long)(int)param_1[0xd5] * (long)(int)uVar5);
            *puVar7 = uVar11;
            puVar7[1] = uVar5;
            _memmove(puVar7 + 2,param_2,(long)(int)param_2[-2]);
          }
          else {
            param_2[-2] = uVar11;
            param_2[-1] = uVar5;
          }
        }
      }
      else {
        FUN_1005d857c(param_1,iVar3,1,iVar2);
        *(int *)(param_1[1] + (long)(int)param_1[0xd5] * (long)iVar3 + 4) = iVar3;
      }
    }
  }
  else {
    uVar5 = *(uint *)(PTR_DAT_10186d408 + 0x24);
    param_3 = (ulong)(uVar11 + 8);
    param_2 = (uint *)(*(code *)param_1[0xd1])(param_2 + -2,param_3,uVar5 & uVar8,0);
    if (param_2 == (uint *)0x0) {
LAB_1005d7d18:
      FUN_1005dbf14(*plVar1);
      if (*(long *)(PTR_DAT_10186d408 + 8) == 0) {
        param_2 = (uint *)0x0;
      }
      else if (((byte)PTR_DAT_10186d408[0x10] >> 2 & 1) == 0) {
        param_2 = (uint *)0x0;
      }
      else {
        _sprintf(acStack_158,"%s (%d)");
        (**(code **)(PTR_DAT_10186d408 + 8))
                  (0,4,acStack_158,(long)(int)param_3,*(undefined8 *)(PTR_DAT_10186d408 + 0x18));
        param_2 = (uint *)0x0;
      }
      goto LAB_1005d7ed0;
    }
    *param_2 = uVar11 + 8;
    param_2[1] = uVar5 & uVar8;
    param_2 = param_2 + 2;
  }
  uVar5 = *(int *)((long)param_1 + 0x664) + (int)param_3;
  *(uint *)((long)param_1 + 0x664) = uVar5;
  if (*(uint *)(param_1 + 0xcd) < uVar5) {
    *(uint *)(param_1 + 0xcd) = uVar5;
  }
  FUN_1005dbf14(*plVar1);
LAB_1005d7ed0:
  if (lVar12 == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_1005d7c7c:
  uVar5 = uVar5 + 1;
  uVar8 = uVar8 << 1;
  iVar9 = (int)lVar6;
  if ((uVar5 & 7) == 0) {
    iVar9 = iVar9 + 1;
    uVar8 = 1;
  }
  if ((iVar3 <= (int)uVar5) || (iVar2 <= iVar4)) goto LAB_1005d7ca0;
  goto LAB_1005d7c08;
LAB_1005d7e2c:
  uVar5 = uVar5 + 1;
  uVar8 = uVar8 << 1;
  iVar9 = (int)lVar6;
  if ((uVar5 & 7) == 0) {
    iVar9 = iVar9 + 1;
    uVar8 = 1;
  }
  if ((iVar3 <= (int)uVar5) || (iVar2 <= iVar4)) goto LAB_1005d7e50;
  goto LAB_1005d7db8;
}




void FUN_1005d7f00(undefined8 param_1)

{
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1);
  return;
}




void FUN_1005d7f1c(long param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  do {
    plVar1 = (long *)(param_1 + 0x6a0);
    lVar4 = *(long *)(param_1 + 0x6a0);
    if (lVar4 == 0) {
      iVar3 = FUN_1005dbd48(plVar1,1);
      if (iVar3 != 0) {
        return;
      }
      lVar4 = *plVar1;
    }
    FUN_1005dbee4(lVar4);
    if (*(long *)(param_1 + 0x680) == 0) {
      if (*(char *)(param_1 + 0x650) == '\0') {
        iVar3 = FUN_10061754c(param_2);
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        iVar3 = *param_2;
      }
LAB_1005d7fb4:
      *(int *)(param_1 + 0x664) = *(int *)(param_1 + 0x664) - iVar3;
    }
    else {
      iVar3 = param_2[-2];
      uVar5 = param_2[-1];
      if ((uVar5 >> 0x16 & 1) == 0) goto LAB_1005d7fb4;
      *(int *)(param_1 + 0x670) = *(int *)(param_1 + 0x670) - iVar3;
    }
    if (*(code **)(param_1 + 0x690) == (code *)0x0) {
      if (*(char *)(param_1 + 0x650) == '\0') {
        FUN_1006165a0(*(undefined8 *)(param_1 + 0x698),param_2);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x6a8);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = (*param_2 + iVar3 + -1) / iVar3;
        }
        FUN_1005d857c(param_1,param_2[1],0,iVar2);
      }
    }
    else {
      (**(code **)(param_1 + 0x690))(param_2 + -2,*(uint *)(PTR_DAT_10186d408 + 0x24) & uVar5,0);
    }
    FUN_1005dbf14(*plVar1);
    if (*(char *)(param_1 + 0x650) == '\0') {
      return;
    }
    param_1 = *(long *)(PTR_DAT_10186d408 + 0xd8);
  } while( true );
}




void thunk_FUN_1005db82c(int param_1)

{
  _malloc((long)param_1);
  return;
}




void thunk_FUN_1005db834(void *param_1,int param_2)

{
  _realloc(param_1,(long)param_2);
  return;
}




void FUN_1005d8054(long param_1)

{
  *(undefined4 *)(param_1 + 0x664) = 0;
  *(code **)(param_1 + 0x680) = thunk_FUN_1005db82c;
  *(code **)(param_1 + 0x688) = thunk_FUN_1005db834;
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(code **)(param_1 + 0x690) = _free;
  *(undefined4 *)(param_1 + 0x66c) = 0;
  *(undefined1 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  return;
}




void FUN_1005d8098(long param_1)

{
  *(undefined4 *)(param_1 + 0x664) = 0;
  *(code **)(param_1 + 0x680) = thunk_FUN_1005db82c;
  *(code **)(param_1 + 0x688) = thunk_FUN_1005db834;
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(code **)(param_1 + 0x690) = _free;
  *(undefined4 *)(param_1 + 0x66c) = 0;
  *(undefined1 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  return;
}




undefined8 FUN_1005d80dc(undefined8 param_1)

{
  FUN_1005d8100();
  return param_1;
}




undefined8 FUN_1005d8100(long *param_1)

{
  long lVar1;
  
  if (((char)param_1[0xca] != '\0') && (*param_1 != 0)) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8));
  }
  lVar1 = 0;
  do {
    if (*(long *)((long)param_1 + lVar1 + 0x330) != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8));
      *(undefined8 *)((long)param_1 + lVar1 + 0x330) = 0;
      *(undefined8 *)((long)param_1 + lVar1 + 0x10) = 0;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 800);
  *(undefined8 *)((long)param_1 + 0x65c) = 0;
  *(undefined4 *)((long)param_1 + 0x664) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xd0] = (long)thunk_FUN_1005db82c;
  param_1[0xd1] = (long)thunk_FUN_1005db834;
  param_1[0xd2] = (long)_free;
  *(undefined1 *)(param_1 + 0xca) = 0;
  param_1[0xd3] = 0;
  if (param_1[0xd4] != 0) {
    FUN_1005dbe84(param_1[0xd4],(char)param_1[0xcb] == '\0');
    param_1[0xd4] = 0;
  }
  return 0;
}




undefined8 FUN_1005d81dc(undefined8 param_1)

{
  FUN_1005d8100();
  return param_1;
}




ulong FUN_1005d8200(int param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    uVar1 = *(ulong *)(param_2 + 0x678);
  }
  else if (param_1 < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    lVar3 = 0;
    do {
      if (*(long *)(param_2 + 0x330 + lVar3 * 8) == 0) {
        lVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1 + 0x10,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_memory.cpp"
                              ,0x99,*(undefined4 *)(param_2 + 0x654),0);
        if (lVar2 != 0) {
          lVar3 = (long)(int)lVar3 * 8;
          *(long *)(param_2 + 0x330 + lVar3) = lVar2;
          uVar1 = lVar2 + 0xfU & 0xfffffffffffffff0;
          *(ulong *)(param_2 + lVar3 + 0x10) = uVar1;
          *(ulong *)(param_2 + 0x678) = uVar1 + (long)param_1;
          return uVar1;
        }
        return 0xffffffffffffffff;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < 100);
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}




undefined8 FUN_1005d82c0(long param_1,long param_2,uint param_3,uint param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  FUN_1005d8100();
  *(int *)(param_1 + 0x654) = (int)param_5;
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar1 = *(ulong *)(param_1 + 0x678);
    }
    else {
      if ((int)param_3 < 0) {
        return 0x26;
      }
      lVar3 = 0;
      while (*(long *)(param_1 + 0x330 + lVar3 * 8) != 0) {
        lVar3 = lVar3 + 1;
        if (99 < lVar3) {
          return 0x26;
        }
      }
      lVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_3 + 0x10,
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_memory.cpp"
                            ,0x99,param_5,0);
      if (lVar2 == 0) {
        return 0x26;
      }
      lVar3 = param_1 + (long)(int)lVar3 * 8;
      *(long *)(lVar3 + 0x330) = lVar2;
      uVar1 = lVar2 + 0xfU & 0xfffffffffffffff0;
      *(ulong *)(lVar3 + 0x10) = uVar1;
      *(ulong *)(param_1 + 0x678) = uVar1 + (long)(int)param_3;
    }
    if (uVar1 == 0xffffffffffffffff) {
      return 0x26;
    }
    pcVar5 = FUN_1005d8200;
    lVar3 = param_1;
  }
  else {
    if (param_3 == 0) {
      return 0x26;
    }
    uVar1 = param_2 + 0xffU & 0xffffffffffffff00;
    param_3 = param_3 - ((int)uVar1 - (int)param_2) & 0xffffff00;
    pcVar5 = (code *)0x0;
    lVar3 = 0;
  }
  lVar3 = FUN_100614ca4(uVar1,(long)(int)param_3,0,pcVar5,lVar3);
  *(long *)(param_1 + 0x698) = lVar3;
  if (lVar3 == 0) {
    return 0x26;
  }
  *(undefined4 *)(param_1 + 0x674) = 0;
  *(undefined8 *)(param_1 + 0x66c) = 0;
  *(undefined8 *)(param_1 + 0x664) = 0;
  *(char *)(param_1 + 0x658) = (char)param_4;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x680) = 0;
  uVar4 = FUN_1005dbd48(param_1 + 0x6a0,param_4 ^ 1);
  return uVar4;
}




undefined8 FUN_1005d841c(long *param_1,long param_2,int param_3,int param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_3 != 0) {
    FUN_1005d8100(param_1);
    *(int *)(param_1 + 0xd5) = param_4;
    uVar3 = 0;
    if (param_4 != 0) {
      uVar3 = (param_3 + param_4 + -1) / param_4;
    }
    uVar3 = uVar3 & 0xfffffffc;
    *(uint *)(param_1 + 0xcc) = uVar3;
    *(uint *)((long)param_1 + 0x65c) = uVar3 * param_4;
    iVar5 = uVar3 + 0xe;
    if (-1 < (int)(uVar3 + 7)) {
      iVar5 = uVar3 + 7;
    }
    pvVar1 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar5 >> 3,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_memory.cpp"
                                   ,0x122,0,0);
    *param_1 = (long)pvVar1;
    if (pvVar1 != (void *)0x0) {
      param_1[1] = param_2;
      uVar6 = *(uint *)(param_1 + 0xcc);
      uVar3 = uVar6 + 7;
      if (-1 < (int)uVar6) {
        uVar3 = uVar6;
      }
      if (uVar6 + 7 < 0xf) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)uVar3 >> 3;
        _bzero(pvVar1,(long)iVar5);
        uVar6 = uVar6 + iVar5 * -8;
      }
      if ((uVar6 & 0x1f) != 0) {
        iVar4 = -(uVar6 & 0x1f);
        uVar3 = 0;
        do {
          *(byte *)(*param_1 + (long)iVar5) =
               *(byte *)(*param_1 + (long)iVar5) & ((byte)(1 << (ulong)(uVar3 & 0x1f)) ^ 0xff);
          if (6 < (int)uVar3) {
            iVar5 = iVar5 + 1;
          }
          uVar6 = 0;
          if ((int)uVar3 < 7) {
            uVar6 = uVar3 + 1;
          }
          iVar4 = iVar4 + 1;
          uVar3 = uVar6;
        } while (iVar4 != 0);
      }
      if (0 < *(int *)((long)param_1 + 0x674)) {
        *(undefined4 *)((long)param_1 + 0x674) = 0;
      }
      *(undefined4 *)(param_1 + 0xcd) = 0;
      *(undefined4 *)((long)param_1 + 0x674) = 0;
      *(undefined4 *)((long)param_1 + 0x664) = 0;
      *(undefined1 *)(param_1 + 0xca) = 1;
      param_1[0xd2] = 0;
      param_1[0xd1] = 0;
      param_1[0xd0] = 0;
      uVar2 = FUN_1005dbd48(param_1 + 0xd4,0);
      return uVar2;
    }
  }
  return 0x26;
}




void FUN_1005d857c(long *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  uVar11 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar11 = param_2;
  }
  iVar9 = (int)uVar11 >> 3;
  uVar11 = param_2 & 7;
  uVar10 = param_4;
  if ((param_2 & 0x1f) != 0) {
    uVar1 = 0x20 - (param_2 & 0x1f);
    uVar3 = param_4;
    if ((int)uVar1 <= (int)param_4) {
      uVar3 = uVar1;
    }
    if (uVar3 != 0) {
      uVar10 = (param_2 & 0x1f) - 0x21;
      if ((int)uVar10 < (int)~param_4) {
        uVar10 = ~param_4;
      }
      iVar2 = uVar10 + 1;
      uVar10 = uVar11;
      do {
        lVar6 = (long)iVar9;
        bVar4 = (byte)(1 << (ulong)(uVar10 & 0x1f));
        if (param_3 == 0) {
          lVar7 = *param_1;
          bVar4 = *(byte *)(lVar7 + lVar6) & (bVar4 ^ 0xff);
        }
        else {
          lVar7 = *param_1;
          bVar4 = *(byte *)(lVar7 + lVar6) | bVar4;
        }
        *(byte *)(lVar7 + lVar6) = bVar4;
        if (6 < (int)uVar10) {
          iVar9 = iVar9 + 1;
        }
        uVar11 = 0;
        if ((int)uVar10 < 7) {
          uVar11 = uVar10 + 1;
        }
        iVar2 = iVar2 + 1;
        uVar10 = uVar11;
      } while (iVar2 != 0);
      uVar10 = param_4 - uVar3;
    }
  }
  uVar3 = uVar10 + 7;
  if (-1 < (int)uVar10) {
    uVar3 = uVar10;
  }
  if (0xe < uVar10 + 7) {
    iVar2 = (int)uVar3 >> 3;
    _memset((void *)(*param_1 + (long)iVar9),-(uint)(param_3 != 0),(long)iVar2);
    iVar9 = iVar2 + iVar9;
    uVar10 = uVar10 + iVar2 * -8;
  }
  if ((uVar10 & 0x1f) != 0) {
    iVar2 = -(uVar10 & 0x1f);
    do {
      lVar6 = (long)iVar9;
      bVar4 = (byte)(1 << (ulong)(uVar11 & 0x1f));
      if (param_3 == 0) {
        lVar7 = *param_1;
        bVar4 = *(byte *)(lVar7 + lVar6) & (bVar4 ^ 0xff);
      }
      else {
        lVar7 = *param_1;
        bVar4 = *(byte *)(lVar7 + lVar6) | bVar4;
      }
      *(byte *)(lVar7 + lVar6) = bVar4;
      if (6 < (int)uVar11) {
        iVar9 = iVar9 + 1;
      }
      uVar10 = 0;
      if ((int)uVar11 < 7) {
        uVar10 = uVar11 + 1;
      }
      iVar2 = iVar2 + 1;
      uVar11 = uVar10;
    } while (iVar2 != 0);
  }
  uVar11 = *(uint *)((long)param_1 + 0x674);
  if (param_3 == 0) {
    if ((int)param_2 < (int)uVar11) {
      *(uint *)((long)param_1 + 0x674) = param_2;
    }
  }
  else {
    if (uVar11 == param_2) {
      uVar11 = param_4 + param_2;
      *(uint *)((long)param_1 + 0x674) = uVar11;
    }
    uVar10 = uVar11 + 7;
    if (-1 < (int)uVar11) {
      uVar10 = uVar11;
    }
    uVar3 = 1 << (ulong)(uVar11 & 7);
    if ((*(byte *)(*param_1 + (long)((int)uVar10 >> 3)) & uVar3) != 0) {
      iVar9 = (int)param_1[0xcc];
      if ((int)uVar11 < iVar9) {
        iVar5 = 0;
        iVar2 = (int)uVar11 >> 3;
LAB_1005d8728:
        pbVar8 = (byte *)(*param_1 + (long)iVar2);
        do {
          if (iVar9 <= (int)uVar11) goto LAB_1005d87d8;
          if ((*pbVar8 & uVar3) == 0) {
            if (((uVar11 & 0x1f) != 0) || (*(int *)pbVar8 != -1)) {
              iVar5 = iVar5 + 1;
              goto LAB_1005d878c;
            }
            iVar5 = 0;
          }
          else {
            iVar5 = 0;
LAB_1005d878c:
            if (((uVar11 & 0x1f) != 0) || (*(int *)pbVar8 != -1)) goto LAB_1005d879c;
          }
          uVar11 = uVar11 + 0x20;
          if (iVar9 <= (int)uVar11) goto LAB_1005d87d8;
          iVar2 = iVar2 + 4;
          pbVar8 = pbVar8 + 4;
          if (0 < iVar5) goto LAB_1005d87d8;
        } while( true );
      }
      iVar5 = 0;
LAB_1005d87d8:
      iVar9 = uVar11 - 1;
      if (iVar5 != 1) {
        iVar9 = -1;
      }
      *(int *)((long)param_1 + 0x674) = iVar9;
    }
  }
  return;
LAB_1005d879c:
  uVar11 = uVar11 + 1;
  uVar3 = uVar3 << 1;
  if ((uVar11 & 7) == 0) {
    iVar2 = iVar2 + 1;
    uVar3 = 1;
  }
  if ((iVar9 <= (int)uVar11) || (0 < iVar5)) goto LAB_1005d87d8;
  goto LAB_1005d8728;
}




undefined8
FUN_1005d8804(long param_1,undefined4 param_2,undefined8 param_3,void *param_4,uint param_5,
             uint param_6)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_1005ed2f4(param_3);
  *(long *)(param_1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    uVar4 = 0x26;
  }
  else {
    if ((param_6 == 3) || (param_6 == 6)) {
      uVar1 = param_5 + 1;
    }
    else {
      uVar1 = param_5 + 2;
      if ((param_6 & 0xfffffffe) != 4) {
        uVar1 = param_5;
      }
    }
    pvVar3 = (void *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar1,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                                   ,0x2f,0);
    *(void **)(param_1 + 0x28) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0x26;
    }
    else {
      _memcpy(pvVar3,param_4,(ulong)param_5);
      uVar4 = 0;
      *(uint *)(param_1 + 0x38) = uVar1;
      *(undefined4 *)(param_1 + 0x18) = param_2;
      *(uint *)(param_1 + 0x1c) = param_6;
      *(undefined1 *)(param_1 + 0x3c) = 1;
      *(undefined1 *)(param_1 + 0x3d) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  return uVar4;
}




undefined8 FUN_1005d88e0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x20),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                  ,0x50);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x28),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                  ,0x58);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                ,0x5c);
  return 0;
}




undefined8 FUN_1005d897c(long param_1,void *param_2,ulong param_3)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x28);
  if ((*(int *)(param_1 + 0x38) != (int)param_3) ||
     (iVar1 = _memcmp(pvVar2,param_2,param_3 & 0xffffffff), iVar1 != 0)) {
    if (pvVar2 != (void *)0x0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),pvVar2,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                    ,0x7d);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    pvVar2 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_3,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                                   ,0x81,0,0);
    *(void **)(param_1 + 0x28) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0x26;
    }
    _memcpy(pvVar2,param_2,param_3 & 0xffffffff);
    *(int *)(param_1 + 0x38) = (int)param_3;
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return 0;
}




undefined8 FUN_1005d8a58(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  while (plVar3 != param_1) {
    plVar1 = (long *)*plVar3;
    puVar2 = (undefined8 *)plVar3[1];
    *puVar2 = plVar1;
    *(undefined8 **)(*plVar3 + 8) = puVar2;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    if (plVar3[4] != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar3[4],
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                    ,0x50);
      plVar3[4] = 0;
    }
    if (plVar3[5] != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar3[5],
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                    ,0x58);
      plVar3[5] = 0;
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar3,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                  ,0x5c);
    plVar3 = plVar1;
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                ,0xa6);
  return 0;
}




undefined8 FUN_1005d8b40(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  for (puVar3 = (undefined8 *)*param_1; puVar3 != param_1; puVar3 = (undefined8 *)*puVar3) {
    iVar2 = iVar2 + 1;
    iVar1 = (uint)*(byte *)((long)puVar3 + 0x3c) + iVar1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return 0;
}




undefined8 FUN_1005d8b80(long *param_1,long param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (param_3 < 0) {
    if (param_2 == 0) {
      if (plVar5 == param_1) {
        uVar4 = 0x3f;
      }
      else {
        do {
          if (*(char *)((long)plVar5 + 0x3c) != '\0') goto LAB_1005d8c88;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != param_1);
        uVar4 = 0x3f;
      }
    }
    else if (plVar5 == param_1) {
      uVar4 = 0x3f;
    }
    else {
      do {
        if ((*(char *)((long)plVar5 + 0x3c) != '\0') &&
           (iVar3 = FUN_1005ed0c8(plVar5[4],param_2), iVar3 == 0)) goto LAB_1005d8c88;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != param_1);
      uVar4 = 0x3f;
    }
  }
  else if (param_2 == 0) {
    if (plVar5 == param_1) {
      uVar4 = 0x3f;
    }
    else {
      if (0 < param_3) {
        param_3 = param_3 + 1;
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == param_1) {
            return 0x3f;
          }
          param_3 = param_3 + -1;
        } while (1 < param_3);
      }
      if (plVar5 == (long *)0x0) {
        uVar4 = 0x3f;
      }
      else {
LAB_1005d8c88:
        *param_4 = (int)plVar5[3];
        param_4[1] = *(undefined4 *)((long)plVar5 + 0x1c);
        *(long *)(param_4 + 2) = plVar5[4];
        *(long *)(param_4 + 4) = plVar5[5];
        param_4[6] = (int)plVar5[7];
        bVar1 = *(byte *)((long)plVar5 + 0x3c);
        param_4[7] = (uint)bVar1;
        uVar4 = 0;
        if (bVar1 != 0) {
          *(undefined1 *)((long)plVar5 + 0x3c) = 0;
        }
      }
    }
  }
  else if (plVar5 == param_1) {
    uVar4 = 0x3f;
  }
  else {
    iVar3 = 0;
    do {
      iVar2 = FUN_1005ed0c8(plVar5[4],param_2);
      if (iVar2 == 0) {
        if (iVar3 == param_3) goto LAB_1005d8c88;
        iVar3 = iVar3 + 1;
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != param_1);
    uVar4 = 0x3f;
  }
  return uVar4;
}




undefined8 FUN_1005d8cf8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)*param_2;
joined_r0x0001005d8d20:
  do {
    if (plVar2 == param_2) {
      return 0;
    }
    plVar1 = (long *)*plVar2;
    puVar4 = (undefined8 *)plVar2[1];
    *puVar4 = plVar1;
    *(undefined8 **)(*plVar2 + 8) = puVar4;
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    if (*(char *)((long)plVar2 + 0x3d) != '\0') {
      for (puVar4 = (undefined8 *)*param_1; puVar4 != param_1; puVar4 = (undefined8 *)*puVar4) {
        iVar3 = FUN_1005ed0c8(puVar4[4],plVar2[4]);
        if (iVar3 == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            FUN_1005d897c(puVar4,plVar2[5],(int)plVar2[7]);
            if (plVar2[4] != 0) {
              FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar2[4],
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                            ,0x50);
              plVar2[4] = 0;
            }
            if (plVar2[5] != 0) {
              FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar2[5],
                            "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                            ,0x58);
              plVar2[5] = 0;
            }
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar2,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                          ,0x5c);
            plVar2 = plVar1;
            goto joined_r0x0001005d8d20;
          }
          break;
        }
      }
    }
    plVar2[1] = param_1[1];
    *plVar2 = (long)param_1;
    param_1[1] = plVar2;
    *(long **)plVar2[1] = plVar2;
    plVar2 = plVar1;
  } while( true );
}




undefined8 FUN_1005d8e28(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *param_2 = param_1;
  param_2[1] = lVar1;
  *(long **)(param_1 + 8) = param_2;
  *(long **)param_2[1] = param_2;
  return 0;
}




undefined8
FUN_1005d8e44(long *param_1,int param_2,undefined8 param_3,void *param_4,ulong param_5,uint param_6,
             int param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  
  if (param_7 != 0) {
    for (plVar6 = (long *)*param_1; plVar6 != param_1; plVar6 = (long *)*plVar6) {
      iVar2 = FUN_1005ed0c8(plVar6[4],param_3);
      if ((iVar2 == 0) && ((int)plVar6[3] == param_2)) {
        uVar3 = FUN_1005d897c(plVar6,param_4,param_5);
        goto LAB_1005d8fc0;
      }
    }
  }
  plVar6 = (long *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x48,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                                 ,0x1c2,0,0);
  *plVar6 = (long)plVar6;
  plVar6[1] = (long)plVar6;
  *(undefined4 *)(plVar6 + 7) = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[2] = 0;
  *(undefined1 *)((long)plVar6 + 0x3c) = 1;
  *(undefined1 *)((long)plVar6 + 0x3d) = 0;
  *(undefined4 *)(plVar6 + 8) = 0;
  if (plVar6 == (long *)0x0) {
    uVar3 = 0x26;
  }
  else {
    lVar4 = FUN_1005ed2f4(param_3);
    plVar6[4] = lVar4;
    if (lVar4 != 0) {
      iVar2 = (int)param_5;
      if ((param_6 == 3) || (param_6 == 6)) {
        iVar1 = iVar2 + 1;
      }
      else {
        iVar1 = iVar2 + 2;
        if ((param_6 & 0xfffffffe) != 4) {
          iVar1 = iVar2;
        }
      }
      pvVar5 = (void *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar1,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_metadata.cpp"
                                     ,0x2f,0);
      plVar6[5] = (long)pvVar5;
      if (pvVar5 != (void *)0x0) {
        _memcpy(pvVar5,param_4,param_5 & 0xffffffff);
        *(int *)(plVar6 + 7) = iVar1;
        *(int *)(plVar6 + 3) = param_2;
        *(uint *)((long)plVar6 + 0x1c) = param_6;
        *(undefined1 *)((long)plVar6 + 0x3c) = 1;
        *(undefined1 *)((long)plVar6 + 0x3d) = 0;
        *(undefined4 *)(plVar6 + 8) = 0;
      }
    }
    uVar3 = 0;
    lVar4 = param_1[1];
    *plVar6 = (long)param_1;
    plVar6[1] = lVar4;
    param_1[1] = (long)plVar6;
    *(long **)plVar6[1] = plVar6;
LAB_1005d8fc0:
    if (param_7 != 0) {
      *(undefined1 *)((long)plVar6 + 0x3d) = 1;
    }
  }
  return uVar3;
}




undefined8 FUN_1005d8fe8(long param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  
  FUN_1005d9258();
  *(undefined4 *)(param_1 + 0x968) = 0;
  *(uint *)(param_1 + 0xcf8) = (uint)*(byte *)(param_1 + 0xa00);
  *(undefined4 *)(param_1 + 0xd08) = *(undefined4 *)(param_1 + 0x978);
  *(undefined4 *)(param_1 + 0xd04) = 0;
  *(undefined4 *)(param_1 + 0x970) = 0;
  *(undefined1 *)(param_1 + 0xd01) = 0;
  *(undefined8 *)(param_1 + 0xd20) = 0;
  *(undefined8 *)(param_1 + 0xd18) = 0;
  *(undefined8 *)(param_1 + 0xd10) = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x974) = 1;
    lVar5 = *(long *)(param_1 + 0x48);
    uVar3 = *(uint *)(lVar5 + 0x15de8) ^ *(uint *)(lVar5 + 0x15de8) << 0xb;
    *(undefined4 *)(lVar5 + 0x15de8) = *(undefined4 *)(lVar5 + 0x15dec);
    *(undefined4 *)(lVar5 + 0x15dec) = *(undefined4 *)(lVar5 + 0x15df0);
    uVar4 = *(uint *)(lVar5 + 0x15df4);
    *(uint *)(lVar5 + 0x15df0) = uVar4;
    uVar3 = uVar3 ^ uVar3 >> 8 ^ uVar4 ^ uVar4 >> 0x13;
    *(uint *)(lVar5 + 0x15df4) = uVar3;
    *(uint *)(param_1 + 0xd28) = uVar3;
    *(uint *)(param_1 + 0xd2c) = ~uVar3;
    *(uint *)(param_1 + 0xd30) = uVar3 * 0x2220c267;
    *(uint *)(param_1 + 0xd34) = ~uVar3 * -0x57dea137;
  }
  FUN_10057f888(param_1 + 0x710);
  *(undefined8 *)(param_1 + 0x958) = 0;
  *(undefined8 *)(param_1 + 0x940) = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x950) = 0;
  *(undefined4 *)(param_1 + 0x740) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8f8) = 0x1010101;
  if (*(void **)(param_1 + 0x2a8) != (void *)0x0) {
    _bzero(*(void **)(param_1 + 0x2a8),(long)*(int *)(param_1 + 0xa04) << 8);
  }
  iVar2 = 1;
  if (0 < *(int *)(param_1 + 0x97c)) {
    iVar2 = *(int *)(param_1 + 0x97c);
  }
  *(int *)(param_1 + 0xd0c) = iVar2;
  fVar8 = (((float)iVar2 + (float)iVar2) / 5.0) * *(float *)(param_1 + 0xcec);
  if (0.01 <= fVar8) {
    *(int *)(param_1 + 0x96c) = (int)((float)*(int *)(*(long *)(param_1 + 8) + 0x108) / fVar8);
  }
  if (0 < *(int *)(param_1 + 0x4e0)) {
    lVar5 = 0;
    do {
      plVar6 = *(long **)(param_1 + lVar5 * 8 + 0x4e8);
      lVar7 = plVar6[0x6b];
      _bzero(plVar6,0x398);
      FUN_100583c48(plVar6 + 5);
      plVar6[1] = (long)(plVar6 + 1);
      plVar6[2] = (long)(plVar6 + 1);
      plVar6[3] = 0;
      *plVar6 = param_1;
      *(uint *)((long)plVar6 + 0x354) = (uint)*(byte *)(param_1 + lVar5 + 0x9c0);
      *(uint *)(plVar6 + 0x69) = (uint)*(byte *)(param_1 + lVar5 + 0x980);
      if (param_2 == 0) {
        *(int *)(plVar6 + 0x6b) = (int)lVar7;
      }
      else {
        *(undefined4 *)(plVar6 + 0x6b) = 0x3f800000;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x4e0));
  }
  if (0 < *(int *)(param_1 + 0x6e8)) {
    lVar7 = 0;
    lVar5 = 0;
    do {
      pvVar1 = (void *)(*(long *)(param_1 + 0x6f0) + lVar7);
      _bzero(pvVar1,0x330);
      FUN_100583c48((long)pvVar1 + 0x20);
      FUN_100583b48();
      *(undefined4 *)((long)pvVar1 + 0x200) = 1000;
      *(int *)((long)pvVar1 + 0x1a8) = (int)lVar5;
      *(undefined8 *)((long)pvVar1 + 0x28) = *(undefined8 *)(param_1 + 0x48);
      *(int *)((long)pvVar1 + 0x18) = (int)lVar5;
      *(long *)((long)pvVar1 + 0x298) = param_1;
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x330;
    } while (lVar5 < *(int *)(param_1 + 0x6e8));
  }
  *(undefined1 *)(param_1 + 0xd00) = 1;
  return 0;
}




undefined8 FUN_1005d9258(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char local_51;
  
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    FUN_10057097c(lVar3,1);
  }
  *(undefined2 *)(param_1 + 0xd00) = 0x100;
  iVar2 = *(int *)(param_1 + 0x4e0);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + lVar4 * 8 + 0x4e8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 8);
        plVar7 = (long *)*plVar6;
        if (plVar7 != (long *)0x0) {
          while ((plVar7 != plVar6 || (*(long **)(lVar5 + 0x10) != plVar6))) {
            plVar1 = plVar7 + 4;
            if (*(long *)(param_1 + 0x708) != 0) {
              (**(code **)(*plVar1 + 0x110))
                        (plVar1,*(undefined8 *)
                                 (*(long *)(param_1 + 0x708) + (long)(int)plVar7[0x35] * 8));
            }
            FUN_100582560(plVar1,0);
            plVar7[0x36] = 0;
            local_51 = '\0';
            FUN_1005852c4(plVar1,&local_51);
            if (local_51 == '\0') {
              FUN_100582560(plVar1,0);
              if (*(long *)(plVar7[0x53] + 0x708) != 0) {
                (**(code **)(plVar7[4] + 0x110))
                          (plVar1,*(undefined8 *)
                                   (*(long *)(plVar7[0x53] + 0x708) + (long)(int)plVar7[0x35] * 8));
              }
              *(undefined1 *)((long)plVar7 + 0x2a4) = 0;
              plVar1 = (long *)plVar7[1];
              *plVar1 = *plVar7;
              *(long **)(*plVar7 + 8) = plVar1;
              *plVar7 = (long)plVar7;
              plVar7[1] = (long)plVar7;
              *(undefined1 *)((long)plVar7 + 0x1c) = 0;
            }
            plVar7 = (long *)*plVar6;
          }
          iVar2 = *(int *)(param_1 + 0x4e0);
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  if (lVar3 != 0) {
    FUN_100570990(lVar3,1);
  }
  return 0;
}




undefined8 FUN_1005d93c8(long param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = 1;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0xd0c) = iVar1;
  fVar2 = (((float)iVar1 + (float)iVar1) / 5.0) * *(float *)(param_1 + 0xcec);
  if (0.01 <= fVar2) {
    *(int *)(param_1 + 0x96c) = (int)((float)*(int *)(*(long *)(param_1 + 8) + 0x108) / fVar2);
  }
  return 0;
}




undefined8 FUN_1005d9420(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x6e8) < 1) {
    return 0x1c;
  }
  lVar2 = 0;
  lVar3 = *(long *)(param_1 + 0x6f0);
  pcVar4 = (char *)(lVar3 + 0x1c);
  do {
    if (*pcVar4 == '\0') {
      plVar1 = (long *)(lVar3 + lVar2 * 0x330);
      *pcVar4 = '\x01';
      if (plVar1 != (long *)0x0) {
        lVar3 = lVar3 + lVar2 * 0x330;
        lVar2 = *(long *)(param_2 + 8);
        *plVar1 = lVar2;
        *(long **)(lVar3 + 8) = (long *)(param_2 + 8);
        *(long **)(lVar2 + 8) = plVar1;
        **(long **)(lVar3 + 8) = (long)plVar1;
        *(undefined4 *)(lVar3 + 0x2d8) = 0x40;
        *(undefined4 *)(lVar3 + 0x2d4) = 0x400000;
        *(undefined4 *)(lVar3 + 0x2f0) = 0x80;
        *(undefined1 *)(lVar3 + 0x2a3) = 0;
        *(undefined4 *)(lVar3 + 0x2cc) = 0;
        *(undefined4 *)(lVar3 + 0x2d0) = 0;
        *(undefined4 *)(lVar3 + 0x2dc) = 0;
        *(undefined1 *)(lVar3 + 0x2e0) = 0;
        *(undefined4 *)(lVar3 + 0x2e4) = 0;
        *(undefined4 *)(lVar3 + 0x2e8) = 0;
        *(undefined4 *)(lVar3 + 0x2ec) = 0x800000;
        *(undefined4 *)(lVar3 + 0x2f4) = 0;
        *(undefined1 *)(lVar3 + 0x2f8) = 0;
        *(undefined8 *)(lVar3 + 0x309) = 0;
        *(undefined8 *)(lVar3 + 0x304) = 0;
        *(undefined8 *)(lVar3 + 0x2fc) = 0;
        *(undefined4 *)(lVar3 + 0x318) = 0x400;
        if (param_4 != (long *)0x0) {
          *param_4 = (long)plVar1;
        }
        return 0;
      }
      return 0x1c;
    }
    lVar2 = lVar2 + 1;
    pcVar4 = pcVar4 + 0x330;
  } while (lVar2 < *(int *)(param_1 + 0x6e8));
  return 0x1c;
}




undefined8 FUN_1005d9514(long *param_1)

{
  long *plVar1;
  char local_21;
  
  local_21 = '\0';
  plVar1 = param_1 + 4;
  FUN_1005852c4(plVar1,&local_21);
  if (local_21 == '\0') {
    FUN_100582560(plVar1,0);
    if (*(long *)(param_1[0x53] + 0x708) != 0) {
      (**(code **)(param_1[4] + 0x110))
                (plVar1,*(undefined8 *)
                         (*(long *)(param_1[0x53] + 0x708) + (long)(int)param_1[0x35] * 8));
    }
    *(undefined1 *)((long)param_1 + 0x2a4) = 0;
    plVar1 = (long *)param_1[1];
    *plVar1 = *param_1;
    *(long **)(*param_1 + 8) = plVar1;
    *param_1 = (long)param_1;
    param_1[1] = (long)param_1;
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
  }
  return 0;
}




undefined8 FUN_1005d95a4(long param_1,undefined8 *param_2,long param_3,int param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long local_60;
  long *local_58;
  
  local_58 = *(long **)(param_3 + 0x1b0);
  iVar3 = *(int *)(param_3 + 0x18);
  if (*(char *)(param_3 + 0x1d) != '\0') {
    iVar3 = *(int *)(param_1 + 0x6e8) + iVar3;
  }
  uVar4 = FUN_100585ab0(*(undefined8 *)(param_1 + 0x6f8),&local_58,iVar3,1,0,0);
  if ((int)uVar4 == 0) {
    if (*(long *)(param_1 + 0x700) != 0) {
      *(byte *)(param_3 + 0x1d) = *(byte *)(param_3 + 0x1d) ^ 1;
    }
    plVar1 = (long *)(param_3 + 0x20);
    if (*(long *)(param_3 + 0x1b0) != 0) {
      FUN_1005847b8(0,plVar1,0);
    }
    *(long **)(param_3 + 0x1b0) = local_58;
    *(uint *)((long)local_58 + 0x5c) = *(uint *)((long)local_58 + 0x5c) | 0x10000;
    iVar3 = (**(code **)(*(long *)(param_3 + 0x20) + 0x1f8))(plVar1,&local_60,0,0,0);
    if (iVar3 == 0 && local_60 != 0) {
      *(ushort *)(local_60 + 0x3c) = *(ushort *)(local_60 + 0x3c) | 0x400;
    }
    uVar4 = (**(code **)(*local_58 + 0x68))();
    if ((int)uVar4 == 0) {
      lVar2 = param_1 + 0x710;
      if (param_5 != 0) {
        lVar2 = param_5;
      }
      *(long *)(param_3 + 0x40) = lVar2;
      uVar4 = FUN_1005828e0(plVar1,*param_2,lVar2,1,1,0);
      if ((int)uVar4 == 0) {
        if (*(int *)(param_3 + 0x2c0) != 0) {
          FUN_100583820(plVar1,*(int *)(param_3 + 0x2c0),2);
          *(undefined4 *)(param_3 + 0x2c0) = 0;
        }
        if ((*(long *)(param_1 + 0x708) != 0) &&
           ((**(code **)(*(long *)(param_3 + 0x20) + 0x110))
                      (plVar1,*(undefined8 *)
                               (*(long *)(param_1 + 0x708) + (long)*(int *)(param_3 + 0x1a8) * 8)),
           param_4 != 0)) {
          (**(code **)(*(long *)(param_3 + 0x20) + 0x108))
                    (plVar1,0xfffffffc,
                     *(undefined8 *)
                      (*(long *)(param_1 + 0x708) + (long)*(int *)(param_3 + 0x1a8) * 8));
        }
        uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
      else {
        FUN_100582560(plVar1,0);
      }
    }
  }
  return uVar4;
}




undefined8 FUN_1005d977c(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x1f;
  }
  if ((uint)param_2 < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x0001005d9798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_1005d98a4 + *(int *)(&DAT_1005d98a4 + param_2 * 4)))();
    return uVar1;
  }
  *param_3 = 0x20ab;
  return 0;
}




undefined8 FUN_1005d98e4(long param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0x400) {
    uVar1 = *(undefined4 *)(param_1 + 0xa08);
  }
  else if (param_3 == 0x200) {
    uVar1 = *(undefined4 *)
             (*(long *)(param_1 + 0x298) +
             (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10);
  }
  else {
    if (param_3 != 0x100) {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xa04);
  }
  *param_2 = uVar1;
  return 0;
}




undefined8 FUN_1005d9930(long param_1,uint *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0x400) {
    uVar1 = (uint)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0);
  }
  else if (param_3 == 0x200) {
    uVar1 = *(uint *)(param_1 + 0xd10);
  }
  else {
    if (param_3 != 0x100) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0xd14);
  }
  *param_2 = uVar1;
  return 0;
}




undefined8 FUN_1005d9970(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x4e0);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d9994(float param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if (((-1 < param_3) && (param_1 <= 1.0)) &&
     (0.0 <= param_1 && param_3 < *(int *)(param_2 + 0x4e0))) {
    uVar1 = 0;
    *(float *)(*(long *)(param_2 + (long)param_3 * 8 + 0x4e8) + 0x358) = param_1;
  }
  return uVar1;
}




undefined8 FUN_1005d99d0(long param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    uVar1 = 0x1f;
    if ((param_3 != (undefined4 *)0x0) && (param_2 < *(int *)(param_1 + 0x4e0))) {
      uVar1 = 0;
      *param_3 = *(undefined4 *)(*(long *)(param_1 + (long)param_2 * 8 + 0x4e8) + 0x358);
    }
    return uVar1;
  }
  return 0x1f;
}




undefined8 FUN_1005d9a10(float param_1,long param_2)

{
  int iVar1;
  
  *(float *)(param_2 + 0xcec) = param_1;
  iVar1 = 1;
  if (0 < *(int *)(param_2 + 0xd0c)) {
    iVar1 = *(int *)(param_2 + 0xd0c);
  }
  *(int *)(param_2 + 0xd0c) = iVar1;
  param_1 = (((float)iVar1 + (float)iVar1) / 5.0) * param_1;
  if (0.01 <= param_1) {
    *(int *)(param_2 + 0x96c) = (int)((float)*(int *)(*(long *)(param_2 + 8) + 0x108) / param_1);
  }
  return 0;
}




undefined8 FUN_1005d9a6c(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xcec);
  return 0;
}




undefined8 FUN_1005d9a7c(long param_1)

{
  char local_21;
  
  FUN_1005807dc(*(long *)(param_1 + 0x88) + 0x710,&local_21);
  if (local_21 == '\0') {
    (**(code **)(*(long *)(param_1 + 0x88) + 0xf8))();
  }
  return 0;
}




undefined8 FUN_1005d9ac8(long param_1)

{
  FUN_1005d9258(*(undefined8 *)(param_1 + 0x88));
  return 0;
}




undefined8 FUN_1005d9ae4(long param_1)

{
  FUN_1005d8fe8(*(undefined8 *)(param_1 + 0x88),0);
  return 0;
}




undefined8 FUN_1005d9b04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  FUN_10058068c(*(long *)(param_1 + 0x88) + 0x710);
  lVar1 = *(long *)(param_1 + 0x88);
  if (0 < *(int *)(lVar1 + 0x4e0)) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)(lVar1 + lVar3 * 8 + 0x4e8);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 8), lVar2 != 0)) {
        FUN_100584678(lVar2 + 0x20,param_2);
        lVar1 = *(long *)(param_1 + 0x88);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar1 + 0x4e0));
  }
  return 0;
}




undefined8 FUN_1005d9b84(long param_1)

{
  FUN_100580804(*(long *)(param_1 + 0x88) + 0x710,0);
  return 0;
}




undefined8 FUN_1005d9ba8(long param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0x400) {
    uVar1 = *(undefined4 *)(param_1 + 0xa08);
  }
  else if (param_3 == 0x200) {
    uVar1 = *(undefined4 *)
             (*(long *)(param_1 + 0x298) +
             (ulong)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0) * 0x10);
  }
  else {
    if (param_3 != 0x100) {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xa04);
  }
  *param_2 = uVar1;
  return 0;
}




undefined8 FUN_1005d9bf4(long param_1,uint *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0x400) {
    uVar1 = (uint)*(byte *)(param_1 + *(int *)(param_1 + 0xd14) + 0x2b0);
  }
  else if (param_3 == 0x200) {
    uVar1 = *(uint *)(param_1 + 0xd10);
  }
  else {
    if (param_3 != 0x100) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0xd14);
  }
  *param_2 = uVar1;
  return 0;
}




undefined8 FUN_1005d9c34(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x4e0);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005d9c58(float param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if (((-1 < param_3) && (param_1 <= 1.0)) &&
     (0.0 <= param_1 && param_3 < *(int *)(param_2 + 0x4e0))) {
    uVar1 = 0;
    *(float *)(*(long *)(param_2 + (long)param_3 * 8 + 0x4e8) + 0x358) = param_1;
  }
  return uVar1;
}




undefined8 FUN_1005d9c94(long param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_2) {
    uVar1 = 0x1f;
    if ((param_3 != (undefined4 *)0x0) && (param_2 < *(int *)(param_1 + 0x4e0))) {
      uVar1 = 0;
      *param_3 = *(undefined4 *)(*(long *)(param_1 + (long)param_2 * 8 + 0x4e8) + 0x358);
    }
    return uVar1;
  }
  return 0x1f;
}




undefined8 FUN_1005d9cd4(float param_1,long param_2)

{
  int iVar1;
  
  *(float *)(param_2 + 0xcec) = param_1;
  iVar1 = 1;
  if (0 < *(int *)(param_2 + 0xd0c)) {
    iVar1 = *(int *)(param_2 + 0xd0c);
  }
  *(int *)(param_2 + 0xd0c) = iVar1;
  param_1 = (((float)iVar1 + (float)iVar1) / 5.0) * param_1;
  if (0.01 <= param_1) {
    *(int *)(param_2 + 0x96c) = (int)((float)*(int *)(*(long *)(param_2 + 8) + 0x108) / param_1);
  }
  return 0;
}




undefined8 FUN_1005d9d30(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xcec);
  return 0;
}




undefined8 FUN_1005d9d40(void)

{
  undefined8 uVar1;
  
  if ((DAT_101e9b790 != 0) || (uVar1 = FUN_10061767c(), (int)uVar1 == 0)) {
    uVar1 = 0;
    DAT_101e9b790 = DAT_101e9b790 + 1;
  }
  return uVar1;
}




undefined8 FUN_1005d9d7c(void)

{
  undefined8 uVar1;
  
  DAT_101e9b790 = DAT_101e9b790 + -1;
  if ((DAT_101e9b790 != 0) || (uVar1 = FUN_100617684(), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_1005d9dac(long param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_2 < 1) {
    return 0x1f;
  }
  lVar3 = 0;
  while ((*(byte *)(param_1 + lVar3) | 0x20) != 0x20) {
    lVar3 = lVar3 + 1;
    if (param_2 <= lVar3) {
      return 0x1f;
    }
  }
  *(undefined1 *)(param_1 + lVar3) = 0;
  iVar1 = FUN_1005ed0c8(param_1,"HTTP/1.0");
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_1005ed0c8(param_1,"HTTP/1.1");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_1005ed0c8(param_1,"ICY");
      if (iVar1 != 0) {
        return 0x1f;
      }
      uVar2 = 2;
    }
  }
  *param_3 = uVar2;
  iVar1 = (int)lVar3 + 1;
  if (param_2 <= iVar1) {
    return 0x1f;
  }
  lVar3 = (long)iVar1;
  do {
    if ((*(byte *)(param_1 + lVar3) | 0x20) == 0x20) {
      *(undefined1 *)(param_1 + lVar3) = 0;
      iVar1 = _atoi((char *)(param_1 + iVar1));
      *param_4 = iVar1;
      return 0;
    }
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < param_2);
  return 0x1f;
}




undefined8 FUN_1005d9edc(byte *param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = 0x1f;
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    uVar7 = (uint)*param_1;
    if (*param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        uVar5 = 0;
        iVar1 = -1;
        while( true ) {
          iVar8 = iVar1;
          param_1 = param_1 + 1;
          uVar3 = (uint)uVar4;
          if (iVar8 == 1) break;
          uVar5 = (uVar7 | uVar5) << 8;
          uVar7 = (uint)*param_1;
          iVar1 = iVar8 + 1;
          if (uVar7 == 0) {
            if (iVar8 + 2 != 0) {
              if (uVar3 == param_3) {
                return 0x1f;
              }
              uVar5 = uVar5 << (ulong)((iVar8 + 2) * -8 + 0x10U & 0x1f);
              *(char *)(param_2 + (int)uVar3) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [(int)uVar5 >> 0x12];
              if ((uVar3 | 1) == param_3) {
                return 0x1f;
              }
              uVar7 = uVar3 | 2;
              *(char *)(param_2 + (int)(uVar3 | 1)) =
                   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                   [uVar5 >> 0xc & 0x3f];
              if (iVar8 + 1 == 0) {
                if (uVar7 == param_3) {
                  return 0x1f;
                }
                *(undefined1 *)(param_2 + (int)uVar7) = 0x3d;
                if ((uVar3 | 3) == param_3) {
                  return 0x1f;
                }
              }
              else {
                if (uVar7 == param_3) {
                  return 0x1f;
                }
                *(char *)(param_2 + (int)uVar7) =
                     "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                     [uVar5 >> 6 & 0x3f];
                if ((uVar3 | 3) == param_3) {
                  return 0x1f;
                }
              }
              uVar4 = (ulong)(uVar3 + 4);
              *(undefined1 *)(param_2 + (int)(uVar3 | 3)) = 0x3d;
            }
            goto LAB_1005d9fbc;
          }
        }
        if (uVar3 == param_3) {
          return 0x1f;
        }
        *(char *)(param_2 + uVar4) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[(int)uVar5 >> 0x12];
        if ((uint)(uVar4 | 1) == param_3) {
          return 0x1f;
        }
        *(char *)(param_2 + (uVar4 | 1)) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar5 >> 0xc & 0x3f]
        ;
        if ((uint)(uVar4 | 2) == param_3) {
          return 0x1f;
        }
        uVar6 = uVar4 | 3;
        *(char *)(param_2 + (uVar4 | 2)) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
             [(uVar7 | uVar5) >> 6 & 0x3f];
        if ((uint)uVar6 == param_3) {
          return 0x1f;
        }
        uVar4 = uVar4 + 4;
        *(char *)(param_2 + uVar6) =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[uVar7 & 0x3f];
        uVar7 = (uint)*param_1;
      } while (uVar7 != 0);
    }
LAB_1005d9fbc:
    if ((uint)uVar4 == param_3) {
      return 0x1f;
    }
    uVar2 = 0;
    *(undefined1 *)(param_2 + (int)(uint)uVar4) = 0;
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005da0d4(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_1068 [4096];
  long local_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar6;
  if (DAT_101dbce10 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),DAT_101dbce10,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_net.cpp",
                  0xd6);
    DAT_101dbce10 = 0;
  }
  if (DAT_101dbce18 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),DAT_101dbce18,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_net.cpp",
                  0xdc);
    DAT_101dbce18 = 0;
  }
  if (DAT_101dbce28 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),DAT_101dbce28,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_net.cpp",
                  0xe2);
    DAT_101dbce28 = 0;
  }
  _DAT_101dbce20 = 0;
  iVar1 = FUN_1005ecb6c(param_1);
  uVar5 = 0;
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)FUN_1005ed2f4(param_1);
    if (puVar2 == (undefined1 *)0x0) {
      uVar5 = 0x26;
    }
    else {
      DAT_101dbce10 = FUN_1005ed2f4(param_1);
      if (DAT_101dbce10 == 0) {
        uVar5 = 0x26;
      }
      else {
        puVar3 = (undefined1 *)FUN_1005ed260(puVar2,"@");
        puVar4 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 0;
          uVar5 = FUN_1005d9edc(puVar2,auStack_1068,0xfff);
          if ((int)uVar5 != 0) {
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar2,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_net.cpp"
                          ,0x112);
            goto LAB_1005da2cc;
          }
          DAT_101dbce28 = FUN_1005ed2f4(auStack_1068);
          if (DAT_101dbce28 == 0) {
            uVar5 = 0x26;
            goto LAB_1005da2cc;
          }
          puVar4 = puVar3 + 1;
        }
        puVar3 = (undefined1 *)FUN_1005ed260(puVar4,":");
        if (puVar3 == (undefined1 *)0x0) {
          iVar1 = 0x50;
        }
        else {
          *puVar3 = 0;
          iVar1 = _atoi(puVar3 + 1);
        }
        DAT_101dbce18 = FUN_1005ed2f4(puVar4);
        if (DAT_101dbce18 == 0) {
          uVar5 = 0x26;
        }
        else {
          _DAT_101dbce20 = iVar1;
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),puVar2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_net.cpp"
                        ,0x131);
          uVar5 = 0;
        }
      }
    }
  }
LAB_1005da2cc:
  if (lVar6 == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005da300(undefined1 *param_1,undefined8 param_2)

{
  if ((param_1 != (undefined1 *)0x0) && ((int)param_2 != 0)) {
    if (DAT_101dbce10 == 0) {
      *param_1 = 0;
    }
    else {
      FUN_1005ecc98(param_1,DAT_101dbce10,param_2);
    }
  }
  return 0;
}




undefined8 FUN_1005da33c(undefined4 param_1)

{
  DAT_10186d988 = param_1;
  return 0;
}




undefined8 FUN_1005da34c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_10186d988;
    return 0;
  }
  return 0x1f;
}




void FUN_1005da374(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint local_34;
  
  while( true ) {
    local_34 = 0;
    iVar1 = FUN_100617d9c(param_1,param_2,param_3,&local_34);
    if (iVar1 != 0x2d) break;
    param_2 = param_2 + (ulong)local_34;
    param_3 = (ulong)((int)param_3 - local_34);
    FUN_1005dbaa8(1);
  }
  return;
}




undefined8 FUN_1005da3e0(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  char local_45;
  uint local_44;
  
  uVar1 = 0x1f;
  if ((param_2 != (undefined1 *)0x0) && (param_3 != 0)) {
    uVar4 = 0;
    *param_2 = 0;
    while ((uint)uVar4 < param_3 - 1U) {
      local_45 = '\0';
      pcVar2 = &local_45;
      iVar3 = 1;
      while( true ) {
        local_44 = 0;
        uVar1 = FUN_100617d9c(param_1,pcVar2,iVar3,&local_44);
        if ((int)uVar1 != 0x2d) break;
        pcVar2 = pcVar2 + local_44;
        iVar3 = iVar3 - local_44;
        FUN_1005dbaa8(1);
      }
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (local_45 != '\r') {
        if (local_45 == '\n') break;
        param_2[uVar4] = local_45;
        uVar4 = (ulong)((uint)uVar4 + 1);
      }
    }
    uVar1 = 0;
    param_2[uVar4] = 0;
  }
  return uVar1;
}




void FUN_1005da4bc(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (*param_2 <= *param_1) {
    fVar1 = *param_2;
  }
  *param_3 = fVar1;
  fVar1 = param_1[1];
  if (param_1[1] <= param_2[1]) {
    fVar1 = param_2[1];
  }
  param_3[1] = fVar1;
  fVar1 = param_1[2];
  if (param_2[2] <= param_1[2]) {
    fVar1 = param_2[2];
  }
  param_3[2] = fVar1;
  fVar1 = param_1[3];
  if (param_1[3] <= param_2[3]) {
    fVar1 = param_2[3];
  }
  param_3[3] = fVar1;
  fVar1 = param_1[4];
  if (param_2[4] <= param_1[4]) {
    fVar1 = param_2[4];
  }
  param_3[4] = fVar1;
  fVar1 = param_1[5];
  if (param_1[5] <= param_2[5]) {
    fVar1 = param_2[5];
  }
  param_3[5] = fVar1;
  return;
}




void FUN_1005da538(float param_1,undefined8 *param_2)

{
  *(float *)((long)param_2 + 0x14) = 1.0 / param_1;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}




void FUN_1005da554(float param_1,undefined8 *param_2)

{
  *(float *)((long)param_2 + 0x14) = 1.0 / param_1;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}




void FUN_1005da570(void)

{
  return;
}




void FUN_1005da574(void)

{
  return;
}




void FUN_1005da578(long *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((uint)param_2[6] >> 6 & 1) == 0) {
    param_2[6] = (float)((uint)param_2[6] | 0x44);
    fVar3 = param_2[1] - *param_2;
    fVar4 = param_2[3] - param_2[2];
    fVar5 = param_2[5] - param_2[4];
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    if (fVar3 <= fVar5) {
      fVar3 = fVar5;
    }
    fVar4 = *(float *)((long)param_1 + 0x14);
    uVar2 = (uint)(fVar4 * 1.0737418e+09 * fVar3);
    uVar1 = uVar2 >> 1 | uVar2 >> 2;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    param_2[7] = (float)(uVar2 & ((uVar1 | uVar1 >> 0x10) ^ 0xffffffff));
    param_2[8] = (float)(int)(fVar4 * ((*param_2 + param_2[1]) * 0.5 - *(float *)(param_1 + 1)) *
                              1.0737418e+09 + 1.0737418e+09);
    param_2[9] = (float)(int)(fVar4 * ((param_2[2] + param_2[3]) * 0.5 -
                                      *(float *)((long)param_1 + 0xc)) * 1.0737418e+09 +
                             1.0737418e+09);
    param_2[10] = (float)(int)(fVar4 * ((param_2[4] + param_2[5]) * 0.5 - *(float *)(param_1 + 2)) *
                               1.0737418e+09 + 1.0737418e+09);
    if (*param_1 != 0) {
      FUN_1005da678(param_1,*param_1,param_2);
      return;
    }
    *param_1 = (long)param_2;
  }
  return;
}




void FUN_1005da678(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  do {
    uVar7 = *(uint *)(param_2 + 0x18);
    if ((uVar7 >> 2 & 1) == 0) {
      uVar8 = *(uint *)(param_2 + 0x1c);
      uVar6 = -uVar8;
      uVar5 = (*(uint *)(param_3 + 0x20) ^ *(uint *)(param_2 + 0x20)) & uVar6;
      uVar4 = uVar5 >> 1 | uVar5 >> 2;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar5 = uVar5 & ((uVar4 | uVar4 >> 0x10) ^ 0xffffffff);
      uVar4 = 0;
      if (uVar5 != 0) {
        if (*(uint *)(param_3 + 0x1c) < uVar5) {
          uVar4 = uVar5;
          if ((uVar5 <= uVar8) && (uVar5 != uVar8 || (uVar7 & 3) == 0)) {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      uVar5 = (*(uint *)(param_3 + 0x24) ^ *(uint *)(param_2 + 0x24)) & uVar6;
      uVar9 = uVar5 >> 1 | uVar5 >> 2;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar5 = uVar5 & ((uVar9 | uVar9 >> 0x10) ^ 0xffffffff);
      if (uVar4 < uVar5) {
        if (*(uint *)(param_3 + 0x1c) < uVar5) {
          if ((uVar8 < uVar5) || (uVar5 == uVar8 && 1 < (uVar7 & 2))) {
            uVar9 = 1;
            uVar4 = uVar5;
          }
          else {
            uVar9 = 0;
          }
        }
        else {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = 0;
      }
      uVar6 = (*(uint *)(param_3 + 0x28) ^ *(uint *)(param_2 + 0x28)) & uVar6;
      uVar5 = uVar6 >> 1 | uVar6 >> 2;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar6 = uVar6 & ((uVar5 | uVar5 >> 0x10) ^ 0xffffffff);
      if (((uVar4 < uVar6) && (*(uint *)(param_3 + 0x1c) < uVar6)) &&
         ((uVar8 < uVar6 || (uVar6 == uVar8 && (uVar7 & 3) == 3)))) {
        uVar4 = uVar6;
        uVar9 = 2;
      }
    }
    else {
      uVar5 = *(uint *)(param_3 + 0x20) ^ *(uint *)(param_2 + 0x20);
      uVar6 = uVar5 >> 1 | uVar5 >> 2;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar5 = uVar5 & ((uVar6 | uVar6 >> 0x10) ^ 0xffffffff);
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else if (*(uint *)(param_3 + 0x1c) < uVar5) {
        if (uVar5 <= *(uint *)(param_2 + 0x1c)) {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
      uVar6 = *(uint *)(param_3 + 0x24) ^ *(uint *)(param_2 + 0x24);
      uVar8 = uVar6 >> 1 | uVar6 >> 2;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar6 = uVar6 & ((uVar8 | uVar8 >> 0x10) ^ 0xffffffff);
      if (uVar5 < uVar6) {
        if (*(uint *)(param_3 + 0x1c) < uVar6) {
          uVar8 = (uint)(*(uint *)(param_2 + 0x1c) < uVar6);
          if (uVar6 <= *(uint *)(param_2 + 0x1c)) {
            uVar6 = uVar5;
          }
        }
        else {
          uVar8 = 0;
          uVar6 = uVar5;
        }
      }
      else {
        uVar8 = 0;
        uVar6 = uVar5;
      }
      uVar5 = *(uint *)(param_3 + 0x28) ^ *(uint *)(param_2 + 0x28);
      uVar4 = uVar5 >> 1 | uVar5 >> 2;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar5 = uVar5 & ((uVar4 | uVar4 >> 0x10) ^ 0xffffffff);
      uVar4 = uVar6;
      uVar9 = uVar8;
      if ((uVar6 < uVar5) && (*(uint *)(param_3 + 0x1c) < uVar5)) {
        uVar4 = uVar5;
        if (uVar5 <= *(uint *)(param_2 + 0x1c)) {
          uVar4 = uVar6;
        }
        uVar9 = 2;
        if (uVar5 <= *(uint *)(param_2 + 0x1c)) {
          uVar9 = uVar8;
        }
      }
    }
    if (uVar4 != 0) {
      lVar11 = param_1[3];
      lVar12 = *(long *)(lVar11 + 0x48);
      param_1[3] = lVar12;
      if (lVar12 != 0) {
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
      *(undefined8 *)(lVar11 + 0x48) = 0;
      *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) & 0xffffffdf | uVar9;
      *(uint *)(lVar11 + 0x1c) = uVar4;
      lVar12 = param_3;
      lVar3 = param_2;
      if ((*(uint *)(param_3 + (long)(int)uVar9 * 4 + 0x20) & uVar4) != 0) {
        lVar12 = param_2;
        lVar3 = param_3;
      }
      *(long *)(lVar11 + 0x38) = lVar3;
      *(long *)(lVar11 + 0x40) = lVar12;
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(long *)(lVar3 + 0x30) = lVar11;
      *(long *)(lVar12 + 0x30) = lVar11;
      lVar12 = *(long *)(lVar11 + 0x30);
      if (lVar12 == 0) {
        *param_1 = lVar11;
      }
      else if (*(long *)(lVar12 + 0x40) == param_2) {
        *(long *)(lVar12 + 0x40) = lVar11;
      }
      else {
        *(long *)(lVar12 + 0x38) = lVar11;
      }
      if (uVar9 == 0) {
        *(uint *)(lVar11 + 0x20) = *(uint *)(param_3 + 0x20) & -uVar4 | uVar4;
        *(uint *)(lVar11 + 0x24) = *(uint *)(param_3 + 0x24) & -uVar4 | uVar4;
        uVar7 = *(uint *)(param_3 + 0x28);
      }
      else {
        uVar7 = uVar4 >> 1;
        *(uint *)(lVar11 + 0x20) = *(uint *)(param_3 + 0x20) & -uVar7 | uVar7;
        if (uVar9 == 1) {
          *(uint *)(lVar11 + 0x24) = *(uint *)(param_3 + 0x24) & -uVar4 | uVar4;
          uVar7 = *(uint *)(param_3 + 0x28) & -uVar4;
          goto LAB_1005daa68;
        }
        *(uint *)(lVar11 + 0x24) = *(uint *)(param_3 + 0x24) & -uVar7 | uVar7;
        uVar7 = *(uint *)(param_3 + 0x28);
      }
      uVar7 = uVar7 & -uVar4;
LAB_1005daa68:
      *(uint *)(lVar11 + 0x28) = uVar7 | uVar4;
      lVar12 = *(long *)(param_2 + 0x48);
      *(undefined8 *)(param_2 + 0x48) = 0;
      FUN_1005dac7c(param_1,lVar11);
      while (lVar12 != 0) {
        lVar10 = *(long *)(lVar12 + 0x48);
        *(undefined8 *)(lVar12 + 0x30) = 0;
        *(undefined8 *)(lVar12 + 0x48) = 0;
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) & 0xffffffef;
        lVar3 = *(long *)(lVar11 + 0x30);
        if (lVar3 == 0) {
          lVar3 = *param_1;
        }
        FUN_1005da678(param_1,lVar3,lVar12);
        lVar12 = lVar10;
      }
      return;
    }
    if (*(uint *)(param_2 + 0x1c) <= *(uint *)(param_3 + 0x1c)) {
      uVar2 = FUN_1005db6dc(param_1,param_2);
      goto LAB_1005da9c4;
    }
    if ((uVar7 & 4) != 0) {
      lVar12 = *(long *)(param_2 + 0x30);
      uVar2 = FUN_1005db6dc(param_1,param_2);
      param_2 = lVar12;
LAB_1005da9c4:
      FUN_1005dac7c(uVar2,param_2);
      return;
    }
    lVar12 = (ulong)(uVar7 & 3) * 4;
    plVar1 = (long *)(param_2 + 0x40);
    if (*(uint *)(param_2 + lVar12 + 0x20) <= *(uint *)(param_3 + lVar12 + 0x20)) {
      plVar1 = (long *)(param_2 + 0x38);
    }
    param_2 = *plVar1;
  } while( true );
}




void FUN_1005daacc(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  if ((uVar2 >> 6 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(param_2 + 0x30);
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_2 + 0x48);
    *param_1 = lVar7;
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) & 0xffffffef;
      uVar2 = *(uint *)(param_2 + 0x18);
    }
    *(undefined8 *)(param_2 + 0x48) = 0;
    goto LAB_1005dac5c;
  }
  lVar1 = *(long *)(lVar7 + 0x48);
  if (lVar1 == param_2) {
    *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    lVar3 = *(long *)(param_2 + 0x48);
    if (lVar3 != 0) {
LAB_1005dab74:
      *(long *)(lVar3 + 0x30) = lVar7;
    }
    lVar7 = *(long *)(param_2 + 0x30);
LAB_1005dab7c:
    if ((*(byte *)(lVar7 + 0x18) >> 2 & 1) == 0) {
      FUN_1005dac7c(param_1,lVar7);
    }
  }
  else {
    plVar5 = (long *)(lVar7 + 0x38);
    lVar3 = *(long *)(param_2 + 0x48);
    if (*plVar5 == param_2) {
      *plVar5 = lVar3;
      if (lVar3 != 0) goto LAB_1005dab68;
      plVar5 = (long *)(lVar7 + 0x40);
    }
    else {
      *(long *)(lVar7 + 0x40) = lVar3;
      if (lVar3 != 0) {
LAB_1005dab68:
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) & 0xffffffef;
        goto LAB_1005dab74;
      }
    }
    lVar3 = *plVar5;
    if (lVar3 == 0) goto LAB_1005dab7c;
    plVar5 = (long *)(lVar7 + 0x30);
    lVar6 = *plVar5;
    if (lVar6 == 0) {
      *param_1 = lVar3;
      *(undefined8 *)(lVar3 + 0x30) = 0;
      plVar4 = param_1;
    }
    else {
      if (*(long *)(lVar6 + 0x38) == lVar7) {
        *(long *)(lVar6 + 0x38) = lVar3;
      }
      else {
        *(long *)(lVar6 + 0x40) = lVar3;
      }
      *(long *)(lVar3 + 0x30) = lVar6;
      plVar4 = plVar5;
    }
    if (lVar1 != 0) {
      lVar3 = *plVar4;
      do {
        lVar6 = *(long *)(lVar1 + 0x48);
        *(undefined8 *)(lVar1 + 0x48) = 0;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) & 0xffffffef;
        FUN_1005da678(param_1,lVar3);
        lVar1 = lVar6;
      } while (lVar6 != 0);
    }
    if (*plVar5 != 0) {
      FUN_1005dac7c();
    }
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *plVar5 = 0;
    uVar2 = *(uint *)(lVar7 + 0x18) & 0xfffffff4;
    *(uint *)(lVar7 + 0x18) = uVar2;
    lVar1 = param_1[3];
    *(long *)(lVar7 + 0x48) = lVar1;
    param_1[3] = lVar7;
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x30) = lVar7;
    }
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(uint *)(lVar7 + 0x18) = uVar2 | 0x20;
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  uVar2 = *(uint *)(param_2 + 0x18);
LAB_1005dac5c:
  *(uint *)(param_2 + 0x18) = uVar2 & 0xffffffa0;
  return;
}




void FUN_1005dac7c(undefined8 param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  for (; param_2 != (float *)0x0; param_2 = *(float **)(param_2 + 0xc)) {
    if (((uint)param_2[6] >> 2 & 1) == 0) {
      pfVar2 = *(float **)(param_2 + 0xe);
      pfVar1 = *(float **)(param_2 + 0x10);
      fVar5 = *pfVar2;
      if (*pfVar1 <= *pfVar2) {
        fVar5 = *pfVar1;
      }
      *param_2 = fVar5;
      fVar7 = pfVar2[1];
      if (pfVar2[1] <= pfVar1[1]) {
        fVar7 = pfVar1[1];
      }
      param_2[1] = fVar7;
      fVar9 = pfVar2[2];
      if (pfVar1[2] <= pfVar2[2]) {
        fVar9 = pfVar1[2];
      }
      param_2[2] = fVar9;
      fVar11 = pfVar2[3];
      if (pfVar2[3] <= pfVar1[3]) {
        fVar11 = pfVar1[3];
      }
      param_2[3] = fVar11;
      fVar13 = pfVar2[4];
      if (pfVar1[4] <= pfVar2[4]) {
        fVar13 = pfVar1[4];
      }
      param_2[4] = fVar13;
      fVar15 = pfVar2[5];
      if (pfVar2[5] <= pfVar1[5]) {
        fVar15 = pfVar1[5];
      }
      param_2[5] = fVar15;
      for (pfVar3 = *(float **)(param_2 + 0x12); pfVar3 != (float *)0x0;
          pfVar3 = *(float **)(pfVar3 + 0x12)) {
        fVar4 = *pfVar3;
        if (fVar5 <= *pfVar3) {
          fVar4 = fVar5;
        }
        *param_2 = fVar4;
        fVar6 = pfVar3[1];
        if (pfVar3[1] <= fVar7) {
          fVar6 = fVar7;
        }
        param_2[1] = fVar6;
        fVar8 = pfVar3[2];
        if (fVar9 <= pfVar3[2]) {
          fVar8 = fVar9;
        }
        param_2[2] = fVar8;
        fVar10 = pfVar3[3];
        if (pfVar3[3] <= fVar11) {
          fVar10 = fVar11;
        }
        param_2[3] = fVar10;
        fVar12 = pfVar3[4];
        if (fVar13 <= pfVar3[4]) {
          fVar12 = fVar13;
        }
        param_2[4] = fVar12;
        fVar14 = pfVar3[5];
        if (pfVar3[5] <= fVar15) {
          fVar14 = fVar15;
        }
        param_2[5] = fVar14;
        fVar5 = fVar4;
        fVar7 = fVar6;
        fVar9 = fVar8;
        fVar11 = fVar10;
        fVar13 = fVar12;
        fVar15 = fVar14;
      }
      param_2[6] = (float)((uint)param_2[6] | 8);
      if ((*(byte *)(pfVar2 + 6) >> 2 & 1) != 0) {
        while (pfVar2 = *(float **)(pfVar2 + 0x12), pfVar2 != (float *)0x0) {
          fVar4 = *pfVar2;
          if (fVar5 <= *pfVar2) {
            fVar4 = fVar5;
          }
          *param_2 = fVar4;
          fVar6 = pfVar2[1];
          if (pfVar2[1] <= fVar7) {
            fVar6 = fVar7;
          }
          param_2[1] = fVar6;
          fVar8 = pfVar2[2];
          if (fVar9 <= pfVar2[2]) {
            fVar8 = fVar9;
          }
          param_2[2] = fVar8;
          fVar10 = pfVar2[3];
          if (pfVar2[3] <= fVar11) {
            fVar10 = fVar11;
          }
          param_2[3] = fVar10;
          fVar12 = pfVar2[4];
          if (fVar13 <= pfVar2[4]) {
            fVar12 = fVar13;
          }
          param_2[4] = fVar12;
          fVar14 = pfVar2[5];
          if (pfVar2[5] <= fVar15) {
            fVar14 = fVar15;
          }
          param_2[5] = fVar14;
          fVar5 = fVar4;
          fVar7 = fVar6;
          fVar9 = fVar8;
          fVar11 = fVar10;
          fVar13 = fVar12;
          fVar15 = fVar14;
        }
      }
      if ((*(byte *)(pfVar1 + 6) >> 2 & 1) != 0) {
        while (pfVar1 = *(float **)(pfVar1 + 0x12), pfVar1 != (float *)0x0) {
          fVar4 = *pfVar1;
          if (fVar5 <= *pfVar1) {
            fVar4 = fVar5;
          }
          *param_2 = fVar4;
          fVar6 = pfVar1[1];
          if (pfVar1[1] <= fVar7) {
            fVar6 = fVar7;
          }
          param_2[1] = fVar6;
          fVar8 = pfVar1[2];
          if (fVar9 <= pfVar1[2]) {
            fVar8 = fVar9;
          }
          param_2[2] = fVar8;
          fVar10 = pfVar1[3];
          if (pfVar1[3] <= fVar11) {
            fVar10 = fVar11;
          }
          param_2[3] = fVar10;
          fVar12 = pfVar1[4];
          if (fVar13 <= pfVar1[4]) {
            fVar12 = fVar13;
          }
          param_2[4] = fVar12;
          fVar14 = pfVar1[5];
          if (pfVar1[5] <= fVar15) {
            fVar14 = fVar15;
          }
          param_2[5] = fVar14;
          fVar5 = fVar4;
          fVar7 = fVar6;
          fVar9 = fVar8;
          fVar11 = fVar10;
          fVar13 = fVar12;
          fVar15 = fVar14;
        }
      }
    }
  }
  return;
}




void FUN_1005dae70(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x48) = lVar1;
  *(long *)(param_1 + 0x18) = param_2;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x30) = param_2;
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20;
  return;
}




void FUN_1005dae98(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(byte *)(param_2 + 6) >> 6 & 1) != 0) {
    fVar3 = param_2[1] - *param_2;
    fVar4 = param_2[3] - param_2[2];
    fVar5 = param_2[5] - param_2[4];
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    if (fVar3 <= fVar5) {
      fVar3 = fVar5;
    }
    fVar4 = *(float *)(param_1 + 0x14);
    uVar2 = (uint)(fVar4 * 1.0737418e+09 * fVar3);
    uVar1 = uVar2 >> 1 | uVar2 >> 2;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    if (((((float)(uVar2 & ((uVar1 | uVar1 >> 0x10) ^ 0xffffffff)) == param_2[7]) &&
         (uVar1 = -(int)param_2[7],
         (((int)(fVar4 * ((param_2[1] + *param_2) * 0.5 - *(float *)(param_1 + 8)) * 1.0737418e+09 +
                1.0737418e+09) ^ (uint)param_2[8]) & uVar1) == 0)) &&
        ((((uint)param_2[9] ^
          (int)(fVar4 * ((param_2[3] + param_2[2]) * 0.5 - *(float *)(param_1 + 0xc)) *
                1.0737418e+09 + 1.0737418e+09)) & uVar1) == 0)) &&
       ((((uint)param_2[10] ^
         (int)(fVar4 * ((param_2[5] + param_2[4]) * 0.5 - *(float *)(param_1 + 0x10)) *
               1.0737418e+09 + 1.0737418e+09)) & uVar1) == 0)) {
      FUN_1005dac7c(param_1,param_2);
      return;
    }
    FUN_1005daacc(param_1,param_2);
  }
  FUN_1005da578(param_1,param_2);
  return;
}




void FUN_1005dafe4(long *param_1,float *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[0] = 0.0;
    param_2[1] = 0.0;
  }
  else {
    *(undefined8 *)(param_2 + 4) = puVar1[2];
    uVar4 = *puVar1;
    *(undefined8 *)(param_2 + 2) = puVar1[1];
    *(undefined8 *)param_2 = uVar4;
    pfVar2 = *(float **)(*param_1 + 0x48);
    if (pfVar2 != (float *)0x0) {
      fVar3 = *param_2;
      fVar5 = param_2[1];
      fVar7 = param_2[2];
      fVar9 = param_2[3];
      fVar11 = param_2[4];
      fVar13 = param_2[5];
      do {
        fVar6 = *pfVar2;
        if (fVar3 <= *pfVar2) {
          fVar6 = fVar3;
        }
        fVar3 = fVar6;
        *param_2 = fVar3;
        fVar6 = pfVar2[1];
        if (pfVar2[1] <= fVar5) {
          fVar6 = fVar5;
        }
        param_2[1] = fVar6;
        fVar8 = pfVar2[2];
        if (fVar7 <= pfVar2[2]) {
          fVar8 = fVar7;
        }
        param_2[2] = fVar8;
        fVar10 = pfVar2[3];
        if (pfVar2[3] <= fVar9) {
          fVar10 = fVar9;
        }
        param_2[3] = fVar10;
        fVar12 = pfVar2[4];
        if (fVar11 <= pfVar2[4]) {
          fVar12 = fVar11;
        }
        param_2[4] = fVar12;
        fVar14 = pfVar2[5];
        if (pfVar2[5] <= fVar13) {
          fVar14 = fVar13;
        }
        param_2[5] = fVar14;
        pfVar2 = *(float **)(pfVar2 + 0x12);
        fVar5 = fVar6;
        fVar7 = fVar8;
        fVar9 = fVar10;
        fVar11 = fVar12;
        fVar13 = fVar14;
      } while (pfVar2 != (float *)0x0);
    }
  }
  return;
}




void FUN_1005db08c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  if ((uVar1 >> 10 & 1) == 0) {
    *(uint *)(param_2 + 0x18) = uVar1 | 0x400;
    lVar2 = *(long *)(param_1 + 0x18);
    *(long *)(param_2 + 0x48) = lVar2;
    *(long *)(param_1 + 0x18) = param_2;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x30) = param_2;
    }
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(uint *)(param_2 + 0x18) = uVar1 | 0x420;
  }
  return;
}




void FUN_1005db0c4(undefined8 *param_1,void *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  uVar1 = *(uint *)((long)param_2 + 0x18);
  if ((uVar1 >> 10 & 1) != 0) {
    *(uint *)((long)param_2 + 0x18) = uVar1 & 0xfffffbff;
    if ((uVar1 >> 5 & 1) == 0) {
      pvVar4 = (void *)param_1[3];
      lVar2 = *(long *)((long)pvVar4 + 0x48);
      param_1[3] = lVar2;
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x30) = 0;
      }
      *(undefined8 *)((long)pvVar4 + 0x48) = 0;
      *(uint *)((long)pvVar4 + 0x18) = *(uint *)((long)pvVar4 + 0x18) & 0xffffffdf;
      _memcpy(pvVar4,param_2,0x50);
      *(uint *)((long)pvVar4 + 0x18) = *(uint *)((long)pvVar4 + 0x18) | 0x400;
      lVar2 = *(long *)((long)pvVar4 + 0x30);
      if (lVar2 == 0) {
        *param_1 = pvVar4;
      }
      else if (*(void **)(lVar2 + 0x48) == param_2) {
        *(void **)(lVar2 + 0x48) = pvVar4;
      }
      else if (*(void **)(lVar2 + 0x38) == param_2) {
        *(void **)(lVar2 + 0x38) = pvVar4;
      }
      else {
        *(void **)(lVar2 + 0x40) = pvVar4;
      }
      if (*(long *)((long)pvVar4 + 0x48) != 0) {
        *(void **)(*(long *)((long)pvVar4 + 0x48) + 0x30) = pvVar4;
      }
      if (*(long *)((long)pvVar4 + 0x38) != 0) {
        *(void **)(*(long *)((long)pvVar4 + 0x38) + 0x30) = pvVar4;
      }
      if (*(long *)((long)pvVar4 + 0x40) != 0) {
        *(void **)(*(long *)((long)pvVar4 + 0x40) + 0x30) = pvVar4;
      }
    }
    else {
      lVar2 = *(long *)((long)param_2 + 0x30);
      lVar3 = *(long *)((long)param_2 + 0x48);
      if (lVar2 == 0) {
        param_1[3] = lVar3;
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x30) = 0;
        }
      }
      else {
        *(long *)(lVar2 + 0x48) = lVar3;
        if (*(long *)((long)param_2 + 0x48) != 0) {
          *(long *)(*(long *)((long)param_2 + 0x48) + 0x30) = lVar2;
        }
      }
    }
  }
  return;
}




void FUN_1005db1d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x48);
  *(long *)(param_1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x30) = 0;
  }
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) & 0xffffffdf;
  return;
}




void FUN_1005db1fc(float param_1,long param_2)

{
  *(float *)(param_2 + 0x14) = 1.0 / param_1;
  return;
}




bool FUN_1005db20c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  bool bVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  char local_18;
  
  if (*param_1 == 0) {
    bVar1 = true;
  }
  else {
    local_18 = '\0';
    local_28 = param_2;
    uStack_20 = param_3;
    FUN_1005db260(*param_4,param_4[1],param_4[2],*param_5,param_5[1],param_5[2],*param_1,&local_28);
    bVar1 = local_18 == '\0';
  }
  return bVar1;
}




void FUN_1005db260(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,float *param_7,undefined8 *param_8)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  pfVar2 = param_7;
  do {
    while (param_7 = *(float **)(param_7 + 0x12), param_7 != (float *)0x0) {
      uVar1 = (*(code *)*param_8)(param_7,param_8[1]);
      if ((uVar1 & 1) == 0) {
LAB_1005db6b8:
        *(undefined1 *)(param_8 + 2) = 1;
        return;
      }
    }
    fVar10 = (float)param_1;
    fVar4 = fVar10 - *pfVar2;
    fVar7 = (float)param_4;
    fVar3 = fVar7 - *pfVar2;
    fVar6 = (float)param_5;
    fVar5 = (float)param_6;
    fVar9 = (float)param_2;
    fVar8 = (float)param_3;
    if ((0.0 <= fVar4) || (fVar3 <= 0.0)) {
      if ((fVar4 <= 0.0) || (0.0 <= fVar3)) {
        if ((fVar4 < 0.0) && (fVar3 < 0.0)) {
          return;
        }
      }
      else {
        fVar3 = fVar3 / (fVar3 - fVar4);
        param_4 = (ulong)(uint)(fVar7 + (fVar10 - fVar7) * fVar3);
        param_5 = (ulong)(uint)(fVar6 + (fVar9 - fVar6) * fVar3);
        param_6 = (ulong)(uint)(fVar5 + (fVar8 - fVar5) * fVar3);
      }
    }
    else {
      fVar4 = fVar4 / (fVar4 - fVar3);
      param_1 = (ulong)(uint)(fVar10 + (fVar7 - fVar10) * fVar4);
      param_2 = (ulong)(uint)(fVar9 + (fVar6 - fVar9) * fVar4);
      param_3 = (ulong)(uint)(fVar8 + (fVar5 - fVar8) * fVar4);
    }
    fVar10 = (float)param_1;
    fVar4 = pfVar2[1] - fVar10;
    fVar7 = (float)param_4;
    fVar3 = pfVar2[1] - fVar7;
    fVar6 = (float)param_5;
    fVar5 = (float)param_6;
    fVar9 = (float)param_2;
    fVar8 = (float)param_3;
    if ((0.0 <= fVar4) || (fVar3 <= 0.0)) {
      if ((fVar4 <= 0.0) || (0.0 <= fVar3)) {
        if ((fVar4 < 0.0) && (fVar3 < 0.0)) {
          return;
        }
      }
      else {
        fVar3 = fVar3 / (fVar3 - fVar4);
        param_4 = (ulong)(uint)(fVar7 + (fVar10 - fVar7) * fVar3);
        param_5 = (ulong)(uint)(fVar6 + (fVar9 - fVar6) * fVar3);
        param_6 = (ulong)(uint)(fVar5 + (fVar8 - fVar5) * fVar3);
      }
    }
    else {
      fVar4 = fVar4 / (fVar4 - fVar3);
      param_1 = (ulong)(uint)(fVar10 + (fVar7 - fVar10) * fVar4);
      param_2 = (ulong)(uint)(fVar9 + (fVar6 - fVar9) * fVar4);
      param_3 = (ulong)(uint)(fVar8 + (fVar5 - fVar8) * fVar4);
    }
    fVar9 = (float)param_2;
    fVar4 = fVar9 - pfVar2[2];
    fVar6 = (float)param_5;
    fVar3 = fVar6 - pfVar2[2];
    fVar7 = (float)param_4;
    fVar5 = (float)param_6;
    fVar10 = (float)param_1;
    fVar8 = (float)param_3;
    if ((0.0 <= fVar4) || (fVar3 <= 0.0)) {
      if ((fVar4 <= 0.0) || (0.0 <= fVar3)) {
        if ((fVar4 < 0.0) && (fVar3 < 0.0)) {
          return;
        }
      }
      else {
        fVar3 = fVar3 / (fVar3 - fVar4);
        param_4 = (ulong)(uint)(fVar7 + (fVar10 - fVar7) * fVar3);
        param_5 = (ulong)(uint)(fVar6 + (fVar9 - fVar6) * fVar3);
        param_6 = (ulong)(uint)(fVar5 + (fVar8 - fVar5) * fVar3);
      }
    }
    else {
      fVar4 = fVar4 / (fVar4 - fVar3);
      param_1 = (ulong)(uint)(fVar10 + (fVar7 - fVar10) * fVar4);
      param_2 = (ulong)(uint)(fVar9 + (fVar6 - fVar9) * fVar4);
      param_3 = (ulong)(uint)(fVar8 + (fVar5 - fVar8) * fVar4);
    }
    fVar9 = (float)param_2;
    fVar4 = pfVar2[3] - fVar9;
    fVar6 = (float)param_5;
    fVar3 = pfVar2[3] - fVar6;
    fVar7 = (float)param_4;
    fVar5 = (float)param_6;
    fVar10 = (float)param_1;
    fVar8 = (float)param_3;
    if ((0.0 <= fVar4) || (fVar3 <= 0.0)) {
      if ((fVar4 <= 0.0) || (0.0 <= fVar3)) {
        if ((fVar4 < 0.0) && (fVar3 < 0.0)) {
          return;
        }
      }
      else {
        fVar3 = fVar3 / (fVar3 - fVar4);
        param_4 = (ulong)(uint)(fVar7 + (fVar10 - fVar7) * fVar3);
        param_5 = (ulong)(uint)(fVar6 + (fVar9 - fVar6) * fVar3);
        param_6 = (ulong)(uint)(fVar5 + (fVar8 - fVar5) * fVar3);
      }
    }
    else {
      fVar4 = fVar4 / (fVar4 - fVar3);
      param_1 = (ulong)(uint)(fVar10 + (fVar7 - fVar10) * fVar4);
      param_2 = (ulong)(uint)(fVar9 + (fVar6 - fVar9) * fVar4);
      param_3 = (ulong)(uint)(fVar8 + (fVar5 - fVar8) * fVar4);
    }
    fVar8 = (float)param_3;
    fVar4 = fVar8 - pfVar2[4];
    fVar5 = (float)param_6;
    fVar3 = fVar5 - pfVar2[4];
    fVar7 = (float)param_4;
    fVar6 = (float)param_5;
    fVar10 = (float)param_1;
    fVar9 = (float)param_2;
    if ((0.0 <= fVar4) || (fVar3 <= 0.0)) {
      if ((fVar4 <= 0.0) || (0.0 <= fVar3)) {
        if ((fVar4 < 0.0) && (fVar3 < 0.0)) {
          return;
        }
      }
      else {
        fVar3 = fVar3 / (fVar3 - fVar4);
        param_4 = (ulong)(uint)(fVar7 + (fVar10 - fVar7) * fVar3);
        param_5 = (ulong)(uint)(fVar6 + (fVar9 - fVar6) * fVar3);
        param_6 = (ulong)(uint)(fVar5 + (fVar8 - fVar5) * fVar3);
      }
    }
    else {
      fVar4 = fVar4 / (fVar4 - fVar3);
      param_1 = (ulong)(uint)(fVar10 + (fVar7 - fVar10) * fVar4);
      param_2 = (ulong)(uint)(fVar9 + (fVar6 - fVar9) * fVar4);
      param_3 = (ulong)(uint)(fVar8 + (fVar5 - fVar8) * fVar4);
    }
    fVar8 = (float)param_3;
    fVar4 = pfVar2[5] - fVar8;
    fVar5 = (float)param_6;
    fVar3 = pfVar2[5] - fVar5;
    fVar7 = (float)param_4;
    fVar6 = (float)param_5;
    fVar10 = (float)param_1;
    fVar9 = (float)param_2;
    if ((0.0 <= fVar4) || (fVar3 <= 0.0)) {
      if ((fVar4 <= 0.0) || (0.0 <= fVar3)) {
        if ((fVar4 < 0.0) && (fVar3 < 0.0)) {
          return;
        }
      }
      else {
        fVar3 = fVar3 / (fVar3 - fVar4);
        param_4 = (ulong)(uint)(fVar7 + (fVar10 - fVar7) * fVar3);
        param_5 = (ulong)(uint)(fVar6 + (fVar9 - fVar6) * fVar3);
        param_6 = (ulong)(uint)(fVar5 + (fVar8 - fVar5) * fVar3);
      }
    }
    else {
      fVar4 = fVar4 / (fVar4 - fVar3);
      param_1 = (ulong)(uint)(fVar10 + (fVar7 - fVar10) * fVar4);
      param_2 = (ulong)(uint)(fVar9 + (fVar6 - fVar9) * fVar4);
      param_3 = (ulong)(uint)(fVar8 + (fVar5 - fVar8) * fVar4);
    }
    if ((*(byte *)(pfVar2 + 6) >> 2 & 1) != 0) {
      uVar1 = (*(code *)*param_8)(pfVar2,param_8[1]);
      if ((uVar1 & 1) != 0) {
        return;
      }
      goto LAB_1005db6b8;
    }
    if ((*(long *)(pfVar2 + 0xe) != 0) &&
       (FUN_1005db260(param_1,param_2,param_3,param_4,param_5,param_6,*(long *)(pfVar2 + 0xe),
                      param_8), *(char *)(param_8 + 2) != '\0')) {
      return;
    }
    param_7 = *(float **)(pfVar2 + 0x10);
    pfVar2 = param_7;
    if (param_7 == (float *)0x0) {
      return;
    }
  } while( true );
}




void FUN_1005db6dc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_2;
  if (((*(byte *)(param_2 + 0x18) >> 2 & 1) == 0) &&
     (lVar2 = *(long *)(param_2 + 0x48), *(long *)(param_2 + 0x48) == 0)) {
    *(long *)(param_2 + 0x48) = param_3;
    *(long *)(param_3 + 0x30) = param_2;
  }
  else {
    do {
      lVar1 = lVar2;
      if (*(uint *)(param_3 + 0x1c) <= *(uint *)(lVar1 + 0x1c)) {
        lVar2 = *(long *)(lVar1 + 0x30);
        if (lVar2 == 0) {
          *param_1 = param_3;
        }
        else if (*(long *)(lVar2 + 0x48) == lVar1) {
          *(long *)(lVar2 + 0x48) = param_3;
          if (((*(uint *)(lVar2 + 0x18) & *(uint *)(lVar1 + 0x18)) >> 2 & 1) != 0) {
            *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x10;
          }
        }
        else if (*(long *)(lVar2 + 0x38) == lVar1) {
          *(long *)(lVar2 + 0x38) = param_3;
        }
        else {
          *(long *)(lVar2 + 0x40) = param_3;
        }
        *(long *)(param_3 + 0x30) = lVar2;
        *(long *)(param_3 + 0x48) = lVar1;
        *(long *)(lVar1 + 0x30) = param_3;
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) | 0x10;
        return;
      }
      lVar2 = *(long *)(lVar1 + 0x48);
    } while (*(long *)(lVar1 + 0x48) != 0);
    *(long *)(lVar1 + 0x48) = param_3;
    *(long *)(param_3 + 0x30) = lVar1;
  }
  *(uint *)(param_3 + 0x18) = *(uint *)(param_3 + 0x18) | 0x10;
  return;
}




void FUN_1005db7a4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (*(long *)(lVar1 + 0x48) == param_2) {
    *(long *)(lVar1 + 0x48) = *(long *)(param_2 + 0x48);
    lVar2 = *(long *)(param_2 + 0x48);
    if (lVar2 == 0) goto LAB_1005db804;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x48);
    if (*(long *)(lVar1 + 0x38) == param_2) {
      *(long *)(lVar1 + 0x38) = lVar2;
    }
    else {
      *(long *)(lVar1 + 0x40) = lVar2;
    }
    if (lVar2 == 0) goto LAB_1005db804;
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) & 0xffffffef;
  }
  *(long *)(lVar2 + 0x30) = lVar1;
LAB_1005db804:
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xffffffef;
  return;
}




undefined8 FUN_1005db81c(void)

{
  return 0;
}




undefined8 FUN_1005db824(void)

{
  return 0;
}




void FUN_1005db82c(int param_1)

{
  _malloc((long)param_1);
  return;
}




void FUN_1005db834(void *param_1,int param_2)

{
  _realloc(param_1,(long)param_2);
  return;
}




undefined8 FUN_1005db840(char *param_1,char *param_2,undefined4 *param_3,undefined8 *param_4)

{
  FILE *pFVar1;
  long lVar2;
  undefined8 uVar3;
  
  pFVar1 = _fopen(param_1,param_2);
  *param_4 = pFVar1;
  if (pFVar1 == (FILE *)0x0) {
    uVar3 = 0x12;
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      _fseek(pFVar1,0,2);
      lVar2 = _ftell(pFVar1);
      *param_3 = (int)lVar2;
      _fseek(pFVar1,0,0);
    }
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005db8b4(FILE *param_1)

{
  if (param_1 != (FILE *)0x0) {
    _fclose(param_1);
  }
  return 0;
}




undefined8 FUN_1005db8d0(void)

{
  return 0;
}




undefined4 FUN_1005db8d8(FILE *param_1,void *param_2,ulong param_3,undefined4 *param_4)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  
  if (param_1 == (FILE *)0x0) {
    uVar3 = 0x1f;
  }
  else {
    sVar2 = _fread(param_2,1,param_3 & 0xffffffff,param_1);
    *param_4 = (int)sVar2;
    iVar1 = _feof(param_1);
    if (iVar1 == 0) {
      iVar1 = _ferror(param_1);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 0xd;
      }
    }
    else {
      uVar3 = 0x10;
    }
  }
  return uVar3;
}




uint FUN_1005db948(FILE *param_1,ulong param_2)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = _fseek(param_1,param_2 & 0xffffffff,0);
    return iVar1 >> 0x1f & 0xd;
  }
  return 0x1f;
}




undefined8 FUN_1005db97c(char *param_1)

{
  _fputs(param_1,*(FILE **)PTR____stderrp_101444220);
  return 0;
}




undefined8 FUN_1005db9a0(int *param_1)

{
  uint64_t uVar1;
  double dVar2;
  double dVar3;
  
  if (DAT_101e9b79c == 0) {
    _mach_timebase_info((mach_timebase_info_t)&DAT_101e9b798);
    dVar2 = (double)NEON_ucvtf((ulong)DAT_101e9b798);
    dVar3 = (double)NEON_ucvtf((ulong)DAT_101e9b79c);
    DAT_101e9b7a0 = (dVar2 / dVar3) / 1000.0;
  }
  uVar1 = _mach_absolute_time();
  dVar2 = (double)_fmod((double)uVar1 * DAT_101e9b7a0,0x41efffffffe00000);
  *param_1 = (int)dVar2;
  return 0;
}




undefined8 FUN_1005dba24(int *param_1)

{
  uint64_t uVar1;
  double dVar2;
  double dVar3;
  
  if (DAT_101e9b7ac == 0) {
    _mach_timebase_info((mach_timebase_info_t)&DAT_101e9b7a8);
    dVar2 = (double)NEON_ucvtf((ulong)DAT_101e9b7a8);
    dVar3 = (double)NEON_ucvtf((ulong)DAT_101e9b7ac);
    DAT_101e9b7b0 = (dVar2 / dVar3) / 1000000.0;
  }
  uVar1 = _mach_absolute_time();
  dVar2 = (double)_fmod((double)uVar1 * DAT_101e9b7b0,0x41efffffffe00000);
  *param_1 = (int)dVar2;
  return 0;
}




undefined8 FUN_1005dbaa8(int param_1)

{
  _usleep(param_1 * 1000);
  return 0;
}




undefined8 FUN_1005dbac8(undefined8 *param_1)

{
  pthread_t p_Var1;
  
  p_Var1 = _pthread_self();
  *param_1 = p_Var1;
  return 0;
}




undefined8 FUN_1005dbaf0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  
  pcVar1 = (code *)*param_1;
  uVar2 = param_1[1];
  iVar3 = _pthread_setname_np((char *)(param_1 + 2));
  if (iVar3 == 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_os_misc.cpp"
                  ,0x138);
    (*pcVar1)(uVar2);
  }
  return 0;
}




void FUN_1005dbb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,uint param_6,undefined8 *param_7)

{
  size_t sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  pthread_t local_a8;
  sched_param local_a0;
  pthread_attr_t pStack_98;
  long local_58;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar5;
  iVar2 = _pthread_attr_init(&pStack_98);
  if (iVar2 != 0) {
    uVar3 = 0x1c;
    goto LAB_1005dbcfc;
  }
  iVar2 = _pthread_attr_setdetachstate(&pStack_98,2);
  if (iVar2 != 0) {
    uVar3 = 0x1c;
    goto LAB_1005dbcfc;
  }
  local_a0.sched_priority = 0;
  local_a0.__opaque[0] = '\0';
  local_a0.__opaque[1] = '\0';
  local_a0.__opaque[2] = '\0';
  local_a0.__opaque[3] = '\0';
  switch(param_4) {
  case 0:
    local_a0.sched_priority = 0x57;
    break;
  case 1:
    local_a0.sched_priority = 0x5a;
    break;
  case 2:
    local_a0.sched_priority = 0x5e;
    break;
  case 3:
    local_a0.sched_priority = 99;
    break;
  case 0xfffffffe:
    local_a0.sched_priority = 0x50;
    break;
  case 0xffffffff:
    local_a0.sched_priority = 0x53;
    break;
  default:
    goto switchD_1005dbbe4_default;
  }
  local_a0.__opaque[0] = '\0';
  local_a0.__opaque[1] = '\0';
  local_a0.__opaque[2] = '\0';
  local_a0.__opaque[3] = '\0';
switchD_1005dbbe4_default:
  sVar1 = (size_t)param_6;
  if ((int)param_6 < 0x4001) {
    sVar1 = 0x4000;
  }
  iVar2 = _pthread_attr_setstacksize(&pStack_98,sVar1);
  if (iVar2 == 0) {
    iVar2 = _pthread_attr_setschedpolicy(&pStack_98,4);
    if (iVar2 == 0) {
      iVar2 = _pthread_attr_setschedparam(&pStack_98,&local_a0);
      if (iVar2 == 0) {
        puVar4 = (undefined8 *)
                 FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x110,
                               "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_os_misc.cpp"
                               ,0x17c,0);
        if (puVar4 == (undefined8 *)0x0) {
          uVar3 = 0x26;
        }
        else {
          *puVar4 = param_2;
          puVar4[1] = param_3;
          FUN_1005ecc98(puVar4 + 2,param_1,0x100);
          iVar2 = _pthread_create(&local_a8,&pStack_98,(void **)FUN_1005dbaf0,puVar4);
          if (iVar2 == 0) {
            iVar2 = _pthread_attr_destroy(&pStack_98);
            if (iVar2 == 0) {
              uVar3 = 0;
              *param_7 = local_a8;
            }
            else {
              uVar3 = 0x1c;
            }
          }
          else {
            uVar3 = 0x1c;
          }
        }
      }
      else {
        uVar3 = 0x1c;
      }
    }
    else {
      uVar3 = 0x1c;
    }
  }
  else {
    uVar3 = 0x1c;
  }
LAB_1005dbcfc:
  if (lVar5 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3);
  }
  return;
}




undefined8 FUN_1005dbd40(void)

{
  return 0;
}




void FUN_1005dbd48(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  pthread_mutex_t *ppVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  pthread_mutexattr_t pStack_48;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = lVar5;
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = 0x1f;
    goto LAB_1005dbe60;
  }
  if ((param_2 & 1) == 0) {
    ppVar2 = (pthread_mutex_t *)
             FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x40,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_os_misc.cpp"
                           ,0x1c1,0,0);
    if (ppVar2 == (pthread_mutex_t *)0x0) {
      uVar3 = 0x26;
      goto LAB_1005dbe60;
    }
  }
  else {
    ppVar2 = (pthread_mutex_t *)&DAT_101dbce30;
  }
  _pthread_mutexattr_init(&pStack_48);
  iVar1 = _pthread_mutexattr_settype(&pStack_48,2);
  if (iVar1 == 0) {
    iVar1 = _pthread_mutex_init(ppVar2,&pStack_48);
    if (iVar1 == 0) {
      uVar3 = 0;
      *param_1 = ppVar2;
      goto LAB_1005dbe60;
    }
    if ((param_2 & 1) != 0) {
      uVar3 = 0x26;
      goto LAB_1005dbe60;
    }
    uVar3 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
    uVar4 = 0x1da;
  }
  else {
    if ((param_2 & 1) != 0) {
      uVar3 = 0x26;
      goto LAB_1005dbe60;
    }
    uVar3 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
    uVar4 = 0x1cf;
  }
  FUN_1005d7f1c(uVar3,ppVar2,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_os_misc.cpp"
                ,uVar4);
  uVar3 = 0x26;
LAB_1005dbe60:
  if (lVar5 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




undefined8 FUN_1005dbe84(pthread_mutex_t *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (pthread_mutex_t *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    _pthread_mutex_destroy(param_1);
    if ((param_2 & 1) == 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/platforms/ios/src/fmod_os_misc.cpp"
                    ,0x1fb);
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined4 FUN_1005dbee4(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (pthread_mutex_t *)0x0) {
    iVar1 = _pthread_mutex_lock(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0x26;
    }
    return uVar2;
  }
  return 0x1f;
}




undefined4 FUN_1005dbf14(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (pthread_mutex_t *)0x0) {
    iVar1 = _pthread_mutex_unlock(param_1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0x26;
    }
    return uVar2;
  }
  return 0x1f;
}




undefined8 FUN_1005dbf44(pthread_mutex_t *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = _pthread_mutex_trylock(param_1);
  *(bool *)param_2 = iVar1 == 0;
  return 0;
}




undefined8 FUN_1005dbf74(void)

{
  return 0x44;
}




undefined8 FUN_1005dbf7c(ulong *param_1)

{
  kern_return_t kVar1;
  undefined8 uVar2;
  semaphore_t local_24;
  
  local_24 = 0;
  if (param_1 == (ulong *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    kVar1 = _semaphore_create(*(task_t *)PTR__mach_task_self__101444368,&local_24,0,0);
    if (kVar1 == 0) {
      uVar2 = 0;
      *param_1 = (ulong)local_24;
    }
    else {
      uVar2 = 0x1c;
    }
  }
  return uVar2;
}




undefined4 FUN_1005dbfe4(long param_1)

{
  undefined4 uVar1;
  kern_return_t kVar2;
  
  if (param_1 != 0) {
    kVar2 = _semaphore_destroy(*(task_t *)PTR__mach_task_self__101444368,(semaphore_t)param_1);
    uVar1 = 0;
    if (kVar2 != 0) {
      uVar1 = 0x1c;
    }
    return uVar1;
  }
  return 0x1f;
}




undefined4 FUN_1005dc028(long param_1)

{
  undefined4 uVar1;
  kern_return_t kVar2;
  
  if (param_1 != 0) {
    kVar2 = _semaphore_wait((semaphore_t)param_1);
    uVar1 = 0;
    if (kVar2 != 0) {
      uVar1 = 0x1c;
    }
    return uVar1;
  }
  return 0x1f;
}




undefined4 FUN_1005dc058(long param_1)

{
  undefined4 uVar1;
  kern_return_t kVar2;
  
  if (param_1 != 0) {
    kVar2 = _semaphore_signal((semaphore_t)param_1);
    uVar1 = 0;
    if (kVar2 != 0) {
      uVar1 = 0x1c;
    }
    return uVar1;
  }
  return 0x1f;
}




undefined8 FUN_1005dc088(void)

{
  return 0;
}




undefined8 FUN_1005dc090(void)

{
  return 0;
}




undefined8 FUN_1005dc098(void)

{
  return 0;
}




void FUN_1005dc0a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1005dfa5c();
  FUN_1005e1e68(param_1,uVar1,0,0);
  return;
}




undefined8 FUN_1005dc0d0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0xc;
    return 0;
  }
  return 0x1f;
}




undefined8 * FUN_1005dc0f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a2c10;
  FUN_1005fb738(param_1 + 0xd);
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3c] = param_1 + 0x3c;
  param_1[0x3d] = param_1 + 0x3c;
  *(undefined1 *)((long)param_1 + 0x1c9) = 0;
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 1;
  param_1[9] = 2;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  return param_1;
}




undefined8 * FUN_1005dc160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014a2c10;
  FUN_1005fb738(param_1 + 0xd);
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3c] = param_1 + 0x3c;
  param_1[0x3d] = param_1 + 0x3c;
  *(undefined1 *)((long)param_1 + 0x1c9) = 0;
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 1;
  param_1[9] = 2;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  return param_1;
}




undefined8 FUN_1005dc1cc(long param_1)

{
  if (*(code **)(param_1 + 0x268) != (code *)0x0) {
    (**(code **)(param_1 + 0x268))(param_1 + 8);
  }
  FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                ,0x42);
  return 0;
}




undefined8 FUN_1005dc220(long param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint local_88;
  uint local_84;
  long local_80;
  long local_78;
  
  lVar9 = param_3;
  if (*(long *)(param_2 + 0x50) != 0) {
    lVar9 = *(long *)(param_2 + 0x58);
  }
  if (param_4 != 0) {
    lVar10 = *(long *)(param_2 + 0x58);
    do {
      uVar12 = *(int *)(param_2 + 0x18) - 1;
      if (uVar12 < 5) {
        uVar12 = *(uint *)(&DAT_10115f820 + (long)(int)uVar12 * 4);
        iVar6 = *(int *)(param_2 + 0x20);
        iVar1 = (uVar12 * *(int *)(param_2 + 0x14) >> 3) * iVar6;
        uVar8 = uVar12 * param_4 >> 3;
      }
      else {
        uVar12 = 0;
        iVar6 = *(int *)(param_2 + 0x20);
        iVar1 = *(int *)(param_2 + 0x14) * iVar6;
        uVar8 = param_4;
      }
      local_80 = 0;
      local_78 = 0;
      local_88 = 0;
      local_84 = 0;
      uVar4 = (**(code **)(param_1 + 800))
                        (param_1 + 8,param_2,iVar1,uVar8 * iVar6,&local_78,&local_80,&local_84,
                         &local_88);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      uVar8 = *(uint *)(param_2 + 0x20);
      if (uVar8 == 0) {
        uVar11 = 0;
LAB_1005dc338:
        if (*(int *)(param_2 + 0x18) == 1) {
          if ((local_78 != 0) && (local_84 != 0)) {
            lVar7 = 0;
            do {
              *(byte *)(local_78 + lVar7) = *(byte *)(local_78 + lVar7) ^ 0x80;
              lVar7 = lVar7 + 1;
            } while ((uint)lVar7 < local_84);
          }
          if (local_80 != 0 && local_88 != 0) {
            lVar7 = 0;
            do {
              *(byte *)(local_80 + lVar7) = *(byte *)(local_80 + lVar7) ^ 0x80;
              lVar7 = lVar7 + 1;
            } while ((uint)lVar7 < local_88);
          }
        }
      }
      else {
        uVar11 = (ulong)(local_88 + local_84);
        uVar2 = *(int *)(param_2 + 0x18) - 1;
        if (uVar2 < 5) {
          uVar3 = 0;
          if ((long)*(int *)(&DAT_10115f820 + (long)(int)uVar2 * 4) != 0) {
            uVar3 = (uint)((uVar11 << 3) /
                          (ulong)(long)*(int *)(&DAT_10115f820 + (long)(int)uVar2 * 4));
          }
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar3 / uVar8;
          }
          uVar11 = (ulong)uVar2;
          goto LAB_1005dc338;
        }
      }
      if (local_78 != 0 && local_84 != 0) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = (local_84 << 3) / uVar12;
        }
        FUN_10063a2fc(0x3f800000,lVar9,local_78,5,*(undefined4 *)(param_2 + 0x18),(ulong)uVar8,1,1,1
                     );
        lVar9 = lVar9 + (ulong)uVar8 * 4;
      }
      if (local_80 != 0 && local_88 != 0) {
        uVar8 = 0;
        if (uVar12 != 0) {
          uVar8 = (local_88 << 3) / uVar12;
        }
        FUN_10063a2fc(0x3f800000,lVar9,local_80,5,*(undefined4 *)(param_2 + 0x18),(ulong)uVar8,1,1,1
                     );
        lVar9 = lVar9 + (ulong)uVar8 * 4;
      }
      if ((*(code **)(param_1 + 0x328) != (code *)0x0) &&
         (uVar4 = (**(code **)(param_1 + 0x328))
                            (param_1 + 8,param_2,local_78,local_80,local_84,local_88),
         (int)uVar4 != 0)) {
        return uVar4;
      }
      plVar5 = *(long **)(param_2 + 0x50);
      iVar6 = (int)uVar11;
      if (plVar5 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar10,param_3,uVar11);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        lVar10 = lVar10 + (ulong)(uint)(*(int *)(*(long *)(param_2 + 0x50) + 8) * iVar6) * 4;
        param_3 = param_3 + (ulong)(uint)(*(int *)(*(long *)(param_2 + 0x50) + 0xc) * iVar6) * 4;
      }
      uVar12 = *(int *)(param_2 + 0x14) + iVar6;
      uVar8 = *(uint *)(param_2 + 0x24);
      uVar2 = 0;
      if (uVar8 != 0) {
        uVar2 = uVar12 / uVar8;
      }
      *(uint *)(param_2 + 0x14) = uVar12 - uVar2 * uVar8;
      param_4 = param_4 - iVar6;
    } while (param_4 != 0);
  }
  return 0;
}




void FUN_1005dc4cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *param_1 + -8;
  }
  local_28 = 0;
  FUN_1005cfa44(lVar1 + 8,&local_28);
  FUN_1005dc220(local_28,*(undefined8 *)(local_28 + 0x220),param_2,*param_4);
  return;
}




undefined8 FUN_1005dc52c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_98;
  int local_94;
  uint local_90;
  uint local_8c;
  long local_88;
  long local_80;
  int local_74;
  
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  local_8c = 0;
  uVar4 = (**(code **)(**(long **)(param_2 + 0x40) + 0x98))
                    (*(long **)(param_2 + 0x40),0,&local_98,&local_74,0);
  if (((int)uVar4 == 0) &&
     (uVar4 = (**(code **)(**(long **)(param_2 + 0x40) + 0x90))
                        (*(long **)(param_2 + 0x40),&local_94,2), (int)uVar4 == 0)) {
    if (local_98 - 1U < 5) {
      uVar6 = *(uint *)(&DAT_10115f820 + (long)(int)(local_98 - 1U) * 4) >> 3;
    }
    else {
      uVar6 = 1;
    }
    uVar8 = (uint)(((float)param_3 * *(float *)(*(long *)(param_2 + 0x40) + 100)) /
                  (float)*(int *)(param_2 + 0x1c));
    if (uVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar6 = uVar6 * local_74;
      uVar9 = *(uint *)(param_2 + 0x34);
      do {
        iVar2 = local_74;
        uVar1 = 0x800;
        if (uVar8 < 0x801) {
          uVar1 = uVar8;
        }
        uVar10 = uVar1;
        if (local_98 - 1U < 5) {
          uVar9 = *(int *)(&DAT_10115f820 + (long)(int)(local_98 - 1U) * 4) * uVar9 >> 3;
          uVar10 = *(int *)(&DAT_10115f820 + (long)(int)(local_98 - 1U) * 4) * uVar1 >> 3;
        }
        puVar5 = *(undefined8 **)(param_2 + 0x48);
        if (puVar5 == (undefined8 *)0x0) {
          uVar4 = FUN_1005dc220(param_1,param_2,*(undefined8 *)(param_2 + 0x38),uVar1);
          iVar3 = (int)uVar4;
        }
        else {
          *(long *)(param_1 + 0x220) = param_2;
          uVar4 = (**(code **)*puVar5)(puVar5,*(undefined8 *)(param_2 + 0x38),&local_74,uVar1);
          iVar3 = (int)uVar4;
        }
        if (iVar3 != 0) {
          return uVar4;
        }
        uVar4 = (**(code **)(**(long **)(param_2 + 0x40) + 0x28))
                          (*(long **)(param_2 + 0x40),uVar9 * iVar2,uVar10 * iVar2,&local_80,
                           &local_88,&local_8c,&local_90);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        lVar7 = *(long *)(param_2 + 0x38);
        if ((local_80 != 0) && (local_8c != 0)) {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = local_8c / uVar6;
          }
          FUN_10063a2fc(0x3f800000,local_80,lVar7,local_98,5,local_74 * uVar9,1,1,1);
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = local_8c / uVar6;
          }
          lVar7 = lVar7 + (ulong)(local_74 * uVar9) * 4;
        }
        if ((local_88 != 0) && (local_90 != 0)) {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = local_90 / uVar6;
          }
          FUN_10063a2fc(0x3f800000,local_88,lVar7,local_98,5,local_74 * uVar9,1,1,1);
        }
        uVar4 = (**(code **)(**(long **)(param_2 + 0x40) + 0x30))
                          (*(long **)(param_2 + 0x40),local_80,local_88,local_8c,local_90);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar10 = *(int *)(param_2 + 0x34) + uVar1;
        if ((local_90 != 0) || (uVar9 = uVar10, local_94 <= (int)uVar10)) {
          if (*(char *)(param_2 + 0x30) == '\0') {
            *(undefined1 *)(param_2 + 0x31) = 1;
            return 0;
          }
          uVar9 = 0;
          if (-1 < (int)(uVar10 - local_94)) {
            uVar9 = uVar10 - local_94;
          }
        }
        *(uint *)(param_2 + 0x34) = uVar9;
        uVar8 = uVar8 - uVar1;
      } while (uVar8 != 0);
      uVar4 = 0;
    }
  }
  return uVar4;
}




undefined8 FUN_1005dc7e8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_24;
  
  if (*(code **)(param_1 + 0x318) == (code *)0x0) {
    uVar4 = 0x42;
  }
  else if (*(int *)(param_2 + 0x24) == 0) {
    uVar4 = 0;
  }
  else if (*(char *)(param_2 + 0x31) == '\0') {
    local_24 = 0;
    iVar3 = (**(code **)(param_1 + 0x318))(param_1 + 8,param_2,&local_24);
    if (iVar3 == 0) {
      iVar3 = local_24 - *(int *)(param_2 + 0x14);
      if (((iVar3 < 0) && (iVar3 = *(int *)(param_2 + 0x24) + iVar3, iVar3 < 0)) ||
         (*(int *)(param_2 + 0x24) < iVar3)) {
        iVar3 = 0;
      }
      if (*(long *)(param_2 + 0x48) == 0) {
        if (iVar3 < 1) {
          return 0;
        }
      }
      else {
        iVar1 = *(int *)(*(long *)(param_2 + 0x48) + 0x1f8);
        if (iVar3 < iVar1 * 3) {
          return 0;
        }
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = iVar3 / iVar1;
        }
        iVar3 = iVar2 * iVar1 - iVar1;
      }
      iVar3 = FUN_1005dc52c(param_1,param_2,iVar3);
      if (iVar3 == 0) {
        return 0;
      }
    }
    uVar4 = 0;
    *(undefined1 *)(param_2 + 0x31) = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}




undefined8 FUN_1005dc8e4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint *puStack_48;
  undefined8 local_40;
  
  if (*(code **)(param_1 + 0x308) == (code *)0x0) {
    return 0x42;
  }
  uVar2 = (**(code **)(param_1 + 0x308))(param_1 + 8,param_2);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  iVar6 = *(int *)(param_2 + 0x20);
  if (iVar6 != *(int *)(*(long *)(param_2 + 0x40) + 0x60)) {
    puVar3 = (undefined8 *)
             FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0xd0,
                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                           ,0x1b7,0);
    puVar3[5] = puVar3 + 4;
    puVar3[6] = 0;
    puVar3[4] = puVar3 + 4;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    *(undefined2 *)(puVar3 + 10) = 0;
    *(undefined2 *)((long)puVar3 + 0x52) = 0;
    *(undefined2 *)(puVar3 + 0xc) = 0;
    *(undefined2 *)((long)puVar3 + 0x62) = 0;
    puVar3[0x18] = 0;
    puVar3[7] = puVar3 + 7;
    puVar3[8] = puVar3 + 7;
    *puVar3 = &PTR_FUN_1014a1878;
    *(undefined2 *)(puVar3 + 0x17) = 0;
    *(undefined2 *)((long)puVar3 + 0xba) = 0;
    puVar3[3] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0xd] = 0;
    *(undefined8 **)(param_2 + 0x50) = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      return 0x26;
    }
    uVar2 = FUN_10055ea0c(puVar3,*(undefined8 *)(param_1 + 0x40),0,0,8,
                          *(undefined4 *)(param_2 + 0x20),8,
                          *(undefined4 *)(*(long *)(param_2 + 0x40) + 0x60),0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(int *)(param_2 + 0x20) << 0xd,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                          ,0x1c4,0);
    *(long *)(param_2 + 0x58) = lVar4;
    if (lVar4 == 0) {
      return 0x26;
    }
    iVar6 = *(int *)(*(long *)(param_2 + 0x40) + 0x60);
  }
  lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar6 << 0xd,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                        ,0x1d7,0);
  *(long *)(param_2 + 0x38) = lVar4;
  if (lVar4 != 0) {
    iVar6 = *(int *)(param_2 + 0x1c);
    if ((float)iVar6 == *(float *)(*(long *)(param_2 + 0x40) + 100)) {
      return 0;
    }
    puStack_48 = (uint *)0x0;
    local_40 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_70 = 0;
    local_74 = 1;
    puVar3 = (undefined8 *)FUN_1005c1484();
    local_40 = puVar3[6];
    local_50 = puVar3[4];
    uStack_58 = puVar3[3];
    local_60 = puVar3[2];
    uStack_68 = puVar3[1];
    local_70 = *puVar3;
    local_7c = *(undefined4 *)(*(long *)(param_2 + 0x40) + 0x60);
    local_78 = 5;
    puStack_48 = &local_80;
    local_80 = (int)((float)iVar6 * 0.01) & 0xfffffff0;
    FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x288,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                  ,0x1f7,0);
    plVar5 = (long *)FUN_1005c14ac();
    puVar1 = PTR_DAT_1014441c0;
    plVar5[0x50] = 0;
    plVar5[0x4a] = (long)(plVar5 + 0x4b);
    *plVar5 = (long)(puVar1 + 0x10);
    plVar5[0x4f] = 0;
    plVar5[0x4e] = 0;
    plVar5[0x4d] = 0;
    plVar5[0x4c] = 0;
    plVar5[0x4b] = 0;
    *(long **)(param_2 + 0x48) = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar5[0x13] = *(long *)(param_1 + 0x40);
      FUN_1005c934c(plVar5 + 1,&local_70);
      lVar4 = *(long *)(param_2 + 0x48);
      *(undefined4 *)(lVar4 + 0x1d8) = *(undefined4 *)(*(long *)(param_2 + 0x40) + 100);
      *(code **)(lVar4 + 0x218) = FUN_1005dc4cc;
      FUN_1005cfa38(lVar4 + 8,param_1);
      FUN_1005c2094((float)*(int *)(param_2 + 0x1c),*(undefined8 *)(param_2 + 0x48));
      (**(code **)(**(long **)(param_2 + 0x48) + 8))(*(long **)(param_2 + 0x48),0,0,0);
      return 0;
    }
  }
  return 0x26;
}




undefined8 FUN_1005dcbbc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(code **)(param_1 + 0x310) == (code *)0x0) {
    return 0x42;
  }
  uVar1 = (**(code **)(param_1 + 0x310))(param_1 + 8,param_2);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_2 + 0x38),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                  ,0x21b);
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  lVar2 = *(long *)(param_2 + 0x48);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x1e8) != 0) {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar2 + 0x1e8),
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                    ,0x21e);
      lVar2 = *(long *)(param_2 + 0x48);
      *(undefined8 *)(lVar2 + 0x1e8) = 0;
      if (lVar2 == 0) goto LAB_1005dcc74;
    }
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                  ,0x21f);
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
LAB_1005dcc74:
  if (*(long *)(param_2 + 0x58) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_2 + 0x58),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                  ,0x223);
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  if (*(long **)(param_2 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x50) + 8))();
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  return 0;
}




void FUN_1005dccd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 local_28;
  
  local_28 = 0;
  iVar1 = FUN_1005cfa44(*param_1,&local_28);
  if (iVar1 == 0) {
    FUN_1005dcd24(local_28,param_2,*param_4);
  }
  return;
}




undefined8 FUN_1005dcd24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long local_50;
  undefined4 local_48;
  char local_44;
  long local_40;
  undefined4 local_38;
  char local_34;
  
  local_50 = *(long *)(param_1 + 0x40);
  local_34 = '\0';
  local_38 = 0;
  local_44 = '\0';
  local_48 = 3;
  local_40 = local_50;
  uVar1 = FUN_1005dd298(param_1,param_3,&local_40,&local_50);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005dd578(param_1,param_2,param_3), (int)uVar1 == 0)) {
    uVar1 = FUN_1005dd6e4(param_1,&local_40,&local_50);
  }
  if ((local_44 != '\0') && (local_50 != 0)) {
    local_44 = '\0';
    FUN_100570990(local_50,local_48);
  }
  if ((local_34 != '\0') && (local_40 != 0)) {
    local_34 = 0;
    FUN_100570990(local_40,local_38);
  }
  return uVar1;
}




undefined8 FUN_1005dcdf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  ulong local_48;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x15a58);
  for (plVar2 = *(long **)(lVar1 + 0x160); plVar2 != (long *)(lVar1 + 0x160);
      plVar2 = (long *)*plVar2) {
    if (*(long *)(*(long *)plVar2[2] + 0xd0) != 0) {
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_78 = 0;
      local_50 = *(long *)(param_1 + 0x40) + 0x15e68;
      local_48 = (ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0x15ce0);
      (**(code **)(*(long *)plVar2[2] + 0xd0))(&local_78,param_2);
    }
  }
  return 0;
}




undefined8 FUN_1005dceb8(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int local_64;
  
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    FUN_10057097c(lVar4,0x10);
  }
  local_64 = 0;
  if ((((*(code **)(param_1 + 0x2a0) == (code *)0x0) || (*(long *)(param_1 + 0x2a8) == 0)) ||
      (*(long *)(param_1 + 0x2b0) == 0)) ||
     ((*(long *)(param_1 + 0x2b8) == 0 ||
      (uVar5 = (**(code **)(param_1 + 0x2a0))(param_1 + 8,&local_64), (int)uVar5 == 0)))) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x40) + 0x16808);
    iVar2 = iVar3;
    if (local_64 <= iVar3) {
      iVar2 = local_64;
    }
    if (iVar2 != 0 && iVar3 != iVar2) {
      _qsort(*(void **)(*(long *)(param_1 + 0x40) + 0x16800),(long)iVar3,8,(int *)FUN_1005dd0d0);
    }
    if (iVar3 < 1) {
      uVar5 = 0;
    }
    else {
      lVar9 = 0;
      lVar1 = param_1 + 8;
      do {
        puVar7 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x40) + 0x16800) + lVar9 * 8);
        if ((lVar9 < iVar3 - iVar2) || (*(char *)((long)puVar7 + 0x3c) == '\0')) {
          if (puVar7[6] != 0) {
            (**(code **)(param_1 + 0x2b0))(lVar1);
            puVar7[6] = 0;
          }
LAB_1005dd03c:
          if ((*(char *)((long)puVar7 + 0x3c) != '\0') &&
             (uVar5 = FUN_100613a18(puVar7[5],param_2,*puVar7,0,param_3,1,0,param_4,0),
             (int)uVar5 != 0)) break;
        }
        else {
          plVar8 = puVar7 + 6;
          lVar6 = *plVar8;
          if (lVar6 == 0) {
            (**(code **)(param_1 + 0x2a8))(lVar1,plVar8);
            lVar6 = *plVar8;
            if (lVar6 == 0) goto LAB_1005dd03c;
          }
          (**(code **)(param_1 + 0x2b8))(lVar1,lVar6,puVar7);
        }
        uVar5 = 0;
        *(undefined1 *)((long)puVar7 + 0x3c) = 0;
        *(int *)(puVar7 + 7) = (int)lVar9;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar3);
    }
  }
  if ((lVar4 != 0) && (lVar4 != 0)) {
    FUN_100570990(lVar4,0x10);
  }
  return uVar5;
}




uint FUN_1005dd0d0(long *param_1,long *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 1.0;
  fVar3 = 1.0;
  if (*(char *)(*param_1 + 0x3c) != '\0') {
    fVar3 = *(float *)(*param_1 + 0x20);
  }
  if (*(char *)(*param_2 + 0x3c) != '\0') {
    fVar2 = *(float *)(*param_2 + 0x20);
  }
  uVar1 = 0xffffffff;
  if (fVar3 <= fVar2) {
    uVar1 = (uint)(fVar3 < fVar2);
  }
  return uVar1;
}




undefined8 FUN_1005dd10c(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_48;
  int local_44;
  
  iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x40) + 0x6b8) + 0x50);
  iVar2 = *(int *)(param_1 + 0x48);
  local_44 = iVar1;
  FUN_1005dc090(&local_48);
  FUN_1005fbbc4(*(long *)(param_1 + 0x40) + 0x718);
  iVar6 = (int)param_3;
  lVar3 = param_2;
  if ((iVar2 == 5) ||
     (lVar3 = FUN_1005d7708(*(long *)(param_1 + 0x40) + 0x14f68,iVar6 * iVar1 * 4,"",0,0,0),
     lVar3 != 0)) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x15678);
    if (puVar4 == (undefined8 *)0x0) {
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x710) != iVar6) {
        uVar5 = 0x51;
        goto LAB_1005dd274;
      }
      uVar5 = FUN_1005dcd24(param_1,lVar3,param_3);
    }
    else {
      uVar5 = (**(code **)*puVar4)(puVar4,lVar3,&local_44,param_3);
    }
    if ((int)uVar5 == 0) {
      if (iVar2 != 5) {
        uVar5 = FUN_10063a2fc(0x3f800000,param_2,lVar3,*(undefined4 *)(param_1 + 0x48),5,
                              local_44 * iVar6,1,1,1);
        if ((int)uVar5 != 0) goto LAB_1005dd274;
        FUN_1005d7f1c(*(long *)(param_1 + 0x40) + 0x14f68,lVar3,"",0);
      }
      FUN_1005fbbf0(*(long *)(param_1 + 0x40) + 0x718,0x5f);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0x26;
  }
LAB_1005dd274:
  FUN_1005dc098(local_48);
  return uVar5;
}




undefined8 FUN_1005dd298(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  ulong local_58;
  
  lVar6 = *(long *)(param_1 + 0x40);
  if ((*(code **)(lVar6 + 0x15e48) != (code *)0x0) && ((*(byte *)(lVar6 + 0x15e50) >> 5 & 1) != 0))
  {
    (**(code **)(lVar6 + 0x15e48))(lVar6,0x20,0,0,*(undefined8 *)(lVar6 + 0x15c98));
  }
  if ((*param_3 != 0) && (*(char *)((long)param_3 + 0xc) == '\0')) {
    FUN_10057097c(*param_3,(int)param_3[1]);
    *(undefined1 *)((long)param_3 + 0xc) = 1;
  }
  bVar2 = lVar6 != 0;
  if (bVar2) {
    FUN_10057097c(lVar6,2);
  }
  uVar4 = FUN_10056ba8c(*(undefined8 *)(param_1 + 0x40),0,0);
  if ((int)uVar4 == 0) {
    if ((*param_4 != 0) && (*(char *)((long)param_4 + 0xc) == '\0')) {
      FUN_10057097c(*param_4,(int)param_4[1]);
      *(undefined1 *)((long)param_4 + 0xc) = 1;
    }
    lVar5 = *(long *)(param_1 + 0x40);
    plVar1 = (long *)(*(long *)(lVar5 + 0x15a58) + 0x160);
    plVar8 = *(long **)(*(long *)(lVar5 + 0x15a58) + 0x160);
    if (plVar8 != plVar1) {
      do {
        if (*(long *)(*(long *)plVar8[2] + 0xd0) != 0) {
          local_70 = 0;
          uStack_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_88 = 0;
          local_60 = *(long *)(param_1 + 0x40) + 0x15e68;
          local_58 = (ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0x15ce0);
          (**(code **)(*(long *)plVar8[2] + 0xd0))(&local_88,0);
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != plVar1);
      lVar5 = *(long *)(param_1 + 0x40);
    }
    iVar3 = *(int *)(param_1 + 0x1d8);
    *(int *)(lVar5 + 0x15d10) = iVar3;
    lVar7 = *(long *)(lVar5 + 0x14828);
    if (*(int *)(lVar7 + 0x30) == 0) {
      *(int *)(param_1 + 0x1d8) = iVar3 + 1;
      uVar4 = FUN_1005cb768(lVar7,param_2);
      *(undefined4 *)(lVar7 + 0x34) = 0;
    }
    else {
      uVar4 = (**(code **)(**(long **)(lVar5 + 0x15d08) + 0x118))
                        (*(long **)(lVar5 + 0x15d08),0,&local_90);
      if ((int)uVar4 != 0) goto LAB_1005dd544;
      *(undefined4 *)(lVar7 + 0xc) = 0;
      *(undefined4 *)(lVar7 + 0x30) = 0;
      *(undefined4 *)(lVar7 + 0x34) = 1;
      *(int *)(param_1 + 0x1d8) = *(int *)(param_1 + 0x1d8) + 1;
      uVar4 = FUN_1005cb3bc(lVar7,local_90,param_2);
    }
    if (lVar6 != 0) {
      if (bVar2) {
        FUN_100570990(lVar6,2);
      }
      bVar2 = false;
    }
    if (((int)uVar4 == 0) &&
       (uVar4 = FUN_1005fa90c(*(undefined8 *)(param_1 + 0x40)), (int)uVar4 == 0)) {
      lVar5 = *(long *)(param_1 + 0x40);
      if (*(code **)(lVar5 + 0x15e58) != (code *)0x0) {
        (**(code **)(lVar5 + 0x15e58))(lVar5,0x100001,0,0,*(undefined8 *)(lVar5 + 0x15e60));
        lVar5 = *(long *)(param_1 + 0x40);
      }
      if ((*(code **)(lVar5 + 0x15e48) != (code *)0x0) && ((*(byte *)(lVar5 + 0x15e51) & 1) != 0)) {
        (**(code **)(lVar5 + 0x15e48))(lVar5,0x100,0,0,*(undefined8 *)(lVar5 + 0x15c98));
      }
      uVar4 = 0;
    }
  }
LAB_1005dd544:
  if ((lVar6 != 0) && (bVar2)) {
    FUN_100570990(lVar6,2);
  }
  return uVar4;
}




undefined8 FUN_1005dd578(long param_1,void *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar5 = *(long *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(lVar5 + 0x160b0);
  iVar1 = *(int *)(lVar5 + 0x70c);
  if ((*(byte *)(lVar5 + 0x4a) & 1) != 0) {
    FUN_1005fbbc4(lVar5 + 0x754);
    lVar5 = *(long *)(param_1 + 0x40);
  }
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  local_44 = 0xffffffff;
  uVar3 = FUN_1005c9be4(*(undefined8 *)(lVar5 + 0x14828),param_3,uVar2,iVar1,&local_60);
  if ((int)uVar3 == 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x40) + 0x4a) & 1) != 0) {
      FUN_1005fbbf0(*(long *)(param_1 + 0x40) + 0x754,0x5f);
    }
    uVar3 = FUN_1005c8da0(&local_60);
    uVar3 = FUN_1005dceb8(param_1,uVar3,local_50 & 0xffffffff,param_3);
    if ((int)uVar3 == 0) {
      plVar7 = *(long **)(*(long *)(param_1 + 0x40) + 0x15670);
      if (plVar7 == (long *)0x0) {
        pvVar4 = (void *)FUN_1005c8da0(&local_60);
        _memcpy(param_2,pvVar4,(ulong)(uint)(iVar1 * (int)param_3) << 2);
      }
      else {
        pcVar6 = *(code **)(*plVar7 + 0x10);
        uVar3 = FUN_1005c8da0(&local_60);
        uVar3 = (*pcVar6)(plVar7,uVar3,param_2,param_3);
        if ((int)uVar3 != 0) goto LAB_1005dd6c0;
      }
      FUN_1005c8d10(&local_60);
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x6b8);
      uVar3 = FUN_10063ac98(param_2,param_3,*(undefined4 *)(lVar5 + 0x50),
                            *(undefined4 *)(lVar5 + 0x54));
    }
  }
LAB_1005dd6c0:
  FUN_1005c8e48(&local_60);
  return uVar3;
}




undefined8 FUN_1005dd6e4(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  ulong local_58;
  
  local_90 = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x15a58);
  for (plVar3 = *(long **)(lVar2 + 0x160); plVar3 != (long *)(lVar2 + 0x160);
      plVar3 = (long *)*plVar3) {
    if (*(long *)(*(long *)plVar3[2] + 0xd0) != 0) {
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_88 = 0;
      local_60 = *(long *)(param_1 + 0x40) + 0x15e68;
      local_58 = (ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0x15ce0);
      (**(code **)(*(long *)plVar3[2] + 0xd0))(&local_88,1);
    }
  }
  if ((*param_3 != 0) && (*(char *)((long)param_3 + 0xc) != '\0')) {
    *(undefined1 *)((long)param_3 + 0xc) = 0;
    FUN_100570990(*param_3,(int)param_3[1]);
  }
  if ((*param_2 != 0) && (*(char *)((long)param_2 + 0xc) != '\0')) {
    *(undefined1 *)((long)param_2 + 0xc) = 0;
    FUN_100570990(*param_2,(int)param_2[1]);
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0x15d08);
  uVar1 = (**(code **)(*plVar3 + 0x118))(plVar3,0,&local_90);
  if ((int)uVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    if ((*(code **)(lVar2 + 0x15e48) != (code *)0x0) && ((*(byte *)(lVar2 + 0x15e50) >> 6 & 1) != 0)
       ) {
      (**(code **)(lVar2 + 0x15e48))(lVar2,0x40,0,0,*(undefined8 *)(lVar2 + 0x15c98));
    }
    uVar1 = 0;
  }
  return uVar1;
}




undefined8
FUN_1005dd854(long param_1,undefined8 param_2,long param_3,undefined4 *param_4,long *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  
  if (*(long *)(param_1 + 0x2c0) == 0) {
    uVar1 = 0x44;
  }
  else {
    for (plVar6 = *(long **)(param_1 + 0x1e0); plVar6 != (long *)(param_1 + 0x1e0);
        plVar6 = (long *)*plVar6) {
      if (((int)plVar6[5] == (int)param_2) && (plVar6[4] == param_3)) goto LAB_1005ddab4;
    }
    plVar6 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x40,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                                   ,0x401,0);
    *plVar6 = (long)plVar6;
    plVar6[1] = (long)plVar6;
    plVar6[2] = 0;
    if (plVar6 == (long *)0x0) {
      uVar1 = 0x26;
    }
    else {
      uVar1 = (**(code **)(param_1 + 0x2c0))
                        (param_1 + 8,param_2,param_3,(long)plVar6 + 0x2c,&local_64,&local_68,
                         (long)plVar6 + 0x34);
      if ((int)uVar1 == 0) {
        puVar2 = (undefined8 *)FUN_100573c14();
        local_70 = puVar2[6];
        uStack_78 = puVar2[5];
        local_80 = puVar2[4];
        uStack_88 = puVar2[3];
        local_90 = puVar2[2];
        local_a0 = *puVar2;
        pcStack_98 = "Output Port Head";
        uVar1 = FUN_10056b4fc(*(undefined8 *)(param_1 + 0x40),&local_a0,0,&local_a8,1);
        if ((int)uVar1 == 0) {
          FUN_1005cef94(local_a8,0,local_64);
          plVar6[3] = local_a8;
          plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0x15d08);
          uVar1 = (**(code **)(*plVar3 + 0x118))(plVar3,0,&local_b8);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          if (local_68 - 1U < 8) {
            uVar4 = *(undefined4 *)(&DAT_10115f800 + (long)(int)(local_68 - 1U) * 4);
          }
          else {
            uVar4 = 1;
          }
          uVar1 = FUN_1005c9948(local_a8,0,local_68,uVar4);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = FUN_1005ce188(local_b8,local_a8,&local_b0,0,1,0);
          if ((int)uVar1 == 0) {
            uVar1 = FUN_1006149c8(local_b0,0,1,0);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
            uVar1 = FUN_1005c986c(local_a8,1,1);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
            *(int *)(plVar6 + 5) = (int)param_2;
            plVar6[4] = param_3;
            *(int *)(plVar6 + 7) = local_68;
            lVar5 = *(long *)(param_1 + 0x1e8);
            *plVar6 = param_1 + 0x1e0;
            plVar6[1] = lVar5;
            *(long **)(param_1 + 0x1e8) = plVar6;
            *(long **)plVar6[1] = plVar6;
LAB_1005ddab4:
            *(int *)(plVar6 + 6) = (int)plVar6[6] + 1;
            *param_5 = plVar6[3];
            *param_4 = *(undefined4 *)((long)plVar6 + 0x2c);
            return 0;
          }
          FUN_1005cdc44(local_a8,1,0);
        }
      }
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar6,"../../src/fmod_memory.h",0xd4)
      ;
    }
  }
  return uVar1;
}




undefined8 FUN_1005ddaf8(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  
  pcVar4 = *(code **)(param_1 + 0x2c8);
  if (pcVar4 == (code *)0x0) {
    uVar3 = 0x44;
  }
  else {
    plVar5 = (long *)(param_1 + 0x1e0);
    do {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)(param_1 + 0x1e0)) {
        return 0x1e;
      }
    } while (*(int *)((long)plVar5 + 0x2c) != param_2);
    iVar2 = (int)plVar5[6] + -1;
    *(int *)(plVar5 + 6) = iVar2;
    if (iVar2 == 0) {
      plVar1 = (long *)plVar5[1];
      *plVar1 = *plVar5;
      *(long **)(*plVar5 + 8) = plVar1;
      *plVar5 = (long)plVar5;
      plVar5[1] = (long)plVar5;
      (*pcVar4)(param_1 + 8);
      FUN_1005cecf4(plVar5[3],1,1);
      FUN_1005cdc44(plVar5[3],1,0);
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar5,"../../src/fmod_memory.h",0xd4)
      ;
    }
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005ddbbc(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_34 [4];
  
  plVar3 = (long *)(param_1 + 0x1e0);
  do {
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)(param_1 + 0x1e0)) {
      return 0x1e;
    }
  } while (*(int *)((long)plVar3 + 0x2c) != param_2);
  if (*(int *)((long)plVar3 + 0x34) - 1U < 5 && *(int *)((long)plVar3 + 0x34) == 5) {
    uVar1 = FUN_100573cc4(plVar3[3],param_3,param_4,*(undefined4 *)(plVar3 + 7),auStack_34);
  }
  else {
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    local_3c = 0xffffffff;
    local_60 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    local_5c = 0xffffffff;
    uVar1 = FUN_1005c8b7c(&local_58,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(plVar3 + 7),0,0,
                          0);
    if ((int)uVar1 == 0) {
      uVar2 = plVar3[3];
      uVar1 = FUN_1005c8da0(&local_58);
      uVar1 = FUN_100573cc4(uVar2,uVar1,param_4,*(undefined4 *)(plVar3 + 7),auStack_34);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_1005c8da0(&local_58);
        uVar1 = FUN_10063a2fc(0x3f800000,param_3,uVar1,*(undefined4 *)((long)plVar3 + 0x34),5,
                              *(int *)(plVar3 + 7) * (int)param_4,1,1,1);
        FUN_1005c8d10(&local_58);
      }
    }
    FUN_1005c8e48(&local_78);
    FUN_1005c8e48(&local_58);
  }
  return uVar1;
}




undefined8
FUN_1005ddd0c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_100585ab0(*(long *)(param_1 + 0x38),param_3,0xffffffff,param_4,param_6,param_7);
    return uVar1;
  }
  return 2;
}




void FUN_1005ddd40(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005dd10c(lVar1);
  return;
}




void FUN_1005ddd54(long param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005ddbbc(lVar1,param_2);
  return;
}




void FUN_1005ddd6c(long param_1)

{
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_1005ddd84();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001005ddd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x298))(param_1 + 8);
  return;
}




undefined8 FUN_1005ddd84(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  local_34 = 0;
  uVar4 = FUN_1005f696c(*(undefined8 *)(param_1 + 0x40),&local_38,&local_3c);
  if ((int)uVar4 == 0) {
    local_3c = local_3c + *(int *)(param_1 + 0x1cc);
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x40) + 0x6b8) + 0x50);
    if (*(code **)(param_1 + 0x280) == (code *)0x0) {
      local_34 = 0;
    }
    else {
      uVar4 = (**(code **)(param_1 + 0x280))(param_1 + 8,&local_34);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_34 / local_38;
    }
    uVar7 = 0;
    if (local_3c != 0) {
      uVar7 = uVar6 / local_3c;
    }
    local_34 = uVar6 - uVar7 * local_3c;
    uVar6 = *(uint *)(param_1 + 0x60);
    if (uVar6 == local_34) {
      uVar4 = 0;
    }
    else {
      lVar1 = param_1 + 8;
      while( true ) {
        local_50 = 0;
        local_48 = 0;
        local_58 = 0;
        local_54 = 0;
        iVar3 = uVar6 - *(int *)(param_1 + 0x1cc);
        iVar3 = iVar3 + (local_3c & iVar3 >> 0x1f);
        uVar6 = *(int *)(param_1 + 0x48) - 1;
        if (uVar6 < 5) {
          uVar7 = *(int *)(&DAT_10115f820 + (long)(int)uVar6 * 4) * local_38 * iVar3 >> 3;
          uVar6 = *(int *)(&DAT_10115f820 + (long)(int)uVar6 * 4) * local_38 >> 3;
        }
        else {
          uVar7 = local_38 * iVar3;
          uVar6 = local_38;
        }
        if (*(code **)(param_1 + 0x288) == (code *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(param_1 + 0x288))
                            (lVar1,uVar7 * uVar2,uVar6 * uVar2,&local_48,&local_50,&local_54,
                             &local_58);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar5 = (ulong)local_54;
        }
        if (uVar2 == 0) break;
        uVar6 = *(int *)(param_1 + 0x48) - 1;
        if (uVar6 < 5) {
          uVar7 = 0;
          if ((long)*(int *)(&DAT_10115f820 + (long)(int)uVar6 * 4) != 0) {
            uVar7 = (uint)((uVar5 << 3) /
                          (ulong)(long)*(int *)(&DAT_10115f820 + (long)(int)uVar6 * 4));
          }
          uVar6 = 0;
          if (uVar2 != 0) {
            uVar6 = uVar7 / uVar2;
          }
          uVar5 = (ulong)uVar6;
        }
        uVar4 = (**(code **)(param_1 + 0x10))(lVar1,local_48,uVar5);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        if ((*(code **)(param_1 + 0x290) != (code *)0x0) &&
           (uVar4 = (**(code **)(param_1 + 0x290))(lVar1,local_48,local_50,local_54,local_58),
           (int)uVar4 != 0)) {
          return uVar4;
        }
        uVar6 = 0;
        if (*(int *)(param_1 + 0x60) + 1 < (int)local_3c) {
          uVar6 = *(int *)(param_1 + 0x60) + 1;
        }
        *(uint *)(param_1 + 0x60) = uVar6;
        if (uVar6 == local_34) {
          return 0;
        }
      }
      uVar4 = 0x1f;
    }
  }
  return uVar4;
}




undefined8 FUN_1005ddf50(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined4 local_24;
  
  if ((*(code **)(param_1 + 600) != (code *)0x0) &&
     (uVar2 = (**(code **)(param_1 + 600))(param_1 + 8), (int)uVar2 != 0)) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x23c) == 0) {
    if (*(long *)(param_1 + 0x298) == 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    uVar1 = *(undefined4 *)(lVar3 + 0x15c88);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(byte *)(lVar3 + 0x48) >> 1 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x15c88);
      uVar4 = 1;
      goto LAB_1005de0a4;
    }
    uVar2 = FUN_1005f696c(lVar3,&local_24,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    NEON_ucvtf(local_24);
    uVar1 = *(undefined4 *)(lVar3 + 0x15c88);
  }
  uVar4 = 0;
LAB_1005de0a4:
  uVar2 = FUN_1005fb770(param_1 + 0x68,"FMOD mixer thread",FUN_1005ddd6c,param_1,1,3,0,uVar1,uVar4,
                        lVar3,1);
  if ((int)uVar2 == 0) {
    return 0;
  }
  return uVar2;
}




undefined8 FUN_1005de0c8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_1005fb958(param_1 + 0x68);
  if (((int)uVar2 == 0) &&
     ((*(code **)(param_1 + 0x260) == (code *)0x0 ||
      (uVar2 = (**(code **)(param_1 + 0x260))(param_1 + 8), (int)uVar2 == 0)))) {
    lVar3 = *(long *)(param_1 + 0x40);
    iVar1 = *(int *)(lVar3 + 0x16808);
    if (0 < iVar1) {
      lVar4 = 0;
      while( true ) {
        lVar3 = *(long *)(*(long *)(lVar3 + 0x16800) + lVar4 * 8);
        if (*(long *)(lVar3 + 0x30) != 0) {
          (**(code **)(param_1 + 0x2b0))(param_1 + 8,lVar3);
          *(undefined8 *)(lVar3 + 0x30) = 0;
        }
        lVar4 = lVar4 + 1;
        if (iVar1 == (int)lVar4) break;
        lVar3 = *(long *)(param_1 + 0x40);
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}




undefined4 FUN_1005de178(long *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 3) = param_4;
  *(int *)(param_1 + 1) = param_2;
  *(int *)((long)param_1 + 0xc) = param_4 * param_2;
  *(int *)(param_1 + 2) = param_2 * param_3;
  param_3 = param_4 * param_2 * param_3;
  *(int *)((long)param_1 + 0x14) = param_3;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(int *)(param_1 + 5) = param_3;
  lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_3,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                        ,0x5ce,0);
  *param_1 = lVar1;
  uVar2 = 0x26;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_1005de1ec(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output.cpp"
                  ,0x5e2);
    *param_1 = 0;
  }
  return 0;
}




undefined8 FUN_1005de238(long *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  uVar4 = 0x1c;
  if ((param_2 != (void *)0x0) && (0 < param_3)) {
    if (*param_1 == 0) {
      uVar4 = 0x1c;
    }
    else {
      if (*(int *)((long)param_1 + 0x14) < param_3) {
        _bzero(param_2,(long)param_3);
        param_3 = 0;
      }
      iVar2 = (int)param_1[5] - *(int *)((long)param_1 + 0x24);
      if (iVar2 < param_3) {
        _bzero(param_2,(long)param_3);
        param_3 = iVar2;
      }
      iVar2 = (int)param_1[4];
      if (*(int *)((long)param_1 + 0x14) < iVar2 + param_3) {
        iVar3 = *(int *)((long)param_1 + 0x14) - iVar2;
        _memcpy(param_2,(void *)(*param_1 + (long)iVar2),(long)iVar3);
        param_2 = (void *)((long)param_2 + (long)iVar3);
        pvVar5 = (void *)*param_1;
        iVar2 = param_3 - iVar3;
      }
      else {
        pvVar5 = (void *)(*param_1 + (long)iVar2);
        iVar2 = param_3;
      }
      _memcpy(param_2,pvVar5,(long)iVar2);
      uVar4 = 0;
      iVar2 = (int)param_1[4] + param_3;
      iVar3 = *(int *)((long)param_1 + 0x14);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = iVar2 / iVar3;
      }
      *(int *)(param_1 + 4) = iVar2 - iVar1 * iVar3;
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + param_3;
    }
  }
  return uVar4;
}




long FUN_1005de344(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((long)param_1 + 0x1c);
  iVar2 = *(int *)((long)param_1 + 0x14);
  iVar1 = *(int *)((long)param_1 + 0xc) + iVar3;
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = iVar1 / iVar2;
  }
  *(int *)((long)param_1 + 0x1c) = iVar1 - iVar4 * iVar2;
  *(int *)(param_1 + 5) = (int)param_1[5] + *(int *)((long)param_1 + 0xc);
  return *param_1 + (long)iVar3;
}




long FUN_1005de378(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = param_1[4];
  iVar2 = *(int *)((long)param_1 + 0x14);
  iVar1 = *(int *)((long)param_1 + 0xc) + (int)lVar4;
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar1 / iVar2;
  }
  *(int *)(param_1 + 4) = iVar1 - iVar3 * iVar2;
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + *(int *)((long)param_1 + 0xc);
  return *param_1 + (long)(int)lVar4;
}




undefined8 * FUN_1005de3ac(undefined8 *param_1)

{
  FUN_1005dc0f4();
  *param_1 = &PTR_FUN_1014a2c30;
  _bzero(param_1 + 0x45,0x110);
  return param_1;
}




undefined8 * FUN_1005de3ec(undefined8 *param_1)

{
  FUN_1005dc0f4();
  *param_1 = &PTR_FUN_1014a2c30;
  _bzero(param_1 + 0x45,0x110);
  return param_1;
}




undefined8 FUN_1005de42c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar2 = 0x43;
  }
  else {
    iVar3 = (int)param_2;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_emulated.cpp"
                    ,0x41,0,0);
      lVar1 = FUN_100585974();
      *(long *)(param_1 + 0x38) = lVar1;
      if (lVar1 == 0) {
        uVar2 = 0x26;
      }
      else {
        uVar2 = FUN_100585980(lVar1,*(undefined8 *)(param_1 + 0x40),param_1,param_2);
        if ((int)uVar2 == 0) {
          lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar3 * 0x88,
                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_emulated.cpp"
                                ,0x4d,0);
          *(long *)(param_1 + 0x330) = lVar1;
          if (lVar1 == 0) {
            uVar2 = 0x26;
          }
          else if (iVar3 < 1) {
            uVar2 = 0;
          }
          else {
            FUN_10057b080();
            uVar2 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x330)
                                 );
            lVar1 = 1;
            lVar4 = 0x88;
            if ((int)uVar2 == 0) {
              do {
                if (iVar3 <= lVar1) {
                  return 0;
                }
                FUN_10057b080(*(long *)(param_1 + 0x330) + lVar4);
                uVar2 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x38),lVar1,
                                      *(long *)(param_1 + 0x330) + lVar4);
                lVar1 = lVar1 + 1;
                lVar4 = lVar4 + 0x88;
              } while ((int)uVar2 == 0);
            }
          }
        }
      }
    }
  }
  return uVar2;
}




void FUN_1005de568(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_100585a04();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0x330) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x330),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_emulated.cpp"
                  ,0x75);
    *(undefined8 *)(param_1 + 0x330) = 0;
  }
  FUN_1005dc1cc(param_1);
  return;
}




undefined8 FUN_1005de5c4(void)

{
  return 0;
}




undefined4 * FUN_1005de5cc(void)

{
  _bzero(&DAT_101dbce70,0x108);
  DAT_101dbce80 = 0x10100;
  DAT_101dbce84 = 1;
  DAT_101dbce78 = "FMOD NoSound Output";
  DAT_101dbce88 = FUN_1005de678;
  DAT_101dbce90 = FUN_1005de688;
  DAT_101dbce98 = FUN_1005de6b4;
  DAT_101dbceb0 = FUN_1005de764;
  DAT_101dbcec8 = FUN_1005de7bc;
  DAT_101dbce70 = 2;
  DAT_101dbced0 = FUN_1005de824;
  DAT_101dbcf18 = 2;
  DAT_101dbcf1c = 0x340;
  return &DAT_101dbce70;
}




undefined8 FUN_1005de678(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}




undefined8 FUN_1005de688(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    FUN_1005ecc98(param_3,"NoSound Driver",param_4);
  }
  return 0;
}




undefined4 FUN_1005de6b4(long param_1)

{
  long lVar1;
  long lVar2;
  int *in_x4;
  int *in_x5;
  int *in_x6;
  int in_w7;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_stack_00000000;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  if (*in_x4 == 0) {
    *in_x4 = 3;
    iVar3 = 2;
    *in_x5 = 2;
  }
  else {
    iVar3 = *in_x5;
  }
  uVar5 = in_stack_00000000 * in_w7;
  if (*in_x6 - 1U < 5) {
    uVar5 = *(int *)(&DAT_10115f840 + (long)(int)(*in_x6 - 1U) * 4) * uVar5 >> 3;
  }
  *(uint *)(lVar1 + 0x330) = uVar5 * iVar3;
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar5 * iVar3,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_nosound.cpp"
                        ,0x77,0);
  *(long *)(lVar1 + 0x338) = lVar2;
  uVar4 = 0x26;
  if (lVar2 != 0) {
    uVar4 = 0;
  }
  return uVar4;
}




undefined8 FUN_1005de764(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  if (*(long *)(lVar1 + 0x338) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x338),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_nosound.cpp"
                  ,0x92);
  }
  *(undefined8 *)(lVar1 + 0x338) = 0;
  return 0;
}




undefined8 FUN_1005de7bc(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  int local_24;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  local_24 = 0;
  iVar2 = *(int *)(*(long *)(lVar1 + 0x40) + 0x708);
  FUN_1005dba24(&local_24);
  *param_2 = (uint)(local_24 * iVar2) / 1000;
  return 0;
}




undefined8
FUN_1005de824(long param_1,uint param_2,int param_3,long *param_4,undefined8 *param_5,int *param_6,
             int *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -8;
  }
  uVar1 = *(uint *)(param_1 + 0x330);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_2 / uVar1;
  }
  param_2 = param_2 - uVar2 * uVar1;
  *param_4 = *(long *)(param_1 + 0x338) + (ulong)param_2;
  if (uVar1 < param_2 + param_3) {
    *param_5 = *(undefined8 *)(param_1 + 0x338);
    *param_6 = uVar1 - param_2;
    iVar3 = (param_2 + param_3) - *(int *)(param_1 + 0x330);
  }
  else {
    iVar3 = 0;
    *param_5 = 0;
    *param_6 = param_3;
  }
  *param_7 = iVar3;
  return 0;
}




undefined8 FUN_1005de88c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}




undefined8 FUN_1005de89c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    FUN_1005ecc98(param_3,"NoSound Driver",param_4);
  }
  return 0;
}




undefined4 FUN_1005de8c8(long param_1)

{
  long lVar1;
  int *in_x4;
  int *in_x5;
  int *in_x6;
  int in_w7;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_stack_00000000;
  
  if (*in_x4 == 0) {
    *in_x4 = 3;
    iVar2 = 2;
    *in_x5 = 2;
  }
  else {
    iVar2 = *in_x5;
  }
  uVar4 = in_stack_00000000 * in_w7;
  if (*in_x6 - 1U < 5) {
    uVar4 = *(int *)(&DAT_10115f840 + (long)(int)(*in_x6 - 1U) * 4) * uVar4 >> 3;
  }
  *(uint *)(param_1 + 0x330) = uVar4 * iVar2;
  lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar4 * iVar2,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_nosound.cpp"
                        ,0x77,0);
  *(long *)(param_1 + 0x338) = lVar1;
  uVar3 = 0x26;
  if (lVar1 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005de96c(long param_1)

{
  if (*(long *)(param_1 + 0x338) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x338),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_nosound.cpp"
                  ,0x92);
  }
  *(undefined8 *)(param_1 + 0x338) = 0;
  return 0;
}




undefined8 FUN_1005de9b8(long param_1,uint *param_2)

{
  int iVar1;
  int local_24;
  
  local_24 = 0;
  iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x708);
  FUN_1005dba24(&local_24);
  *param_2 = (uint)(local_24 * iVar1) / 1000;
  return 0;
}




undefined8
FUN_1005dea10(long param_1,uint param_2,int param_3,long *param_4,undefined8 *param_5,int *param_6,
             int *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x330);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_2 / uVar1;
  }
  param_2 = param_2 - uVar2 * uVar1;
  *param_4 = *(long *)(param_1 + 0x338) + (ulong)param_2;
  if (uVar1 < param_2 + param_3) {
    *param_5 = *(undefined8 *)(param_1 + 0x338);
    *param_6 = uVar1 - param_2;
    iVar3 = (param_2 + param_3) - *(int *)(param_1 + 0x330);
  }
  else {
    iVar3 = 0;
    *param_5 = 0;
    *param_6 = param_3;
  }
  *param_7 = iVar3;
  return 0;
}




undefined4 * FUN_1005dea68(void)

{
  _bzero(&DAT_101dbcf78,0x108);
  DAT_101dbcf8c = 0;
  DAT_101dbcf78 = 2;
  DAT_101dbcf88 = 0x10100;
  DAT_101dbcf80 = "FMOD NoSound Output - Non real-time";
  DAT_101dbcf90 = FUN_1005deb08;
  DAT_101dbcf98 = FUN_1005deb18;
  DAT_101dbcfa0 = FUN_1005deb44;
  DAT_101dbcfb8 = FUN_1005debe8;
  DAT_101dbcfc0 = FUN_1005dec40;
  DAT_101dbd020 = 4;
  DAT_101dbd024 = 0x340;
  return &DAT_101dbcf78;
}




undefined8 FUN_1005deb08(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}




undefined8 FUN_1005deb18(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    FUN_1005ecc98(param_3,"NoSound Driver",param_4);
  }
  return 0;
}




undefined4 FUN_1005deb44(long param_1)

{
  long lVar1;
  long lVar2;
  int *in_x4;
  int *in_x5;
  int *in_x6;
  uint in_w7;
  undefined4 uVar3;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  if (*in_x4 == 0) {
    *in_x4 = 3;
    *in_x5 = 2;
  }
  *(uint *)(lVar1 + 0x330) = in_w7;
  if (*in_x6 - 1U < 5) {
    in_w7 = *(int *)(&DAT_10115f860 + (long)(int)(*in_x6 - 1U) * 4) * in_w7 >> 3;
  }
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),in_w7 * *in_x5,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_nosound_nrt.cpp"
                        ,0x7c,0);
  *(long *)(lVar1 + 0x338) = lVar2;
  uVar3 = 0x26;
  if (lVar2 != 0) {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1005debe8(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  if (*(long *)(lVar1 + 0x338) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x338),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_nosound_nrt.cpp"
                  ,0x97);
    *(undefined8 *)(lVar1 + 0x338) = 0;
  }
  return 0;
}




void FUN_1005dec40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001005dec4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))
            (param_1,*(undefined8 *)(param_1 + 0x330),*(undefined4 *)(param_1 + 0x328));
  return;
}




undefined8 FUN_1005dec50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  return 0;
}




undefined8 FUN_1005dec60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    FUN_1005ecc98(param_3,"NoSound Driver",param_4);
  }
  return 0;
}




undefined4 FUN_1005dec8c(long param_1)

{
  long lVar1;
  int *in_x4;
  int *in_x5;
  int *in_x6;
  uint in_w7;
  undefined4 uVar2;
  
  if (*in_x4 == 0) {
    *in_x4 = 3;
    *in_x5 = 2;
  }
  *(uint *)(param_1 + 0x330) = in_w7;
  if (*in_x6 - 1U < 5) {
    in_w7 = *(int *)(&DAT_10115f860 + (long)(int)(*in_x6 - 1U) * 4) * in_w7 >> 3;
  }
  lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),in_w7 * *in_x5,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_nosound_nrt.cpp"
                        ,0x7c,0);
  *(long *)(param_1 + 0x338) = lVar1;
  uVar2 = 0x26;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_1005ded24(long param_1)

{
  if (*(long *)(param_1 + 0x338) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x338),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_nosound_nrt.cpp"
                  ,0x97);
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  return 0;
}




void FUN_1005ded70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001005ded84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            (param_1 + 8,*(undefined8 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x330));
  return;
}




undefined8 * FUN_1005ded88(undefined8 *param_1)

{
  FUN_1005dc0f4();
  *param_1 = &PTR_FUN_1014a2c50;
  _bzero(param_1 + 0x45,0x108);
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x10100;
  param_1[0x46] = "FMOD Software Output";
  param_1[0x5d] = FUN_1005dee08;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0x338;
  param_1[0x66] = 0;
  param_1[7] = 0;
  return param_1;
}




undefined8 FUN_1005dee08(void)

{
  undefined4 *in_x4;
  
  if (in_x4 != (undefined4 *)0x0) {
    *in_x4 = 0x20;
  }
  return 0;
}




undefined8 * FUN_1005dee1c(undefined8 *param_1)

{
  FUN_1005dc0f4();
  *param_1 = &PTR_FUN_1014a2c50;
  _bzero(param_1 + 0x45,0x108);
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x10100;
  param_1[0x46] = "FMOD Software Output";
  param_1[0x5d] = FUN_1005dee08;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0x338;
  param_1[0x66] = 0;
  param_1[7] = 0;
  return param_1;
}




undefined8 FUN_1005dee9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar2 = 0x43;
  }
  else {
    iVar3 = (int)param_2;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x20,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_software.cpp"
                    ,0x50,0,0);
      lVar1 = FUN_100585974();
      *(long *)(param_1 + 0x38) = lVar1;
      if (lVar1 == 0) {
        uVar2 = 0x26;
      }
      else {
        uVar2 = FUN_100585980(lVar1,*(undefined8 *)(param_1 + 0x40),param_1,param_2);
        if ((int)uVar2 == 0) {
          lVar1 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar3 * 0x2b8,
                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_software.cpp"
                                ,0x59,0);
          *(long *)(param_1 + 0x330) = lVar1;
          if (lVar1 == 0) {
            uVar2 = 0x26;
          }
          else if (iVar3 < 1) {
            uVar2 = 0;
          }
          else {
            FUN_10057bd44();
            uVar2 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x38),0,*(undefined8 *)(param_1 + 0x330)
                                 );
            lVar1 = 1;
            lVar4 = 0x2b8;
            if ((int)uVar2 == 0) {
              do {
                if (iVar3 <= lVar1) {
                  return 0;
                }
                FUN_10057bd44(*(long *)(param_1 + 0x330) + lVar4);
                uVar2 = FUN_100585cc0(*(undefined8 *)(param_1 + 0x38),lVar1,
                                      *(long *)(param_1 + 0x330) + lVar4);
                lVar1 = lVar1 + 1;
                lVar4 = lVar4 + 0x2b8;
              } while ((int)uVar2 == 0);
            }
          }
        }
      }
    }
  }
  return uVar2;
}




void FUN_1005defd8(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_100585a04();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0x330) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x330),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_software.cpp"
                  ,0x80);
    *(undefined8 *)(param_1 + 0x330) = 0;
  }
  FUN_1005dc1cc(param_1);
  return;
}




undefined8 FUN_1005df034(undefined8 param_1,uint param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (param_4 == (undefined8 *)0x0) {
    return 0x1f;
  }
  if ((long *)*param_4 == (long *)0x0) {
    plVar7 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x180,
                                   "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_software.cpp"
                                   ,0xa4,0);
    FUN_1005e3e44();
    plVar9 = plVar7;
    if (plVar7 != (long *)0x0) goto LAB_1005df0a8;
LAB_1005df238:
    uVar3 = 0x26;
  }
  else {
    plVar7 = (long *)0x0;
    plVar9 = (long *)*param_4;
LAB_1005df0a8:
    if (param_3 != 0) {
      iVar1 = *(int *)(param_3 + 0x100);
      *(int *)(plVar9 + 5) = iVar1;
      uVar2 = *(undefined4 *)(param_3 + 0x10c);
      *(undefined4 *)(plVar9 + 8) = uVar2;
      plVar9[0x2d] = 0;
      if ((param_2 >> 9 & 1) == 0) {
        uVar6 = iVar1 - 1;
        if (uVar6 < 5) {
          uVar6 = *(uint *)(&DAT_10115f880 + (long)(int)uVar6 * 4);
          *(uint *)(plVar9 + 8) =
               (uVar6 * *(int *)(param_3 + 0x110) >> 3) * *(int *)(param_3 + 0x104);
          uVar6 = uVar6 & 0x1fffffff;
        }
        else {
          *(int *)(plVar9 + 8) = *(int *)(param_3 + 0x110) * *(int *)(param_3 + 0x104);
          uVar6 = 8;
        }
        uVar6 = uVar6 * *(int *)(param_3 + 0x104);
        uVar8 = (ulong)uVar6;
        if (uVar6 < 9) {
          plVar9[0x2d] = (long)(plVar9 + 0x2e);
          goto LAB_1005df16c;
        }
        lVar4 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar8,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_software.cpp"
                              ,0xd6,0);
        plVar9[0x2d] = lVar4;
        if (lVar4 != 0) goto LAB_1005df16c;
LAB_1005df220:
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7,1);
        }
        goto LAB_1005df238;
      }
      uVar8 = 0;
      *(undefined4 *)(plVar9 + 8) = uVar2;
      plVar9[0x2d] = 0;
LAB_1005df16c:
      if ((param_2 >> 0x1c & 1) == 0) {
        if (((param_2 >> 0x1d & 1) == 0) || (((byte)PTR_DAT_10186d408[0x26] >> 6 & 1) == 0)) {
          uVar3 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
          iVar1 = (int)plVar9[8] + (int)uVar8 * 2;
          uVar6 = ((param_2 >> 6 ^ 0xffffffff) & 2) + 2;
          uVar5 = 0x10e;
        }
        else {
          uVar3 = *(undefined8 *)(PTR_DAT_10186d408 + 0xd8);
          iVar1 = (int)plVar9[8] + (int)uVar8 * 2;
          uVar6 = ((param_2 >> 6 ^ 0xffffffff) & 2) + 2 | 0x400000;
          uVar5 = 0x103;
        }
        lVar4 = FUN_1005d7a5c(uVar3,iVar1 + 0x10,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_software.cpp"
                              ,uVar5,uVar6);
        plVar9[0x2c] = lVar4;
        if (lVar4 == 0) goto LAB_1005df220;
        plVar9[0x2b] = lVar4 + uVar8 + 0xf & 0xfffffffffffffff0;
      }
      else {
        plVar9[0x2b] = 0;
        plVar9[0x2c] = 0;
      }
      *(undefined4 *)(plVar9 + 5) = *(undefined4 *)(param_3 + 0x100);
      *(undefined4 *)((long)plVar9 + 0x3c) = *(undefined4 *)(param_3 + 0x110);
    }
    uVar3 = 0;
    *param_4 = plVar9;
  }
  return uVar3;
}




undefined8 FUN_1005df250(void)

{
  undefined4 *in_x4;
  
  if (in_x4 != (undefined4 *)0x0) {
    *in_x4 = 0x20;
  }
  return 0;
}




undefined4 * FUN_1005df264(void)

{
  _memset(&DAT_101dbd080,0,0xa8);
  DAT_101dbd080 = 2;
  DAT_101dbd090 = 0x10100;
  DAT_101dbd094 = 1;
  DAT_101dbd088 = "FMOD WavWriter Output";
  DAT_101dbd098 = FUN_1005df330;
  DAT_101dbd0a0 = FUN_1005df340;
  DAT_101dbd0a8 = FUN_1005df358;
  DAT_101dbd0c0 = FUN_1005df374;
  DAT_101dbd0d8 = FUN_1005df3f8;
  DAT_101dbd0e0 = FUN_1005df460;
  DAT_101dbd0e8 = FUN_1005df4c8;
  DAT_101dbd0d0 = FUN_1005df4f0;
  DAT_101dbd128 = 3;
  DAT_101dbd12c = 0x450;
  return &DAT_101dbd080;
}




undefined8 FUN_1005df330(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 5;
  return 0;
}




undefined8 FUN_1005df340(void)

{
  FUN_1005df510();
  return 0;
}




void FUN_1005df358(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005df5b8(lVar1);
  return;
}




undefined8 FUN_1005df374(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005a8080(*(undefined8 *)(lVar1 + 0x448),*(undefined4 *)(lVar1 + 0x48),
                *(undefined4 *)(lVar1 + 0x50),*(undefined4 *)(*(long *)(lVar1 + 0x40) + 0x708),
                *(undefined4 *)(lVar1 + 0x440));
  if (*(FILE **)(lVar1 + 0x448) != (FILE *)0x0) {
    _fclose(*(FILE **)(lVar1 + 0x448));
    *(undefined8 *)(lVar1 + 0x448) = 0;
  }
  if (*(long *)(lVar1 + 0x430) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar1 + 0x430),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_wavwriter.cpp"
                  ,0xc6);
    *(undefined8 *)(lVar1 + 0x430) = 0;
  }
  return 0;
}




undefined8 FUN_1005df3f8(long param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  int local_24;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  local_24 = 0;
  iVar2 = *(int *)(*(long *)(lVar1 + 0x40) + 0x708);
  FUN_1005dba24(&local_24);
  *param_2 = (uint)(local_24 * iVar2) / 1000;
  return 0;
}




undefined8
FUN_1005df460(long param_1,uint param_2,int param_3,long *param_4,undefined8 *param_5,int *param_6,
             int *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + -8;
  }
  uVar1 = *(uint *)(param_1 + 0x438);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_2 / uVar1;
  }
  param_2 = param_2 - uVar2 * uVar1;
  *param_4 = *(long *)(param_1 + 0x430) + (ulong)param_2;
  if (uVar1 < param_2 + param_3) {
    *param_5 = *(undefined8 *)(param_1 + 0x430);
    *param_6 = uVar1 - param_2;
    iVar3 = (param_2 + param_3) - *(int *)(param_1 + 0x438);
  }
  else {
    iVar3 = 0;
    *param_5 = 0;
    *param_6 = param_3;
  }
  *param_7 = iVar3;
  return 0;
}




undefined8 FUN_1005df4c8(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005df8d8(lVar1);
  return 0;
}




undefined8 FUN_1005df4f0(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x440);
  return 0;
}




undefined8 FUN_1005df500(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 5;
  return 0;
}




undefined8
FUN_1005df510(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char *pcVar1;
  
  if (param_3 != 0) {
    switch(param_2) {
    case 0:
      pcVar1 = "16 bit Integer PCM wave writer (default filename = fmodoutput.wav)";
      break;
    case 1:
      pcVar1 = "8  bit Integer PCM wave writer (default filename = fmodoutput.wav)";
      break;
    case 2:
      pcVar1 = "24 bit Integer PCM wave writer (default filename = fmodoutput.wav)";
      break;
    case 3:
      pcVar1 = "32 bit Integer PCM wave writer (default filename = fmodoutput.wav)";
      break;
    case 4:
      pcVar1 = "32 bit float   PCM wave writer (default filename = fmodoutput.wav)";
      break;
    default:
      goto switchD_1005df544_default;
    }
    FUN_1005ecc98(param_3,pcVar1,param_4);
  }
switchD_1005df544_default:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = param_2;
  }
  return 0;
}




undefined8
FUN_1005df5b8(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,int *param_5,
             int *param_6,int *param_7,uint param_8,undefined8 param_9,char *param_10)

{
  uint uVar1;
  long lVar2;
  FILE *pFVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_1 + 0x54) = 1;
  switch(param_2) {
  case 0:
    iVar5 = 2;
    break;
  case 1:
    iVar5 = 1;
    break;
  case 2:
    iVar5 = 3;
    break;
  case 3:
    iVar5 = 4;
    break;
  case 4:
    iVar5 = 5;
    break;
  default:
    goto switchD_1005df5f4_default;
  }
  *param_7 = iVar5;
switchD_1005df5f4_default:
  if (*param_5 == 0) {
    *param_5 = 3;
    *param_6 = 2;
  }
  iVar5 = *param_7;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  uVar1 = iVar5 - 1;
  switch(uVar1) {
  case 0:
    uVar6 = 8;
    break;
  case 1:
    uVar6 = 0x10;
    break;
  case 2:
    uVar6 = 0x18;
    break;
  case 3:
  case 4:
    uVar6 = 0x20;
    break;
  default:
    iVar5 = *param_6;
    if (4 < uVar1) goto LAB_1005df6b0;
    goto LAB_1005df69c;
  }
  *(undefined4 *)(param_1 + 0x43c) = uVar6;
  iVar5 = *param_6;
LAB_1005df69c:
  param_8 = *(int *)(&UNK_10115f8a0 + (long)(int)uVar1 * 4) * param_8 >> 3;
LAB_1005df6b0:
  *(uint *)(param_1 + 0x438) = param_8 * iVar5;
  lVar2 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_8 * iVar5,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_wavwriter.cpp"
                        ,0x93,0);
  *(long *)(param_1 + 0x430) = lVar2;
  if (lVar2 == 0) {
    uVar4 = 0x26;
  }
  else {
    if (param_10 == (char *)0x0) {
      param_10 = "fmodoutput.wav";
    }
    FUN_1005ecc98((char *)(param_1 + 0x330),param_10,0x100);
    pFVar3 = _fopen((char *)(param_1 + 0x330),"wb");
    *(FILE **)(param_1 + 0x448) = pFVar3;
    if (pFVar3 != (FILE *)0x0) {
      uVar4 = FUN_1005a8080(pFVar3,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                            *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x708),
                            *(undefined4 *)(param_1 + 0x440));
      return uVar4;
    }
    uVar4 = 0x12;
  }
  return uVar4;
}




void FUN_1005df790(long param_1)

{
  FUN_1005a8080(*(undefined8 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x48),
                *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x708),
                *(undefined4 *)(param_1 + 0x440));
  return;
}




undefined8 FUN_1005df7b0(long param_1)

{
  FUN_1005a8080(*(undefined8 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x48),
                *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(*(long *)(param_1 + 0x40) + 0x708),
                *(undefined4 *)(param_1 + 0x440));
  if (*(FILE **)(param_1 + 0x448) != (FILE *)0x0) {
    _fclose(*(FILE **)(param_1 + 0x448));
    *(undefined8 *)(param_1 + 0x448) = 0;
  }
  if (*(long *)(param_1 + 0x430) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x430),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_output_wavwriter.cpp"
                  ,0xc6);
    *(undefined8 *)(param_1 + 0x430) = 0;
  }
  return 0;
}




undefined8 FUN_1005df828(long param_1,uint *param_2)

{
  int iVar1;
  int local_24;
  
  local_24 = 0;
  iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 0x708);
  FUN_1005dba24(&local_24);
  *param_2 = (uint)(local_24 * iVar1) / 1000;
  return 0;
}




undefined8
FUN_1005df880(long param_1,uint param_2,int param_3,long *param_4,undefined8 *param_5,int *param_6,
             int *param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x438);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_2 / uVar1;
  }
  param_2 = param_2 - uVar2 * uVar1;
  *param_4 = *(long *)(param_1 + 0x430) + (ulong)param_2;
  if (uVar1 < param_2 + param_3) {
    *param_5 = *(undefined8 *)(param_1 + 0x430);
    *param_6 = uVar1 - param_2;
    iVar3 = (param_2 + param_3) - *(int *)(param_1 + 0x438);
  }
  else {
    iVar3 = 0;
    *param_5 = 0;
    *param_6 = param_3;
  }
  *param_7 = iVar3;
  return 0;
}




undefined8 FUN_1005df8d8(long param_1,void *param_2,void *param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  size_t sVar2;
  byte *pbVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  if ((param_2 != (void *)0x0) && (param_4 != 0)) {
    if (*(int *)(param_1 + 0x48) == 1) {
      uVar1 = (ulong)(param_4 - 1) + 1;
      uVar4 = uVar1 & 0x1fffffffe;
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar6 = (ulong)(param_4 - 1) + 1 & 0xfffffffffffffffe;
        pbVar3 = (byte *)((long)param_2 + 1);
        do {
          pbVar3[-1] = pbVar3[-1] ^ 0x80;
          *pbVar3 = *pbVar3 ^ 0x80;
          uVar6 = uVar6 - 2;
          pbVar3 = pbVar3 + 2;
        } while (uVar6 != 0);
      }
      if (uVar1 != uVar4) {
        iVar5 = param_4 - (int)uVar4;
        pbVar3 = (byte *)((long)param_2 + uVar4);
        do {
          *pbVar3 = *pbVar3 ^ 0x80;
          iVar5 = iVar5 + -1;
          pbVar3 = pbVar3 + 1;
        } while (iVar5 != 0);
      }
    }
    sVar2 = _fwrite(param_2,1,(ulong)param_4,*(FILE **)(param_1 + 0x448));
    *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + (int)sVar2;
  }
  if ((param_3 != (void *)0x0) && (param_5 != 0)) {
    if (*(int *)(param_1 + 0x48) == 1) {
      uVar1 = (ulong)(param_5 - 1) + 1;
      uVar4 = uVar1 & 0x1fffffffe;
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar6 = (ulong)(param_5 - 1) + 1 & 0xfffffffffffffffe;
        pbVar3 = (byte *)((long)param_3 + 1);
        do {
          pbVar3[-1] = pbVar3[-1] ^ 0x80;
          *pbVar3 = *pbVar3 ^ 0x80;
          uVar6 = uVar6 - 2;
          pbVar3 = pbVar3 + 2;
        } while (uVar6 != 0);
      }
      if (uVar1 != uVar4) {
        iVar5 = param_5 - (int)uVar4;
        pbVar3 = (byte *)((long)param_3 + uVar4);
        do {
          *pbVar3 = *pbVar3 ^ 0x80;
          iVar5 = iVar5 + -1;
          pbVar3 = pbVar3 + 1;
        } while (iVar5 != 0);
      }
    }
    sVar2 = _fwrite(param_3,1,(ulong)param_5,*(FILE **)(param_1 + 0x448));
    *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + (int)sVar2;
  }
  return 0;
}




undefined8 FUN_1005dfa4c(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x448);
  return 0;
}




undefined4 * FUN_1005dfa5c(void)

{
  _bzero(&DAT_101e9b7b8,0x108);
  DAT_101e9b7b8 = 2;
  DAT_101e9b7c8 = 0x10200;
  DAT_101e9b860 = 0xc;
  DAT_101e9b864 = 0x4f8;
  DAT_101e9b7c0 = "FMOD Core Audio Output";
  DAT_101e9b7d0 = FUN_1005dfb54;
  DAT_101e9b7d8 = FUN_1005dfb68;
  DAT_101e9b7e0 = FUN_1005dfbb4;
  DAT_101e9b7f8 = FUN_1005dfbd0;
  DAT_101e9b7e8 = FUN_1005dfc34;
  DAT_101e9b7f0 = FUN_1005dfcc8;
  DAT_101e9b808 = FUN_1005dfd10;
  DAT_101e9b880 = FUN_1005dfd20;
  DAT_101e9b888 = FUN_1005dfd34;
  DAT_101e9b890 = FUN_1005dfd48;
  DAT_101e9b898 = FUN_1005dfd84;
  DAT_101e9b8a0 = FUN_1005dfd98;
  DAT_101e9b8a8 = FUN_1005dfdac;
  DAT_101e9b8b0 = FUN_1005dfdbc;
  return &DAT_101e9b7b8;
}




undefined8 FUN_1005dfb54(undefined8 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
  }
  return 0;
}




undefined8
FUN_1005dfb68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  if ((param_3 != 0) && (0 < (int)param_4)) {
    FUN_1005ecc98(param_3,"Core Audio output",param_4);
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 3;
  }
  return 0;
}




void FUN_1005dfbb4(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005dff44(lVar1);
  return;
}




undefined8 FUN_1005dfbd0(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  if (*(long *)(lVar1 + 0x330) != 0) {
    iVar2 = _AudioUnitUninitialize();
    if (iVar2 != 0) {
      return 0x31;
    }
    iVar2 = _AudioComponentInstanceDispose(*(undefined8 *)(lVar1 + 0x330));
    if (iVar2 != 0) {
      return 0x31;
    }
    *(undefined8 *)(lVar1 + 0x330) = 0;
  }
  FUN_1005de1ec(lVar1 + 0x338);
  return 0;
}




ulong FUN_1005dfc34(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  uVar3 = FUN_1005fb770(lVar1 + 0x368,"FMOD mixer thread",FUN_1005e0378,lVar1,1,1,0,
                        *(undefined4 *)(*(long *)(lVar1 + 0x40) + 0x15c88),1,*(long *)(lVar1 + 0x40)
                        ,1);
  if ((int)uVar3 == 0) {
    iVar2 = _AudioOutputUnitStart(*(undefined8 *)(lVar1 + 0x330));
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = 0x33;
    }
    uVar3 = (ulong)uVar4;
  }
  return uVar3;
}




undefined8 FUN_1005dfcc8(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  iVar2 = _AudioOutputUnitStop(*(undefined8 *)(lVar1 + 0x330));
  if (iVar2 != 0) {
    return 0x31;
  }
  uVar3 = FUN_1005fb958(lVar1 + 0x368);
  return uVar3;
}




undefined8 FUN_1005dfd10(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x328);
  return 0;
}




void FUN_1005dfd20(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005dfea4(lVar1);
  return;
}




undefined8 FUN_1005dfd34(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 1;
  *param_3 = 0;
  return 0;
}




undefined8
FUN_1005dfd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  FUN_1005ecc98(param_3,"Core Audio input",param_4);
  *param_5 = 0xffffffffffffffff;
  param_5[1] = 0xffffffffffffffff;
  return 0;
}




void FUN_1005dfd84(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005e0534(lVar1);
  return;
}




void FUN_1005dfd98(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + -8;
  }
  FUN_1005e0884(lVar1);
  return;
}




undefined8 FUN_1005dfdac(long param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_1 + 0x4e0);
  return 0;
}




undefined8
FUN_1005dfdbc(long param_1,undefined8 param_2,uint param_3,uint param_4,long *param_5,
             undefined8 *param_6,uint *param_7,int *param_8)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + -8;
  }
  uVar3 = *(int *)(lVar2 + 0x4e0) * *(int *)(lVar2 + 0x4ec);
  uVar1 = uVar3;
  if (param_4 <= uVar3) {
    uVar1 = param_4;
  }
  uVar4 = uVar3 - param_3;
  if (param_3 <= uVar3 && uVar4 != 0) {
    *param_5 = *(long *)(lVar2 + 0x4d0) + (ulong)param_3;
    if (uVar3 < uVar1 + param_3) {
      *param_7 = uVar4;
      *param_6 = *(undefined8 *)(lVar2 + 0x4d0);
      iVar5 = uVar1 - uVar4;
    }
    else {
      iVar5 = 0;
      *param_7 = uVar1;
      *param_6 = 0;
    }
    *param_8 = iVar5;
    return 0;
  }
  *param_6 = 0;
  *param_5 = 0;
  *param_8 = 0;
  *param_7 = 0;
  return 0x1f;
}




undefined8 FUN_1005dfe44(undefined8 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
  }
  return 0;
}




undefined8
FUN_1005dfe58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  if ((param_3 != 0) && (0 < (int)param_4)) {
    FUN_1005ecc98(param_3,"Core Audio output",param_4);
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 3;
  }
  return 0;
}




undefined8 FUN_1005dfea4(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_10061abe8(0,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar1 = _AudioOutputUnitStart(*(undefined8 *)(param_1 + 0x330));
    if (iVar1 != 0) {
      return 0x33;
    }
    if ((*(long *)(param_1 + 0x4c8) != 0) && (iVar1 = _AudioOutputUnitStart(), iVar1 != 0)) {
      return 0x39;
    }
  }
  else {
    if ((*(long *)(param_1 + 0x4c8) != 0) && (iVar1 = _AudioOutputUnitStop(), iVar1 != 0)) {
      return 0x39;
    }
    iVar1 = _AudioOutputUnitStop(*(undefined8 *)(param_1 + 0x330));
    if (iVar1 != 0) {
      return 0x33;
    }
    uVar2 = FUN_10061abe8(1,0);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}




ulong FUN_1005dff44(long param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                   undefined4 *param_5,uint *param_6,undefined4 *param_7,undefined8 param_8,
                   undefined4 param_9)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  uint uVar8;
  double dVar9;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  long lStack_b8;
  ulong local_b0 [4];
  double local_90 [2];
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar4 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
  uVar2 = _objc_msgSend(uVar4,"outputNumberOfChannels");
  uVar8 = 2;
  if (1 < (int)uVar2) {
    uVar8 = uVar2;
  }
  *param_6 = uVar8;
  if (uVar8 - 1 < 8) {
    uVar7 = *(undefined4 *)(&DAT_10115f8c0 + (long)(int)(uVar8 - 1) * 4);
  }
  else {
    uVar7 = 1;
  }
  *param_5 = uVar7;
  uVar4 = _objc_msgSend(&_OBJC_CLASS___AVAudioSession,"sharedInstance");
  dVar9 = (double)_objc_msgSend(uVar4,"sampleRate");
  *param_4 = (int)dVar9;
  *param_7 = 5;
  local_58 = 0;
  local_68 = 0x72696f6361756f75;
  local_60 = 0x6170706c;
  lVar5 = _AudioComponentFindNext(0,&local_68);
  if (lVar5 == 0) {
    return 0x33;
  }
  puVar1 = (undefined8 *)(param_1 + 0x330);
  iVar3 = _AudioComponentInstanceNew(lVar5,puVar1);
  if (iVar3 != 0) {
    return 0x33;
  }
  local_90[0] = (double)(long)*param_4;
  local_90[1] = 1.99968181261044e-313;
  uStack_70 = 0x20;
  iVar3 = *param_6 << 2;
  local_78 = CONCAT44(*param_6,iVar3);
  _local_80 = CONCAT44(1,iVar3);
  iVar3 = _AudioUnitSetProperty(*puVar1,8,1,0,local_90,0x28);
  if (iVar3 != 0) {
    return 0x33;
  }
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  switch(*param_5) {
  case 1:
    uVar8 = *param_6 | 0x930000;
    break;
  case 2:
    uVar8 = 0x640001;
    break;
  case 3:
    uVar8 = 0x650002;
    break;
  case 4:
    uVar8 = 0x6c0004;
    break;
  case 5:
    uVar8 = 0x750005;
    break;
  case 6:
    uVar8 = 0x790006;
    break;
  case 7:
    uVar8 = 0x800008;
    break;
  default:
    goto switchD_1005e00f4_default;
  }
  local_b0[0] = (ulong)uVar8;
switchD_1005e00f4_default:
  iVar3 = _AudioUnitSetProperty(*puVar1,0x13,1,0,local_b0,0x20);
  if (iVar3 == -0x2a7f || iVar3 == 0) {
    local_c0 = FUN_1005e0254;
    lStack_b8 = param_1;
    iVar3 = _AudioUnitSetProperty(*(undefined8 *)(param_1 + 0x330),0x17,0,0,&local_c0,0x10);
    if (iVar3 == 0) {
      iVar3 = _AudioUnitInitialize(*puVar1);
      if (iVar3 == 0) {
        uVar6 = FUN_1005de178(param_1 + 0x338,param_8,param_9,local_78 & 0xffffffff);
        if ((int)uVar6 == 0) {
          local_c4 = 0;
          local_c8 = 4;
          iVar3 = _AudioUnitGetProperty(*puVar1,0xe,0,0,&local_c4,&local_c8);
          uVar8 = 0;
          if (iVar3 != 0) {
            uVar8 = 0x33;
          }
          uVar6 = (ulong)uVar8;
        }
      }
      else {
        uVar6 = 0x33;
      }
    }
    else {
      uVar6 = 0x33;
    }
  }
  else {
    uVar6 = 0x33;
  }
  return uVar6;
}

