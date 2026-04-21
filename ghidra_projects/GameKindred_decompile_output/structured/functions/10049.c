// functions/10049 — 1149 functions
#include "GameKindred.h"




long FUN_10049001c(undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined4 local_6a8;
  float local_6a4;
  undefined4 uStack_6a0;
  long local_698 [200];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_698,200,DAT_10184dd68,0);
  if (uVar1 != 0) {
    uVar5 = (ulong)uVar1;
    plVar6 = local_698;
    do {
      lVar4 = *plVar6;
      uStack_6a0 = *(undefined4 *)(lVar4 + 600);
      local_6a4 = *(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254);
      local_6a8 = *(undefined4 *)(lVar4 + 0x250);
      local_6b8 = 0x3f80000000000000;
      local_6b0 = 0;
      lVar3 = *(long *)(lVar4 + 0x38);
      fVar7 = *(float *)(lVar3 + 0x70);
      if (fVar7 <= 0.0) {
        fVar7 = *(float *)(lVar3 + 0x68);
      }
      iVar2 = FUN_1010cfb10(((*(float *)(lVar4 + 0x2e8) + *(float *)(lVar3 + 100)) * fVar7) /
                            *(float *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x6c),param_1,&local_6a8
                            ,&local_6b8,0,0);
      if ((iVar2 != 0) &&
         ((param_2 == (long *)0x0 ||
          (iVar2 = (**(code **)(*param_2 + 0x18))(param_2,lVar4), iVar2 != 0)))) goto LAB_100490120;
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  lVar4 = 0;
LAB_100490120:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_10049015c(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10034f06c();
  return uVar1 != *(byte *)(param_1 + 0x264);
}




bool FUN_100490188(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10034ee90();
  return iVar1 == *(int *)(param_1 + 0x260);
}




long FUN_1004901b4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)*param_1;
  lVar3 = 0;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0x18);
        while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184e000))) {
          lVar3 = *(long *)(lVar3 + 0x20);
        }
      }
    }
    else {
      lVar3 = 0;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
    }
  }
  return lVar3;
}




void FUN_100490234(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184e000))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_100490260(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dea0))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_10049028c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184e150))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




undefined8 FUN_1004902b8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  *param_3 = 0xffffffff;
  lVar8 = *(long *)(param_1 + 0x18);
  while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184e000))) {
    lVar8 = *(long *)(lVar8 + 0x20);
  }
  iVar2 = FUN_1003b1948(DAT_101d90978);
  uVar4 = (ulong)*(byte *)(lVar8 + 0xdd) & 0x7f;
  if ((int)uVar4 != 0) {
    uVar5 = 0;
    bVar1 = true;
    do {
      lVar7 = *(long *)(lVar8 + 0x38 + uVar5 * 8);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x48) == iVar2)) break;
      uVar5 = uVar5 + 1;
      bVar1 = uVar5 < uVar4;
    } while (uVar4 != uVar5);
    if (bVar1) {
      plVar6 = (long *)(lVar8 + 0x38);
      while ((lVar8 = *plVar6, lVar8 == 0 || (*(int *)(lVar8 + 0x48) != iVar2))) {
        plVar6 = plVar6 + 1;
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) {
          uVar3 = 0xffffffff;
LAB_100490380:
          *param_3 = uVar3;
          return 1;
        }
      }
      uVar3 = *(undefined4 *)(lVar8 + 0x4c);
      goto LAB_100490380;
    }
  }
  return 0;
}




undefined4 FUN_100490394(long param_1,uint param_2)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x40) + (ulong)param_2 * 4;
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),(&DAT_101e94320)[param_2]);
  return (&DAT_101e94260)[param_2];
}




undefined4 FUN_1004903e0(long param_1,uint param_2)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * 4 + 0x308);
}




undefined4 FUN_1004903f0(long param_1,undefined4 param_2)

{
  long lVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float fVar5;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
    pfVar2 = (float *)(lVar1 + 0x1a0);
    puVar3 = &DAT_101e94320;
    puVar4 = &DAT_101e94260;
    break;
  case 1:
    lVar1 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar1 + 0xe8) + *(float *)(lVar1 + 0x19c) * (*(float *)(lVar1 + 0x304) + 1.0)
    ;
    pfVar2 = (float *)(lVar1 + 0x250);
    puVar3 = &DAT_101e943d0;
    puVar4 = &DAT_101e94310;
    break;
  case 2:
    lVar1 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0);
    pfVar2 = (float *)(lVar1 + 0x1a8);
    puVar3 = &DAT_101e94328;
    puVar4 = &DAT_101e94268;
    break;
  case 3:
    lVar1 = *(long *)(param_1 + 0x40);
    fVar5 = *(float *)(lVar1 + 0xe4) + *(float *)(lVar1 + 0x198) * (*(float *)(lVar1 + 0x300) + 1.0)
    ;
    pfVar2 = (float *)(lVar1 + 0x24c);
    puVar3 = &DAT_101e943cc;
    puVar4 = (undefined4 *)((long)&DAT_101e94308 + 4);
    break;
  default:
    return 0;
  }
  NEON_fminnm(fVar5 + fVar5 * *pfVar2,*puVar3);
  return *puVar4;
}




bool FUN_100490504(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003e4a18();
  return *(float *)(*(long *)(param_1 + 0x40) + 0x80) + 0.9 <= fVar1;
}




bool FUN_100490540(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003e4a18();
  return *(float *)(*(long *)(param_1 + 0x40) + 0x80) + 1.8 <= fVar1;
}




void FUN_10049057c(undefined8 param_1)

{
  FUN_1003e0adc(param_1,0);
  return;
}




uint FUN_100490584(long param_1)

{
  return *(uint *)(param_1 + 0x2f4) & 1;
}




float FUN_100490590(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x32c) - *(float *)(param_2 + 0x98);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  NEON_fminnm(*(undefined4 *)(param_2 + 0x74),
              (*(float *)(param_2 + 0x70) - *(float *)(lVar1 + 0x330) * *(float *)(param_2 + 0x80))
              + *(float *)(lVar1 + 0x338) * *(float *)(param_2 + 0x88) +
              *(float *)(lVar1 + 0x344) * *(float *)(param_2 + 0x90) +
              *(float *)(param_2 + 0x84) * fVar2);
  return *(float *)(param_2 + 0x70) - *(float *)(param_2 + 0x80) * *(float *)(param_2 + 0x7c);
}




void FUN_1004905e4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  char cVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_b8;
  long local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined4 local_90;
  long *local_88;
  
  uVar5 = FUN_1010a1520();
  puVar6 = (undefined8 *)FUN_1010a0e0c(uVar5,0,param_2,0);
  if (DAT_101d23a38 != '\0') {
    uVar7 = FUN_1004d2538(*puVar6);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (DAT_101d23a38 != '\0') goto LAB_100490664;
  }
  uVar7 = FUN_1004d2538(puVar6[1]);
  if ((uVar7 & 1) != 0) {
    return;
  }
LAB_100490664:
  lVar8 = FUN_1010a0298(param_1,DAT_10184e3d0);
  if (lVar8 != 0) {
    uVar5 = *param_4;
    uVar15 = *(undefined4 *)(param_4 + 1);
    fVar19 = 3.1415927;
    fVar16 = (float)___sincosf_stret(*(float *)((long)param_4 + 0xc) * 0.017453294);
    fVar20 = fVar19;
    fVar17 = (float)___sincosf_stret(*(float *)(param_4 + 2) * 0.017453294);
    fVar21 = fVar20;
    fVar18 = (float)___sincosf_stret(*(float *)((long)param_4 + 0x14) * 0.017453294);
    *(float *)(lVar8 + 0x34) = fVar21 * fVar20;
    *(float *)(lVar8 + 0x38) = fVar17 * fVar16 * fVar21 + fVar19 * fVar18;
    *(float *)(lVar8 + 0x3c) = fVar17 * -fVar19 * fVar21 + fVar16 * fVar18;
    *(undefined4 *)(lVar8 + 0x40) = 0;
    *(float *)(lVar8 + 0x44) = fVar18 * -fVar20;
    *(float *)(lVar8 + 0x48) = fVar21 * fVar19 - fVar17 * fVar16 * fVar18;
    *(float *)(lVar8 + 0x4c) = fVar21 * fVar16 - fVar17 * -fVar19 * fVar18;
    *(undefined4 *)(lVar8 + 0x50) = 0;
    *(float *)(lVar8 + 0x54) = fVar17;
    *(float *)(lVar8 + 0x58) = fVar20 * -fVar16;
    *(float *)(lVar8 + 0x5c) = fVar20 * fVar19;
    *(undefined4 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 100) = uVar5;
    *(undefined4 *)(lVar8 + 0x6c) = uVar15;
    *(undefined4 *)(lVar8 + 0x70) = 0x3f800000;
    *(undefined1 *)(lVar8 + 0x74) = param_3;
    if (((long *)puVar6[2] != (long *)0x0) && (*(long *)puVar6[2] != 0)) {
      uVar5 = FUN_1010a0298(lVar8,DAT_1018673f0);
      FUN_100465edc(uVar5,puVar6[2]);
    }
    local_88 = (long *)0x0;
    FUN_1000f39a0(lVar8,puVar6,&local_88);
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0xffffffff;
    puVar6 = (undefined8 *)puVar6[3];
    if (puVar6 != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)*puVar6;
      while (puVar14 != (undefined8 *)0x0) {
        (**(code **)*local_88)(local_88,*puVar14);
        pcVar12 = (char *)*puVar14;
        if (pcVar12 == (char *)0x0) {
          uVar11 = 0;
        }
        else {
          cVar10 = *pcVar12;
          uVar11 = 0x811c9dc5;
          if (cVar10 != '\0') {
            uVar11 = 0x811c9dc5;
            do {
              pcVar12 = pcVar12 + 1;
              uVar11 = (uVar11 ^ (int)cVar10) * 0x1000193;
              cVar10 = *pcVar12;
            } while (cVar10 != '\0');
          }
        }
        lVar8 = FUN_100034344(&local_b8,uVar11);
        uVar15 = FUN_1004a0564(&local_b8,(long)puVar14 + 0xc);
        plVar3 = local_88;
        *(undefined4 *)(lVar8 + 4) = uVar15;
        if (*(int *)((long)puVar14 + 0xc) == 1) {
          uVar5 = *puVar14;
          uVar4 = *(undefined4 *)(puVar14 + 2);
          uVar15 = FUN_1004d2524(uVar5);
          uVar5 = FUN_100015208(uVar5,uVar15,0x12345678);
          puVar9 = (undefined4 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5);
          *puVar9 = uVar4;
        }
        else if (*(int *)((long)puVar14 + 0xc) == 0) {
          uVar5 = *puVar14;
          uVar15 = *(undefined4 *)((long)puVar14 + 0x14);
          uVar4 = FUN_1004d2524(uVar5);
          uVar5 = FUN_100015208(uVar5,uVar4,0x12345678);
          puVar9 = (undefined4 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5);
          *puVar9 = uVar15;
        }
        puVar6 = puVar6 + 1;
        puVar14 = (undefined8 *)*puVar6;
      }
    }
    if (param_5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*param_5;
      plVar3 = local_88;
      while (local_88 = plVar3, puVar6 != (undefined8 *)0x0) {
        pcVar12 = (char *)*puVar6;
        if (pcVar12 == (char *)0x0) {
          uVar11 = 0;
        }
        else {
          cVar10 = *pcVar12;
          uVar11 = 0x811c9dc5;
          if (cVar10 != '\0') {
            uVar11 = 0x811c9dc5;
            pcVar13 = pcVar12;
            do {
              pcVar13 = pcVar13 + 1;
              uVar11 = (uVar11 ^ (int)cVar10) * 0x1000193;
              cVar10 = *pcVar13;
            } while (cVar10 != '\0');
          }
        }
        if ((uint)local_b8 != 0) {
          uVar2 = 0;
          if ((uint)local_b8 != 0) {
            uVar2 = uVar11 / (uint)local_b8;
          }
          uVar7 = (ulong)(uVar11 - uVar2 * (uint)local_b8);
          if (*(uint *)(local_b0 + uVar7 * 8) != uVar11) {
            do {
              if (*(int *)(local_b0 + uVar7 * 8 + 4) == -1) break;
              uVar2 = (uint)local_b8;
              if (0 < (int)(uint)uVar7) {
                uVar2 = (uint)uVar7;
              }
              uVar7 = (ulong)(uVar2 - 1);
            } while (*(uint *)(local_b0 + uVar7 * 8) != uVar11);
            if ((int)uVar7 == -1) goto LAB_100490a3c;
          }
          uVar11 = *(uint *)(local_b0 + uVar7 * 8 + 4);
          if (uVar11 != 0xffffffff && local_98 != 0) {
            iVar1 = *(int *)(local_98 + (ulong)uVar11 * 4);
            if (iVar1 == 1) {
              uVar4 = *(undefined4 *)(puVar6 + 1);
              uVar15 = FUN_1004d2524(pcVar12);
              uVar5 = FUN_100015208(pcVar12,uVar15,0x12345678);
              puVar9 = (undefined4 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5);
              *puVar9 = uVar4;
            }
            else if (iVar1 == 0) {
              uVar15 = *(undefined4 *)((long)puVar6 + 0xc);
              uVar4 = FUN_1004d2524(pcVar12);
              uVar5 = FUN_100015208(pcVar12,uVar4,0x12345678);
              puVar9 = (undefined4 *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar5);
              *puVar9 = uVar15;
            }
          }
        }
LAB_100490a3c:
        param_5 = param_5 + 1;
        plVar3 = local_88;
        puVar6 = (undefined8 *)*param_5;
      }
    }
    FUN_1004a04e0(&local_b8);
  }
  return;
}




void FUN_100490a74(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar3 = (undefined8 *)*param_1;
  while (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 2) == 0) {
      lVar2 = FUN_10046fee8(param_2,puVar3[1]);
      if (lVar2 != 0) {
        FUN_1004905e4(param_2,*puVar3,*(undefined1 *)((long)puVar3 + 0x14),lVar2 + 0x10,puVar3[3]);
      }
    }
    else {
      puVar1 = (uint *)FUN_10046ffd0();
      if ((puVar1 != (uint *)0x0) && (*puVar1 != 0)) {
        uVar4 = 0;
        do {
          FUN_1004905e4(param_2,*puVar3,*(undefined1 *)((long)puVar3 + 0x14),
                        *(long *)(*(long *)(puVar1 + 2) + uVar4 * 8) + 0x10,puVar3[3]);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar1);
      }
    }
    param_1 = param_1 + 1;
    puVar3 = (undefined8 *)*param_1;
  }
  return;
}




void FUN_100490b30(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 auStack_60 [48];
  undefined4 local_30;
  undefined4 local_28;
  
  uVar1 = FUN_100490bb0(param_1,param_2,auStack_60);
  if ((uVar1 & 1) != 0) {
    *param_3 = local_30;
    param_3[1] = local_28;
  }
  return;
}




void FUN_100490b70(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_60 [48];
  undefined8 local_30;
  undefined4 local_28;
  
  iVar1 = FUN_100490bb0(param_1,param_2,auStack_60);
  if (iVar1 != 0) {
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
  }
  return;
}




undefined8 FUN_100490bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_1018673f0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x3c);
  local_60 = *(undefined8 *)(param_1 + 0x34);
  uStack_48 = *(undefined8 *)(param_1 + 0x4c);
  uStack_50 = *(undefined8 *)(param_1 + 0x44);
  uStack_38 = *(undefined8 *)(param_1 + 0x5c);
  local_40 = *(undefined8 *)(param_1 + 0x54);
  uStack_28 = *(undefined8 *)(param_1 + 0x6c);
  uStack_30 = *(undefined8 *)(param_1 + 100);
  uVar2 = FUN_100464130(lVar1,param_2,param_3);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  FUN_10002a9fc(param_3,param_3,&local_60);
  return 1;
}




void FUN_100490c3c(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}




bool FUN_100490c44(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  plVar2 = *(long **)(param_1 + 0x1c8);
  lVar1 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    else {
      lVar1 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return lVar1 == lVar3;
}




undefined8 FUN_100490cd4(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (((((*(byte *)(param_2 + 0x2f6) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 0x2f9) & 1) == 0)) &&
      ((uVar2 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
       (1 < *(ushort *)(param_2 + uVar2 * 0x38 + 0x90) - 3)))) &&
     (lVar5 = *(long *)(param_2 + 0x80) + (ulong)*(uint *)(*(long *)(param_2 + 0x80) + 0x5c) * 0x19
              + (ulong)*(byte *)(param_1 + 0x264),
     (*(byte *)(lVar5 + 0x28) & ((*(byte *)(lVar5 + 0x38) | *(byte *)(lVar5 + 0x30)) ^ 0xff)) == 0))
  {
    plVar3 = *(long **)(*(long *)(param_1 + 0x38) + 200);
    lVar5 = *plVar3;
    if (lVar5 != 0) {
      while( true ) {
        plVar3 = plVar3 + 1;
        iVar1 = FUN_100490dd0(lVar5,param_1,param_2,param_3);
        if ((iVar1 != 0) &&
           ((puVar4 = (undefined8 *)**(undefined8 **)(lVar5 + 0x38), puVar4 != (undefined8 *)0x0 ||
            (puVar4 = (undefined8 *)**(undefined8 **)(lVar5 + 0x40), puVar4 != (undefined8 *)0x0))))
        break;
        lVar5 = *plVar3;
        if (lVar5 == 0) {
          return 0;
        }
      }
      return *puVar4;
    }
  }
  return 0;
}




undefined8 FUN_100490dd0(undefined4 *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_48 [2];
  
  switch(*param_1) {
  case 0:
    uVar5 = (uint)*(byte *)(param_3 + 0x264);
    uVar7 = (uint)*(byte *)(param_2 + 0x264);
    break;
  case 1:
    if (*(char *)(param_3 + 0x264) != *(char *)(param_2 + 0x264)) {
      return 0;
    }
    uVar5 = *(uint *)(param_3 + 0x260);
    uVar7 = *(uint *)(param_2 + 0x260);
    break;
  case 2:
    uVar5 = (uint)*(byte *)(param_3 + 0x264);
    uVar7 = (uint)*(byte *)(param_2 + 0x264);
    goto LAB_100490e60;
  case 3:
    uVar5 = *(uint *)(param_3 + 0x260);
    uVar7 = *(uint *)(param_2 + 0x260);
LAB_100490e60:
    if (uVar5 != uVar7) {
      return 0;
    }
  default:
    goto switchD_100490e18_default;
  }
  if (uVar5 != uVar7) {
switchD_100490e18_default:
    if ((*(char *)(param_1 + 1) == '\0') || ((*(byte *)(param_3 + 0x2f4) & 1) != 0)) {
      if (((undefined8 *)**(undefined8 **)(param_1 + 0xe) != (undefined8 *)0x0) &&
         (uVar3 = FUN_1004d2538(*(undefined8 *)**(undefined8 **)(param_1 + 0xe)), (uVar3 & 1) == 0))
      {
        lVar8 = *(long *)(param_2 + 0x18);
        while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dab8))) {
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        FUN_1003a4e5c(local_48,*(undefined8 *)**(undefined8 **)(param_1 + 0xe));
        uVar3 = FUN_1003e2b0c(lVar8,local_48[0]);
        lVar6 = lVar8 + (uVar3 & 0xffffffff) * 8;
        if ((*(char *)(param_1 + 5) == '\0') && (lVar8 != 0)) {
          lVar4 = *(long *)(lVar6 + 0x50);
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x68) & 0x1f;
          if ((((int)uVar3 == 0x1f) || (*(short *)(lVar4 + uVar3 * 0x38 + 0x70) != 2)) &&
             (fVar9 = (float)FUN_10045f0f0(), 0.5 < fVar9)) {
            return 0;
          }
        }
        if (((lVar8 != 0) && (*(char *)(*(long *)(*(long *)(lVar6 + 0x50) + 0x38) + 0x5f) == '\0'))
           && (((*(ushort *)(param_2 + 0x2f8) ^ 0xffff) & 0x23) == 0)) {
          return 0;
        }
      }
      if ((((param_4 & 1) != 0) ||
          ((fVar9 = (float)param_1[2], fVar9 <= 0.0 && ((float)param_1[3] <= 0.0)))) ||
         (((fVar10 = *(float *)(param_2 + 0x250) - *(float *)(param_3 + 0x250),
           fVar11 = (*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254)) -
                    (*(float *)(param_3 + 0x254) + *(float *)(param_3 + 0x2ec)),
           fVar12 = *(float *)(param_2 + 600) - *(float *)(param_3 + 600),
           fVar10 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11, fVar9 <= 0.0 ||
           (fVar11 = *(float *)(*(long *)(param_3 + 0x38) + 100),
           fVar9 = ((*(float *)(param_3 + 0x2e8) + fVar11) *
                   *(float *)(*(long *)(param_3 + 0x38) + 0x68)) / fVar11 + fVar9,
           fVar9 * fVar9 <= fVar10)) &&
          (((float)param_1[3] <= 0.0 ||
           (fVar9 = *(float *)(*(long *)(param_3 + 0x38) + 100),
           fVar9 = ((*(float *)(param_3 + 0x2e8) + fVar9) *
                   *(float *)(*(long *)(param_3 + 0x38) + 0x68)) / fVar9 + (float)param_1[3],
           fVar10 <= fVar9 * fVar9)))))) {
        if (param_1[4] != 0) {
          iVar1 = FUN_100491200(param_2);
          iVar2 = param_1[4];
          if ((iVar2 == 1) && (iVar1 != 0)) {
            return 0;
          }
          if ((iVar2 == 2) && (iVar1 != 3)) {
            return 0;
          }
          if ((iVar2 == 3) && (iVar1 != 4)) {
            return 0;
          }
        }
        iVar2 = FUN_1004d2538(*(undefined8 *)(param_1 + 6));
        if ((iVar2 == 0) || (uVar3 = FUN_1004d2538(*(undefined8 *)(param_1 + 8)), (uVar3 & 1) == 0))
        {
          lVar8 = *(long *)(param_2 + 0x18);
          if (lVar8 == 0) {
            return 0;
          }
          while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184daa8) {
            lVar8 = *(long *)(lVar8 + 0x20);
            if (lVar8 == 0) {
              return 0;
            }
          }
          uVar3 = FUN_1004d2538(*(undefined8 *)(param_1 + 6));
          if ((uVar3 & 1) == 0) {
            FUN_1003a4e5c(local_48,*(undefined8 *)(param_1 + 6));
            lVar6 = *(long *)(lVar8 + 0x28);
            while( true ) {
              if (lVar6 == 0) {
                return 0;
              }
              if ((*(int *)(lVar6 + 0x314) == local_48[0]) && (*(int *)(lVar6 + 0x310) == 0)) break;
              lVar6 = *(long *)(lVar6 + 0x350);
            }
          }
          uVar3 = FUN_1004d2538(*(undefined8 *)(param_1 + 8));
          if ((uVar3 & 1) == 0) {
            FUN_1003a4e5c(local_48,*(undefined8 *)(param_1 + 8));
            lVar8 = *(long *)(lVar8 + 0x28);
            while( true ) {
              if (lVar8 == 0) {
                return 0;
              }
              if ((*(int *)(lVar8 + 0x314) == local_48[0]) && (*(int *)(lVar8 + 0x310) == 0)) break;
              lVar8 = *(long *)(lVar8 + 0x350);
            }
          }
        }
        iVar2 = FUN_1004d2538(*(undefined8 *)(param_1 + 10));
        if ((iVar2 != 0) &&
           (uVar3 = FUN_1004d2538(*(undefined8 *)(param_1 + 0xc)), (uVar3 & 1) != 0)) {
          return 1;
        }
        lVar8 = *(long *)(param_3 + 0x18);
        if (lVar8 != 0) {
          while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184daa8) {
            lVar8 = *(long *)(lVar8 + 0x20);
            if (lVar8 == 0) {
              return 0;
            }
          }
          uVar3 = FUN_1004d2538(*(undefined8 *)(param_1 + 10));
          if ((uVar3 & 1) == 0) {
            FUN_1003a4e5c(local_48,*(undefined8 *)(param_1 + 10));
            for (lVar6 = *(long *)(lVar8 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
              if ((*(int *)(lVar6 + 0x314) == local_48[0]) && (*(int *)(lVar6 + 0x310) == 0))
              goto LAB_10049112c;
            }
          }
          else {
LAB_10049112c:
            uVar3 = FUN_1004d2538(*(undefined8 *)(param_1 + 0xc));
            if ((uVar3 & 1) != 0) {
              return 1;
            }
            FUN_1003a4e5c(local_48,*(undefined8 *)(param_1 + 0xc));
            for (lVar8 = *(long *)(lVar8 + 0x28); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x350)) {
              if ((*(int *)(lVar8 + 0x314) == local_48[0]) && (*(int *)(lVar8 + 0x310) == 0)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100491200(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_1004673ac();
  return uVar2;
}




void FUN_100491234(undefined8 *param_1,int param_2,undefined8 param_3,uint *param_4)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  char local_4c [36];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  pcVar3 = (char *)*param_1;
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0;
    if ((code *)param_1[4] == (code *)0x0) goto LAB_1004912cc;
    (*(code *)param_1[4])(param_3,local_4c,0x24);
    pcVar3 = local_4c;
  }
  else {
    pcVar1 = (char *)param_1[1];
    if (param_2 == 0) {
      pcVar1 = pcVar3;
    }
    if ((char *)param_1[1] != (char *)0x0) {
      pcVar3 = pcVar1;
    }
  }
  cVar4 = *pcVar3;
  if (cVar4 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    do {
      pcVar3 = pcVar3 + 1;
      uVar2 = (uVar2 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar3;
    } while (cVar4 != '\0');
  }
LAB_1004912cc:
  *param_4 = uVar2;
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1004912fc(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (param_3 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_10034f06c();
    uVar1 = (uint)(uVar1 != *(byte *)(param_3 + 0x264));
  }
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x48);
  *(byte *)(param_2 + 100) = *(byte *)(param_1 + 100) >> 3 & 1;
  *(byte *)(param_2 + 0x65) = *(byte *)(param_1 + 100) >> 4 & 1;
  *(uint *)(param_2 + 0x5c) = *(ushort *)(param_1 + 100) >> 5 & 3;
  *(byte *)(param_2 + 0x66) = *(byte *)(param_1 + 100) >> 7;
  *(uint *)(param_2 + 0x60) = uVar1;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x5c);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*(long **)(param_3 + 0x50) != (long *)0x0) {
      uVar2 = (**(code **)(**(long **)(param_3 + 0x50) + 0x178))();
    }
  }
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *(byte *)(param_2 + 0x67) = *(byte *)(param_1 + 0x65) & 1;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x4c);
  *(byte *)(param_2 + 0x68) = (byte)((ushort)*(undefined2 *)(param_1 + 100) >> 9) & 1;
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x60);
  fVar3 = *(float *)(param_1 + 0x50);
  if ((fVar3 <= 0.0) && (fVar3 = 0.0, (*(byte *)(param_1 + 0x65) >> 2 & 1) != 0)) {
    fVar3 = *(float *)(*(long *)(param_4 + 0x38) + 0x1d0);
  }
  *(float *)(param_2 + 0x38) = fVar3;
  *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(param_1 + 0x54);
  return;
}




void FUN_100491404(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if ((*param_1 == -0x7ee3623b || *param_1 == 0) ||
     (iVar1 = FUN_1010a1958(&local_30,1,DAT_10184dac8,0), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10046ff48(local_30,param_1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




bool FUN_1004914ac(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_100491404();
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x18);
    *param_2 = *(undefined4 *)(lVar1 + 0x10);
    param_2[1] = uVar2;
  }
  return lVar1 != 0;
}




bool FUN_1004914e8(void)

{
  int iVar1;
  undefined1 auStack_18 [8];
  
  iVar1 = FUN_1010a1958(auStack_18,1,DAT_10184dac8,0);
  return iVar1 == 1;
}




void FUN_100491520(undefined4 param_1)

{
  DAT_10185dfb8 = param_1;
  return;
}




undefined4 FUN_10049152c(void)

{
  return DAT_10185dfb8;
}




undefined4 FUN_100491538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  local_60 = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_2c = 0;
  local_28 = 0;
  uStack_34 = 0;
  uStack_3c = 0;
  local_44 = 0;
  uStack_4c = 0;
  local_54 = 0;
  local_58 = 0xffffffff;
  FUN_1003e1f98(param_3,param_4,(int)*(float *)(*(long *)(param_1 + 0x40) + 800),(long)&local_60 + 4
                ,&local_58,&local_60,1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    uVar1 = NEON_ucvtf(local_60._4_4_);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_1004915d0(uint param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int local_5c;
  int local_58;
  undefined4 local_54;
  
  local_54 = param_2;
  if (((DAT_101e94200 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e94200), iVar1 != 0)) {
    DAT_101e941d0 = 0;
    DAT_101e941d8 = 0;
    DAT_101e941e0 = 0;
    DAT_101e941e8 = 0;
    DAT_101e941f0 = 0;
    DAT_101e941f8 = 0xffffffff;
    ___cxa_atexit(thunk_FUN_10049f6e4,&DAT_101e941d0,0x100000000);
    ___cxa_guard_release(&DAT_101e94200);
  }
  FUN_100491994(&DAT_101e941d0);
  uVar7 = 0;
  do {
    local_58 = *(int *)(param_3 + uVar7 * 4);
    local_5c = 0;
    piVar2 = (int *)FUN_10049f59c(&DAT_101e941d0,&local_58);
    piVar3 = &local_5c;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2;
    }
    local_5c = *piVar3 + 1;
    FUN_100491a00(&DAT_101e941d0,&local_58,&local_5c);
    FUN_100470a0c(&DAT_101e941d0,local_58,param_5);
    uVar5 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar5;
  } while (uVar5 <= param_1);
  if (*(char *)(param_4 + 0xdc) != '\0') {
    uVar5 = 0;
    plVar4 = (long *)(param_4 + 0x38);
    uVar6 = uVar5;
    do {
      for (; *plVar4 == 0; plVar4 = plVar4 + 1) {
LAB_1004916b0:
      }
      if (uVar5 != 0) {
        uVar5 = uVar5 - 1;
        goto LAB_1004916b0;
      }
      local_58 = *(int *)(*plVar4 + 0x48);
      local_5c = 0;
      piVar2 = (int *)FUN_10049f59c(&DAT_101e941d0,&local_58);
      piVar3 = &local_5c;
      if (piVar2 != (int *)0x0) {
        piVar3 = piVar2;
      }
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        FUN_100470a0c(&DAT_101e941d0,local_58,param_5);
      }
      else {
        piVar3 = (int *)FUN_10049f644(&DAT_101e941d0,&local_58);
        *piVar3 = iVar1 + -1;
      }
      uVar5 = uVar6 + 1;
      plVar4 = (long *)(param_4 + 0x38);
      uVar6 = uVar5;
    } while (uVar5 < *(byte *)(param_4 + 0xdc));
  }
  local_58 = 0;
  piVar2 = (int *)FUN_10049f59c(&DAT_101e941d0,&local_54);
  piVar3 = &local_58;
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2;
  }
  return *piVar3 != 0;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1004917ac(long param_1,long param_2,undefined8 param_3,ulong param_4,int *param_5)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint local_f4 [18];
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1003e148c((int)*(float *)(*(long *)(param_1 + 0x40) + 800));
  if ((uVar3 & 1) != 0) {
LAB_10049180c:
    uVar4 = 0;
LAB_100491954:
    if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar4);
  }
  uVar12 = 0;
  uStack_78 = 0;
  uStack_7c = 0;
  uStack_84 = 0;
  local_80 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  local_9c = 0;
  uVar3 = 1;
  uStack_a4 = 0;
  local_ac = 0;
  iVar10 = (int)param_4;
  local_f4[0x11] = iVar10;
  iVar9 = 1;
  do {
    uVar5 = (ulong)*(byte *)(param_2 + 0xdd) & 0x7f;
    iVar11 = (int)param_4;
    if ((int)uVar5 == 0) {
LAB_10049189c:
      uVar5 = FUN_1003e148c((int)*(float *)(*(long *)(param_1 + 0x40) + 800),param_2,param_3,param_4
                            ,0,0);
      if ((uVar5 & 1) != 0) {
        *param_5 = iVar11;
        uVar4 = 1;
        goto LAB_100491954;
      }
      local_f4[0xf] = 0;
      local_f4[0x10] = 0;
      local_f4[0xe] = 0;
      local_f4[8] = 0;
      local_f4[9] = 0;
      local_f4[6] = 0;
      local_f4[7] = 0;
      local_f4[0xc] = 0;
      local_f4[0xd] = 0;
      local_f4[10] = 0;
      local_f4[0xb] = 0;
      local_f4[4] = 0;
      local_f4[5] = 0;
      local_f4[2] = 0;
      local_f4[3] = 0;
      local_f4[0] = 0;
      local_f4[1] = 0xffff;
      FUN_10046f420(param_3,param_4,1,local_f4 + 1,local_f4);
      uVar5 = (ulong)local_f4[0];
      if (local_f4[0] != 0) {
        puVar7 = local_f4;
        do {
          puVar7 = (uint *)((long)puVar7 + 4);
          if (iVar9 < 0x10) {
            local_f4[uVar3 + 0x11] = *puVar7;
            uVar1 = 0;
            if ((int)uVar3 + 1U < 0x10) {
              uVar1 = (int)uVar3 + 1;
            }
            uVar3 = (ulong)uVar1;
            iVar9 = iVar9 + 1;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else {
      uVar6 = 0;
      bVar2 = true;
      do {
        lVar8 = *(long *)(param_2 + 0x38 + uVar6 * 8);
        if ((lVar8 != 0) && (*(int *)(lVar8 + 0x48) == iVar11)) break;
        uVar6 = uVar6 + 1;
        bVar2 = uVar6 < uVar5;
      } while (uVar5 != uVar6);
      if ((!bVar2) || (iVar11 == iVar10)) goto LAB_10049189c;
    }
    if (iVar9 < 2) goto LAB_10049180c;
    uVar12 = uVar12 + 1 & 0xf;
    iVar9 = iVar9 + -1;
    param_4 = (ulong)local_f4[(ulong)uVar12 + 0x11];
  } while( true );
}




uint * thunk_FUN_10049f6e4(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_100491994(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




undefined8 FUN_100491a00(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    uVar6 = (ulong)(uVar3 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar3) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar3);
      if ((int)uVar6 == -1) goto LAB_100491aac;
    }
    uVar1 = *(uint *)(lVar5 + uVar6 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = *param_3;
      return 0;
    }
  }
LAB_100491aac:
  lVar5 = FUN_100034344(param_1);
  uVar4 = FUN_10049f768(param_1,param_3);
  *(undefined4 *)(lVar5 + 4) = uVar4;
  return 1;
}




long FUN_100491adc(void)

{
  if (DAT_101e94208 == 0) {
    FUN_100491b08();
  }
  return DAT_101e94208;
}




void FUN_100491b08(void)

{
  undefined8 *puVar1;
  
  if (DAT_101e94208 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_100491b80();
    DAT_101e94208 = puVar1;
  }
  return;
}




void FUN_100491b44(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_101e94208;
  if (DAT_101e94208 != (void *)0x0) {
    if (*(void **)((long)DAT_101e94208 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((long)DAT_101e94208 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_101e94208 = (void *)0x0;
  return;
}




void FUN_100491b80(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_1010a1520();
  plVar2 = (long *)FUN_1010a0e0c(uVar1,0,"*HUDQuickMessageSet*",0);
  if (plVar2 == (long *)0x0) {
    uVar1 = FUN_10034bfd0(DAT_101d90978,"*HUDQuickMessageSet*");
    FUN_1010a14fc(0,uVar1);
    uVar1 = FUN_1010a1520();
    plVar2 = (long *)FUN_1010a0e0c(uVar1,0,"*HUDQuickMessageSet*",0);
  }
  plVar2 = (long *)*plVar2;
  lVar3 = *plVar2;
  while (lVar3 != 0) {
    FUN_100491f68(param_1,plVar2);
    plVar2 = plVar2 + 1;
    lVar3 = *plVar2;
  }
  return;
}




undefined4 FUN_100491c10(undefined4 *param_1)

{
  return *param_1;
}




undefined8 FUN_100491c18(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 8);
}




void FUN_100491c24(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + (param_2 & 0xffffffff) * 8);
  if (((DAT_101e94220 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e94220), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101e94210);
    ___cxa_atexit(FUN_100046198,&DAT_101e94210,0x100000000);
    ___cxa_guard_release(&DAT_101e94220);
  }
  iVar1 = *(int *)(lVar4 + 0x24);
  if (iVar1 == 3) {
    FUN_1004e38ac(&DAT_101e94210,"{0,200,0,255}%d{\\}");
    FUN_1004e3120(auStack_50,"[HP_PCT]");
    FUN_1004e3bc4(param_3,0,auStack_50,&DAT_101e94210);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_1004e38ac(&DAT_101e94210,"{0,172,255,255}%d{\\}");
    pcVar3 = "[MANA_PCT]";
    goto LAB_100491ea4;
  }
  if (iVar1 == 2) {
    FUN_1004e3120(auStack_50,"{255,170,45,255}[ABILITY]{\\}");
    FUN_1000153b4(&DAT_101e94210,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    iVar1 = (int)param_4;
    if (iVar1 == 3) {
      FUN_1004e3120(auStack_50,"[ABILITY]");
      pcVar3 = "MENU_HERO_INSPECTOR_ULTIMATE_LABEL";
LAB_100491e1c:
      uVar2 = FUN_1004e0150(pcVar3,0);
      FUN_1004e3bc4(&DAT_101e94210,0,auStack_50,uVar2);
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
    }
    else {
      if (iVar1 == 2) {
        FUN_1004e3120(auStack_50,"[ABILITY]");
        pcVar3 = "MENU_HERO_INSPECTOR_ABILITY_B_LABEL";
        goto LAB_100491e1c;
      }
      if (iVar1 == 1) {
        FUN_1004e3120(auStack_50,"[ABILITY]");
        pcVar3 = "MENU_HERO_INSPECTOR_ABILITY_A_LABEL";
        goto LAB_100491e1c;
      }
    }
    pcVar3 = "[ABILITY]";
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    lVar4 = FUN_10046c858(DAT_101d90978,param_4,PTR_DAT_1018573e8);
    FUN_1004e3120(auStack_50,"{255,170,45,255}[loc]{\\}");
    FUN_1000153b4(&DAT_101e94210,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    FUN_1004e3120(auStack_50,"[loc]");
    uVar2 = FUN_1004e0150(*(undefined8 *)(lVar4 + 0x10),0);
    FUN_1004e3bc4(&DAT_101e94210,0,auStack_50,uVar2);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    pcVar3 = "[ITEM]";
  }
  FUN_1004e3120(auStack_50,pcVar3);
  FUN_1004e3bc4(param_3,0,auStack_50,&DAT_101e94210);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1004e38ac(&DAT_101e94210,"{255,170,45,255}%d{\\}");
  pcVar3 = "[SEC]";
LAB_100491ea4:
  FUN_1004e3120(auStack_50,pcVar3);
  FUN_1004e3bc4(param_3,0,auStack_50,&DAT_101e94210);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




uint FUN_100491f2c(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    lVar2 = (ulong)*param_1 << 3;
    do {
      if (**(int **)(*(long *)(param_1 + 2) + lVar1 * 8) == param_2) goto LAB_100491f60;
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  lVar1 = 0xff;
LAB_100491f60:
  return (uint)lVar1 & 0xff;
}




void FUN_100491f68(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1004a06c4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100491fe8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d909dc;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_10049201c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d909dc;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




int FUN_100492050(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d909dc;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,0,9);
  return (int)fVar1;
}




void FUN_100492088(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d909e4;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004920bc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d909ec;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004920f0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d909ec;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492124(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d909f4;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492158(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d909fc;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_10049218c(long *param_1,float *param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 local_48 [2];
  
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  lVar4 = *(long *)(lVar2 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  lVar3 = *(long *)(lVar2 + 0x40);
  fVar5 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
  fVar6 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
  fVar5 = DAT_101e94260;
  if (DAT_101e94260 <= fVar6) {
    fVar5 = fVar6;
  }
  local_48[0] = DAT_101d909fc;
  fVar6 = (float)FUN_1003dfee8(lVar2,local_48,0,9);
  uVar1 = FUN_1003a34a4(lVar4,DAT_101d2aaec);
  *param_2 = fVar5 * fVar6 * (float)uVar1;
  *param_3 = 0xbf800000;
  return;
}




void FUN_10049227c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a08;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004922b0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a10;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_1004922e4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a10;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100492318(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a18;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_10049234c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a18;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




float FUN_100492380(long *param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a20;
  fVar1 = (float)FUN_1003dfee8(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),local_18,2,9);
  return -fVar1;
}




void FUN_1004923c4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a20;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004923f8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a20;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049242c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a28;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100492460(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a28;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




int FUN_100492494(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a28;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,0,9);
  return (int)fVar1;
}




void FUN_1004924cc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a28;
  FUN_1003dfee8(param_1,local_18,4,9);
  return;
}




void FUN_100492500(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a28;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_100492534(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a30;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492568(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a30;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




int FUN_10049259c(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a38;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,1,9);
  return (int)fVar1;
}




void FUN_1004925d4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a38;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100492608(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a38;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




float FUN_10049263c(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  fVar3 = (float)FUN_1003df710(lVar2,3,1);
  local_38[0] = DAT_101d90a48;
  fVar4 = (float)FUN_1003dfee8(lVar2,local_38,2,9);
  return fVar4 + fVar3;
}




void FUN_1004926d0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a48;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




int FUN_100492704(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a50;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,1,9);
  return (int)fVar1;
}




void FUN_10049273c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a50;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100492770(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a50;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004927a4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a5c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004927d8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a5c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_10049280c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a5c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492840(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a64;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492874(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a64;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004928a8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a6c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_1004928dc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a6c;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




float FUN_100492910(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  fVar3 = (float)FUN_1003dfe60(lVar2,0,0xb,0x19,0);
  local_38[0] = DAT_101d90a74;
  fVar4 = (float)FUN_1003dfee8(lVar2,local_38,2,9);
  return fVar4 + fVar3;
}




void FUN_1004929ac(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a7c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004929e0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ad4;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492a14(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90adc;
  FUN_1003dfee8(param_1,local_18,2,0x41);
  return;
}




void FUN_100492a48(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90adc;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




int FUN_100492a7c(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90adc;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,1,9);
  return (int)fVar1;
}




void FUN_100492ab4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90adc;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492ae8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90aec;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492b1c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90aec;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100492b50(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90aec;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100492b84(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90af4;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100492bb8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90af4;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100492bec(long *param_1)

{
  uint uVar1;
  undefined **local_690;
  undefined8 uStack_688;
  undefined1 local_680;
  undefined4 local_67c;
  char *local_678;
  undefined1 local_670;
  undefined1 auStack_668 [1600];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  local_680 = 0xff;
  local_690 = &PTR_FUN_101499900;
  uStack_688 = 0;
  local_670 = 0;
  local_67c = *(undefined4 *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x260);
  local_678 = "FortressMinion";
  uVar1 = FUN_1003a6ce4(&local_690,auStack_668,200,0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1 < 3);
}




void FUN_100492c8c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  lVar1 = FUN_10043ab44(param_1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_100492bec;
  plVar2 = (long *)FUN_100451bac(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"*FortressMinion*",1);
  (**(code **)(*plVar3 + 0x18))(plVar3,"SecondWolf");
  plVar3 = (long *)FUN_100492d2c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_FortressMinion_Lifetime_10185a6e8,plVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x000100492d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_10048bb18);
  return;
}




void FUN_100492d2c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100016a34();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100492d7c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90afc;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100492db0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90afc;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492de4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90af4;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492e18(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b0c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100492e4c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b0c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100492e80(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b14;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492eb4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b1c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100492ee8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b1c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100492f1c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b1c;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_100492f50(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b24;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100492f84(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b2c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100492fb8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b2c;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




int FUN_100492fec(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b2c;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,1,9);
  return (int)fVar1;
}




void FUN_100493024(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b3c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100493058(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b54;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049308c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b5c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004930c0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b5c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004930f4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b64;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493128(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b64;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049315c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b6c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493190(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b6c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_1004931c4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b74;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004931f8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b74;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049322c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b7c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




float FUN_100493260(undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_1003dfe60(param_2,0,3,9,1);
  fVar3 = *(float *)(*(long *)(param_2 + 0x40) + 0x128);
  fVar2 = (float)FUN_1003dfe60(param_2,0,4,9,1);
  return fVar1 / (fVar3 * fVar2 + 1.0);
}




void FUN_1004932cc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b8c;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




int FUN_100493300(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b8c;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,1,9);
  return (int)fVar1;
}




void FUN_100493338(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b8c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049336c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b8c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_1004933a0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b94;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004933d4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b9c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493408(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b9c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049343c(long *param_1,float *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  lVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  fVar3 = DAT_101e94260;
  if (DAT_101e94260 <= fVar4) {
    fVar3 = fVar4;
  }
  local_38[0] = DAT_101d90ba8;
  fVar4 = (float)FUN_1003dfee8(lVar1,local_38,0,9);
  *param_2 = fVar4 * fVar3;
  *param_3 = fVar4 * fVar3;
  return;
}




void FUN_1004934dc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ba8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493510(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bb0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100493544(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bb8;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100493578(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bb8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004935ac(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  long *local_30;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_28,&local_30);
    lVar4 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    if (((int)local_30[2] == *(int *)(lVar4 + 0x260)) && (lVar3 = *local_30, lVar3 != 0)) {
      uVar1 = FUN_1004d2524(lVar3);
      iVar2 = FUN_100015208(lVar3,uVar1,0x12345678);
      if (iVar2 == DAT_101d2c83c) {
        local_6c = *(undefined4 *)(lVar4 + 0x260);
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        local_88 = &PTR_FUN_101496b18;
        local_64 = DAT_1018589d8;
        local_5c = 0x140000000;
        local_40 = 0;
        local_4c = 0;
        local_54 = 0;
        local_38 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        uStack_68 = local_6c;
        local_60 = FUN_1003d4e0c(PTR_s_Buff_Joule_JumpReset_10185c790);
        FUN_10049639c(&local_88,&DAT_101e47d30);
      }
    }
  }
  return;
}




void FUN_1004936b0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bc0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004936e4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bc0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493718(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bc0;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_10049374c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bc0;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100493780(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bcc;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004937b4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bcc;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004937e8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bd8;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_10049381c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bd8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




int FUN_100493850(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bd8;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,0,9);
  return (int)fVar1;
}




void FUN_100493888(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90be8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004938bc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bf0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004938f0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bf8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100493924(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c00;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100493958(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c0c;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_10049398c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c0c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_1004939c0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c20;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004939f4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c34;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493a28(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c34;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100493a5c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c3c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100493a90(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_58 [2];
  
  lVar2 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  uVar6 = *(undefined4 *)(lVar2 + 0x250);
  fVar3 = *(float *)(lVar2 + 0x254);
  uVar7 = *(undefined4 *)(lVar2 + 600);
  fVar5 = *(float *)(lVar2 + 0x2ec);
  local_58[0] = DAT_101d90c44;
  fVar4 = (float)FUN_1003dfee8(lVar2,local_58,1,9);
  *(undefined4 *)(param_2 + 0x14) = uVar6;
  *(float *)(param_2 + 0x18) = fVar5 + fVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar7;
  *(float *)(param_2 + 0x30) = fVar4 * fVar4;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x8000;
  *(undefined4 *)(param_2 + 0x48) = 1;
  iVar1 = *(int *)(*param_1 + 0x308);
  if ((iVar1 != -1) &&
     ((lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10), *(int *)(lVar2 + 0x260) == iVar1 ||
      (lVar2 = FUN_100345d90(), lVar2 != 0)))) {
    *(long *)(param_2 + 8) = lVar2;
  }
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff9f | 0x10;
  return;
}




int FUN_100493b80(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c4c;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,2,9);
  return (int)fVar1;
}




void FUN_100493bb8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c4c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493bec(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c4c;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_100493c20(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c4c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100493c54(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c70;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493c88(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c70;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




float FUN_100493cbc(long *param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c80;
  fVar1 = (float)FUN_1003dfee8(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),local_18,1,9);
  return 1.0 - fVar1;
}




void FUN_100493d04(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c80;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100493d38(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  long local_28;
  long local_20;
  undefined4 local_18 [2];
  
  FUN_10042e1f0(param_1,&local_20,&local_28);
  lVar1 = *(long *)(*(long *)(local_20 + 0x10) + 0x10);
  if (*(int *)(local_28 + 0x10) == *(int *)(lVar1 + 0x260)) {
    local_18[0] = DAT_101d90c9c;
    fVar2 = (float)FUN_1003dfee8(lVar1,local_18,0,9);
    *(float *)(local_28 + 0x54) = *(float *)(local_28 + 0x54) * fVar2;
  }
  return;
}




void FUN_100493da8(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  fVar3 = DAT_101e94260;
  if (DAT_101e94260 <= fVar4) {
    fVar3 = fVar4;
  }
  local_38[0] = DAT_101d90c9c;
  fVar4 = (float)FUN_1003dfee8(lVar1,local_38,1,9);
  *param_3 = fVar3 * fVar4 * *(float *)(param_1 + 0x328);
  return;
}




void FUN_100493e48(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ca4;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100493e7c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cac;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100493eb0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cb4;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493ee4(long *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  lVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  fVar3 = DAT_101e94260;
  if (DAT_101e94260 <= fVar4) {
    fVar3 = fVar4;
  }
  local_38[0] = DAT_101d90cb4;
  fVar4 = (float)FUN_1003dfee8(lVar1,local_38,0,9);
  *param_2 = fVar4 * fVar3;
  *param_3 = 0xbf800000;
  return;
}




void FUN_100493f88(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cc0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100493fbc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cc0;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100493ff0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cc0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494024(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cc8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494058(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cc8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_10049408c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cd0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004940c0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cd0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004940f4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cd8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494128(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ce8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_10049415c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cf0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100494190(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90cf0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004941c4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d08;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




float FUN_1004941f8(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined4 local_38 [2];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar2 = (float)FUN_1003dfe60(uVar1,0,0,0x19,0);
  local_38[0] = DAT_101d90d24;
  fVar3 = (float)FUN_1003dfee8(uVar1,local_38,0,9);
  fVar3 = fVar3 * fVar2;
  if (*(char *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x2f6) < '\0') {
    fVar2 = (float)FUN_1003dfe60(uVar1,0,6,0x19,0);
    fVar3 = fVar2 * fVar3;
  }
  return fVar3;
}




float FUN_1004942a4(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar2 = (float)FUN_1003dfe60(uVar1,0,0,0x19,0);
  local_50[0] = DAT_101d90d24;
  fVar3 = (float)FUN_1003dfee8(uVar1,local_50,0,9);
  local_48[0] = DAT_101d90d24;
  fVar4 = (float)FUN_1003dfee8(uVar1,local_48,1,9);
  fVar4 = fVar3 * fVar2 * fVar4;
  if (*(char *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x2f6) < '\0') {
    fVar2 = (float)FUN_1003dfe60(uVar1,0,6,0x19,0);
    fVar4 = fVar2 * fVar4;
  }
  return fVar4;
}




void FUN_100494378(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d2c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004943ac(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d34;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_1004943e0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d3c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100494414(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d3c;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




int FUN_100494448(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d3c;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,1,9);
  return (int)fVar1;
}




void FUN_100494480(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d3c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004944b4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d44;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004944e8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d50;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049451c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d60;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494550(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d68;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100494584(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d74;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004945b8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d74;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004945ec(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d7c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




float FUN_100494620(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_28 [2];
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  fVar3 = DAT_101e94260;
  if (DAT_101e94260 <= fVar4) {
    fVar3 = fVar4;
  }
  local_28[0] = DAT_101d90d7c;
  fVar4 = (float)FUN_1003dfee8(lVar1,local_28,0,9);
  return fVar4 * fVar3;
}




void FUN_1004946a4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d88;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004946d8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d88;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_10049470c(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined **local_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined1 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined8 local_79c;
  undefined4 local_794;
  undefined4 local_790;
  undefined4 uStack_78c;
  undefined8 local_788;
  undefined4 local_780;
  undefined8 local_778;
  undefined4 local_770;
  uint local_76c;
  undefined4 uStack_768;
  undefined **local_760;
  undefined8 uStack_758;
  undefined4 local_750;
  float fStack_74c;
  undefined4 local_748;
  undefined4 local_744;
  undefined1 local_740;
  undefined **local_738;
  long local_730;
  undefined1 local_728;
  undefined4 local_724;
  float fStack_720;
  undefined4 local_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  float local_708;
  undefined8 local_704;
  undefined8 uStack_6fc;
  undefined1 local_6f4;
  undefined4 local_6f0;
  undefined8 local_6ec;
  undefined4 local_6e4;
  undefined2 local_6e0;
  byte local_6de;
  long local_6d8;
  long local_6d0 [200];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_6d8);
  lVar5 = FUN_100345d90(*(undefined4 *)(local_6d8 + 0x308));
  lVar7 = *(long *)(*(long *)(local_6d8 + 0x10) + 0x10);
  uVar11 = *(undefined4 *)(lVar7 + 0x250);
  uVar12 = *(undefined4 *)(lVar7 + 600);
  fVar13 = *(float *)(lVar7 + 0x2ec) + *(float *)(lVar7 + 0x254);
  local_738 = &PTR_FUN_101499960;
  local_718 = 0;
  uStack_710 = 0;
  uStack_6fc = 0x3f800000bf800000;
  local_704 = 0xc0000000bf800000;
  local_6f4 = 0xff;
  local_6ec = 0xffffffff;
  local_6e4 = 0xffffffff;
  local_728 = 1;
  lVar6 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar6 + 0xe5);
  local_6f0 = 0x40000;
  local_730 = lVar5;
  local_708 = (float)FUN_1003df710(lVar5,2,1);
  fVar10 = *(float *)(*(long *)(lVar7 + 0x38) + 100);
  local_708 = ((*(float *)(lVar7 + 0x2e8) + fVar10) * *(float *)(*(long *)(lVar7 + 0x38) + 0x68)) /
              fVar10 + local_708;
  local_708 = local_708 * local_708;
  local_6de = bVar1 | 0x14;
  local_6e0 = 0xc120;
  local_760 = &PTR_FUN_101499a08;
  uStack_758 = 0;
  local_744 = 3;
  local_740 = 1;
  local_750 = uVar11;
  fStack_74c = fVar13;
  local_748 = uVar12;
  local_724 = uVar11;
  fStack_720 = fVar13;
  local_71c = uVar12;
  uVar3 = FUN_1003a6ce4(&local_738,local_6d0,200,&local_760);
  if (uVar3 != 0) {
    uVar8 = (ulong)uVar3;
    plVar9 = local_6d0;
    do {
      puVar2 = PTR_s_Buff_Vox_Resonance_10185b168;
      lVar6 = *plVar9;
      iVar4 = *(int *)(lVar6 + 0x260);
      if (iVar4 == *(int *)(lVar7 + 0x260)) {
        uVar11 = *(undefined4 *)(lVar5 + 0x260);
        local_794 = FUN_1003df710(lVar5,4,1);
        local_7b8 = 0;
        uStack_7b0 = 0;
        local_7a8 = 0;
        local_7c0 = &PTR_FUN_101496b18;
        local_79c = (ulong)DAT_1018589d8;
        local_778 = 0;
        local_790 = 0;
        uStack_78c = 0;
        local_788 = 0;
        local_780 = 0;
        local_770 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_7a4 = uVar11;
        local_7a0 = iVar4;
        uVar11 = FUN_1003d4e0c(puVar2);
        local_79c = CONCAT44(uVar11,(undefined4)local_79c);
        (*(code *)local_7c0[4])(&local_7c0,&DAT_101e47d30);
      }
      else {
        if (((DAT_101e94240 & 1) == 0) && (iVar4 = ___cxa_guard_acquire(&DAT_101e94240), iVar4 != 0)
           ) {
          DAT_101e94238 = 0x3e3270a0;
          ___cxa_guard_release(&DAT_101e94240);
        }
        iVar4 = local_7a0;
        local_7b8 = 0;
        uStack_7b0 = 0;
        local_7a8 = 0;
        local_7c0 = &PTR_FUN_101497058;
        local_7a4 = 0;
        local_7a0._3_1_ = SUB41(iVar4,3);
        local_7a0._0_3_ =
             CONCAT12(*(undefined1 *)(lVar6 + 0x300),
                      CONCAT11(*(undefined1 *)(lVar7 + 0x300),*(undefined1 *)(lVar5 + 0x300)));
        local_79c = 0;
        local_794 = 0;
        local_790 = 0;
        uStack_78c = 0;
        local_788 = CONCAT44(DAT_101e94238,0x76);
        local_76c = DAT_1018589d8;
        uStack_768 = 0;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        FUN_1004966e0(&local_7c0,&DAT_101e47d30);
      }
      plVar9 = plVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_90) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100494a1c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90da4;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494a50(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90db4;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100494a84(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90db4;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494ab8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90db4;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100494aec(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90dc4;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494b20(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90dc4;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100494b54(long *param_1,float *param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_38 [2];
  
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != iVar1) {
    lVar2 = FUN_100345d90(iVar1);
  }
  lVar3 = *(long *)(lVar2 + 0x40);
  fVar4 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
  fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
  fVar4 = DAT_101e94260;
  if (DAT_101e94260 <= fVar5) {
    fVar4 = fVar5;
  }
  local_38[0] = DAT_101d90de4;
  fVar5 = (float)FUN_1003dfee8(lVar2,local_38,0,9);
  *param_2 = fVar5 * fVar4;
  *param_3 = fVar5 * fVar4;
  return;
}




void FUN_100494c0c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90dec;
  FUN_1003dfee8(param_1,local_18,2,0x41);
  return;
}




void FUN_100494c40(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90dec;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




int FUN_100494c74(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90dec;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,0,9);
  return (int)fVar1;
}




void FUN_100494cac(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90dec;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_100494ce0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90dfc;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100494d14(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e0c;
  FUN_1003dfee8(param_1,local_18,4,9);
  return;
}




void FUN_100494d48(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e14;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494d7c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e2c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494db0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e2c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100494de4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e2c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100494e18(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e34;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100494e4c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e34;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494e80(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e3c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100494eb4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e3c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494ee8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e4c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494f1c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e54;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494f50(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e70;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100494f84(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e70;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100494fb8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e78;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_100494fec(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e78;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




int FUN_100495020(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e78;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,0,9);
  return (int)fVar1;
}




void FUN_100495058(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e78;
  FUN_1003dfee8(param_1,local_18,4,9);
  return;
}




void FUN_10049508c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e80;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004950c0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e88;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004950f4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e90;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495128(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e98;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049515c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ea0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495190(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ea0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004951c4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ea8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004951f8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ea8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049522c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90eb0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495260(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90eb0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495294(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90eb8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004952c8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90eb8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004952fc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90eb8;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100495330(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ec0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




float FUN_100495364(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  fVar3 = (float)FUN_1003dfe60(lVar2,0,4,0x19,0);
  local_38[0] = DAT_101d90ec8;
  fVar4 = (float)FUN_1003dfee8(lVar2,local_38,2,9);
  return fVar4 + fVar3;
}




void FUN_100495400(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ec8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495434(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ed0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495468(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ed8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049549c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ed8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004954d0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ee0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495504(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ee0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495538(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ee0;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_10049556c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ee8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004955a0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ee8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004955d4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ef0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495608(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ef0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049563c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ef8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495670(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ef8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004956a4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ef8;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_1004956d8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f08;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_10049570c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f10;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495740(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f18;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495774(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f18;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004957a8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f20;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004957dc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f20;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495810(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f20;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100495844(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f28;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495878(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f28;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004958ac(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f30;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004958e0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f30;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495914(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f30;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100495948(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f3c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049597c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f3c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004959b0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f44;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004959e4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f4c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495a18(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f4c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495a4c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f5c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495a80(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f64;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495ab4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f64;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495ae8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f6c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495b1c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f6c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495b50(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f74;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495b84(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f74;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495bb8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f80;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495bec(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f80;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100495c20(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f80;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495c54(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f88;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495c88(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f88;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100495cbc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f90;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495cf0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90f88;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495d24(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90fa8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495d58(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90fa0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495d8c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90fa0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495dc0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90fa0;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100495df4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90fb0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495e28(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x42100000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff9f | 0x8050;
  return;
}




void FUN_100495ea8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x42100000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8020;
  return;
}




void FUN_100495f28(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90fd8;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495f5c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90fd0;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100495f90(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90fd0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495fc4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ff0;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100495ff8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ff8;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10049602c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91000;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100496060(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91000;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100496094(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91008;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1004960c8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91008;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004960fc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91010;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100496130(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91010;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100496164(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91018;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100496198(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91020;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004961cc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91020;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100496200(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91028;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100496234(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91028;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100496268(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91028;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_10049629c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91030;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004962d0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d91030;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100496304(void)

{
  return;
}




void FUN_10049630c(void)

{
  return;
}




void FUN_100496318(void)

{
  return;
}




void FUN_100496320(void)

{
  return;
}




void FUN_100496328(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497218;
  uVar3 = *(undefined8 *)(param_1 + 0x23);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x23) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_10049639c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x58,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496b18;
  uVar3 = *(undefined8 *)(param_1 + 0x3c);
  uVar5 = *(undefined8 *)(param_1 + 0x34);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  uVar6 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar6;
  *(undefined8 *)((long)puVar2 + 0x34) = uVar5;
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x3c) = uVar3;
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(param_1 + 0x50);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496428(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496e60;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496494(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496b50;
  uVar3 = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x21) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_10049650c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497330;
  uVar3 = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x21) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496580(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496cd8;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004965f0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014971a8;
  uVar3 = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x21) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496668(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar1;
  *puVar3 = &PTR_FUN_101496c68;
  uVar2 = *(undefined2 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined2 *)((long)puVar3 + 0x24) = uVar2;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_1004966e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x60,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101497058;
  uVar3 = *(undefined8 *)(param_1 + 0x34);
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  uVar5 = *(undefined8 *)(param_1 + 0x44);
  uVar4 = *(undefined8 *)(param_1 + 0x3c);
  uVar7 = *(undefined8 *)(param_1 + 0x54);
  uVar6 = *(undefined8 *)(param_1 + 0x4c);
  uVar8 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar8;
  *(undefined8 *)((long)puVar1 + 0x54) = uVar7;
  *(undefined8 *)((long)puVar1 + 0x4c) = uVar6;
  *(undefined8 *)((long)puVar1 + 0x44) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x3c) = uVar4;
  *(undefined8 *)((long)puVar1 + 0x34) = uVar3;
  *(undefined8 *)((long)puVar1 + 0x2c) = uVar2;
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_100496764(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x38,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014969c8;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar5;
  puVar2[6] = uVar4;
  puVar2[5] = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004967d4(void)

{
  return;
}




void FUN_1004967dc(void)

{
  return;
}




void FUN_1004967e4(void)

{
  return;
}




void FUN_1004967e8(void)

{
  return;
}




void FUN_1004967f0(void)

{
  return;
}




void FUN_1004967f4(void)

{
  return;
}




void FUN_1004967fc(void)

{
  return;
}




void FUN_100496804(void)

{
  return;
}




void FUN_10049680c(void)

{
  return;
}




void FUN_100496814(void)

{
  return;
}




void FUN_10049681c(void)

{
  return;
}




void FUN_100496824(void)

{
  return;
}




void FUN_10049682c(void)

{
  return;
}




void FUN_100496834(void)

{
  return;
}




void FUN_10049683c(void)

{
  return;
}




void FUN_100496844(void)

{
  return;
}




void FUN_10049684c(void)

{
  return;
}




void FUN_100496854(void)

{
  return;
}




void FUN_100496860(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_101496db8;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_1004968d0(void)

{
  return;
}




void FUN_1004968dc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014972c0;
  uVar3 = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x21) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_10049694c(void)

{
  return;
}




void FUN_100496954(void)

{
  return;
}




void FUN_10049695c(void)

{
  return;
}




void FUN_100496964(void)

{
  return;
}




void FUN_10049696c(void)

{
  return;
}




void FUN_100496974(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101496188;
  return;
}




void FUN_100496988(void)

{
  return;
}




void FUN_100496990(void)

{
  return;
}




void FUN_100496998(void)

{
  return;
}




void FUN_1004969a0(void)

{
  return;
}




void FUN_1004969a8(void)

{
  return;
}




void FUN_1004969b0(void)

{
  return;
}




void FUN_1004969b8(void)

{
  return;
}




void FUN_1004969c0(void)

{
  return;
}




void FUN_1004969c8(void)

{
  return;
}




void FUN_1004969d0(void)

{
  return;
}




void FUN_1004969d8(void)

{
  return;
}




void FUN_1004969e0(void)

{
  return;
}




void FUN_1004969e8(void)

{
  return;
}




void FUN_1004969f4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x38,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014971e0;
  uVar3 = *(undefined8 *)(param_1 + 0x29);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x29) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496a64(void)

{
  return;
}




void FUN_100496a6c(void)

{
  return;
}




void FUN_100496a74(void)

{
  return;
}




void FUN_100496a7c(void)

{
  return;
}




void FUN_100496a84(void)

{
  return;
}




void FUN_100496a8c(void)

{
  return;
}




void FUN_100496a94(void)

{
  return;
}




void FUN_100496a9c(void)

{
  return;
}




void FUN_100496aa8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101496a38;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_100496b10(void)

{
  return;
}




void FUN_100496b18(void)

{
  return;
}




void FUN_100496b20(void)

{
  return;
}




void FUN_100496b28(void)

{
  return;
}




void FUN_100496b30(void)

{
  return;
}




void FUN_100496b34(void)

{
  return;
}




void FUN_100496b3c(void)

{
  return;
}




void FUN_100496b44(void)

{
  return;
}




void FUN_100496b4c(void)

{
  return;
}




void FUN_100496b54(void)

{
  return;
}




void FUN_100496b60(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_101497250;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_100496bd0(void)

{
  return;
}




void FUN_100496bd8(void)

{
  return;
}




void FUN_100496be0(void)

{
  return;
}




void FUN_100496bec(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x38,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496a00;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar5;
  puVar2[6] = uVar4;
  puVar2[5] = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496c5c(void)

{
  return;
}




void FUN_100496c64(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496a70;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496cd0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496aa8;
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496d38(void)

{
  return;
}




void FUN_100496d40(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101496ae0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_100496dac(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_101497790;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_100496e1c(void)

{
  return;
}




void FUN_100496e24(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x40,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496b88;
  uVar4 = *(undefined8 *)(param_1 + 0x34);
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar5;
  *(undefined8 *)((long)puVar2 + 0x34) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496e94(void)

{
  return;
}




void FUN_100496e9c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x38,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496bc0;
  uVar3 = *(undefined8 *)(param_1 + 0x29);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x29) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496f0c(void)

{
  return;
}




void FUN_100496f14(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496bf8;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496f80(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496c30;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100496fe8(void)

{
  return;
}




void FUN_100496ff0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496ca0;
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_10049705c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496d10;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004970c8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496d48;
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined1 *)((long)puVar2 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_10049713c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x58,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101496d80;
  uVar3 = *(undefined8 *)(param_1 + 0x34);
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  uVar5 = *(undefined8 *)(param_1 + 0x44);
  uVar4 = *(undefined8 *)(param_1 + 0x3c);
  uVar7 = *(undefined8 *)(param_1 + 0x4d);
  uVar6 = *(undefined8 *)(param_1 + 0x45);
  uVar8 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar8;
  *(undefined8 *)((long)puVar1 + 0x4d) = uVar7;
  *(undefined8 *)((long)puVar1 + 0x45) = uVar6;
  *(undefined8 *)((long)puVar1 + 0x44) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x3c) = uVar4;
  *(undefined8 *)((long)puVar1 + 0x34) = uVar3;
  *(undefined8 *)((long)puVar1 + 0x2c) = uVar2;
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_1004971c0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101496df0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_100497228(void)

{
  return;
}




void FUN_100497230(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496e28;
  uVar1 = *(undefined1 *)(param_1 + 0x2c);
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  *(undefined1 *)((long)puVar2 + 0x2c) = uVar1;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004972a0(void)

{
  return;
}




void FUN_1004972a8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_101496e98;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar3 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = uVar4;
  *(undefined4 *)((long)puVar3 + 0x2c) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_100497318(void)

{
  return;
}




void FUN_100497320(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101496ed0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_10049738c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x38,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496f08;
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497400(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar1;
  *puVar3 = &PTR_FUN_101496f40;
  uVar2 = *(undefined2 *)(param_1 + 0x20);
  *(undefined4 *)((long)puVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(puVar3 + 4) = uVar2;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_100497474(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_101496f78;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar3 + 0x19) = *(undefined4 *)(param_1 + 0x19);
  *(undefined4 *)((long)puVar3 + 0x1c) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_1004974e4(void)

{
  return;
}




void FUN_1004974ec(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101496fb0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_100497554(void)

{
  return;
}




void FUN_10049755c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x3b8,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101496fe8;
  uVar3 = *(undefined8 *)(param_1 + 0x3c);
  uVar5 = *(undefined8 *)(param_1 + 0x34);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  uVar6 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar6;
  *(undefined8 *)((long)puVar2 + 0x34) = uVar5;
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x3c) = uVar3;
  FUN_10045c628(puVar2 + 9,param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x360);
  uVar5 = *(undefined8 *)(param_1 + 0x378);
  uVar4 = *(undefined8 *)(param_1 + 0x370);
  puVar2[0x6d] = *(undefined8 *)(param_1 + 0x368);
  puVar2[0x6c] = uVar3;
  puVar2[0x6f] = uVar5;
  puVar2[0x6e] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x388);
  uVar3 = *(undefined8 *)(param_1 + 0x380);
  uVar6 = *(undefined8 *)(param_1 + 0x398);
  uVar5 = *(undefined8 *)(param_1 + 0x390);
  uVar8 = *(undefined8 *)(param_1 + 0x3a8);
  uVar7 = *(undefined8 *)(param_1 + 0x3a0);
  *(undefined2 *)(puVar2 + 0x76) = *(undefined2 *)(param_1 + 0x3b0);
  puVar2[0x73] = uVar6;
  puVar2[0x72] = uVar5;
  puVar2[0x75] = uVar8;
  puVar2[0x74] = uVar7;
  puVar2[0x71] = uVar4;
  puVar2[0x70] = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497610(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497020;
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497678(void)

{
  return;
}




void FUN_100497680(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497090;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004976ec(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_1014970c8;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_10049775c(void)

{
  return;
}




void FUN_100497764(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x538,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497100;
  uVar4 = *(undefined8 *)(param_1 + 0x44);
  uVar3 = *(undefined8 *)(param_1 + 0x3c);
  uVar6 = *(undefined8 *)(param_1 + 0x34);
  uVar5 = *(undefined8 *)(param_1 + 0x2c);
  uVar7 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar7;
  *(undefined8 *)((long)puVar2 + 0x34) = uVar6;
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar5;
  *(undefined8 *)((long)puVar2 + 0x44) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x3c) = uVar3;
  FUN_10045c628(puVar2 + 10,param_1 + 0x50);
  _memcpy(puVar2 + 0x6d,(void *)(param_1 + 0x368),0x1cc);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497808(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497138;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497870(void)

{
  return;
}




void FUN_100497878(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x38,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497170;
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004978e8(void)

{
  return;
}




void FUN_1004978f0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_101497288;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_100497960(void)

{
  return;
}




void FUN_100497968(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x40,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014972f8;
  uVar1 = *(undefined1 *)(param_1 + 0x3c);
  uVar4 = *(undefined8 *)(param_1 + 0x34);
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar5;
  *(undefined8 *)((long)puVar2 + 0x34) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar3;
  *(undefined1 *)((long)puVar2 + 0x3c) = uVar1;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004979e4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_101497368;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_100497a58(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_1014973a0;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_100497acc(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014973d8;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497b38(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497410;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)puVar2 + 0x19) = *(undefined8 *)(param_1 + 0x19);
  puVar2[4] = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497ba8(void)

{
  return;
}




void FUN_100497bb0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x38,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497448;
  uVar3 = *(undefined8 *)(param_1 + 0x29);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x29) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497c24(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497480;
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497c8c(void)

{
  return;
}




void FUN_100497c94(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014974b8;
  uVar3 = *(undefined8 *)(param_1 + 0x19);
  *(undefined8 *)((long)puVar2 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar2 + 0x19) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497d00(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014974f0;
  uVar3 = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x21) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497d70(void)

{
  return;
}




void FUN_100497d78(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101497528;
  *(undefined1 *)((long)puVar1 + 0x19) = *(undefined1 *)(param_1 + 0x19);
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_100497de0(void)

{
  return;
}




void FUN_100497de8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497560;
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined1 *)((long)puVar2 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497e5c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x38,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497598;
  uVar4 = *(undefined8 *)(param_1 + 0x2d);
  uVar3 = *(undefined8 *)(param_1 + 0x25);
  uVar5 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar5;
  *(undefined8 *)((long)puVar2 + 0x2d) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x25) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497ecc(void)

{
  return;
}




void FUN_100497ed4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014975d0;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100497f3c(void)

{
  return;
}




void FUN_100497f44(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101497608;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_100497fac(void)

{
  return;
}




void FUN_100497fb4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar3 = &PTR_FUN_101448cf0;
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 3) = uVar2;
  *puVar3 = &PTR_FUN_101497640;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined4 *)((long)puVar3 + 0x24) = uVar1;
  FUN_1003456d8(param_2,puVar3);
  return;
}




void FUN_100498024(void)

{
  return;
}




void FUN_10049802c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497678;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100498094(void)

{
  return;
}




void FUN_10049809c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0xa8,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014976b0;
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x44);
  uVar3 = *(undefined8 *)(param_1 + 0x3c);
  uVar6 = *(undefined8 *)(param_1 + 0x54);
  uVar5 = *(undefined8 *)(param_1 + 0x4c);
  uVar8 = *(undefined8 *)(param_1 + 100);
  uVar7 = *(undefined8 *)(param_1 + 0x5c);
  uVar9 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar2 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar9;
  *(undefined8 *)((long)puVar2 + 100) = uVar8;
  *(undefined8 *)((long)puVar2 + 0x5c) = uVar7;
  *(undefined8 *)((long)puVar2 + 0x54) = uVar6;
  *(undefined8 *)((long)puVar2 + 0x4c) = uVar5;
  *(undefined8 *)((long)puVar2 + 0x44) = uVar4;
  *(undefined8 *)((long)puVar2 + 0x3c) = uVar3;
  uVar5 = *(undefined8 *)(param_1 + 0x84);
  uVar4 = *(undefined8 *)(param_1 + 0x7c);
  uVar7 = *(undefined8 *)(param_1 + 0x94);
  uVar6 = *(undefined8 *)(param_1 + 0x8c);
  uVar3 = *(undefined8 *)(param_1 + 0x9b);
  uVar8 = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)((long)puVar2 + 0x74) = *(undefined8 *)(param_1 + 0x74);
  *(undefined8 *)((long)puVar2 + 0x6c) = uVar8;
  *(undefined8 *)((long)puVar2 + 0x9b) = uVar3;
  *(undefined8 *)((long)puVar2 + 0x94) = uVar7;
  *(undefined8 *)((long)puVar2 + 0x8c) = uVar6;
  *(undefined8 *)((long)puVar2 + 0x84) = uVar5;
  *(undefined8 *)((long)puVar2 + 0x7c) = uVar4;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100498144(void)

{
  return;
}




void FUN_10049814c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014976e8;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004981b4(void)

{
  return;
}




void FUN_1004981bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101497720;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_100498224(void)

{
  return;
}




void FUN_10049822c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497758;
  uVar1 = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)(puVar2 + 4) = uVar1;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_10049829c(void)

{
  return;
}




void FUN_1004982a4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014977c8;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100498304(void)

{
  return;
}




void FUN_10049830c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497800;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_10049836c(void)

{
  return;
}




void FUN_100498374(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497838;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004983e0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497870;
  uVar1 = *(undefined1 *)(param_1 + 0x2c);
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  *(undefined1 *)((long)puVar2 + 0x2c) = uVar1;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100498454(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_1014978a8;
  uVar3 = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x21) = uVar3;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004984c4(void)

{
  return;
}




void FUN_1004984cc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0xc0,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_1014978e0;
  uVar3 = *(undefined8 *)(param_1 + 0x34);
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  uVar4 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar4;
  *(undefined8 *)((long)puVar1 + 0x34) = uVar3;
  *(undefined8 *)((long)puVar1 + 0x2c) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x54);
  uVar2 = *(undefined8 *)(param_1 + 0x4c);
  uVar5 = *(undefined8 *)(param_1 + 100);
  uVar4 = *(undefined8 *)(param_1 + 0x5c);
  uVar7 = *(undefined8 *)(param_1 + 0x74);
  uVar6 = *(undefined8 *)(param_1 + 0x6c);
  uVar8 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((long)puVar1 + 0x44) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)((long)puVar1 + 0x3c) = uVar8;
  *(undefined8 *)((long)puVar1 + 0x74) = uVar7;
  *(undefined8 *)((long)puVar1 + 0x6c) = uVar6;
  *(undefined8 *)((long)puVar1 + 100) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x5c) = uVar4;
  *(undefined8 *)((long)puVar1 + 0x54) = uVar3;
  *(undefined8 *)((long)puVar1 + 0x4c) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x94);
  uVar2 = *(undefined8 *)(param_1 + 0x8c);
  uVar5 = *(undefined8 *)(param_1 + 0xa4);
  uVar4 = *(undefined8 *)(param_1 + 0x9c);
  uVar7 = *(undefined8 *)(param_1 + 0xb4);
  uVar6 = *(undefined8 *)(param_1 + 0xac);
  uVar8 = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)((long)puVar1 + 0x84) = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)((long)puVar1 + 0x7c) = uVar8;
  *(undefined8 *)((long)puVar1 + 0xb4) = uVar7;
  *(undefined8 *)((long)puVar1 + 0xac) = uVar6;
  *(undefined8 *)((long)puVar1 + 0xa4) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x9c) = uVar4;
  *(undefined8 *)((long)puVar1 + 0x94) = uVar3;
  *(undefined8 *)((long)puVar1 + 0x8c) = uVar2;
  FUN_1003456d8(param_2,puVar1);
  return;
}




void FUN_10049857c(void)

{
  return;
}




void FUN_100498584(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x30,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497918;
  uVar1 = *(undefined1 *)(param_1 + 0x2c);
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  *(undefined1 *)((long)puVar2 + 0x2c) = uVar1;
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_1004985f8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100345764(param_2,0x28,8);
  *puVar2 = &PTR_FUN_101448cf0;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *puVar2 = &PTR_FUN_101497950;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar2);
  return;
}




void FUN_100498660(void)

{
  return;
}




void FUN_100498668(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100345764(param_2,0x20,8);
  *puVar1 = &PTR_FUN_101448cf0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_101497988;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_1003456d8(param_2,puVar1);
  return;
}




undefined8 * FUN_1004986d0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498720(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498764(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_1004987b4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1004987f8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498848(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_10049888c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_1004988dc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498920(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498970(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1004989b4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498a04(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498a48(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498a98(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498adc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498b2c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498b70(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498bc0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498c04(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498c54(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498c98(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498ce8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498d2c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498d7c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498dc0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498e10(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498e54(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498ea4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498ee8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498f38(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_100498f7c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  return param_1;
}




void FUN_100498fcc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014979c0;
  lVar1 = param_1[2];
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    FUN_1000141e0();
  }
  operator_delete(param_1);
  return;
}




void FUN_100499010(void)

{
  return;
}




void FUN_100499018(void)

{
  return;
}




void FUN_100499020(void)

{
  return;
}




void FUN_100499028(void)

{
  return;
}




void FUN_100499030(void)

{
  return;
}




void FUN_100499038(void)

{
  return;
}




void FUN_100499040(void)

{
  return;
}




void FUN_100499048(void)

{
  return;
}




void FUN_100499050(void)

{
  return;
}




void FUN_100499058(void)

{
  return;
}




void FUN_100499060(void)

{
  return;
}




void FUN_100499068(void)

{
  return;
}




void FUN_100499070(void)

{
  return;
}




void FUN_100499078(void)

{
  return;
}




void FUN_100499080(void)

{
  return;
}




void FUN_100499088(void)

{
  return;
}




void FUN_100499090(void)

{
  return;
}




void FUN_100499098(void)

{
  return;
}




void FUN_1004990a0(void)

{
  return;
}




void FUN_1004990a8(void)

{
  return;
}




void FUN_1004990b0(void)

{
  return;
}




void FUN_1004990b8(void)

{
  return;
}




void FUN_1004990c0(void)

{
  return;
}




void FUN_1004990c8(void)

{
  return;
}




void FUN_1004990d0(void)

{
  return;
}




void FUN_1004990d8(void)

{
  return;
}




void FUN_1004990e0(void)

{
  return;
}




void FUN_1004990e8(void)

{
  return;
}




void FUN_1004990f0(void)

{
  return;
}




void FUN_1004990f8(void)

{
  return;
}




void FUN_100499100(void)

{
  return;
}




void FUN_100499108(void)

{
  return;
}




void FUN_100499110(void)

{
  return;
}




void FUN_100499118(void)

{
  return;
}




void FUN_100499120(void)

{
  return;
}




void FUN_100499128(void)

{
  return;
}




void FUN_100499130(void)

{
  return;
}




void FUN_100499138(void)

{
  return;
}




void FUN_100499140(void)

{
  return;
}




void FUN_100499148(void)

{
  return;
}




void FUN_100499150(void)

{
  return;
}




void FUN_100499158(void)

{
  return;
}




void FUN_100499160(void)

{
  return;
}




void FUN_100499168(void)

{
  return;
}




void FUN_100499170(void)

{
  return;
}




void FUN_100499178(void)

{
  return;
}




void FUN_100499180(void)

{
  return;
}




void FUN_100499188(void)

{
  return;
}




void FUN_100499190(void)

{
  return;
}




void FUN_100499198(void)

{
  return;
}




void FUN_1004991a0(void)

{
  return;
}




void FUN_1004991a8(void)

{
  return;
}




void FUN_1004991b0(void)

{
  return;
}




void FUN_1004991b8(void)

{
  return;
}




void FUN_1004991c0(void)

{
  return;
}




void FUN_1004991c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bb0;
  return;
}




void FUN_1004991dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004991f0(void)

{
  return;
}




void FUN_1004991f4(void)

{
  return;
}




void FUN_1004991f8(void)

{
  return;
}




void FUN_1004991fc(void)

{
  return;
}




void FUN_100499200(void)

{
  return;
}




void FUN_100499204(void)

{
  return;
}




void FUN_100499208(void)

{
  return;
}




void FUN_10049920c(void)

{
  return;
}




void FUN_100499210(void)

{
  return;
}




void FUN_100499214(void)

{
  return;
}




void FUN_100499218(void)

{
  return;
}




void FUN_10049921c(void)

{
  return;
}




void FUN_100499220(void)

{
  return;
}




void FUN_100499224(void)

{
  return;
}




void FUN_100499228(void)

{
  return;
}




void FUN_10049922c(void)

{
  return;
}




void FUN_100499230(void)

{
  return;
}




void FUN_100499234(void)

{
  return;
}




void FUN_100499238(void)

{
  return;
}




void FUN_10049923c(void)

{
  return;
}




void FUN_100499240(void)

{
  return;
}




void FUN_100499244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499258(void)

{
  return;
}




void FUN_10049925c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499298(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004992ac(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004992bc(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_1004992c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004992d8(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004992e8(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_1004992f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499304(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499314(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_10049931c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499330(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499340(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_100499348(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_10049935c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004993ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004993c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004993d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004993e8(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004993f8(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_100499400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499428(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_10049943c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499450(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499478(long param_1)

{
  *(undefined ***)(param_1 + -0x28) = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499488(long param_1)

{
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_100499490(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004994a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004994b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004994cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004994e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_1004994f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499508(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_10049951c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499544(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499558(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_10049956c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499594(void)

{
  return;
}




void FUN_10049959c(void)

{
  return;
}




void FUN_1004995a4(void)

{
  return;
}




void FUN_1004995b0(void)

{
  return;
}




long FUN_1004995b8(long param_1)

{
  return param_1 + -0x28;
}




long FUN_1004995c0(long param_1)

{
  return param_1 + -0x28;
}




long FUN_1004995c8(long param_1)

{
  return param_1 + -0x28;
}




long FUN_1004995d0(long param_1)

{
  return param_1 + -0x28;
}




void FUN_1004995d8(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100499600(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049962c(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100499650(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_100499678(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100499680(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100499688(long param_1)

{
  FUN_1010a1da8(param_1 + -0x10);
  FUN_1010a0064(param_1 + -0x38);
  return;
}




void FUN_1004996b0(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + -0x10);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x38);
  operator_delete(pvVar1);
  return;
}




long FUN_1004996dc(long param_1)

{
  return param_1 + -0x28;
}




long FUN_1004996e4(long param_1)

{
  return param_1 + -0x28;
}




long FUN_1004996ec(long param_1)

{
  return param_1 + -0x28;
}




long FUN_1004996f4(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_1004996fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a4f0;
  thunk_FUN_100550ef4(param_1 + 1);
  return param_1;
}




void FUN_10049972c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a4f0;
  thunk_FUN_100550ef4(param_1 + 1);
  operator_delete(param_1);
  return;
}




undefined1  [16] FUN_10049975c(void)

{
  return ZEXT816(0xbf800000);
}




void FUN_100499764(void)

{
  return;
}




void FUN_10049976c(void)

{
  return;
}




undefined8 FUN_100499774(void)

{
  return 0;
}




void FUN_10049977c(void)

{
  return;
}




long FUN_100499784(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049978c(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100499794(void)

{
  return;
}




void FUN_10049979c(void)

{
  return;
}




void FUN_1004997a4(void)

{
  return;
}




void FUN_1004997ac(void)

{
  return;
}




void FUN_1004997b4(void)

{
  return;
}




void FUN_1004997bc(void)

{
  return;
}




void FUN_1004997c4(void)

{
  return;
}




void FUN_1004997cc(void)

{
  return;
}




void FUN_1004997d4(void)

{
  return;
}




void FUN_1004997dc(void)

{
  return;
}




void FUN_1004997e4(void)

{
  return;
}




void FUN_1004997e8(void)

{
  return;
}




void FUN_1004997ec(void)

{
  return;
}




void FUN_1004997f0(void)

{
  return;
}




void FUN_1004997f4(void)

{
  return;
}




void thunk_FUN_10049a994(void)

{
  FUN_10049a994();
  return;
}




void FUN_1004997fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10049a994();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10049a994(void)

{
  FUN_10049a994();
  return;
}




void FUN_100499814(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10049a994();
  operator_delete(pvVar1);
  return;
}




void FUN_100499828(void)

{
  return;
}




void thunk_FUN_10049a994(void)

{
  FUN_10049a994();
  return;
}




void FUN_100499830(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10049a994();
  operator_delete(pvVar1);
  return;
}




void FUN_100499844(void)

{
  return;
}




void thunk_FUN_10049a994(void)

{
  FUN_10049a994();
  return;
}




void FUN_10049984c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10049a994();
  operator_delete(pvVar1);
  return;
}




void FUN_100499860(void)

{
  return;
}




void FUN_100499868(void)

{
  return;
}




void FUN_100499870(void)

{
  return;
}




void FUN_100499878(void)

{
  return;
}




void FUN_100499880(void)

{
  return;
}




void FUN_100499888(void)

{
  return;
}




void FUN_100499890(void)

{
  return;
}




void FUN_100499898(void)

{
  return;
}




void FUN_1004998a0(void)

{
  return;
}




void FUN_1004998a8(void)

{
  return;
}




void FUN_1004998b0(void)

{
  return;
}




void FUN_1004998b8(void)

{
  return;
}




void FUN_1004998c0(void)

{
  return;
}




void FUN_1004998c8(void)

{
  return;
}




void FUN_1004998d0(void)

{
  return;
}




void FUN_1004998d8(void)

{
  return;
}




void FUN_1004998e0(void)

{
  return;
}




void FUN_1004998e8(void)

{
  return;
}




void FUN_1004998f0(void)

{
  return;
}




void FUN_1004998f8(void)

{
  return;
}




void FUN_100499900(void)

{
  return;
}




void FUN_100499908(void)

{
  return;
}




void FUN_100499910(void)

{
  return;
}




void FUN_100499918(void)

{
  return;
}




void FUN_100499920(void)

{
  return;
}




void FUN_100499928(void)

{
  return;
}




void FUN_100499930(void)

{
  return;
}




void FUN_100499938(void)

{
  return;
}




void FUN_100499940(void)

{
  return;
}




void FUN_100499948(void)

{
  return;
}




void FUN_100499950(void)

{
  return;
}




void FUN_100499958(void)

{
  return;
}




void FUN_100499960(void)

{
  return;
}




void FUN_100499968(void)

{
  return;
}




void FUN_100499970(void)

{
  return;
}




void FUN_100499978(void)

{
  return;
}




void FUN_100499980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101498bf0;
  return;
}




void FUN_100499994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499ab0;
  param_1[5] = &PTR_FUN_101499ae0;
  FUN_1004a0740(param_1 + 0x4f);
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_1004999dc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101499ab0;
  param_1[5] = &PTR_FUN_101499ae0;
  FUN_1004a0740(param_1 + 0x4f);
  FUN_1010a1da8(param_1 + 5);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100499a28(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_101499ab0;
  *param_1 = &PTR_FUN_101499ae0;
  FUN_1004a0740(param_1 + 0x4a);
  FUN_1010a1da8(param_1);
  FUN_1010a0064(param_1 + -5);
  return;
}




void FUN_100499a70(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-5] = &PTR_FUN_101499ab0;
  *param_1 = &PTR_FUN_101499ae0;
  FUN_1004a0740(param_1 + 0x4a);
  FUN_1010a1da8(param_1);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -5);
  operator_delete(pvVar1);
  return;
}




long FUN_100499abc(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100499ac4(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100499acc(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100499af4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100499b20(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100499b44(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_100499b6c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100499b74(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100499b7c(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100499ba4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100499bd0(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100499bf4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_100499c1c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100499c24(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100499c2c(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100499c54(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100499c80(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100499ca4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_100499ccc(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100499cd4(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100499ce0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100499cf4(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100499d1c(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100499d48(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100499d6c(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_100499d94(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100499d9c(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100499da8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100499dbc(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100499de4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100499e10(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100499e34(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_100499e5c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100499e64(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100499e70(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100499e88(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100499e9c(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_100499ec4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100499ef0(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_100499f14(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_100499f3c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_100499f44(long param_1)

{
  return param_1 + -0x28;
}




void FUN_100499f50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_100499f64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a1c0;
  if ((void *)param_1[0x43] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43]);
    param_1[0x43] = 0;
    param_1[0x42] = 0;
  }
  FUN_1010a0064(param_1);
  return;
}




void FUN_100499fa4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149a1c0;
  if ((void *)param_1[0x43] != (void *)0x0) {
    operator_delete__((void *)param_1[0x43]);
    param_1[0x43] = 0;
    param_1[0x42] = 0;
  }
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100499fec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10049a000(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049a028(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049a054(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_10049a078(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_10049a0a0(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049a0a8(long param_1)

{
  return param_1 + -0x28;
}




void FUN_10049a0b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a2b0;
  FUN_1004720c4(param_1 + 5,1);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049a0e4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149a2b0;
  FUN_1004720c4(param_1 + 5,1);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049a11c(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049a144(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049a170(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_10049a194(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_10049a1bc(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049a1c4(long param_1)

{
  return param_1 + -0x28;
}




void FUN_10049a1cc(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049a1f4(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049a220(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_10049a244(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_10049a26c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049a274(long param_1)

{
  return param_1 + -0x28;
}




void FUN_10049a27c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a3a0;
  if ((void *)param_1[0x40] != (void *)0x0) {
    operator_delete__((void *)param_1[0x40]);
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
  }
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049a2b8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149a3a0;
  if ((void *)param_1[0x40] != (void *)0x0) {
    operator_delete__((void *)param_1[0x40]);
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
  }
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049a2f8(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049a320(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049a34c(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_10049a370(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_10049a398(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049a3a0(long param_1)

{
  return param_1 + -0x28;
}




void FUN_10049a3ac(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10049a3c0(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049a3e8(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049a414(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_10049a438(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_10049a460(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049a468(long param_1)

{
  return param_1 + -0x28;
}




void FUN_10049a474(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10049a488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a5f0;
  param_1[5] = &PTR_FUN_10149a620;
  FUN_1004a07c8(param_1 + 0x20);
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049a4d0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149a5f0;
  param_1[5] = &PTR_FUN_10149a620;
  FUN_1004a07c8(param_1 + 0x20);
  FUN_1010a1da8(param_1 + 5);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049a51c(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_10149a5f0;
  *param_1 = &PTR_FUN_10149a620;
  FUN_1004a07c8(param_1 + 0x1b);
  FUN_1010a1da8(param_1);
  FUN_1010a0064(param_1 + -5);
  return;
}




void FUN_10049a560(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-5] = &PTR_FUN_10149a5f0;
  *param_1 = &PTR_FUN_10149a620;
  FUN_1004a07c8(param_1 + 0x1b);
  FUN_1010a1da8(param_1);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -5);
  operator_delete(pvVar1);
  return;
}




long FUN_10049a5a8(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049a5b0(long param_1)

{
  return param_1 + -0x28;
}




void FUN_10049a5b8(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




ulong FUN_10049a5c4(uint6 *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = 0x9e3779b97f4a7c13;
  uVar3 = param_2;
  uVar2 = param_3;
  if (((ulong)param_1 & 7) == 0) {
    for (; 0x17 < uVar3; uVar3 = uVar3 - 0x18) {
      uVar4 = *(long *)(param_1 + 2) + uVar4;
      uVar5 = (*(long *)param_1 + param_3) - (*(long *)(param_1 + 1) + uVar2 + uVar4) ^
              uVar4 >> 0x2b;
      uVar6 = (*(long *)(param_1 + 1) + uVar2) - (uVar4 + uVar5) ^ uVar5 << 9;
      uVar2 = uVar4 - (uVar5 + uVar6) ^ uVar6 >> 8;
      uVar4 = uVar5 - (uVar6 + uVar2) ^ uVar2 >> 0x26;
      uVar5 = uVar6 - (uVar2 + uVar4) ^ uVar4 << 0x17;
      uVar2 = uVar2 - (uVar4 + uVar5) ^ uVar5 >> 5;
      uVar4 = uVar4 - (uVar5 + uVar2) ^ uVar2 >> 0x23;
      uVar6 = uVar5 - (uVar2 + uVar4) ^ uVar4 << 0x31;
      uVar5 = uVar2 - (uVar4 + uVar6) ^ uVar6 >> 0xb;
      param_3 = uVar4 - (uVar6 + uVar5) ^ uVar5 >> 0xc;
      uVar2 = uVar6 - (uVar5 + param_3) ^ param_3 << 0x12;
      uVar4 = uVar5 - (param_3 + uVar2) ^ uVar2 >> 0x16;
      param_1 = param_1 + 3;
    }
  }
  else {
    for (; 0x17 < uVar3; uVar3 = uVar3 - 0x18) {
      lVar1 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xe) << 0x30) + (ulong)param_1[1] +
              ((ulong)*(byte *)((long)param_1 + 0xf) << 0x38);
      uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x16) << 0x30) + (ulong)param_1[2] +
              ((ulong)*(byte *)((long)param_1 + 0x17) << 0x38);
      uVar2 = (param_3 + ((ulong)*(byte *)((long)param_1 + 6) << 0x30) + (ulong)*param_1 +
              ((ulong)*(byte *)((long)param_1 + 7) << 0x38)) - (lVar1 + uVar4) ^ uVar4 >> 0x2b;
      uVar6 = lVar1 - (uVar4 + uVar2) ^ uVar2 << 9;
      uVar5 = uVar4 - (uVar2 + uVar6) ^ uVar6 >> 8;
      uVar4 = uVar2 - (uVar6 + uVar5) ^ uVar5 >> 0x26;
      uVar6 = uVar6 - (uVar5 + uVar4) ^ uVar4 << 0x17;
      uVar2 = uVar5 - (uVar4 + uVar6) ^ uVar6 >> 5;
      uVar4 = uVar4 - (uVar6 + uVar2) ^ uVar2 >> 0x23;
      uVar6 = uVar6 - (uVar2 + uVar4) ^ uVar4 << 0x31;
      uVar5 = uVar2 - (uVar4 + uVar6) ^ uVar6 >> 0xb;
      param_3 = uVar4 - (uVar6 + uVar5) ^ uVar5 >> 0xc;
      uVar2 = uVar6 - (uVar5 + param_3) ^ param_3 << 0x12;
      uVar4 = uVar5 - (param_3 + uVar2) ^ uVar2 >> 0x16;
      param_1 = param_1 + 3;
    }
  }
  uVar4 = uVar4 + param_2;
  switch(uVar3) {
  case 0x17:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x16) << 0x38);
  case 0x16:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x15) << 0x30);
  case 0x15:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x14) << 0x28);
  case 0x14:
    uVar4 = uVar4 + ((ulong)*(byte *)((long)param_1 + 0x13) << 0x20);
  case 0x13:
    uVar4 = uVar4 + (ulong)*(byte *)((long)param_1 + 0x12) * 0x1000000;
  case 0x12:
    uVar4 = uVar4 + (ulong)*(byte *)((long)param_1 + 0x11) * 0x10000;
  case 0x11:
    uVar4 = uVar4 + (ulong)(byte)param_1[2] * 0x100;
  case 0x10:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xf) << 0x38);
  case 0xf:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xe) << 0x30);
  case 0xe:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xd) << 0x28);
  case 0xd:
    uVar2 = uVar2 + ((ulong)*(byte *)((long)param_1 + 0xc) << 0x20);
  case 0xc:
    uVar2 = uVar2 + (ulong)*(byte *)((long)param_1 + 0xb) * 0x1000000;
  case 0xb:
    uVar2 = uVar2 + (ulong)*(byte *)((long)param_1 + 10) * 0x10000;
  case 10:
    uVar2 = uVar2 + (ulong)*(byte *)((long)param_1 + 9) * 0x100;
  case 9:
    uVar2 = uVar2 + (byte)param_1[1];
  case 8:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 7) << 0x38);
  case 7:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 6) << 0x30);
  case 6:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 5) << 0x28);
  case 5:
    param_3 = param_3 + ((ulong)*(byte *)((long)param_1 + 4) << 0x20);
  case 4:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 3) * 0x1000000;
  case 3:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 2) * 0x10000;
  case 2:
    param_3 = param_3 + (ulong)*(byte *)((long)param_1 + 1) * 0x100;
  case 1:
    param_3 = param_3 + (byte)*param_1;
  default:
    uVar3 = param_3 - (uVar2 + uVar4) ^ uVar4 >> 0x2b;
    uVar5 = uVar2 - (uVar4 + uVar3) ^ uVar3 << 9;
    uVar2 = uVar4 - (uVar3 + uVar5) ^ uVar5 >> 8;
    uVar4 = uVar3 - (uVar5 + uVar2) ^ uVar2 >> 0x26;
    uVar3 = uVar5 - (uVar2 + uVar4) ^ uVar4 << 0x17;
    uVar2 = uVar2 - (uVar4 + uVar3) ^ uVar3 >> 5;
    uVar4 = uVar4 - (uVar3 + uVar2) ^ uVar2 >> 0x23;
    uVar3 = uVar3 - (uVar2 + uVar4) ^ uVar4 << 0x31;
    uVar2 = uVar2 - (uVar4 + uVar3) ^ uVar3 >> 0xb;
    uVar4 = uVar4 - (uVar3 + uVar2) ^ uVar2 >> 0xc;
    uVar3 = uVar3 - (uVar2 + uVar4) ^ uVar4 << 0x12;
    return uVar2 - (uVar4 + uVar3) ^ uVar3 >> 0x16;
  }
}




void FUN_10049a94c(void *param_1)

{
  DAT_10184e190 = 0;
  operator_delete(param_1);
  return;
}




void FUN_10049a958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149d648;
  DAT_10184e190 = 0;
  return;
}




void FUN_10049a970(void *param_1)

{
  DAT_10184e190 = 0;
  operator_delete(param_1);
  return;
}




void thunk_FUN_10049a994(void)

{
  FUN_10049a994();
  return;
}




void FUN_10049a980(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10049a994();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_10049a994(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_10149d668;
  plVar2 = param_1 + 5;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_10049a9fc(plVar2,lVar1 + -0x20);
    FUN_10033d9f4(lVar1 + -0x20);
    lVar1 = *plVar2;
  }
  FUN_10033f0b4(param_1 + 2);
  return param_1;
}




void FUN_10049a9fc(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 0x20);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10049aa58(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 ***pppuVar4;
  undefined8 **local_68;
  ulong local_60;
  undefined4 local_58;
  
  local_68 = (undefined8 ***)0x0;
  bVar3 = *(byte *)((long)param_3 + 0x17);
  puVar2 = (undefined8 *)*param_3;
  uVar1 = param_3[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if ((uint)uVar1 < 0x10) {
    pppuVar4 = &local_68;
    local_58 = 0x700005;
    local_60 = (ulong)(byte)(0xf - (char)uVar1) << 0x38;
  }
  else {
    local_58 = 0x300005;
    local_60 = uVar1 & 0xffffffff;
    pppuVar4 = (undefined8 ***)FUN_1000f9128(param_4,(uint)uVar1 + 1);
    local_68 = pppuVar4;
  }
  if (-1 < (char)bVar3) {
    puVar2 = param_3;
  }
  _memcpy(pppuVar4,puVar2,uVar1 & 0xffffffff);
  *(undefined1 *)((long)pppuVar4 + (uVar1 & 0xffffffff)) = 0;
  FUN_10032b704(param_1,param_2,&local_68,param_4);
  return;
}




undefined8 * FUN_10049ab34(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x48 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x48;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d6c0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049ab9c(void)

{
  return;
}




bool FUN_10049aba4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  while( true ) {
    if (lVar2 == 0) {
      return false;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dd68) break;
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  uVar1 = FUN_10048c910(lVar2,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  return *(byte *)(param_1 + 0x14) != uVar1;
}




undefined8 * FUN_10049ac04(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x48 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x48;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d3c8;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




undefined8 * FUN_10049ac6c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x48 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x48;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d6e8;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049acd0(void)

{
  return;
}




void FUN_10049acd8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010049ace0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2);
  return;
}




void FUN_10049ace4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0xe;
  return;
}




undefined8 * FUN_10049acf0(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x48 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x48;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d710;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049ad54(void)

{
  return;
}




undefined8 FUN_10049ad5c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dd68) break;
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  uVar1 = FUN_10048c6cc(lVar2,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
  return uVar1;
}




undefined8 * FUN_10049ad9c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x48 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x48;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d738;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049ae00(void)

{
  return;
}




void FUN_10049ae08(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_10048c15c(param_2);
  if (lVar1 != 0) {
    FUN_10048c6cc(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_10049ae44(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x15;
  return;
}




undefined8 * FUN_10049ae50(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x48 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x48;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d418;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049aebc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x58;
  return;
}




undefined8 * FUN_10049aec8(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x48 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x48;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d760;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049af30(void)

{
  return;
}




bool FUN_10049af38(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = FUN_10048c15c(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    uVar2 = FUN_10048c910(lVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = *(byte *)(param_1 + 0x14) != uVar2;
  }
  return bVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049af78(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_1003bfdfc(0x40b00000,param_1,auStack_30,auStack_40);
  local_50 = 0x412000003e800000;
  local_48 = 0x3e800000;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
      bVar1 = 0;
LAB_10049b00c:
      FUN_10054e044(bVar1,auStack_30,0,&local_50);
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_10049b00c;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_10049b02c(void)

{
  FUN_1003bfdfc(0x40b00000);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b034(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_1003bfdfc(0x41080000,param_1,auStack_30,auStack_40);
  local_50 = 0x412000003e800000;
  local_48 = 0x3e800000;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
      bVar1 = 0;
LAB_10049b0c8:
      FUN_10054e044(bVar1,auStack_30,0,&local_50);
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_10049b0c8;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_10049b0e8(void)

{
  FUN_1003bfdfc(0x41080000);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b0f0(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_1003bfdfc(0x41380000,param_1,auStack_30,auStack_40);
  local_50 = 0x412000003e800000;
  local_48 = 0x3e800000;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
      bVar1 = 0;
LAB_10049b184:
      FUN_10054e044(bVar1,auStack_30,0,&local_50);
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_10049b184;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_10049b1a4(void)

{
  FUN_1003bfdfc(0x41380000);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b1ac(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_1003bfdfc(0x41680000,param_1,auStack_30,auStack_40);
  local_50 = 0x412000003e800000;
  local_48 = 0x3e800000;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
      bVar1 = 0;
LAB_10049b240:
      FUN_10054e044(bVar1,auStack_30,0,&local_50);
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_10049b240;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_10049b260(void)

{
  FUN_1003bfdfc(0x41680000);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b268(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_1003bfdfc(0x418c0000,param_1,auStack_30,auStack_40);
  local_50 = 0x412000003e800000;
  local_48 = 0x3e800000;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
      bVar1 = 0;
LAB_10049b300:
      FUN_10054e044(bVar1,auStack_30,0,&local_50);
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_10049b300;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_10049b320(void)

{
  FUN_1003bfdfc(0x418c0000);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b32c(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_1003bfdfc(0x41a40000,param_1,auStack_30,auStack_40);
  local_50 = 0x412000003e800000;
  local_48 = 0x3e800000;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
      bVar1 = 0;
LAB_10049b3c4:
      FUN_10054e044(bVar1,auStack_30,0,&local_50);
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_10049b3c4;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_10049b3e4(void)

{
  FUN_1003bfdfc(0x41a40000);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10049b3f0(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_1003bfdfc(0x41bc0000,param_1,auStack_30,auStack_40);
  local_50 = 0x412000003e800000;
  local_48 = 0x3e800000;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
      bVar1 = 0;
LAB_10049b488:
      FUN_10054e044(bVar1,auStack_30,0,&local_50);
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar2 + 0x818) >> 3 & 3;
      goto LAB_10049b488;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_10049b4a8(void)

{
  FUN_1003bfdfc(0x41bc0000);
  return;
}




undefined8 * FUN_10049b4b4(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    plVar4 = (long *)(param_1 + lVar5 * 0x48 + 8);
    if (*plVar4 == 0) {
      param_1 = param_1 + lVar5 * 0x48;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d788;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = 1;
      *(code **)(param_1 + 0x40) = FUN_10048c2b8;
      *(undefined4 *)(param_1 + 0x48) = 4;
      *plVar4 = (long)puVar2;
      return puVar2;
    }
    lVar5 = 1;
    bVar1 = false;
  } while (bVar3);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049b544(void)

{
  return;
}




uint FUN_10049b54c(long param_1,undefined8 param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  FUN_10049b62c(param_1 + 0x20,param_2,0,&local_48);
  FUN_10049b62c(param_1 + 0x30,param_2,0,&local_50);
  fVar2 = (float)FUN_1000bada4(param_1 + 8,param_2,0);
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < 4) {
    fVar3 = SQRT((local_48 - local_50) * (local_48 - local_50) +
                 (fStack_44 - fStack_4c) * (fStack_44 - fStack_4c));
    switch(uVar1) {
    case 0:
      uVar1 = (uint)(fVar2 < fVar3);
      break;
    case 1:
      uVar1 = (uint)(fVar2 <= fVar3);
      break;
    case 2:
      uVar1 = (uint)(fVar3 < fVar2);
      break;
    case 3:
      uVar1 = (uint)(fVar3 <= fVar2);
    }
  }
  return uVar1 & 1;
}




void FUN_10049b62c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  
  switch(*(undefined4 *)(param_1 + 1)) {
  case 1:
    do {
      param_2 = *(long *)(param_2 + 0x10);
    } while (*(int *)(*(long *)(param_2 + 8) + 0xa4) != DAT_10184dd68);
    uVar2 = *(undefined4 *)(param_2 + 0x250);
    uVar3 = *(undefined4 *)(param_2 + 600);
    break;
  case 2:
    local_28[0] = *(undefined4 *)param_1;
    FUN_1003c6528(param_2,local_28,param_4);
    return;
  case 3:
    local_30[0] = *(undefined4 *)param_1;
    lVar1 = FUN_100491404(local_30);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = *(undefined4 *)(lVar1 + 0x10);
    uVar3 = *(undefined4 *)(lVar1 + 0x18);
    break;
  case 4:
    *param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010049b704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_2,param_4);
    return;
  default:
    goto switchD_10049b668_default;
  }
  *(undefined4 *)param_4 = uVar2;
  *(undefined4 *)((long)param_4 + 4) = uVar3;
switchD_10049b668_default:
  return;
}




undefined8 FUN_10049b708(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x1e8);
  uVar2 = (ulong)bVar1;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    piVar3 = (int *)(param_1 + 8);
    uVar4 = uVar2;
    do {
      if (*piVar3 == (int)param_2) {
        return param_2;
      }
      piVar3 = piVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(int *)(param_1 + uVar2 * 4 + 8) = (int)param_2;
  *(byte *)(param_1 + 0x1e8) = bVar1 + 1;
  return param_2;
}




long FUN_10049b754(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x1e8);
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x68;
    piVar2 = (int *)(param_1 + 8);
    do {
      if (*piVar2 == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x10;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




long FUN_10049b78c(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x1e8);
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x68;
    piVar2 = (int *)(param_1 + 8);
    do {
      if (*piVar2 == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x10;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




void FUN_10049b7c4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001bac4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049b814(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017ae4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049b864(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017bb0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049b8b4(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != iVar1) {
    lVar2 = FUN_100345d90(iVar1);
  }
  uVar3 = FUN_1003dfe60(lVar2,2,4,0x19,0);
  *param_2 = uVar3;
  *param_3 = uVar3;
  return;
}




void FUN_10049b914(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000175b4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049b964(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017fa8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049b9b4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100016d84();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049ba04(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b298();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049ba54(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018fcc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049baa4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019ed8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049baf4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018f04();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049bb44(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019d40();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_10049bb94(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d3f0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049bbfc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001ab24();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_10049bc4c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149ace0;
      *(undefined8 *)(param_1 + 0x18) = 0xffffffff00000000;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049bcbc(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(lVar1 + 0x260) != *(int *)(param_1 + 0x308)) {
    lVar1 = FUN_100345d90(*(int *)(param_1 + 0x308));
  }
  uVar2 = FUN_1003dfe60(lVar1,1,4,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_10049bd10(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100016f28();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049bd60(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001bf54();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049bdb0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b364();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049be00(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018a38();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049be50(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000170d0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049bea0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001933c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049bef0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b0fc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049bf40(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018968();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049bf90(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




void FUN_10049bf9c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018be4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049bfec(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b6e0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_10049c03c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d440;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049c0a8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001bce8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c0f8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100016ffc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c148(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001aa54();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_10049c198(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d7e0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049c1fc(void)

{
  return;
}




void FUN_10049c204(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010049c20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2);
  return;
}




void FUN_10049c210(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001ae90();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c260(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017e18();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c2b0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001abf4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_10049c300(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d808;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049c368(void)

{
  return;
}




bool FUN_10049c370(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  bVar1 = false;
  if (lVar3 != 0) {
    uVar2 = FUN_10048c910(lVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = *(byte *)(param_1 + 0x14) != uVar2;
  }
  return bVar1;
}




void FUN_10049c3b4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000183ac();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c404(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a078();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c454(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return;
}




void FUN_10049c460(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a3c4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c4b0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001acf8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c500(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017c78();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_10049c550(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = 0;
  bVar1 = true;
  do {
    bVar3 = bVar1;
    plVar4 = (long *)(param_1 + lVar5 * 0x38 + 8);
    if (*plVar4 == 0) {
      param_1 = param_1 + lVar5 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d830;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 7;
      *plVar4 = (long)puVar2;
      return puVar2;
    }
    lVar5 = 1;
    bVar1 = false;
  } while (bVar3);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049c5d8(void)

{
  return;
}




void FUN_10049c5e0(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  if ((~*(byte *)(param_1 + 0x2c) & 7) != 0) {
    iVar1 = *(int *)(*param_2 + 0x308);
    if (iVar1 != -1) {
      lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
      if (*(int *)(lVar3 + 0x260) != iVar1) {
        lVar3 = FUN_100345d90();
      }
      goto LAB_10049c640;
    }
  }
  lVar3 = 0;
LAB_10049c640:
  FUN_10049c698(param_1 + 8,param_2,lVar3,auStack_38);
  FUN_1000bbea4(param_1 + 0x18,param_2,0);
  bVar2 = *(byte *)(param_1 + 0x2c);
  FUN_10048c374(auStack_38,*(undefined4 *)(param_1 + 0x28),lVar3,bVar2 & 1,bVar2 >> 1 & 1,
                bVar2 >> 2 & 1);
  return;
}




void FUN_10049c698(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 local_68 [2];
  undefined4 local_60 [12];
  undefined4 local_30;
  undefined4 local_28;
  
  switch(*(undefined4 *)(param_1 + 1)) {
  case 1:
    lVar1 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
    local_30 = *(undefined4 *)(lVar1 + 0x250);
    local_28 = *(undefined4 *)(lVar1 + 600);
    break;
  case 2:
    local_68[0] = *(undefined4 *)param_1;
    FUN_1003ab468(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),local_68,local_60);
    break;
  case 3:
    local_60[0] = *(undefined4 *)param_1;
    lVar1 = FUN_100491404(local_60);
    if (lVar1 == 0) {
      return;
    }
    local_30 = *(undefined4 *)(lVar1 + 0x10);
    local_28 = *(undefined4 *)(lVar1 + 0x18);
    break;
  case 4:
    *param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010049c768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(param_2,param_4);
    return;
  default:
    goto switchD_10049c6d0_default;
  }
  *(undefined4 *)param_4 = local_30;
  *(undefined4 *)((long)param_4 + 4) = local_28;
switchD_10049c6d0_default:
  return;
}




undefined8 * FUN_10049c76c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d858;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049c7e0(void)

{
  return;
}




uint FUN_10049c7e8(long param_1,undefined8 param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_10048c198(param_2,*(undefined8 *)(param_1 + 0x20));
  fVar3 = (float)FUN_1000bbea4(param_1 + 8,param_2,0);
  uVar1 = *(uint *)(param_1 + 0x18);
  switch(uVar1) {
  case 0:
    uVar1 = (uint)(fVar3 < fVar2);
    break;
  case 1:
    uVar1 = (uint)(fVar3 <= fVar2);
    break;
  case 2:
    uVar1 = (uint)(fVar2 < fVar3);
    break;
  case 3:
    uVar1 = (uint)(fVar2 <= fVar3);
  }
  return uVar1 & 1;
}




void FUN_10049c888(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018144();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c8d8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




void FUN_10049c8e4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a2f0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c934(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018074();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c984(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019794();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049c9d4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017954();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049ca24(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100016e54();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049ca74(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019238();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049cac4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019438();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049cb14(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001c028();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049cb64(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001adc4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049cbb4(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != iVar1) {
    lVar2 = FUN_100345d90(iVar1);
  }
  uVar3 = FUN_1003dfe60(lVar2,2,8,0x19,0);
  *param_2 = uVar3;
  *param_3 = 0xbf800000;
  return;
}




undefined8 * FUN_10049cc18(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d880;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x1c) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049cc84(void)

{
  return;
}




bool FUN_10049cc8c(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  bVar1 = false;
  if (lVar3 != 0) {
    uVar2 = FUN_10048c74c(lVar3,param_1 + 8);
    bVar1 = *(byte *)(param_1 + 0xc) != uVar2;
  }
  return bVar1;
}




undefined8 * FUN_10049cccc(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d8a8;
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049cd40(void)

{
  return;
}




uint FUN_10049cd48(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_10048c258(param_2,*(undefined8 *)(param_1 + 0x20));
  uVar3 = FUN_10049cdac(param_1 + 8,param_2,0);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = uVar2 ^ uVar3 ^ 1;
  }
  uVar2 = uVar2 ^ uVar3;
  if (*(int *)(param_1 + 0x18) != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}




ulong FUN_10049cdac(char *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00010049cdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    lVar4 = *param_2;
    param_2 = *(long **)(*(long *)(lVar4 + 0x10) + 0x10);
    if ((int)param_2[0x4c] != *(int *)(lVar4 + 0x308)) {
      param_2 = (long *)FUN_100345d90();
    }
    goto LAB_10049ce40;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
LAB_10049ce40:
                    /* WARNING: Could not recover jumptable at 0x00010049ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00010049ce80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    lVar4 = *param_2;
    uVar3 = *(undefined8 *)param_1;
    uVar1 = FUN_1004d2524(uVar3);
    uVar3 = FUN_100015208(uVar3,uVar1,0x12345678);
    param_1 = (char *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x18))(lVar4 + 0x168,uVar3);
  case 1:
    uVar2 = (ulong)(*param_1 != '\0');
    break;
  default:
    FUN_1004d22dc(0);
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_10049cee4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b1cc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049cf34(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003df6c8(PTR_s__Item_VisionTotem__10185bae8,1,1);
  *param_2 = uVar1;
  return;
}




void FUN_10049cf68(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40866666;
  return;
}




undefined8 * FUN_10049cf78(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d8d0;
      *(undefined1 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049cfe0(void)

{
  return;
}




bool FUN_10049cfe8(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  if (lVar2 != 0) {
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f;
    if ((int)uVar3 == 0x1f) {
      bVar1 = true;
    }
    else {
      bVar1 = 1 < *(ushort *)(lVar2 + uVar3 * 0x38 + 0x90) - 3;
    }
    return (bool)*(char *)(param_1 + 8) != bVar1;
  }
  return false;
}




void FUN_10049d040(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019acc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d090(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a48c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d0e0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018898();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_10049d130(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d8f8;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049d1a4(void)

{
  return;
}




uint FUN_10049d1ac(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_10048c1f8(param_2,*(undefined8 *)(param_1 + 0x20));
  iVar2 = FUN_10048b224(param_1 + 8,param_2,0);
  uVar3 = *(uint *)(param_1 + 0x18);
  switch(uVar3) {
  case 0:
    uVar3 = (uint)(iVar2 < iVar1);
    break;
  case 1:
    uVar3 = (uint)(iVar2 <= iVar1);
    break;
  case 2:
    uVar3 = (uint)(iVar2 == iVar1);
    break;
  case 3:
    uVar3 = (uint)(iVar2 != iVar1);
    break;
  case 4:
    uVar3 = (uint)(iVar1 < iVar2);
    break;
  case 5:
    uVar3 = (uint)(iVar1 <= iVar2);
  }
  return uVar3 & 1;
}




void FUN_10049d264(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != iVar1) {
    lVar2 = FUN_100345d90(iVar1);
  }
  uVar3 = FUN_1003dfe60(lVar2,1,5,0x19,0);
  *param_2 = uVar3;
  *param_3 = uVar3;
  return;
}




void FUN_10049d2c4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001916c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d314(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a62c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d364(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001af5c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d3b4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a7cc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d404(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b430();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d454(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return;
}




void FUN_10049d460(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017a1c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d4b0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001bdb4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_10049d500(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d920;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049d574(void)

{
  return;
}




uint FUN_10049d57c(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar3 = (ulong)*(uint *)(param_1 + 0x1c);
      lVar1 = *(long *)(lVar1 + 0x40) + uVar3 * 4;
      fVar4 = *(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
      fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x1a0),(&DAT_101e94320)[uVar3]);
      fVar4 = (float)(&DAT_101e94260)[uVar3];
      if ((float)(&DAT_101e94260)[uVar3] <= fVar5) {
        fVar4 = fVar5;
      }
    }
    else {
      fVar4 = (float)FUN_1003e4a18();
    }
    fVar5 = (float)FUN_1000bbea4(param_1 + 8,param_2,0);
    uVar2 = *(uint *)(param_1 + 0x18);
    switch(uVar2) {
    case 0:
      uVar2 = (uint)(fVar5 < fVar4);
      break;
    case 1:
      uVar2 = (uint)(fVar5 <= fVar4);
      break;
    case 2:
      uVar2 = (uint)(fVar4 < fVar5);
      break;
    case 3:
      uVar2 = (uint)(fVar4 <= fVar5);
    }
  }
  return uVar2 & 1;
}




void FUN_10049d684(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar1 + 0x250);
  fVar4 = *(float *)(lVar1 + 0x254);
  uVar5 = *(undefined4 *)(lVar1 + 600);
  fVar6 = *(float *)(lVar1 + 0x2ec);
  *(long *)(param_2 + 8) = lVar1;
  uVar2 = 0x70;
  if (*(char *)(lVar1 + 0x264) != '\0') {
    uVar2 = 0x50;
  }
  *(undefined4 *)(param_2 + 0x48) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x424f5c28;
  *(ushort *)(param_2 + 0x58) = uVar2 | *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8000;
  return;
}




void FUN_10049d6f8(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar1 + 0x250);
  fVar4 = *(float *)(lVar1 + 0x254);
  uVar5 = *(undefined4 *)(lVar1 + 600);
  fVar6 = *(float *)(lVar1 + 0x2ec);
  *(long *)(param_2 + 8) = lVar1;
  uVar2 = 0x70;
  if (*(char *)(lVar1 + 0x264) != '\0') {
    uVar2 = 0x50;
  }
  *(undefined4 *)(param_2 + 0x48) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x43670a3d;
  *(ushort *)(param_2 + 0x58) = uVar2 | *(ushort *)(param_2 + 0x58) & 0xff8f | 0x8000;
  return;
}




void FUN_10049d76c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019b98();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d7bc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018d74();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d80c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fd9999a;
  return;
}




void FUN_10049d81c(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(lVar1 + 0x260) != *(int *)(param_1 + 0x308)) {
    lVar1 = FUN_100345d90(*(int *)(param_1 + 0x308));
  }
  uVar2 = FUN_1003dfe60(lVar1,2,4,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_10049d870(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10049d8cc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b60c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d91c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019098();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d96c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000195fc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049d9bc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001be88();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049da0c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return;
}




void FUN_10049da1c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b894();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049da6c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f8ccccd;
  return;
}




void FUN_10049da7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f666666;
  return;
}




void FUN_10049da8c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3e4ccccd;
  return;
}




void FUN_10049da9c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000182dc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049daec(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40266666;
  return;
}




void FUN_10049dafc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x4029999a;
  return;
}




void FUN_10049db0c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019e0c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049db5c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a8b8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049dbac(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f4ccccd;
  return;
}




undefined8 * FUN_10049dbbc(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d948;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049dc30(void)

{
  return;
}




uint FUN_10049dc38(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + (ulong)*(uint *)(param_1 + 0x1c) * 4 + 0x308);
    fVar5 = fVar4;
    if (*(char *)(param_1 + 0x20) != '\0') {
      fVar3 = (float)FUN_1004903f0();
      fVar5 = 0.0;
      if (1.1920929e-07 <= ABS(fVar3)) {
        fVar5 = fVar4 / fVar3;
      }
    }
    fVar4 = (float)FUN_1000bbea4(param_1 + 8,param_2,0);
    uVar2 = *(uint *)(param_1 + 0x18);
    switch(uVar2) {
    case 0:
      uVar2 = (uint)(fVar4 < fVar5);
      break;
    case 1:
      uVar2 = (uint)(fVar4 <= fVar5);
      break;
    case 2:
      uVar2 = (uint)(fVar5 < fVar4);
      break;
    case 3:
      uVar2 = (uint)(fVar5 <= fVar4);
    }
  }
  return uVar2 & 1;
}




undefined8 * FUN_10049dd1c(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    plVar5 = (long *)(param_1 + lVar3 * 0x38 + 8);
    if (*plVar5 == 0) {
      param_1 = param_1 + lVar3 * 0x38;
      puVar2 = (undefined8 *)(param_1 + 0x10);
      *puVar2 = &PTR_FUN_10149d970;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *plVar5 = (long)puVar2;
      return puVar2;
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049dd80(void)

{
  return;
}




undefined8 FUN_10049dd88(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(*param_2 + 0x308);
  if ((iVar1 != -1) &&
     ((lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10), *(int *)(lVar3 + 0x260) == iVar1 ||
      (lVar3 = FUN_100345d90(), lVar3 != 0)))) {
    uVar2 = FUN_10048c6cc(lVar3,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return uVar2;
  }
  return 0;
}




void FUN_10049ddf0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100016898();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049de40(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018548();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049de90(void *param_1)

{
  DAT_10184e198 = 0;
  operator_delete(param_1);
  return;
}




void FUN_10049dea0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049dea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049deac(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_101499a80;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((long)param_1 + 0x19a) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x184) = 0xffffffffffffffff;
  param_1[0x2e] = 0xffffffffffffffff;
  param_1[0x2d] = 0xffffffffffffffff;
  param_1[0x30] = 0xffffffffffffffff;
  param_1[0x2f] = 0xffffffffffffffff;
  param_1[0x2c] = 0xffffffffffffffff;
  param_1[0x2b] = 0xffffffffffffffff;
  return;
}




void FUN_10049df04(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049df0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049df14(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049df1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049df20(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10049df88(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 8);
  }
  *(undefined8 *)(lVar2 + uVar1 * 8) = *param_2;
  return;
}




void FUN_10049df88(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10049e008(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10049e008(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long FUN_10049e084(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_10049e0f0:
    uVar5 = 0xffffffff;
  }
  else {
    uVar2 = *param_2;
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    uVar5 = (ulong)(uVar2 - uVar3 * uVar1);
    lVar4 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar4 + uVar5 * 8) != uVar2) {
      do {
        if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
        uVar3 = uVar1;
        if (0 < (int)(uint)uVar5) {
          uVar3 = (uint)uVar5;
        }
        uVar5 = (ulong)(uVar3 - 1);
      } while (*(uint *)(lVar4 + uVar5 * 8) != uVar2);
      if ((int)uVar5 == -1) goto LAB_10049e0f0;
    }
    uVar5 = (ulong)*(uint *)(lVar4 + uVar5 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar5 * 8;
}




undefined8 * FUN_10049e100(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_101499b10;
  param_1[5] = &PTR_FUN_101499b40;
  uVar2 = DAT_101dc0b88;
  lVar3 = 0x38;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = uVar2;
    lVar3 = lVar3 + 0x10;
  } while (puVar1 + 2 != param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}




void FUN_10049e17c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049e188(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_101499b70;
  param_1[5] = &PTR_FUN_101499ba0;
  _bzero(param_1 + 7,0x318);
  return param_1;
}




void FUN_10049e1dc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049e1e8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149d9b8;
  param_1[5] = &PTR_FUN_10149d9e8;
  *(undefined2 *)((long)param_1 + 0x34) = 0;
  return param_1;
}




void FUN_10049e234(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049e240(long param_1)

{
  FUN_1010a1da8(param_1 + 0x28);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049e268(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8(param_1 + 0x28);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049e294(long param_1)

{
  FUN_1010a1da8();
  FUN_1010a0064(param_1 + -0x28);
  return;
}




void FUN_10049e2b8(long param_1)

{
  void *pvVar1;
  
  FUN_1010a1da8();
  pvVar1 = (void *)FUN_1010a0064(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




long FUN_10049e2e0(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049e2e8(long param_1)

{
  return param_1 + -0x28;
}




void FUN_10049e2f4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049e300(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_101499c00;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}




void FUN_10049e314(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049e320(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_101499c30;
  param_1[5] = &PTR_FUN_101499c60;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = DAT_101dc0b88;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
  return param_1;
}




void FUN_10049e38c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049e398(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499c90;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}




void FUN_10049e3c4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049e3d4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 FUN_10049e3e0(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x198);
  uVar2 = (ulong)bVar1;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    piVar3 = (int *)(param_1 + 8);
    uVar4 = uVar2;
    do {
      if (*piVar3 == (int)param_2) {
        return param_2;
      }
      piVar3 = piVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(int *)(param_1 + uVar2 * 4 + 8) = (int)param_2;
  *(byte *)(param_1 + 0x198) = bVar1 + 1;
  return param_2;
}




long FUN_10049e42c(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x198);
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x58;
    piVar2 = (int *)(param_1 + 8);
    do {
      if (*piVar2 == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x10;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




long FUN_10049e464(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x198);
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x58;
    piVar2 = (int *)(param_1 + 8);
    do {
      if (*piVar2 == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x10;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




void FUN_10049e4a0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049e4ac(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_101499d50;
  param_1[5] = &PTR_FUN_101499d80;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((long)param_1 + 0x44) = 7;
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  return param_1;
}




void FUN_10049e508(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049e514(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499db0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}




void FUN_10049e52c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049e538(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_101499de0;
  lVar2 = 0x28;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar2);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + 0xc;
  } while ((undefined8 *)(puVar1 + 3) != param_1 + 0xe);
  lVar2 = 0x70;
  do {
    puVar1 = (undefined4 *)((long)param_1 + lVar2);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + 0xc;
  } while ((undefined8 *)(puVar1 + 3) != param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}




void FUN_10049e594(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049e5a4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049e5b0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10046c654_101499ea0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  DAT_101d90978 = param_1;
  return;
}




void FUN_10049e5d4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049e5e0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_101499ed0;
  param_1[5] = &PTR_FUN_101499f00;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  return param_1;
}




void FUN_10049e64c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049e658(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_10149da48;
  param_1[5] = &PTR_FUN_10149da78;
  return param_1;
}




void FUN_10049e6a8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049e6b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149daa8;
  param_1[5] = &PTR_FUN_10149dad8;
  if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xd])();
  }
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049e708(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149daa8;
  param_1[5] = &PTR_FUN_10149dad8;
  if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xd])();
  }
  FUN_1010a1da8(param_1 + 5);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049e760(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_10149daa8;
  *param_1 = &PTR_FUN_10149dad8;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[8])();
  }
  FUN_1010a1da8(param_1);
  FUN_1010a0064(param_1 + -5);
  return;
}




void FUN_10049e7b4(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-5] = &PTR_FUN_10149daa8;
  *param_1 = &PTR_FUN_10149dad8;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[8])();
  }
  FUN_1010a1da8(param_1);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -5);
  operator_delete(pvVar1);
  return;
}




long FUN_10049e80c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049e814(long param_1)

{
  return param_1 + -0x28;
}




void FUN_10049e81c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149daa8;
  param_1[5] = &PTR_FUN_10149dad8;
  if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xd])();
  }
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049e870(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149daa8;
  param_1[5] = &PTR_FUN_10149dad8;
  if ((undefined8 *)param_1[0xd] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0xd])();
  }
  FUN_1010a1da8(param_1 + 5);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049e8c8(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_10149daa8;
  *param_1 = &PTR_FUN_10149dad8;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[8])();
  }
  FUN_1010a1da8(param_1);
  FUN_1010a0064(param_1 + -5);
  return;
}




void FUN_10049e91c(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-5] = &PTR_FUN_10149daa8;
  *param_1 = &PTR_FUN_10149dad8;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[8])();
  }
  FUN_1010a1da8(param_1);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -5);
  operator_delete(pvVar1);
  return;
}




void FUN_10049e978(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049e980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




long FUN_10049e984(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x1d8);
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x68;
    piVar2 = (int *)(param_1 + 8);
    do {
      if (*piVar2 == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x10;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




long FUN_10049e9bc(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0x1d8);
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x68;
    piVar2 = (int *)(param_1 + 8);
    do {
      if (*piVar2 == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x10;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}




void FUN_10049e9f4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_101499f80;
  param_1[5] = 0;
  return;
}




void FUN_10049ea08(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049ea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049ea14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101499fb0;
  param_1[5] = 0;
  DAT_101d909c0 = param_1;
  FUN_1004d2b50();
  return param_1;
}




void FUN_10049ea50(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049ea58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049ea5c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_101499fe0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0xffffffffffffffff;
  return;
}




void FUN_10049ea84(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049ea8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049ea90(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a010;
  param_1[5] = &PTR_FUN_10149a040;
  *(undefined4 *)(param_1 + 0x1b) = 2000;
  *(undefined2 *)((long)param_1 + 0xdc) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(ushort *)((long)param_1 + 0xdc) = (*(ushort *)(DAT_101d23a68 + 0x30) & 0x7f) << 8;
  return param_1;
}




void FUN_10049eb24(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049eb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049eb34(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049eb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




uint * FUN_10049eb40(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




uint * FUN_10049ebc8(uint *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      if (uVar2 != 0xffffffff) {
        lVar6 = *(long *)(param_1 + 8);
        puVar1 = (undefined8 *)(lVar6 + (ulong)uVar2 * 0x10);
        if ((void *)puVar1[1] != (void *)0x0) {
          operator_delete__((void *)puVar1[1]);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        *(uint *)(lVar6 + (ulong)uVar2 * 0x10) = param_1[10];
        param_1[10] = uVar2;
        uVar3 = *param_1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar3);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




undefined8 * FUN_10049ec74(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  *param_1 = &PTR_thunk_FUN_10046f894_10149a0a0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  _bzero(param_1 + 0x11,0x204);
  uVar1 = DAT_101867788;
  uVar2 = (undefined1)DAT_101867788;
  uVar3 = (undefined1)((uint)DAT_101867788 >> 8);
  uVar4 = (undefined1)((uint)DAT_101867788 >> 0x10);
  uVar5 = (undefined1)((uint)DAT_101867788 >> 0x18);
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = CONCAT17(uVar5,CONCAT16(uVar4,CONCAT15(uVar3,CONCAT14(uVar2,uVar1))));
  param_1[0x54] = CONCAT17(uVar5,CONCAT16(uVar4,CONCAT15(uVar3,CONCAT14(uVar2,uVar1))));
  return param_1;
}




void FUN_10049ece8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049ecf4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10049ed5c(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 8);
  }
  *(undefined8 *)(lVar2 + uVar1 * 8) = *param_2;
  return;
}




void FUN_10049ed5c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10049eddc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10049eddc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




ulong FUN_10049ee58(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10049eefc(param_1 + 0x18,auStack_48);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + uVar2 * 0x10);
  }
  FUN_10049eff8(lVar1 + uVar2 * 0x10,param_2);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10049eefc(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10049ef7c(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_10049ef7c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




uint * FUN_10049eff8(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10049f050(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -8;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_10049f050(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_10049f0cc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149db38;
  param_1[5] = &PTR_FUN_10149db68;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return param_1;
}




void FUN_10049f128(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049f134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149db38;
  param_1[5] = &PTR_FUN_10149db68;
  FUN_10049f25c(param_1 + 7);
  FUN_1010a1da8(param_1 + 5);
  FUN_1010a0064(param_1);
  return;
}




void FUN_10049f178(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149db38;
  param_1[5] = &PTR_FUN_10149db68;
  FUN_10049f25c(param_1 + 7);
  FUN_1010a1da8(param_1 + 5);
  pvVar1 = (void *)FUN_1010a0064(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10049f1c0(undefined8 *param_1)

{
  param_1[-5] = &PTR_FUN_10149db38;
  *param_1 = &PTR_FUN_10149db68;
  FUN_10049f25c(param_1 + 2);
  FUN_1010a1da8(param_1);
  FUN_1010a0064(param_1 + -5);
  return;
}




void FUN_10049f204(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-5] = &PTR_FUN_10149db38;
  *param_1 = &PTR_FUN_10149db68;
  FUN_10049f25c(param_1 + 2);
  FUN_1010a1da8(param_1);
  pvVar1 = (void *)FUN_1010a0064(param_1 + -5);
  operator_delete(pvVar1);
  return;
}




long FUN_10049f24c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_10049f254(long param_1)

{
  return param_1 + -0x28;
}




uint * FUN_10049f25c(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_10049f2e4(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10049f34c(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 8);
  }
  *(undefined8 *)(lVar2 + uVar1 * 8) = *param_2;
  return;
}




void FUN_10049f34c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10049f3cc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10049f3cc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined8 * FUN_10049f448(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a0d0;
  param_1[5] = &PTR_FUN_10149a100;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = DAT_101dc0b88;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf0 | 3;
  return param_1;
}




void FUN_10049f4b8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049f4c4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_10047052c_10149a130;
  param_1[5] = &PTR_FUN_10149a160;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  return param_1;
}




void FUN_10049f510(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049f51c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10149a190;
  *(undefined4 *)(param_1 + 5) = 0xfe;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)((long)param_1 + 0xec) = 1;
  _memset_pattern16(param_1 + 0xd,&DAT_101159b60,0x50);
  *(undefined8 *)((long)param_1 + 0xe4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xdc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xd4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xc4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xbc) = 0xffffffffffffffff;
  return param_1;
}




void FUN_10049f590(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




long FUN_10049f59c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    uVar5 = (ulong)(uVar3 - uVar2 * uVar1);
    lVar4 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar4 + uVar5 * 8) != uVar3) {
      do {
        if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar5) {
          uVar2 = (uint)uVar5;
        }
        uVar5 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar4 + uVar5 * 8) != uVar3);
      if ((int)uVar5 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar4 + uVar5 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      return *(long *)(param_1 + 8) + (ulong)uVar1 * 4;
    }
  }
  return 0;
}




long FUN_10049f644(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = FUN_100015208(0,0,*param_2);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_10049f6cc:
    uVar5 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar3 / uVar1;
    }
    uVar5 = (ulong)(uVar3 - uVar2 * uVar1);
    lVar4 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar4 + uVar5 * 8) != uVar3) {
      do {
        if (*(int *)(lVar4 + uVar5 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar5) {
          uVar2 = (uint)uVar5;
        }
        uVar5 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar4 + uVar5 * 8) != uVar3);
      if ((int)uVar5 == -1) goto LAB_10049f6cc;
    }
    uVar5 = (ulong)*(uint *)(lVar4 + uVar5 * 8 + 4);
  }
  return *(long *)(param_1 + 8) + uVar5 * 4;
}




uint * FUN_10049f6e4(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        param_1[10] = uVar1;
        uVar4 = *param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_10049f768(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10049f7cc(param_1 + 0x18,auStack_28);
    uVar1 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar1 * 4);
  }
  *(undefined4 *)(lVar2 + uVar1 * 4) = *param_2;
  return;
}




void FUN_10049f7cc(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10049f84c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_10049f84c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10049f8cc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049f8d8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10149a1f0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  return;
}




void FUN_10049f8f0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049f8fc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10149db98;
  return;
}




void FUN_10049f90c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049f91c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_10049f934(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049f944(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049f950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a2b0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = DAT_101dc0b88;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}




void FUN_10049f97c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049f988(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a2e0;
  param_1[5] = &PTR_FUN_10149a310;
  *(undefined8 *)((long)param_1 + 0x34) = 0x10;
  return param_1;
}




void FUN_10049f9d8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049f9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049f9e4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a340;
  param_1[5] = &PTR_FUN_10149a370;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}




void FUN_10049fa34(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049fa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049fa40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149a3a0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0;
  *(undefined8 *)((long)param_1 + 500) = 0;
  *(undefined4 *)((long)param_1 + 0x204) = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x36) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x38) = 0xff7fffff;
  *(undefined4 *)((long)param_1 + 0x1bc) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x37) = 0xff7fffff;
  FUN_100473ea8(param_1 + 0x3f,10);
  return param_1;
}




void FUN_10049fab8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049fac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049fac4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a3d0;
  param_1[5] = &PTR_FUN_10149a400;
  param_1[7] = 0;
  return param_1;
}




void FUN_10049fb10(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049fb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049fb1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10149a430;
  lVar2 = 0x28;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0x101010101010101;
    lVar2 = lVar2 + 0x19;
  } while ((long)puVar1 + 0x19 != (long)param_1 + 0x5a);
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x62) = 0;
  return;
}




void FUN_10049fb64(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049fb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049fb70(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_FUN_10149a460;
  param_1[5] = &PTR_FUN_10149a490;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return param_1;
}




void FUN_10049fbc8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049fbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049fbd4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10149a4c0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[6] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 7) = DAT_101dc0b88;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = uVar1;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  uVar2 = DAT_101dc1cb8;
  param_1[0xc] = DAT_101dc1cb8;
  param_1[0xd] = uVar2;
  uVar2 = NEON_fmov(0xbf800000,4);
  param_1[0xe] = uVar2;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xf8;
  return;
}




void FUN_10049fc44(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049fc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049fc50(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 4);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 0x10) != param_3; param_3 = param_3 + 2) {
      *param_2 = *param_3;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
      param_2 = param_2 + 2;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_10049fcd0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049fcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 * FUN_10049fcdc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  FUN_1010a1d84(param_1 + 5);
  *param_1 = &PTR_thunk_FUN_100475064_10149a650;
  param_1[5] = &PTR_FUN_10149a680;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  return param_1;
}




void FUN_10049fd2c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010049fd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_10049fd38(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar3 + -0x20;
  }
  if (lVar2 != param_2) {
    FUN_10049a9fc((long *)(param_1 + 0x28),param_2);
    FUN_10033d9f4(param_2);
    return;
  }
  plVar4 = (long *)(*(long *)(param_2 + 8) + -8);
  if (*(long *)(param_2 + 8) != 0 && plVar4 != (long *)0x0) {
    do {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar1 = plVar4 + 1;
      plVar4 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar4 = (long *)(*plVar1 + -8);
      }
    } while (plVar4 != (long *)0x0);
  }
  return;
}




void FUN_10049fdbc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e734();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049fe0c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e67c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049fe5c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e1b8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049feac(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e7e8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049fefc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e8a0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10049ff4c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033ddd4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_10049ff9c(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  lVar2 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    lVar2 = param_1 + lVar2 * 0x20;
    if (*(long *)(lVar2 + 8) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x10);
      *puVar3 = &PTR_FUN_10149dbc8;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(long *)(lVar2 + 8) = (long)puVar3;
      return puVar3;
    }
    lVar2 = 1;
    bVar1 = false;
  } while (bVar4);
  FUN_1004d22dc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_10049fffc(void)

{
  return;
}

