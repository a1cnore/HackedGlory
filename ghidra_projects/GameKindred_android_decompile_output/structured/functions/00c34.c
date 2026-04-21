// functions/00c34 — 19 functions
#include "libGameKindred.h"




void FUN_00c34110(long param_1,byte *param_2,ulong param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  byte *__s2;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  
  bVar2 = *param_2;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n != sVar1) {
LAB_00c341bc:
    lVar4 = param_1 + 0x6e0;
    FUN_00f0e628(lVar4);
    pbVar5 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      pbVar5 = *(byte **)(param_2 + 0x10);
    }
    FUN_00a9bbc4(lVar4,pbVar5);
    uVar6 = 0x3f800000;
    if ((param_3 & 1) == 0) {
      uVar6 = 0;
    }
    FUN_00f0e6bc(uVar6,lVar4);
    FUN_00c33b8c(param_1);
    return;
  }
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar5 = param_2 + 1;
  }
  __s2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    __s2 = &DAT_0320ffa9;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      lVar4 = -(ulong)(bVar2 >> 1);
      pbVar5 = param_2;
      do {
        pbVar5 = pbVar5 + 1;
        if (*pbVar5 != *__s2) goto LAB_00c341bc;
        lVar4 = lVar4 + 1;
        __s2 = __s2 + 1;
      } while (lVar4 != 0);
    }
  }
  else if ((__n != 0) && (iVar3 = memcmp(pbVar5,__s2,__n), iVar3 != 0)) goto LAB_00c341bc;
  FUN_00f0e628(param_1 + 0x6e0);
  return;
}




void FUN_00c34234(long param_1)

{
  FUN_00f0e628(param_1 + 0x6e0);
  return;
}




void FUN_00c3423c(long param_1,undefined1 param_2)

{
  int iVar1;
  
  if ((DAT_0313b640 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0313b640);
    if (iVar1 != 0) {
      FUN_00e70510(&DAT_0313b630);
      __cxa_atexit(FUN_0090e338,&DAT_0313b630,&PTR_LOOP_02be3000);
      __cxa_guard_release(&DAT_0313b640);
    }
  }
  FUN_00e70e18(&DAT_0313b630,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0xd98,&DAT_0313b630);
  FUN_00c33b8c(param_1);
  return;
}




void FUN_00c342f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x4bd0) = param_2;
  FUN_00f023ec(param_1 + 0x248,param_2,1);
  FUN_00c33b8c(param_1);
  return;
}




void FUN_00c34320(long param_1)

{
  *(undefined8 *)(param_1 + 0x4bd0) = 0;
  return;
}




void FUN_00c34328(long param_1,undefined4 param_2)

{
  size_t __n;
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined **ppuVar8;
  long lVar9;
  char *pcVar10;
  byte bVar11;
  byte local_a0 [16];
  void *local_90;
  ulong local_88;
  size_t local_80;
  char *local_78;
  ulong local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = 0;
  local_68 = 0;
  local_60 = (char *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (char *)0x0;
  switch(param_2) {
  case 0:
    pcVar7 = "lobby_position_captain";
    break;
  case 1:
    pcVar7 = "lobby_position_jungle";
    break;
  case 2:
    pcVar7 = "lobby_position_top";
    break;
  case 3:
    pcVar7 = "lobby_position_middle";
    break;
  case 4:
    pcVar7 = "lobby_position_bottom";
    break;
  case 5:
    pcVar7 = "lobby_position_carry";
    break;
  case 6:
    FUN_008fa54c(local_a0,"draft_shrug_emoji");
    FUN_008fce60(&local_70,local_a0);
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    ppuVar8 = &PTR_s_build___MenuDraftPartsCommon_tga_02be3618;
    goto LAB_00c3441c;
  default:
    FUN_008fce60(&local_70,&DAT_0320ffa8);
    FUN_008fce60(&local_88,&DAT_0320ffa8);
    goto LAB_00c34444;
  }
  FUN_008fa54c(local_a0,pcVar7);
  FUN_008fce60(&local_70,local_a0);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  ppuVar8 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
LAB_00c3441c:
  FUN_008fa54c(local_a0,*ppuVar8);
  FUN_008fce60(&local_88,local_a0);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
LAB_00c34444:
  bVar4 = DAT_0320ffa8;
  sVar1 = (ulong)((byte)local_70 >> 1);
  if ((local_70 & 1) != 0) {
    sVar1 = local_68;
  }
  bVar11 = (byte)local_70 & 1;
  __n = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    __n = DAT_0320ffb0;
  }
  if (sVar1 == __n) {
    pcVar7 = (char *)((ulong)&local_70 | 1);
    pcVar10 = pcVar7;
    if ((local_70 & 1) != 0) {
      pcVar10 = local_60;
    }
    pcVar6 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar6 = &DAT_0320ffa9;
    }
    if ((local_70 & 1) != 0) {
      pcVar7 = local_60;
      if ((sVar1 == 0) || (iVar5 = memcmp(pcVar10,pcVar6,sVar1), pcVar7 = local_60, iVar5 == 0))
      goto LAB_00c345bc;
      goto LAB_00c344e0;
    }
    if (sVar1 != 0) {
      lVar9 = -(ulong)((byte)local_70 >> 1);
      do {
        if (*pcVar7 != *pcVar6) goto LAB_00c344e0;
        pcVar7 = pcVar7 + 1;
        lVar9 = lVar9 + 1;
        pcVar6 = pcVar6 + 1;
      } while (lVar9 != 0);
    }
  }
  else {
LAB_00c344e0:
    uVar3 = local_88 >> 1 & 0x7f;
    sVar1 = uVar3;
    if ((local_88 & 1) != 0) {
      sVar1 = local_80;
    }
    if (sVar1 == __n) {
      pcVar7 = (char *)((ulong)&local_88 | 1);
      pcVar10 = pcVar7;
      if ((local_88 & 1) != 0) {
        pcVar10 = local_78;
      }
      pcVar6 = DAT_0320ffb8;
      if ((bVar4 & 1) == 0) {
        pcVar6 = &DAT_0320ffa9;
      }
      if ((local_88 & 1) == 0) {
        if (__n != 0) {
          lVar9 = -uVar3;
          pcVar10 = pcVar7;
          do {
            if (*pcVar10 != *pcVar6) goto LAB_00c34558;
            pcVar10 = pcVar10 + 1;
            lVar9 = lVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (lVar9 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(pcVar10,pcVar6,__n), iVar5 != 0)) goto LAB_00c34558;
    }
    else {
      pcVar7 = (char *)((ulong)&local_88 | 1);
LAB_00c34558:
      FUN_00f0e628(param_1 + 0xa88);
      if ((local_88 & 1) != 0) {
        pcVar7 = local_78;
      }
      FUN_00f0e540(param_1 + 0xa88,pcVar7);
      bVar11 = (byte)local_70 & 1;
    }
    pcVar7 = local_60;
    if (bVar11 != 0) goto LAB_00c345bc;
  }
  pcVar7 = (char *)((ulong)&local_70 | 1);
LAB_00c345bc:
  FUN_00f0e578(param_1 + 0xa88,pcVar7);
  *(undefined4 *)(param_1 + 0x4bcc) = param_2;
  FUN_00c33b8c(param_1);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c34658(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xe1c) =
       *(uint *)(param_1 + 0xe1c) & 0xfffffff8 |
       *(uint *)(param_1 + 0xe1c) & 3 | (~param_2 & 1) << 2;
  *(uint *)(param_1 + 0xf4c) =
       *(uint *)(param_1 + 0xf4c) & 0xfffffff8 |
       *(uint *)(param_1 + 0xf4c) & 3 | (~param_2 & 1) << 2;
  return;
}




void FUN_00c3467c(long param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  char *pcVar3;
  byte local_68 [16];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  if (param_2 == 2) {
    pcVar3 = "lobby_build_utility";
  }
  else if (param_2 == 1) {
    pcVar3 = "lobby_build_crystal";
  }
  else {
    if (param_2 != 0) {
      FUN_008fce60(local_50,&DAT_0320ffa8);
      goto LAB_00c34718;
    }
    pcVar3 = "lobby_build_weapon";
  }
  FUN_008fa54c(local_68,pcVar3);
  FUN_008fce60(local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
LAB_00c34718:
  *(int *)(param_1 + 0x4bc8) = param_2;
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00f0e578(param_1 + 0xb78,pvVar1);
  FUN_00c33b8c(param_1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c34780(long param_1)

{
  FUN_00c96770(param_1 + 0x1378,4);
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) & 0xfffffffb;
  return;
}




void FUN_00c347b8(long param_1)

{
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) | 4;
  FUN_00c96770(param_1 + 0x1378,1);
  return;
}




void FUN_00c347d8(long param_1)

{
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) | 4;
  FUN_00c96770(param_1 + 0x1378,2);
  return;
}




void FUN_00c347f8(long param_1)

{
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) | 4;
  FUN_00c96770(param_1 + 0x1378,3);
  return;
}




void FUN_00c34818(long param_1)

{
  *(uint *)(param_1 + 0x13fc) = *(uint *)(param_1 + 0x13fc) | 4;
  FUN_00c96770(param_1 + 0x1378,0);
  return;
}




void FUN_00c34838(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_78;
  float fStack_74;
  int iStack_70;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00967388(&local_6c,0,&iStack_70,0);
  piVar1 = &iStack_70;
  if (*(char *)(param_3 + 0x4bd9) != '\0') {
    piVar1 = &local_6c;
  }
  iVar3 = *piVar1;
  FUN_00f13f08(param_1,param_2,param_3 + 0x248);
  FUN_00f13f08(param_1,param_2,param_3 + 0x500);
  FUN_00f13f08(param_1,param_2,param_3 + 0x410);
  FUN_00f13f08(param_1,param_2,param_3 + 0x338);
  fVar4 = (float)param_2 + -16.0;
  local_78 = fVar4;
  fStack_74 = fVar4;
  FUN_00f13f18(param_3 + 2000,&local_78);
  local_78 = fVar4;
  fStack_74 = fVar4;
  FUN_00f13f18(param_3 + 0x6e0,&local_78);
  local_78 = fVar4 + 12.0;
  fStack_74 = local_78;
  FUN_00f13f18(param_3 + 0x8a8,&local_78);
  local_78 = fVar4 / 2.5;
  fStack_74 = local_78;
  FUN_00f13f18(param_3 + 0xec8,&local_78);
  fVar5 = fVar4 + 22.0;
  local_78 = fVar5;
  fStack_74 = fVar5;
  FUN_00f13f18(param_3 + 0x1198,&local_78);
  local_78 = fVar5;
  fStack_74 = fVar5;
  FUN_00f13f18(param_3 + 0x1250,&local_78);
  FUN_00f0db64(((float)param_1 - fVar4) * 0.7 - (float)iVar3,0,0x3f800000,param_3 + 0xc68);
  iVar3 = (int)((float)param_2 * 0.5);
  FUN_00f0e74c(param_3 + 0xb78,iVar3);
  FUN_00f0e74c(param_3 + 0xa88,iVar3);
  FUN_00c33b8c(param_3);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c349f0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FUN_00a4c67c(param_2 + 0x998,1);
  FUN_00f0e548(plVar3,PTR_s_build___MenuDraftPartsCommon_Ico_02be3620,"draft_positions_btn");
  local_80 = 0x3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_80);
  if ((*(uint *)((long)plVar3 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)plVar3 + 0x84) = *(uint *)((long)plVar3 + 0x84) & 0xffff807f;
    FUN_0091ada4(plVar3);
  }
  uVar4 = FUN_00efed6c(param_1);
  uVar5 = FUN_00eff63c(0x3f800000,0x3f800000,0,0);
  uVar6 = FUN_00efee28(0x3f666666,0x3d4ccccd,0);
  uVar7 = FUN_00eff63c(0x400ccccd,0x400ccccd,0x3f400000,FUN_0091aa80);
  uVar8 = FUN_00efee28(0,0x3f666666,FUN_009a7608);
  lVar2 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar10);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar10,uVar7,uVar8,0);
  lVar2 = DAT_03210d00;
  uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar9 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
    if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efd208(puVar11);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar11,uVar4,uVar5,uVar6,puVar10,0);
  FUN_00efd3bc(puVar11);
  FUN_00f022a0(plVar3,puVar11);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c34c8c(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)((long)param_1 + 0x4bda) == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)(**(code **)(*param_1 + 0x48))(param_1);
    fVar2 = fVar2 * 0.09;
  }
  FUN_00f01980(param_1 + 0x49);
  if (*(float *)(param_1 + 0x51) != fVar2) {
    fVar3 = -fVar2;
    if (*(char *)((long)param_1 + 0x4bd9) != '\0') {
      fVar3 = fVar2;
    }
    uVar1 = FUN_00efef08(fVar3,*(undefined4 *)((long)param_1 + 0x28c),0x3e4ccccd,0);
    FUN_00efcb24(uVar1,FUN_00a269a4);
    FUN_00f022a0(param_1 + 0x49,uVar1);
    return;
  }
  return;
}




void FUN_00c34d48(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00967388(&local_5c,0,0,0);
  FUN_00f07940(0xc1000000,0,param_1 + 2000,5,param_1 + 0x248,5);
  FUN_00f07940(0xc0c00000,0,param_1 + 0xec8,8,param_1 + 2000,7);
  FUN_00f07940((float)local_5c + 100.0,0x428a0000,param_1 + 0x998,8,param_1,0);
  lVar1 = param_1 + 0xc68;
  FUN_00f07940((float)local_5c + 48.0,0xc1000000,lVar1,3,param_1,3);
  FUN_00f07940((float)local_5c + 48.0,0x41000000,param_1 + 0xa88,0,param_1,0);
  uVar3 = 0;
  if ((*(uint *)(param_1 + 0xa1c) & 4) != 0) {
    uVar3 = 0x42c80000;
  }
  FUN_00f07940(uVar3,0,param_1 + 0xb78,0,param_1 + 0xa88,1);
  FUN_00f07940(0,0,param_1 + 0x5f0,1,param_1 + 0x6e0,0);
  FUN_00f07940(0xc1000000,0,param_1 + 0xfb8,5,lVar1,7);
  FUN_00f07940(0x41000000,0,param_1 + 0x10a8,7,lVar1,5);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c34f04(long param_1)

{
  long lVar1;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00967388(0,0,&local_3c,0);
  FUN_00f07940(0x41000000,0,param_1 + 2000,7,param_1 + 0x248,7);
  FUN_00f07940(0xc0c00000,0,param_1 + 0xec8,8,param_1 + 2000,5);
  FUN_00f07940(-8.0 - (float)local_3c,param_1 + 0xc68,2,param_1,2);
  FUN_00f07940(0,0,param_1 + 0x5f0,0,param_1 + 0x6e0,1);
  *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) & 0xfffffffb;
  *(uint *)(param_1 + 0xbfc) = *(uint *)(param_1 + 0xbfc) & 0xfffffffb;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c34ff8(long param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00ecf844();
  if (iVar2 == 0) {
    if ((*(uint *)(param_1 + 0x3bc) & 0x7f80) == 0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x3bc) & 0xffff807f;
  }
  else {
    if ((iVar2 != 1) || ((*(uint *)(param_1 + 0x3bc) & 0x7f80) == 0x3f80)) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x3bc) & 0xffff807f | 0x3f80;
  }
  *(uint *)(param_1 + 0x3bc) = uVar1;
  FUN_0091ada4(param_1 + 0x338);
  return;
}

