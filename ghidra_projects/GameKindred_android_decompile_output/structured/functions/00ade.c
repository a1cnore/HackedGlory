// functions/00ade — 9 functions
#include "libGameKindred.h"




void FUN_00ade024(long *param_1)

{
  FUN_00a9a708();
  FUN_00a9b70c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ade054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}




void FUN_00ade058(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)param_1;
  *(float *)(param_3 + 0x660) = fVar2;
  fVar5 = (float)param_2;
  *(float *)(param_3 + 0x664) = fVar5;
  FUN_00f13f08();
  fVar3 = fVar2 * 0.75;
  fVar4 = fVar5;
  if (fVar5 <= fVar3) {
    fVar4 = fVar3;
  }
  *(float *)(param_3 + 0x66c) = fVar4;
  fVar4 = fVar5 * 1.3333334;
  if (fVar5 <= fVar3) {
    fVar4 = fVar2;
  }
  lVar1 = param_3 + 0x408;
  *(float *)(param_3 + 0x668) = fVar4;
  FUN_00f13f08(param_1,param_2,lVar1);
  FUN_00afbae8(param_1,param_2,lVar1);
  FUN_00afbe78(lVar1,1);
  lVar1 = FUN_00afbdd0(lVar1);
  if (lVar1 != 0) {
    do {
      FUN_00ade140(lVar1,param_3 + 0x668,lVar1 + 0x3500,lVar1 + 0x3508,lVar1 + 0x3510,
                   param_3 + 0x660);
      lVar1 = *(long *)(lVar1 + 0x30);
    } while (lVar1 != 0);
  }
  return;
}




void FUN_00ade140(long param_1,undefined8 *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x34f8) = *param_2;
  *(undefined8 *)(param_1 + 0x3500) = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 0x3508) = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 0x3510) = *(undefined8 *)param_5;
  *(undefined8 *)(param_1 + 0x34f0) = *(undefined8 *)param_6;
  FUN_00f13f18(param_1,param_6);
  FUN_00f13f08(*param_6,param_6[1],param_1 + 0xb8);
  lVar3 = param_1 + 600;
  FUN_00f13f08(*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4),lVar3);
  fVar6 = param_6[1];
  fVar10 = param_3[1];
  local_80 = *(undefined8 *)param_3;
  if ((*(float *)(param_1 + 0x298) != *param_6 * *param_3) ||
     (*(float *)(param_1 + 0x29c) != fVar6 * fVar10)) {
    *(float *)(param_1 + 0x298) = *param_6 * *param_3;
    *(float *)(param_1 + 0x29c) = fVar6 * fVar10;
    FUN_0091ada4(lVar3);
  }
  (**(code **)(*(long *)(param_1 + 600) + 0x28))(lVar3,&local_80);
  plVar2 = (long *)(param_1 + 0x348);
  FUN_00af6d64(*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4),plVar2);
  fVar6 = param_6[1];
  fVar10 = param_3[1];
  uVar5 = *(undefined8 *)param_3;
  if ((*(float *)(param_1 + 0x388) != *param_6 * *param_3) ||
     (*(float *)(param_1 + 0x38c) != fVar6 * fVar10)) {
    *(float *)(param_1 + 0x388) = *param_6 * *param_3;
    *(float *)(param_1 + 0x38c) = fVar6 * fVar10;
    FUN_0091ada4(plVar2);
  }
  local_80 = uVar5;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_80);
  if (*param_5 == 1.0) {
    FUN_00f0dac8(param_1 + 0x5e8,1);
    fVar6 = *param_6 * *param_4;
    fVar10 = -12.0;
  }
  else if (*param_5 == 0.5) {
    FUN_00f0dac8(param_1 + 0x5e8,3);
    fVar6 = *param_6;
    fVar10 = -48.0;
  }
  else {
    FUN_00f0dac8(param_1 + 0x5e8,0);
    fVar6 = *param_6 * (1.0 - *param_4);
    fVar10 = -24.0;
  }
  plVar4 = (long *)(param_1 + 0x5e8);
  plVar2 = (long *)(param_1 + 0x4b8);
  FUN_00f0db64(fVar6 + fVar10,0,0x3f800000,plVar2);
  FUN_00f0dad0(fVar6 + fVar10,plVar4,1);
  fVar10 = param_5[1];
  fVar6 = *param_6 * *param_4;
  if (fVar10 == 1.0) {
    fVar7 = param_4[1];
    lVar3 = param_1 + 0x718;
    fVar10 = *(float *)(param_1 + 0x34f4) * fVar7;
    FUN_00f13e54(lVar3);
    fVar7 = fVar7 * -0.5;
    fVar10 = fVar10 + fVar7;
    if ((*(float *)(param_1 + 0x758) != fVar6) ||
       (fVar7 = *(float *)(param_1 + 0x75c), fVar7 != fVar10)) {
      *(float *)(param_1 + 0x758) = fVar6;
      *(float *)(param_1 + 0x75c) = fVar10;
      FUN_0091ada4(lVar3);
    }
    local_80 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x718) + 0x28))(lVar3,&local_80);
    if ((*(byte *)(param_1 + 0x79c) >> 2 & 1) == 0) {
      fVar10 = *(float *)(param_1 + 0x34f4) * param_4[1];
    }
    else {
      fVar10 = *(float *)(param_1 + 0x75c);
      FUN_00f13e54(lVar3);
      fVar10 = fVar10 + fVar7 * -0.5 + -60.0;
    }
    fVar8 = *(float *)(param_1 + 0x628);
    fVar7 = *param_5;
    if ((fVar8 != fVar6) || (fVar8 = *(float *)(param_1 + 0x62c), fVar8 != fVar10)) {
      *(float *)(param_1 + 0x628) = fVar6;
      *(float *)(param_1 + 0x62c) = fVar10;
      FUN_0091ada4(param_1 + 0x5e8);
    }
    local_80 = CONCAT44(0x3f800000,fVar7);
    (**(code **)(*plVar4 + 0x28))(param_1 + 0x5e8,&local_80);
    fVar7 = *(float *)(param_1 + 0x62c);
    FUN_00f0d4e0(plVar4);
    fVar10 = *param_5;
    fVar7 = (fVar7 - fVar8 * param_5[1]) + -10.0;
    if ((*(float *)(param_1 + 0x4f8) != fVar6) || (*(float *)(param_1 + 0x4fc) != fVar7)) {
      *(float *)(param_1 + 0x4f8) = fVar6;
      *(float *)(param_1 + 0x4fc) = fVar7;
      FUN_0091ada4(plVar2);
    }
    local_80 = CONCAT44(0x3f800000,fVar10);
    lVar3 = *plVar2;
  }
  else {
    if (fVar10 == 0.5) {
      fVar8 = *(float *)(param_1 + 0x628);
      fVar10 = *param_5;
      fVar7 = *(float *)(param_1 + 0x34f4) * param_4[1];
      if ((fVar8 != fVar6) || (fVar8 = *(float *)(param_1 + 0x62c), fVar8 != fVar7)) {
        *(float *)(param_1 + 0x628) = fVar6;
        *(float *)(param_1 + 0x62c) = fVar7;
        FUN_0091ada4(param_1 + 0x5e8);
      }
      local_80 = CONCAT44(0x3f000000,fVar10);
      (**(code **)(*plVar4 + 0x28))(param_1 + 0x5e8,&local_80);
      fVar7 = *(float *)(param_1 + 0x62c);
      FUN_00f0d4e0(plVar4);
      fVar10 = *param_5;
      fVar7 = (fVar7 - fVar8 * param_5[1]) + -10.0;
      if ((*(float *)(param_1 + 0x4f8) != fVar6) ||
         (fVar8 = *(float *)(param_1 + 0x4fc), fVar8 != fVar7)) {
        *(float *)(param_1 + 0x4f8) = fVar6;
        *(float *)(param_1 + 0x4fc) = fVar7;
        FUN_0091ada4(plVar2);
      }
      local_80 = CONCAT44(0x3f800000,fVar10);
      (**(code **)(*(long *)(param_1 + 0x4b8) + 0x28))(plVar2,&local_80);
      fVar7 = *(float *)(param_1 + 0x62c);
      FUN_00f0d4e0(plVar4);
      fVar7 = fVar7 + fVar8 * 0.5;
      fVar10 = fVar7 + 60.0;
      FUN_00f13e54(param_1 + 0x718);
      fVar10 = fVar7 * 0.5 + fVar10;
      if (*(float *)(param_1 + 0x758) != fVar6) goto LAB_00ade6a4;
LAB_00ade698:
      if (*(float *)(param_1 + 0x75c) != fVar10) goto LAB_00ade6a4;
    }
    else {
      fVar9 = *(float *)(param_1 + 0x4f8);
      fVar7 = *param_5;
      fVar8 = *(float *)(param_1 + 0x34f4) * param_4[1];
      if ((fVar9 != fVar6) || (fVar9 = *(float *)(param_1 + 0x4fc), fVar9 != fVar8)) {
        *(float *)(param_1 + 0x4f8) = fVar6;
        *(float *)(param_1 + 0x4fc) = fVar8;
        FUN_0091ada4(plVar2);
      }
      local_80 = CONCAT44(fVar10,fVar7);
      (**(code **)(*(long *)(param_1 + 0x4b8) + 0x28))(plVar2,&local_80);
      fVar7 = *(float *)(param_1 + 0x4fc);
      FUN_00f01c20(plVar2);
      uVar5 = *(undefined8 *)param_5;
      fVar7 = fVar7 + fVar9;
      fVar10 = fVar7 + 10.0;
      if ((*(float *)(param_1 + 0x628) != fVar6) ||
         (fVar7 = *(float *)(param_1 + 0x62c), fVar7 != fVar10)) {
        *(float *)(param_1 + 0x628) = fVar6;
        *(float *)(param_1 + 0x62c) = fVar10;
        FUN_0091ada4(param_1 + 0x5e8);
      }
      local_80 = uVar5;
      (**(code **)(*plVar4 + 0x28))(param_1 + 0x5e8,&local_80);
      fVar8 = *(float *)(param_1 + 0x62c);
      FUN_00f0d4e0(plVar4);
      fVar8 = fVar8 + fVar7;
      fVar10 = fVar8 + 60.0;
      FUN_00f13e54(param_1 + 0x718);
      fVar10 = fVar10 + fVar8 * 0.5;
      if (*(float *)(param_1 + 0x758) == fVar6) goto LAB_00ade698;
LAB_00ade6a4:
      *(float *)(param_1 + 0x758) = fVar6;
      *(float *)(param_1 + 0x75c) = fVar10;
      FUN_0091ada4(param_1 + 0x718);
    }
    plVar2 = (long *)(param_1 + 0x718);
    local_80 = 0x3f0000003f000000;
    lVar3 = *plVar2;
  }
  (**(code **)(lVar3 + 0x28))(plVar2,&local_80);
  if (*param_5 == 0.0) {
    fVar10 = *(float *)(param_1 + 0x758);
    fVar6 = (float)FUN_00f13e54(param_1 + 0x718);
    fVar7 = *(float *)(param_1 + 0x758);
    fVar8 = 0.5;
  }
  else {
    if (*param_5 != 1.0) goto LAB_00ade734;
    fVar10 = *(float *)(param_1 + 0x758);
    fVar6 = (float)FUN_00f13e54(param_1 + 0x718);
    fVar7 = *(float *)(param_1 + 0x758);
    fVar8 = -0.5;
  }
  fVar10 = fVar10 + fVar6 * fVar8;
  if (fVar7 != fVar10) {
    *(float *)(param_1 + 0x758) = fVar10;
    FUN_0091ada4(param_1 + 0x718);
  }
LAB_00ade734:
  FUN_00f13f08(*param_6,*(undefined4 *)(param_1 + 0x34f4),param_1 + 0x1d60);
  plVar2 = (long *)(param_1 + 0x1e50);
  fVar6 = *(float *)(param_1 + 0x34f4) * 0.5;
  if ((*(float *)(param_1 + 0x1e90) != *param_6 * 0.5) || (*(float *)(param_1 + 0x1e94) != fVar6)) {
    *(float *)(param_1 + 0x1e90) = *param_6 * 0.5;
    *(float *)(param_1 + 0x1e94) = fVar6;
    FUN_0091ada4(plVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_80);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ade7e0(long param_1,byte param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x670) != 0) {
      FUN_00adec44(*(long *)(param_1 + 0x670),0,0);
      *(undefined8 *)(param_1 + 0x670) = 0;
    }
  }
  else {
    FUN_00ade83c(param_1);
    FUN_00ade8e4(param_1);
    FUN_00a9b70c(param_1 + 0x1a0);
  }
  *(byte *)(param_1 + 0x68c) = param_2 & 1;
  return;
}




void FUN_00ade83c(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x68e) == '\0') {
    lVar2 = FUN_00afbdd0(param_1 + 0x408);
    if (lVar2 != 0) {
      do {
        if (*(char *)(lVar2 + 0x3544) == '\0') {
          bVar1 = *(byte *)(lVar2 + 0x3478);
          if ((bVar1 & 1) == 0) {
            if (bVar1 >> 1 != 0) {
LAB_00ade894:
              if ((bVar1 & 1) == 0) {
                lVar3 = lVar2 + 0x3479;
              }
              else {
                lVar3 = *(long *)(lVar2 + 0x3488);
              }
              FUN_00a9a7c8(param_1 + 0x1a0,lVar3,2,lVar2);
            }
          }
          else if (*(long *)(lVar2 + 0x3480) != 0) goto LAB_00ade894;
        }
        lVar2 = *(long *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
    *(undefined1 *)(param_1 + 0x68e) = 1;
  }
  return;
}




void FUN_00ade8e4(long param_1)

{
  long lVar1;
  size_t __n;
  size_t __n_00;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  char *pcVar15;
  uint uVar16;
  size_t sVar17;
  size_t sVar18;
  ulong uVar19;
  byte local_98 [8];
  size_t local_90;
  char *local_88;
  byte local_80 [8];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar1 = param_1 + 0x408;
  lVar10 = FUN_00afbdd0(lVar1);
  if (lVar10 == 0) {
    uVar9 = FUN_00afbbe8(lVar1);
    FUN_00afbb00(lVar1,uVar9);
  }
  else {
    bVar5 = false;
    pcVar13 = (char *)((ulong)local_98 | 1);
    do {
      if (*(int *)(lVar10 + 0x3530) == 0) {
        uVar8 = 0;
        if ((*(byte *)(lVar10 + 0x84) >> 2 & 1) == 0) goto LAB_00adeba4;
      }
      else {
        uVar19 = 0;
        uVar16 = 1;
        do {
          FUN_008fcdb8(local_80,*(long *)(lVar10 + 0x3538) + uVar19 * 0x30);
          FUN_008fcdb8(local_98,*(long *)(lVar10 + 0x3538) + uVar19 * 0x30 + 0x18);
          sVar18 = local_78;
          bVar3 = local_80[0];
          bVar6 = DAT_0320ffa8;
          sVar17 = (size_t)(local_80[0] >> 1);
          __n = sVar17;
          if ((local_80[0] & 1) != 0) {
            __n = local_78;
          }
          __n_00 = (ulong)(DAT_0320ffa8 >> 1);
          if ((DAT_0320ffa8 & 1) != 0) {
            __n_00 = DAT_0320ffb0;
          }
          uVar8 = uVar16;
          if (__n == __n_00) {
            pcVar15 = (char *)((ulong)local_80 | 1);
            if ((local_80[0] & 1) != 0) {
              pcVar15 = local_70;
            }
            pcVar12 = DAT_0320ffb8;
            if ((DAT_0320ffa8 & 1) == 0) {
              pcVar12 = &DAT_0320ffa9;
            }
            if ((local_80[0] & 1) == 0) {
              if (__n != 0) {
                lVar14 = -sVar17;
                pcVar15 = (char *)((ulong)local_80 | 1);
                do {
                  if (*pcVar15 != *pcVar12) goto LAB_00adea30;
                  pcVar15 = pcVar15 + 1;
                  lVar14 = lVar14 + 1;
                  pcVar12 = pcVar12 + 1;
                } while (lVar14 != 0);
              }
            }
            else if ((__n != 0) && (iVar7 = memcmp(pcVar15,pcVar12,__n), iVar7 != 0))
            goto LAB_00adea30;
          }
          else {
LAB_00adea30:
            sVar2 = (ulong)(local_98[0] >> 1);
            if ((local_98[0] & 1) != 0) {
              sVar2 = local_90;
            }
            if (sVar2 == __n_00) {
              pcVar15 = pcVar13;
              if ((local_98[0] & 1) != 0) {
                pcVar15 = local_88;
              }
              pcVar12 = DAT_0320ffb8;
              if ((bVar6 & 1) == 0) {
                pcVar12 = &DAT_0320ffa9;
              }
              if ((local_98[0] & 1) == 0) {
                if (__n_00 != 0) {
                  lVar14 = -(ulong)(local_98[0] >> 1);
                  pcVar15 = pcVar13;
                  do {
                    if (*pcVar15 != *pcVar12) goto LAB_00adeaac;
                    pcVar15 = pcVar15 + 1;
                    lVar14 = lVar14 + 1;
                    pcVar12 = pcVar12 + 1;
                  } while (lVar14 != 0);
                }
              }
              else if ((__n_00 != 0) && (iVar7 = memcmp(pcVar15,pcVar12,__n_00), iVar7 != 0))
              goto LAB_00adeaac;
            }
            else {
LAB_00adeaac:
              if (__n == 4) {
                iVar7 = FUN_0090d610(local_80,0,0xffffffffffffffff,"hero",4);
                if (iVar7 != 0) {
                  sVar17 = (size_t)(local_80[0] >> 1);
                  sVar18 = local_78;
                  bVar3 = local_80[0];
                  goto LAB_00adeae4;
                }
                uVar11 = FUN_009580b8();
                pcVar15 = pcVar13;
                if ((local_98[0] & 1) != 0) {
                  pcVar15 = local_88;
                }
                uVar8 = FUN_00961804(uVar11,pcVar15,1);
LAB_00adeb54:
                uVar8 = uVar16 & uVar8;
              }
              else {
LAB_00adeae4:
                if ((bVar3 & 1) != 0) {
                  sVar17 = sVar18;
                }
                uVar8 = 0;
                if (sVar17 == 4) {
                  iVar7 = FUN_0090d610(local_80,0,0xffffffffffffffff,&DAT_01b9230f,4);
                  uVar8 = 0;
                  if (iVar7 == 0) {
                    uVar11 = FUN_009580b8();
                    uVar8 = FUN_00961744(uVar11,local_98);
                    goto LAB_00adeb54;
                  }
                }
              }
            }
          }
          if ((local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
          if ((local_80[0] & 1) != 0) {
            operator_delete(local_70);
          }
          uVar19 = uVar19 + 1;
          uVar16 = uVar8;
        } while (uVar19 < *(uint *)(lVar10 + 0x3530));
        if (uVar8 == (*(byte *)(lVar10 + 0x84) & 4) >> 2) {
LAB_00adeba4:
          FUN_00afbc24(lVar1,lVar10,uVar8 ^ 1);
          bVar5 = true;
        }
      }
      lVar10 = *(long *)(lVar10 + 0x30);
    } while (lVar10 != 0);
    uVar9 = FUN_00afbbe8(lVar1);
    FUN_00afbb00(lVar1,uVar9);
    if (bVar5) {
      *(byte *)(param_1 + 0x65c) = *(byte *)(param_1 + 0x65c) | 1;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00adec44(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ushort *puVar5;
  ushort uVar6;
  
  lVar1 = param_1 + 0x1cd8;
  FUN_00f01980(lVar1);
  if ((param_2 & 1) == 0) {
    uVar4 = FUN_00efee28(0,0x3e4ccccd,FUN_00ab3980);
    FUN_00f022a0(lVar1,uVar4);
    lVar3 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efc8e8(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_02825148;
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
  }
  else {
    pcVar2 = "MENU_LANDING_PAGE_TILE_IN_APP_PURCHASE_BUTTON";
    if ((param_3 & 1) == 0) {
      pcVar2 = "MENU_NEWS_TILE_LEAVE_APP_BUTTON";
    }
    *(uint *)(param_1 + 0x1d5c) = *(uint *)(param_1 + 0x1d5c) | 4;
    uVar4 = FUN_00e6ce7c(pcVar2,0);
    FUN_00ab7498(param_1 + 0x1e50,uVar4);
    puVar5 = (ushort *)FUN_00efee28(0x3f800000,0x3e4ccccd,FUN_00ab3980);
  }
  FUN_00f022a0(lVar1,puVar5);
  return;
}




void FUN_00adedb0(long param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00969248();
  if (*(int *)(lVar3 + 0x38) < 1) {
    FUN_00a9b054(param_1 + 0x1a0);
    if (((int)param_2[2] == 3) &&
       (lVar3 = FUN_008fd190(param_2,"gamefeed"),
       *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3)) {
      local_60 = "gamefeed";
      local_50 = 0x100005;
      local_58 = 8;
      plVar4 = (long *)FUN_008feca4(param_2,&local_60);
      lVar3 = FUN_008fd190(plVar4,"landing_page");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3) {
        local_60 = "landing_page";
        local_50 = 0x100005;
        local_58 = 0xc;
        plVar4 = (long *)FUN_008feca4(plVar4,&local_60);
        if (((int)plVar4[2] == 3) &&
           (lVar3 = FUN_008fd190(plVar4,"items"),
           *plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar3)) {
          local_60 = "items";
          local_50 = 0x100005;
          local_58 = 5;
          plVar4 = (long *)FUN_008feca4(plVar4,&local_60);
          if (((int)plVar4[2] == 4) && ((int)plVar4[1] != 0)) {
            lVar3 = param_1 + 0x408;
            FUN_00afb9e0(lVar3);
            if ((int)plVar4[1] != 0) {
              lVar5 = 0;
              uVar6 = 0;
              do {
                FUN_00adefa8(param_1,*plVar4 + lVar5);
                uVar6 = uVar6 + 1;
                lVar5 = lVar5 + 0x18;
              } while (uVar6 < *(uint *)(plVar4 + 1));
            }
            uVar2 = FUN_00afbbe8(lVar3);
            FUN_00afbb00(lVar3,uVar2);
            FUN_00afbe78(lVar3,0);
            *(undefined1 *)(param_1 + 0x68e) = 0;
            if (*(char *)(param_1 + 0x68c) != '\0') {
              FUN_00ade83c(param_1);
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00adefa8(void *param_1,long *param_2)

{
  long *plVar1;
  size_t sVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  void *pvVar16;
  long *plVar17;
  long *plVar18;
  char *pcVar19;
  long lVar20;
  char *pcVar21;
  void *pvVar22;
  int *piVar23;
  char *pcVar24;
  size_t sVar25;
  uint uVar26;
  long *plVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  uint local_17c;
  undefined8 local_168;
  void *local_160;
  byte local_158 [16];
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  byte local_f0 [8];
  size_t local_e8;
  char *local_e0;
  byte local_d8 [8];
  size_t local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  void *pvStack_a8;
  long *local_a0;
  ulong uStack_98;
  void *local_90;
  void *local_88;
  
  lVar3 = tpidr_el0;
  lVar20 = *(long *)(lVar3 + 0x28);
  uVar9 = FUN_009580c4();
  if ((uVar9 & 1) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    lVar10 = FUN_009580b8();
    uVar6 = *(uint *)(lVar10 + 0x55e0);
  }
  lVar10 = FUN_008fd190(param_2,"minPlayerLevel");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00adf054:
    uVar26 = 0xffffffff;
  }
  else {
    local_b0 = (code *)0x1b96d80;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
    pvStack_a8 = (void *)0xe;
    lVar10 = FUN_008feca4(param_2,&local_b0);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_00adf054;
    local_b0 = (code *)0x1b96d80;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
    pvStack_a8 = (void *)0xe;
    puVar11 = (uint *)FUN_008feca4(param_2,&local_b0);
    uVar26 = *puVar11;
  }
  lVar10 = FUN_008fd190(param_2,"maxPlayerLevel");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00adf0c8:
    iVar7 = -1;
  }
  else {
    local_b0 = (code *)0x1b96d8f;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
    pvStack_a8 = (void *)0xe;
    lVar10 = FUN_008feca4(param_2,&local_b0);
    if ((*(byte *)(lVar10 + 0x11) >> 2 & 1) == 0) goto LAB_00adf0c8;
    local_b0 = (code *)0x1b96d8f;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
    pvStack_a8 = (void *)0xe;
    piVar12 = (int *)FUN_008feca4(param_2,&local_b0);
    iVar7 = *piVar12;
  }
  if ((((int)uVar6 < (int)uVar26) && (-1 < (int)(uVar26 | uVar6))) ||
     ((iVar7 < (int)uVar6 && ((-1 < (int)uVar6 && (0 < iVar7)))))) goto LAB_00ae0aac;
  local_c0 = 0;
  uStack_b8 = 0;
  lVar10 = FUN_008fd190(param_2,"unlocks");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00adf58c:
    pvVar16 = operator_new(0x35f8);
    FUN_00ae172c();
    FUN_00ae2f18((long)pvVar16 + 0x3530,&local_c0);
    local_100 = _DAT_03218ef8;
    local_f8 = local_100;
    lVar10 = FUN_008fd190(param_2,"text");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
      FUN_00f0d75c((long)pvVar16 + 0x4b8,&DAT_03210450);
      FUN_00f0d75c((long)pvVar16 + 0x5e8,&DAT_03210450);
    }
    else {
      local_b0 = (code *)0x1e46c4a;
      local_a0._0_4_ = 0x100005;
      pvStack_a8 = (void *)0x4;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"title");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adf654:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96f62;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x5;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adf654;
        local_b0 = (code *)0x1b96f62;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x5;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_b0,puVar14);
      FUN_00910394((long)pvVar16 + 0x3430,&local_b0);
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
      }
      local_b0 = (code *)0x1e46c4a;
      local_a0._0_4_ = 0x100005;
      pvStack_a8 = (void *)0x4;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"title");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adf6f4:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96f62;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x5;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adf6f4;
        local_b0 = (code *)0x1b96f62;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x5;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_b0,puVar14);
      FUN_00f0d75c((long)pvVar16 + 0x4b8,&local_b0);
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
      }
      local_b0 = (code *)0x1e46c4a;
      local_a0._0_4_ = 0x100005;
      pvStack_a8 = (void *)0x4;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"title");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adf78c:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96f62;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x5;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adf78c;
        local_b0 = (code *)0x1b96f62;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x5;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_b0,puVar14);
      FUN_00910394((long)pvVar16 + 0x3420,&local_b0);
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
      }
      local_b0 = (code *)0x1e46c4a;
      local_a0._0_4_ = 0x100005;
      pvStack_a8 = (void *)0x4;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"sub_title");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adf828:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1bb0137;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x9;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adf828;
        local_b0 = (code *)0x1bb0137;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x9;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_b0,puVar14);
      FUN_00910394((long)pvVar16 + 0x3440,&local_b0);
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
      }
      local_b0 = (code *)0x1e46c4a;
      local_a0._0_4_ = 0x100005;
      pvStack_a8 = (void *)0x4;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"sub_title");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adf8c8:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1bb0137;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x9;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adf8c8;
        local_b0 = (code *)0x1bb0137;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x9;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_b0,puVar14);
      FUN_00f0d75c((long)pvVar16 + 0x5e8,&local_b0);
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
      }
      local_b0 = (code *)0x1e46c4a;
      local_a0._0_4_ = 0x100005;
      pvStack_a8 = (void *)0x4;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"x");
      dVar30 = 0.0;
      dVar28 = 0.0;
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 != lVar10) {
        local_b0 = (code *)0x1bf21c4;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x1;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        dVar28 = 0.0;
        if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
          local_b0 = (code *)0x1bf21c4;
          local_a0._0_4_ = 0x100005;
          pvStack_a8 = (void *)0x1;
          FUN_008feca4(plVar13,&local_b0);
          dVar28 = (double)FUN_008fc0f0();
        }
      }
      local_b0 = (code *)0x1e46c4a;
      local_a0._0_4_ = 0x100005;
      pvStack_a8 = (void *)0x4;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"y");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 != lVar10) {
        local_b0 = (code *)0x1e3b149;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x1;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
          local_b0 = (code *)0x1e3b149;
          local_a0._0_4_ = 0x100005;
          pvStack_a8 = (void *)0x1;
          FUN_008feca4(plVar13,&local_b0);
          dVar30 = (double)FUN_008fc0f0();
        }
      }
      local_f8 = CONCAT44((float)dVar30,(float)dVar28);
      local_b0 = (code *)0x1e46c4a;
      local_a0._0_4_ = 0x100005;
      pvStack_a8 = (void *)0x4;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"anchorX");
      dVar30 = 0.0;
      dVar28 = 0.0;
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 != lVar10) {
        local_b0 = (code *)0x1b96b4d;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x7;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        dVar28 = 0.0;
        if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
          local_b0 = (code *)0x1b96b4d;
          local_a0._0_4_ = 0x100005;
          pvStack_a8 = (void *)0x7;
          FUN_008feca4(plVar13,&local_b0);
          dVar28 = (double)FUN_008fc0f0();
        }
      }
      local_b0 = (code *)0x1e46c4a;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x4;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"anchorY");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 != lVar10) {
        local_b0 = (code *)0x1b96b55;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x7;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
          local_b0 = (code *)0x1b96b55;
          local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
          pvStack_a8 = (void *)0x7;
          FUN_008feca4(plVar13,&local_b0);
          dVar30 = (double)FUN_008fc0f0();
        }
      }
      local_100 = CONCAT44((float)dVar30,(float)dVar28);
    }
    lVar10 = FUN_008fd190(param_2,&DAT_01bb0141);
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
      *(uint *)((long)pvVar16 + 0x79c) = *(uint *)((long)pvVar16 + 0x79c) & 0xfffffffb;
    }
    else {
      local_b0 = (code *)0x1bb0141;
      local_a0._0_4_ = 0x100005;
      *(uint *)((long)pvVar16 + 0x79c) = *(uint *)((long)pvVar16 + 0x79c) | 4;
      pvStack_a8 = (void *)0x3;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"text");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adfc0c:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1e46c4a;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x4;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adfc0c;
        local_b0 = (code *)0x1e46c4a;
        local_a0._0_4_ = 0x100005;
        pvStack_a8 = (void *)0x4;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_b0,puVar14);
      FUN_00910394((long)pvVar16 + 0x3450,&local_b0);
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
      }
      local_b0 = (code *)&DAT_01bb0141;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x3;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"text");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adfcac:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1e46c4a;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x4;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adfcac;
        local_b0 = (code *)0x1e46c4a;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x4;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_b0,puVar14);
      FUN_00ab7498((long)pvVar16 + 0x718,&local_b0);
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
        local_b0 = (code *)0x0;
        pvStack_a8 = (void *)0x0;
      }
    }
    lVar10 = FUN_008fd190(param_2,"tab_title");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar10) {
      lVar10 = FUN_008fd190(param_2,"tab_title");
      if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00adfd60:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96f5e;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x9;
        lVar10 = FUN_008feca4(param_2,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adfd60;
        local_b0 = (code *)0x1b96f5e;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x9;
        puVar14 = (undefined8 *)FUN_008feca4(param_2,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_b0,puVar14);
      FUN_00910394((long)pvVar16 + 0x3420,&local_b0);
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
        local_b0 = (code *)0x0;
        pvStack_a8 = (void *)0x0;
      }
      FUN_0090ea30((long)param_1 + 0x678,(long)pvVar16 + 0x3420);
    }
    lVar10 = FUN_008fd190(param_2,"preview");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar10) {
      local_b0 = (code *)0x1b9711c;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x7;
      plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
      lVar10 = FUN_008fd190(plVar13,"title");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adfe38:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96f62;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x5;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adfe38;
        local_b0 = (code *)0x1b96f62;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x5;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_110,puVar14);
      lVar10 = FUN_008fd190(plVar13,"imageUrl");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adfe98:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96b70;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x8;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adfe98;
        local_b0 = (code *)0x1b96b70;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x8;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_008fa54c(local_d8,puVar14);
      lVar10 = FUN_008fd190(plVar13,"body");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adfef8:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1e39ac4;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x4;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adfef8;
        local_b0 = (code *)0x1e39ac4;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x4;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_120,puVar14);
      lVar10 = FUN_008fd190(plVar13,"accept");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adff58:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1e309f2;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x6;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adff58;
        local_b0 = (code *)0x1e309f2;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x6;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_130,puVar14);
      lVar10 = FUN_008fd190(plVar13,"onAccept");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00adffb8:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96b79;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x8;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00adffb8;
        local_b0 = (code *)0x1b96b79;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x8;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_008fa54c(local_f0,puVar14);
      lVar10 = FUN_008fd190(plVar13,"reject");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00ae0018:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96b82;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x6;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae0018;
        local_b0 = (code *)0x1b96b82;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x6;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_140,puVar14);
      lVar10 = FUN_008fd190(plVar13,"onReject");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00ae0078:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1e3aefe;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x8;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae0078;
        local_b0 = (code *)0x1e3aefe;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x8;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_008fa54c(local_158,puVar14);
      lVar10 = FUN_008fd190(plVar13,"alt");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00ae00d8:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1bebda1;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x3;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae00d8;
        local_b0 = (code *)0x1bebda1;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x3;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_00e705c8(&local_168,puVar14);
      lVar10 = FUN_008fd190(plVar13,"onAlt");
      if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar10) {
LAB_00ae013c:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96b89;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x5;
        lVar10 = FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae013c;
        local_b0 = (code *)0x1b96b89;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0x5;
        puVar14 = (undefined8 *)FUN_008feca4(plVar13,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_008fa54c(&local_b0,puVar14);
      FUN_00ae1ec4(pvVar16,&local_110,local_d8,&local_120,&local_130,local_f0,&local_140,local_158,
                   &local_168,&local_b0);
      if (((ulong)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (local_160 != (void *)0x0) {
        operator_delete__(local_160);
        local_168 = 0;
        local_160 = (void *)0x0;
      }
      if ((local_158[0] & 1) != 0) {
        operator_delete(local_148);
      }
      if (local_138 != (void *)0x0) {
        operator_delete__(local_138);
        local_140 = 0;
        local_138 = (void *)0x0;
      }
      if ((local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
      if (local_128 != (void *)0x0) {
        operator_delete__(local_128);
        local_130 = 0;
        local_128 = (void *)0x0;
      }
      if (local_118 != (void *)0x0) {
        operator_delete__(local_118);
        local_120 = 0;
        local_118 = (void *)0x0;
      }
      if ((local_d8[0] & 1) != 0) {
        operator_delete(local_c8);
      }
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
    }
    lVar10 = FUN_008fd190(param_2,&DAT_01b96aa3);
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00ae0258:
      puVar14 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_b0 = (code *)&DAT_01b96aa3;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x4;
      lVar10 = FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae0258;
      local_b0 = (code *)&DAT_01b96aa3;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x4;
      puVar14 = (undefined8 *)FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
        puVar14 = (undefined8 *)*puVar14;
      }
    }
    FUN_008fa54c(&local_b0,puVar14);
    FUN_008fce60((long)pvVar16 + 0x34a8,&local_b0);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    lVar10 = FUN_008fd190(param_2,"key");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00ae02d8:
      puVar14 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_b0 = (code *)0x1e454bb;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x3;
      lVar10 = FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae02d8;
      local_b0 = (code *)0x1e454bb;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x3;
      puVar14 = (undefined8 *)FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
        puVar14 = (undefined8 *)*puVar14;
      }
    }
    FUN_008fa54c(&local_b0,puVar14);
    FUN_008fce60((long)pvVar16 + 0x34c0,&local_b0);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    lVar10 = FUN_008fd190(param_2,&DAT_01b92fa6);
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00ae0358:
      puVar14 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_b0 = (code *)&DAT_01b92fa6;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x4;
      lVar10 = FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae0358;
      local_b0 = (code *)&DAT_01b92fa6;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x4;
      puVar14 = (undefined8 *)FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
        puVar14 = (undefined8 *)*puVar14;
      }
    }
    FUN_008fa54c(&local_b0,puVar14);
    FUN_008fce60((long)pvVar16 + 0x34d8,&local_b0);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    lVar10 = FUN_008fd190(param_2,&DAT_01b96f41);
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00ae03d8:
      puVar14 = (undefined8 *)&DAT_01e277f2;
LAB_00ae03e0:
      iVar7 = FUN_00e6a474(puVar14);
      if (iVar7 != 0) {
        FUN_008fa54c(&local_b0,puVar14);
        plVar27 = local_a0;
        pcVar5 = local_b0;
        pvVar22 = (void *)((ulong)local_b0 >> 1 & 0x7f);
        plVar13 = (long *)((ulong)&local_b0 | 1);
        if (((ulong)local_b0 & 1) != 0) {
          pvVar22 = pvStack_a8;
          plVar13 = local_a0;
        }
        plVar1 = (long *)((long)plVar13 + (long)pvVar22);
        plVar17 = plVar13;
        while ((((plVar18 = plVar1, 7 < (long)pvVar22 && ((long)pvVar22 - 7U != 0)) &&
                (plVar17 = memchr(plVar17,0x62,(long)pvVar22 - 7U), plVar17 != (long *)0x0)) &&
               (plVar18 = plVar17, *plVar17 != 0x2f2f3a646c697562))) {
          plVar17 = (long *)((long)plVar17 + 1);
          pvVar22 = (void *)((long)plVar1 - (long)plVar17);
        }
        if (((ulong)pcVar5 & 1) != 0) {
          operator_delete(plVar27);
        }
        if (plVar18 == plVar13 && plVar18 != plVar1) {
          FUN_008fce60((long)pvVar16 + 0x3478,&DAT_0320ffa8);
        }
        else {
          FUN_008fa54c(&local_b0,puVar14);
          FUN_0096b704((long)param_1 + 0x218,&local_b0,(long)pvVar16 + 0x3478);
          if (((ulong)local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
        }
      }
    }
    else {
      local_b0 = (code *)&DAT_01b96f41;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x3;
      lVar10 = FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae03d8;
      local_b0 = (code *)&DAT_01b96f41;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x3;
      puVar14 = (undefined8 *)FUN_008feca4(param_2,&local_b0);
      if (((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) != 0) ||
         (puVar14 = (undefined8 *)*puVar14, puVar14 != (undefined8 *)0x0)) goto LAB_00ae03e0;
    }
    lVar10 = FUN_008fd190(param_2,"purchasedImg");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00ae05f0:
      puVar14 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_b0 = (code *)0x1b96ac5;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0xc;
      lVar10 = FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae05f0;
      local_b0 = (code *)0x1b96ac5;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0xc;
      puVar14 = (undefined8 *)FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
        puVar14 = (undefined8 *)*puVar14;
      }
    }
    uVar9 = FUN_00e6a488(puVar14);
    if ((uVar9 & 1) == 0) {
      lVar10 = FUN_008fd190(param_2,"purchasedImg");
      if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00ae0654:
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_b0 = (code *)0x1b96ac5;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0xc;
        lVar10 = FUN_008feca4(param_2,&local_b0);
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae0654;
        local_b0 = (code *)0x1b96ac5;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0xc;
        puVar14 = (undefined8 *)FUN_008feca4(param_2,&local_b0);
        if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
          puVar14 = (undefined8 *)*puVar14;
        }
      }
      FUN_008fa54c(&local_b0,puVar14);
      FUN_0096b704((long)param_1 + 0x218,&local_b0,(byte *)((long)pvVar16 + 0x3490));
      if (((ulong)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((*(byte *)((long)pvVar16 + 0x3490) & 1) == 0) {
        lVar10 = (long)pvVar16 + 0x3491;
      }
      else {
        lVar10 = *(long *)((long)pvVar16 + 0x34a0);
      }
      FUN_00a9a7c8((long)param_1 + 0x1a0,lVar10,2,param_1);
    }
    uVar6 = 0x7f7f7fff;
    lVar10 = FUN_008fd190(param_2,"tint_color");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar10) {
      local_b0 = (code *)0x1bb014e;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0xa;
      puVar14 = (undefined8 *)FUN_008feca4(param_2,&local_b0);
      if ((*(int *)(puVar14 + 2) == 4) && (*(int *)(puVar14 + 1) == 3)) {
        piVar23 = (int *)*puVar14;
        uVar9 = 0;
        piVar12 = piVar23 + 4;
        do {
          uVar6 = 0x7f7f7fff;
          if ((*(byte *)((long)piVar12 + 1) >> 3 & 1) == 0) goto LAB_00ae0788;
          uVar9 = uVar9 + 1;
          piVar12 = piVar12 + 6;
        } while (uVar9 < 3);
        uVar6 = *piVar23 << 0x18 | piVar23[6] << 0x10 | piVar23[0xc] << 8;
      }
    }
LAB_00ae0788:
    *(uint *)((long)pvVar16 + 0x3540) =
         uVar6 >> 8 & 0xff00 | uVar6 >> 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | 0xff000000;
    lVar10 = FUN_008fd190(param_2,"imageAnchorX");
    fVar31 = 0.0;
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar10) {
      local_b0 = (code *)0x1bb0159;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0xc;
      lVar10 = FUN_008feca4(param_2,&local_b0);
      fVar31 = 0.0;
      if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
        local_b0 = (code *)0x1bb0159;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0xc;
        FUN_008feca4(param_2,&local_b0);
        dVar28 = (double)FUN_008fc0f0();
        fVar31 = (float)dVar28;
      }
    }
    lVar10 = FUN_008fd190(param_2,"imageAnchorY");
    fVar29 = 0.0;
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar10) {
      local_b0 = (code *)0x1bb0166;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0xc;
      lVar10 = FUN_008feca4(param_2,&local_b0);
      fVar29 = 0.0;
      if ((*(byte *)(lVar10 + 0x11) >> 1 & 1) != 0) {
        local_b0 = (code *)0x1bb0166;
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        pvStack_a8 = (void *)0xc;
        FUN_008feca4(param_2,&local_b0);
        dVar28 = (double)FUN_008fc0f0();
        fVar29 = (float)dVar28;
      }
    }
    local_b0 = (code *)CONCAT44(fVar29,fVar31);
    FUN_00ade140(pvVar16,(long)param_1 + 0x668,&local_b0,&local_f8,&local_100,(long)param_1 + 0x660)
    ;
    lVar10 = FUN_008fd190(param_2,"purchaseProductId");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar10) {
LAB_00ae0900:
      puVar14 = (undefined8 *)&DAT_01e277f2;
    }
    else {
      local_b0 = (code *)0x1bb0173;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x11;
      lVar10 = FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) == 0) goto LAB_00ae0900;
      local_b0 = (code *)0x1bb0173;
      local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
      pvStack_a8 = (void *)0x11;
      puVar14 = (undefined8 *)FUN_008feca4(param_2,&local_b0);
      if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
        puVar14 = (undefined8 *)*puVar14;
      }
    }
    FUN_008fa54c(local_d8,puVar14);
    sVar2 = (ulong)(local_d8[0] >> 1);
    if ((local_d8[0] & 1) != 0) {
      sVar2 = local_d0;
    }
    sVar25 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar25 = DAT_0320ffb0;
    }
    if (sVar2 == sVar25) {
      pcVar21 = (char *)((ulong)local_d8 | 1);
      pcVar24 = pcVar21;
      if ((local_d8[0] & 1) != 0) {
        pcVar24 = local_c8;
      }
      pcVar19 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        pcVar19 = &DAT_0320ffa9;
      }
      if ((local_d8[0] & 1) == 0) {
        if (sVar2 != 0) {
          lVar10 = -(ulong)(local_d8[0] >> 1);
          do {
            if (*pcVar21 != *pcVar19) goto LAB_00ae09d0;
            pcVar21 = pcVar21 + 1;
            lVar10 = lVar10 + 1;
            pcVar19 = pcVar19 + 1;
          } while (lVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar7 = memcmp(pcVar24,pcVar19,sVar2), iVar7 != 0))
      goto LAB_00ae09d0;
    }
    else {
LAB_00ae09d0:
      FUN_008fce60((long)pvVar16 + 0x3518,local_d8);
      FUN_00afbc24((long)param_1 + 0x408,pvVar16,0);
    }
    FUN_00afbb20((long)param_1 + 0x408,pvVar16);
    uVar8 = FUN_00f048a4("EVENT_CTA_BUTTON");
    lVar10 = (long)pvVar16 + 8;
    local_b0 = FUN_00ae21c0;
    local_a0 = (long *)0x0;
    uStack_98 = 0;
    pvStack_a8 = param_1;
    local_90 = pvVar16;
    local_88._0_4_ = uVar8;
    FUN_009693a0(lVar10,&local_b0);
    local_88._0_4_ = FUN_00f048a4("EVENT_CANCEL_LEAVE");
    local_b0 = FUN_00ae21c8;
    local_a0 = (long *)0x0;
    uStack_98 = 0;
    pvStack_a8 = param_1;
    local_90 = pvVar16;
    FUN_009693a0(lVar10,&local_b0);
    uVar8 = FUN_00f048a4("EVENT_LEAVE_APP");
    local_88 = (void *)CONCAT44(local_88._4_4_,uVar8);
    local_b0 = thunk_FUN_00ae2834;
    local_a0 = (long *)0x0;
    uStack_98 = 0;
    pvStack_a8 = param_1;
    local_90 = pvVar16;
    FUN_009693a0(lVar10,&local_b0);
    if ((local_d8[0] & 1) != 0) {
      operator_delete(local_c8);
    }
  }
  else {
    local_b0 = (code *)0x1bf0a41;
    local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
    pvStack_a8 = (void *)0x7;
    plVar13 = (long *)FUN_008feca4(param_2,&local_b0);
    if (((int)plVar13[2] != 4) || ((int)plVar13[1] == 0)) goto LAB_00adf58c;
    local_17c = 1;
    pcVar21 = (char *)((ulong)local_f0 | 1);
    uVar9 = 0;
    do {
      plVar27 = (long *)(*plVar13 + uVar9 * 0x18);
      lVar10 = FUN_008fd190(plVar27,"type");
      if (*plVar27 + (ulong)*(uint *)(plVar27 + 1) * 0x30 == lVar10) {
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = (code *)0x1e4cd21;
        pvStack_a8 = (void *)0x4;
        lVar10 = FUN_008feca4(plVar27,&local_b0);
        puVar14 = (undefined8 *)&DAT_01e277f2;
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) != 0) {
          local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
          local_b0 = (code *)0x1e4cd21;
          pvStack_a8 = (void *)0x4;
          puVar14 = (undefined8 *)FUN_008feca4(plVar27,&local_b0);
          if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
            puVar14 = (undefined8 *)*puVar14;
          }
        }
      }
      FUN_008fa54c(local_d8,puVar14);
      plVar27 = (long *)(*plVar13 + uVar9 * 0x18);
      lVar10 = FUN_008fd190(plVar27,"key");
      if (*plVar27 + (ulong)*(uint *)(plVar27 + 1) * 0x30 == lVar10) {
        puVar14 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
        local_b0 = (code *)0x1e454bb;
        pvStack_a8 = (void *)0x3;
        lVar10 = FUN_008feca4(plVar27,&local_b0);
        puVar14 = (undefined8 *)&DAT_01e277f2;
        if ((*(byte *)(lVar10 + 0x12) >> 4 & 1) != 0) {
          local_a0 = (long *)CONCAT44(local_a0._4_4_,0x100005);
          local_b0 = (code *)0x1e454bb;
          pvStack_a8 = (void *)0x3;
          puVar14 = (undefined8 *)FUN_008feca4(plVar27,&local_b0);
          if ((*(byte *)((long)puVar14 + 0x12) >> 6 & 1) == 0) {
            puVar14 = (undefined8 *)*puVar14;
          }
        }
      }
      FUN_008fa54c(local_f0,puVar14);
      bVar4 = DAT_0320ffa8;
      sVar2 = (ulong)(local_d8[0] >> 1);
      if ((local_d8[0] & 1) != 0) {
        sVar2 = local_d0;
      }
      sVar25 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar25 = DAT_0320ffb0;
      }
      if (sVar2 == sVar25) {
        pcVar24 = (char *)((ulong)local_d8 | 1);
        if ((local_d8[0] & 1) != 0) {
          pcVar24 = local_c8;
        }
        pcVar19 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          pcVar19 = &DAT_0320ffa9;
        }
        if ((local_d8[0] & 1) == 0) {
          if (sVar2 != 0) {
            lVar10 = -(ulong)(local_d8[0] >> 1);
            pcVar24 = (char *)((ulong)local_d8 | 1);
            do {
              if (*pcVar24 != *pcVar19) goto LAB_00adf3a4;
              pcVar24 = pcVar24 + 1;
              lVar10 = lVar10 + 1;
              pcVar19 = pcVar19 + 1;
            } while (lVar10 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar7 = memcmp(pcVar24,pcVar19,sVar2), iVar7 != 0))
        goto LAB_00adf3a4;
      }
      else {
LAB_00adf3a4:
        sVar2 = (ulong)(local_f0[0] >> 1);
        if ((local_f0[0] & 1) != 0) {
          sVar2 = local_e8;
        }
        if (sVar2 == sVar25) {
          pcVar24 = pcVar21;
          if ((local_f0[0] & 1) != 0) {
            pcVar24 = local_e0;
          }
          pcVar19 = DAT_0320ffb8;
          if ((bVar4 & 1) == 0) {
            pcVar19 = &DAT_0320ffa9;
          }
          if ((local_f0[0] & 1) == 0) {
            if (sVar25 != 0) {
              lVar10 = -(ulong)(local_f0[0] >> 1);
              pcVar24 = pcVar21;
              do {
                if (*pcVar24 != *pcVar19) goto LAB_00adf420;
                pcVar24 = pcVar24 + 1;
                lVar10 = lVar10 + 1;
                pcVar19 = pcVar19 + 1;
              } while (lVar10 != 0);
            }
          }
          else if ((sVar25 != 0) && (iVar7 = memcmp(pcVar24,pcVar19,sVar25), iVar7 != 0))
          goto LAB_00adf420;
        }
        else {
LAB_00adf420:
          uStack_98 = 0;
          local_a0 = (long *)0x0;
          local_88 = (void *)0x0;
          local_90 = (void *)0x0;
          pvStack_a8 = (void *)0x0;
          local_b0 = (code *)0x0;
          FUN_008fce60(&local_b0,local_d8);
          FUN_008fce60(&uStack_98,local_f0);
          FUN_00ae2124(&local_c0,&local_b0);
          sVar25 = (size_t)(local_d8[0] >> 1);
          sVar2 = sVar25;
          if ((local_d8[0] & 1) != 0) {
            sVar2 = local_d0;
          }
          if (sVar2 == 4) {
            iVar7 = FUN_0090d610(local_d8,0,0xffffffffffffffff,"hero",4);
            if (iVar7 != 0) {
              sVar25 = (size_t)(local_d8[0] >> 1);
              goto LAB_00adf4a8;
            }
            uVar15 = FUN_009580b8();
            pcVar24 = pcVar21;
            if ((local_f0[0] & 1) != 0) {
              pcVar24 = local_e0;
            }
            uVar6 = FUN_00961804(uVar15,pcVar24,1);
LAB_00adf510:
            uVar6 = local_17c & uVar6;
          }
          else {
LAB_00adf4a8:
            if ((local_d8[0] & 1) != 0) {
              sVar25 = local_d0;
            }
            uVar6 = 0;
            if (sVar25 == 4) {
              iVar7 = FUN_0090d610(local_d8,0,0xffffffffffffffff,&DAT_01b9230f,4);
              uVar6 = 0;
              if (iVar7 == 0) {
                uVar15 = FUN_009580b8();
                uVar6 = FUN_00961744(uVar15,local_f0);
                goto LAB_00adf510;
              }
            }
          }
          if ((uStack_98 & 1) != 0) {
            operator_delete(local_88);
          }
          local_17c = uVar6;
          if (((ulong)local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
        }
      }
      if ((local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
      if ((local_d8[0] & 1) != 0) {
        operator_delete(local_c8);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(plVar13 + 1));
    if (local_17c == 0) goto LAB_00adf58c;
  }
  FUN_00ae2d9c(&local_c0,1);
LAB_00ae0aac:
  if (*(long *)(lVar3 + 0x28) != lVar20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

