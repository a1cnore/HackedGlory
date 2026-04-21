// functions/00b99 — 12 functions
#include "libGameKindred.h"




void FUN_00b99220(long param_1)

{
  FUN_00b98d78(param_1 + -0x398);
  return;
}




undefined8 FUN_00b99228(long *param_1,long param_2,long param_3)

{
  void *pvVar1;
  char *__s1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  void *pvVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  byte *pbVar16;
  void *pvVar17;
  byte *pbVar18;
  char *__s2;
  long lVar19;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  void *local_180;
  ulong local_178;
  void *local_170;
  char *local_168;
  long local_160;
  ulong local_158;
  void *local_150;
  void *local_148;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  local_160 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_00b998cc;
  lVar11 = FUN_00b97198(param_1 + 0x24b0,&local_160);
  if (lVar11 == 0) {
    uVar12 = FUN_00e6ce7c("MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE",0);
    thunk_FUN_00e7051c(&local_178,uVar12);
    FUN_00e70510(&local_188);
    FUN_008fa54c(&local_158,param_2);
    (**(code **)(*param_1 + 0x1d8))(param_1,&local_158,&local_188);
    if ((local_158 & 1) != 0) {
      operator_delete(local_148);
    }
    FUN_00e705c8(&local_158,"[PLAYER_HANDLE]");
    FUN_00e71248(&local_178,0,&local_158,&local_188);
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
      local_158 = 0;
      local_150 = (void *)0x0;
    }
    lVar11 = FUN_009580b8();
    if (*(uint *)(lVar11 + 0x5260) != 0) {
      lVar19 = 0x18;
      uVar13 = 1;
      do {
        uVar14 = FUN_00e70b34(*(long *)(lVar11 + 0x5268) + lVar19,&local_188);
        if ((uVar14 & 1) != 0) break;
        lVar19 = lVar19 + 0x108;
        bVar8 = uVar13 < *(uint *)(lVar11 + 0x5260);
        uVar13 = uVar13 + 1;
      } while (bVar8);
      if ((uVar14 & 1) != 0) {
        pbVar16 = (byte *)(param_1 + 0x24bc);
        uVar9 = FUN_00b943e0(param_1,pbVar16);
        if (uVar9 == 0xffffffff) {
          uVar9 = FUN_00b96740(param_1,pbVar16);
          FUN_00b92674(param_1);
        }
        lVar11 = FUN_00e85318(0);
        FUN_00e6c2cc((double)lVar11,&local_158,0x100);
        FUN_00b96b18(param_1[0x24af] + (ulong)uVar9 * 0x50,&local_178,&DAT_01e277f2,&local_158,0,1);
        bVar4 = *pbVar16;
        bVar5 = *(byte *)(param_1 + 0x24b9);
        sVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar2 = param_1[0x24bd];
        }
        sVar3 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          sVar3 = param_1[0x24ba];
        }
        if (sVar2 == sVar3) {
          pvVar17 = (void *)param_1[0x24be];
          pbVar18 = (byte *)param_1[0x24bb];
          if ((bVar4 & 1) == 0) {
            pvVar17 = (void *)((long)param_1 + 0x125e1);
          }
          if ((bVar5 & 1) == 0) {
            pbVar18 = (byte *)((long)param_1 + 0x125c9);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 != 0) {
              lVar11 = -(ulong)(bVar4 >> 1);
              do {
                pbVar16 = pbVar16 + 1;
                if (*pbVar16 != *pbVar18) goto LAB_00b9973c;
                lVar11 = lVar11 + 1;
                pbVar18 = pbVar18 + 1;
              } while (lVar11 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar10 = memcmp(pvVar17,pbVar18,sVar2), iVar10 != 0))
          goto LAB_00b9973c;
          FUN_00e70570(&local_198,&DAT_0320ffa8);
          FUN_00ac1474(param_1 + 0x1be8,&local_178,&local_198,&local_158,0,1);
          if (local_190 != (void *)0x0) {
            operator_delete__(local_190);
            local_198 = 0;
            local_190 = (void *)0x0;
          }
        }
      }
    }
LAB_00b9973c:
    lVar11 = FUN_009580b8();
    if (*(uint *)(lVar11 + 0x5360) != 0) {
      lVar19 = 0x18;
      uVar13 = 1;
      do {
        uVar14 = FUN_00e70b34(*(long *)(lVar11 + 0x5368) + lVar19,&local_188);
        if ((uVar14 & 1) != 0) break;
        lVar19 = lVar19 + 0x38;
        bVar8 = uVar13 < *(uint *)(lVar11 + 0x5360);
        uVar13 = uVar13 + 1;
      } while (bVar8);
      if ((uVar14 & 1) != 0) {
        pbVar16 = (byte *)(param_1 + 0x24bf);
        iVar10 = FUN_00b943e0(param_1,pbVar16);
        if (iVar10 == -1) {
          FUN_00b96740(param_1,pbVar16);
          FUN_00b92674(param_1);
        }
        bVar4 = *pbVar16;
        bVar5 = *(byte *)(param_1 + 0x24b9);
        sVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar2 = param_1[0x24c0];
        }
        sVar3 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          sVar3 = param_1[0x24ba];
        }
        if (sVar2 == sVar3) {
          pvVar17 = (void *)param_1[0x24c1];
          pbVar18 = (byte *)param_1[0x24bb];
          if ((bVar4 & 1) == 0) {
            pvVar17 = (void *)((long)param_1 + 0x125f9);
          }
          if ((bVar5 & 1) == 0) {
            pbVar18 = (byte *)((long)param_1 + 0x125c9);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 != 0) {
              lVar11 = -(ulong)(bVar4 >> 1);
              do {
                pbVar16 = pbVar16 + 1;
                if (*pbVar16 != *pbVar18) goto LAB_00b998ac;
                lVar11 = lVar11 + 1;
                pbVar18 = pbVar18 + 1;
              } while (lVar11 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar10 = memcmp(pvVar17,pbVar18,sVar2), iVar10 != 0))
          goto LAB_00b998ac;
          lVar11 = FUN_00e85318(0);
          FUN_00e6c2cc((double)lVar11,&local_158,0x100);
          FUN_00ac1474(param_1 + 0x1be8,&local_178,&DAT_03210450,&local_158,0,1);
        }
      }
    }
LAB_00b998ac:
    if (local_180 != (void *)0x0) {
      operator_delete__(local_180);
      local_188 = 0;
      local_180 = (void *)0x0;
    }
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    goto LAB_00b998cc;
  }
  FUN_008fcdb8(&local_178);
  uVar12 = FUN_00e6ce7c("MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE",0);
  thunk_FUN_00e7051c(&local_188,uVar12);
  FUN_00e70510(&local_198);
  FUN_008fa54c(&local_158,param_2);
  (**(code **)(*param_1 + 0x1d8))(param_1,&local_158,&local_198);
  if ((local_158 & 1) != 0) {
    operator_delete(local_148);
  }
  uVar13 = FUN_00e70b34(&local_198,&DAT_03210450);
  if ((uVar13 & 1) != 0) {
    FUN_00e705c8(&local_158,&DAT_01baf162);
    FUN_00910394(&local_198,&local_158);
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
      local_158 = 0;
      local_150 = (void *)0x0;
    }
  }
  FUN_00e705c8(&local_158,"[PLAYER_HANDLE]");
  FUN_00e71248(&local_188,0,&local_158,&local_198);
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
    local_158 = 0;
    local_150 = (void *)0x0;
  }
  uVar9 = FUN_00b943e0(param_1,&local_178);
  if (uVar9 == 0xffffffff) {
    uVar9 = FUN_00b96740(param_1,&local_178);
    FUN_00b92674(param_1);
  }
  lVar11 = FUN_00e85318(0);
  FUN_00e6c2cc((double)lVar11,&local_158,0x100);
  FUN_00b96b18(param_1[0x24af] + (ulong)uVar9 * 0x50,&local_188,&DAT_01e277f2,&local_158,0,1);
  bVar4 = *(byte *)(param_1 + 0x24b9);
  pvVar7 = (void *)(local_178 >> 1 & 0x7f);
  pvVar17 = pvVar7;
  if ((local_178 & 1) != 0) {
    pvVar17 = local_170;
  }
  pvVar1 = (void *)(ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    pvVar1 = (void *)param_1[0x24ba];
  }
  if (pvVar17 == pvVar1) {
    __s2 = (char *)param_1[0x24bb];
    pcVar15 = (char *)((ulong)&local_178 | 1);
    __s1 = pcVar15;
    if ((local_178 & 1) != 0) {
      __s1 = local_168;
    }
    if ((bVar4 & 1) == 0) {
      __s2 = (char *)((long)param_1 + 0x125c9);
    }
    if ((local_178 & 1) == 0) {
      if (pvVar17 != (void *)0x0) {
        lVar11 = -(long)pvVar7;
        do {
          if (*pcVar15 != *__s2) goto LAB_00b996b8;
          pcVar15 = pcVar15 + 1;
          lVar11 = lVar11 + 1;
          __s2 = __s2 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((pvVar17 != (void *)0x0) && (iVar10 = memcmp(__s1,__s2,(size_t)pvVar17), iVar10 != 0))
    goto LAB_00b996b8;
    FUN_00e70570(&local_1a8,&DAT_0320ffa8);
    FUN_00ac1474(param_1 + 0x1be8,&local_188,&local_1a8,&local_158,0,1);
    if (local_1a0 != (void *)0x0) {
      operator_delete__(local_1a0);
      local_1a8 = 0;
      local_1a0 = (void *)0x0;
    }
  }
LAB_00b996b8:
  if (local_190 != (void *)0x0) {
    operator_delete__(local_190);
    local_198 = 0;
    local_190 = (void *)0x0;
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
    local_188 = 0;
    local_180 = (void *)0x0;
  }
  if ((local_178 & 1) != 0) {
    operator_delete(local_168);
  }
LAB_00b998cc:
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}




undefined8 FUN_00b99900(long param_1)

{
  FUN_00b99228(param_1 + -0x398);
  return 1;
}




void FUN_00b9991c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5,byte param_6)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027e8d50;
  thunk_FUN_00e7051c(param_1 + 0x17,param_2);
  thunk_FUN_00e7051c(param_1 + 0x19,param_3);
  FUN_008fcdb8(param_1 + 0x1b,param_4);
  *(byte *)(param_1 + 0x1e) = param_5 & 1;
  *(byte *)((long)param_1 + 0xf1) = param_6 & 1;
  return;
}




void FUN_00b9999c(long param_1,undefined8 param_2)

{
  FUN_0099ce88();
  FUN_008fcdb8(param_1 + 0x20,param_2);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x1e;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return;
}




void FUN_00b999dc(uint *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_00ba1954(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0xf8;
  *(undefined ***)(lVar5 + -0xf8) = &PTR_FUN_02825520;
  FUN_00ba1af4(lVar5 + -0xf0,param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined ***)(lVar5 + -0xf8) = &PTR_FUN_028253d8;
  *(undefined8 *)(lVar5 + -0xe0) = uVar2;
  memcpy((void *)(lVar5 + -0xd8),(void *)(param_2 + 0x20),0x68);
  *(undefined ***)(lVar5 + -0xf8) = &PTR_FUN_028284a0;
  uVar2 = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(lVar5 + -0x4b) = *(undefined8 *)(param_2 + 0xad);
  *(undefined8 *)(lVar5 + -0x53) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(lVar5 + -0x58) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(lVar5 + -0x60) = uVar2;
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(undefined ***)(lVar5 + -0xf8) = &PTR_FUN_027e8d50;
  *(undefined8 *)(lVar5 + -0x68) = uVar6;
  *(undefined8 *)(lVar5 + -0x70) = uVar2;
  thunk_FUN_00e7051c(lVar5 + -0x40,param_2 + 0xb8);
  thunk_FUN_00e7051c(lVar5 + -0x30,param_2 + 200);
  FUN_008fcdb8(lVar5 + -0x20,param_2 + 0xd8);
  *(undefined2 *)(lVar5 + -8) = *(undefined2 *)(param_2 + 0xf0);
  return;
}




void FUN_00b99b0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e8d50;
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    operator_delete((void *)param_1[0x1d]);
  }
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1a]);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b99b6c(undefined8 *param_1)

{
  FUN_00abaee8(param_1,0);
  *param_1 = &PTR_FUN_027e8e98;
  FUN_00f0e578(param_1 + 0x9b,"arrow_down");
  *(uint *)((long)param_1 + 0x37c) = *(uint *)((long)param_1 + 0x37c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x46c) = *(uint *)((long)param_1 + 0x46c) & 0xfffffffb;
  FUN_00b09144(0,param_1);
  FUN_00b0914c(param_1,1);
  return;
}




void FUN_00b99bdc(long param_1,ulong param_2)

{
  char *pcVar1;
  
  pcVar1 = "arrow_down";
  if ((param_2 & 1) == 0) {
    pcVar1 = "arrow_right";
  }
  FUN_00f0e578(param_1 + 0x4d8,pcVar1);
  return;
}




void FUN_00b99c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ba0fa4(param_1,param_2,param_5);
  return;
}




void FUN_00b99c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b9fed4(param_1,param_4);
  return;
}




void FUN_00b99c2c(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  size_t __n;
  size_t sVar9;
  byte bVar10;
  char cVar11;
  long lVar12;
  undefined4 uVar13;
  bool bVar14;
  int iVar15;
  ulong uVar16;
  char *__s2;
  long lVar17;
  char *pcVar18;
  uint uVar19;
  void *__s1;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  byte local_d8 [16];
  void *local_c8;
  ulong local_c0;
  size_t local_b8;
  char *local_b0;
  long local_a8;
  
  lVar12 = tpidr_el0;
  local_a8 = *(long *)(lVar12 + 0x28);
  FUN_00b8e860();
  uVar20 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  uVar16 = FUN_0092ea9c();
  DAT_02be9bf8 = DAT_02be3670;
  pfVar5 = (float *)(param_3 + 0x24ca);
  *pfVar5 = 1000.0;
  DAT_0313a260 = 0x433c0000;
  FUN_00f13f08(uVar20,param_2,param_3 + 0x79);
  uVar23 = param_2;
  FUN_00f13f08(uVar20,param_2,param_3 + 0x90);
  fVar22 = (float)uVar23;
  bVar14 = (uVar16 & 1) == 0;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  if (bVar14) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  }
  plVar1 = param_3 + 0xf2;
  plVar2 = param_3 + 0xcc;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (bVar14) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  }
  FUN_00f0d92c(plVar1,*ppuVar7,&DAT_01bee7fa);
  FUN_00f0d92c(plVar2,*ppuVar6,&DAT_01bee7f6);
  FUN_00f0dad0(0x44750000,plVar2,1);
  FUN_00f0d4e0(plVar2);
  plVar3 = param_3 + 0xae;
  FUN_00f13f08(0x447a0000,fVar22 + 10.0,plVar3);
  fVar22 = (float)param_2;
  if ((*(float *)(param_3 + 0xb6) != 0.0) || (*(float *)((long)param_3 + 0x5b4) != fVar22)) {
    *(undefined4 *)(param_3 + 0xb6) = 0;
    *(float *)((long)param_3 + 0x5b4) = fVar22;
    FUN_0091ada4(plVar3);
  }
  local_c0 = 0;
  (**(code **)(param_3[0xae] + 0x28))(plVar3,&local_c0);
  if ((*(float *)(param_3 + 0xd4) != 500.0) || (*(float *)((long)param_3 + 0x6a4) != 5.0)) {
    param_3[0xd4] = 0x40a0000043fa0000;
    FUN_0091ada4(plVar2);
  }
  local_c0 = 0x3f000000;
  (**(code **)(param_3[0xcc] + 0x28))(plVar2,&local_c0);
  fVar21 = DAT_02be366c * 0.5 + DAT_02be366c * 0.5;
  if ((*(float *)(param_3 + 0xfa) != DAT_02be9bf4) || (*(float *)((long)param_3 + 0x7d4) != fVar21))
  {
    *(float *)(param_3 + 0xfa) = DAT_02be9bf4;
    *(float *)((long)param_3 + 0x7d4) = fVar21;
    FUN_0091ada4(plVar1);
  }
  local_c0 = 0x3f00000000000000;
  (**(code **)(param_3[0xf2] + 0x28))(plVar1,&local_c0);
  fVar21 = 1.25;
  if ((uVar16 & 1) == 0) {
    fVar21 = 1.0;
  }
  if ((*(float *)(param_3 + 0x3d9) != fVar21) || (*(float *)((long)param_3 + 0x1ecc) != fVar21)) {
    *(float *)(param_3 + 0x3d9) = fVar21;
    *(float *)((long)param_3 + 0x1ecc) = fVar21;
    FUN_0091ada4(param_3 + 0x3d0);
  }
  if ((*(float *)(param_3 + 0x121) != fVar21) || (*(float *)((long)param_3 + 0x90c) != fVar21)) {
    *(float *)(param_3 + 0x121) = fVar21;
    *(float *)((long)param_3 + 0x90c) = fVar21;
    FUN_0091ada4(param_3 + 0x118);
  }
  FUN_00b9239c(param_3);
  pfVar4 = (float *)((long)param_3 + 0x12654);
  fVar21 = (fVar22 - *pfVar4) - DAT_02be9bf8;
  FUN_00f13f08(uVar20,param_3 + 0x6e2);
  fVar25 = *pfVar5;
  plVar1 = param_3 + 0x7bd;
  FUN_00f13e54(param_3 + 0x6e2);
  fVar21 = (fVar22 - fVar21) - *(float *)((long)param_3 + 0x3484);
  FUN_00f13f08(fVar25,plVar1);
  FUN_00f13e54(plVar1);
  if ((*(float *)(param_3 + 0x7c5) != 0.0) ||
     (*(float *)((long)param_3 + 0x3e2c) != fVar22 - fVar21)) {
    *(undefined4 *)(param_3 + 0x7c5) = 0;
    *(float *)((long)param_3 + 0x3e2c) = fVar22 - fVar21;
    FUN_0091ada4(plVar1);
  }
  plVar1 = param_3 + 0x7f2;
  if ((*(float *)(param_3 + 0x7fa) != 0.0) ||
     (*(float *)((long)param_3 + 0x3fd4) != fVar22 - *pfVar4)) {
    *(undefined4 *)(param_3 + 0x7fa) = 0;
    *(float *)((long)param_3 + 0x3fd4) = fVar22 - *pfVar4;
    FUN_0091ada4(plVar1);
  }
  local_c0 = 0x3f80000000000000;
  (**(code **)(param_3[0x7f2] + 0x28))(plVar1,&local_c0);
  FUN_00f13f08(0x447a0000,0x42a00000,plVar1);
  uVar19 = *(uint *)((long)param_3 + 0x4014);
  if ((uVar19 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_3 + 0x4014) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x3900;
    FUN_0091ada4(plVar1);
  }
  plVar1 = param_3 + 0x810;
  if ((*(float *)(param_3 + 0x818) != 0.0) ||
     (*(float *)((long)param_3 + 0x40c4) != fVar22 - *pfVar4)) {
    *(float *)(param_3 + 0x818) = 0.0;
    *(float *)((long)param_3 + 0x40c4) = fVar22 - *pfVar4;
    FUN_0091ada4(plVar1);
  }
  FUN_00f13f08(0x447a0000,0x40800000,plVar1);
  uVar19 = *(uint *)((long)param_3 + 0x4104);
  if ((uVar19 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_3 + 0x4104) = uVar19 & 0xffff8000 | uVar19 & 0x7f | 0x1300;
    FUN_0091ada4(plVar1);
  }
  fVar21 = DAT_02be9bf8;
  if ((*(float *)(param_3 + 0x690) != 0.0) || (*(float *)((long)param_3 + 0x3484) != DAT_02be9bf8))
  {
    *(undefined4 *)(param_3 + 0x690) = 0;
    *(float *)((long)param_3 + 0x3484) = fVar21;
    FUN_0091ada4(param_3 + 0x688);
  }
  FUN_00f13f08(0x447a0000,fVar22 - DAT_02be9bf8,param_3 + 0x688);
  bVar14 = (uVar16 & 1) == 0;
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if (bVar14) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70;
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  }
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20;
  if (bVar14) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  FUN_00f0d378(param_3 + 0x6bc,*ppuVar7);
  FUN_00f0d378(param_3 + 0x82e,*ppuVar8);
  FUN_00f0d378(param_3 + 0x854,*ppuVar6);
  fVar21 = DAT_02be3668;
  if ((uVar16 & 1) == 0) {
    fVar21 = 1.0;
  }
  if ((*(float *)(param_3 + 0x926) != fVar21) || (*(float *)((long)param_3 + 0x4934) != fVar21)) {
    *(float *)(param_3 + 0x926) = fVar21;
    *(float *)((long)param_3 + 0x4934) = fVar21;
    FUN_0091ada4(param_3 + 0x91d);
    fVar21 = DAT_02be3668;
    if ((uVar16 & 1) == 0) {
      fVar21 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0xa88) != fVar21) || (*(float *)((long)param_3 + 0x5444) != fVar21)) {
    *(float *)(param_3 + 0xa88) = fVar21;
    *(float *)((long)param_3 + 0x5444) = fVar21;
    FUN_0091ada4(param_3 + 0xa7f);
    fVar21 = DAT_02be3668;
    if ((uVar16 & 1) == 0) {
      fVar21 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0xbea) != fVar21) || (*(float *)((long)param_3 + 0x5f54) != fVar21)) {
    *(float *)(param_3 + 0xbea) = fVar21;
    *(float *)((long)param_3 + 0x5f54) = fVar21;
    FUN_0091ada4(param_3 + 0xbe1);
    fVar21 = DAT_02be3668;
    if ((uVar16 & 1) == 0) {
      fVar21 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0xd4c) != fVar21) || (*(float *)((long)param_3 + 0x6a64) != fVar21)) {
    *(float *)(param_3 + 0xd4c) = fVar21;
    *(float *)((long)param_3 + 0x6a64) = fVar21;
    FUN_0091ada4(param_3 + 0xd43);
    fVar21 = DAT_02be3668;
    if ((uVar16 & 1) == 0) {
      fVar21 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0x1172) != fVar21) || (*(float *)((long)param_3 + 0x8b94) != fVar21)) {
    *(float *)(param_3 + 0x1172) = fVar21;
    *(float *)((long)param_3 + 0x8b94) = fVar21;
    FUN_0091ada4(param_3 + 0x1169);
    fVar21 = DAT_02be3668;
    if ((uVar16 & 1) == 0) {
      fVar21 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0xeae) != fVar21) || (*(float *)((long)param_3 + 0x7574) != fVar21)) {
    *(float *)(param_3 + 0xeae) = fVar21;
    *(float *)((long)param_3 + 0x7574) = fVar21;
    FUN_0091ada4(param_3 + 0xea5);
    fVar21 = DAT_02be3668;
    if ((uVar16 & 1) == 0) {
      fVar21 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0x1010) != fVar21) || (*(float *)((long)param_3 + 0x8084) != fVar21)) {
    *(float *)(param_3 + 0x1010) = fVar21;
    *(float *)((long)param_3 + 0x8084) = fVar21;
    FUN_0091ada4(param_3 + 0x1007);
  }
  fVar21 = *pfVar5;
  plVar1 = param_3 + 0x131b;
  fVar25 = (float)uVar20 - fVar21;
  if ((*(float *)(param_3 + 0x1323) != fVar21) || (*(float *)((long)param_3 + 0x991c) != 0.0)) {
    *(float *)(param_3 + 0x1323) = fVar21;
    *(float *)((long)param_3 + 0x991c) = 0.0;
    FUN_0091ada4(plVar1);
  }
  local_c0 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c0);
  FUN_00f13f08(fVar25,param_2,param_3 + 0x132c);
  bVar14 = (uVar16 & 1) == 0;
  fVar21 = 1.5;
  if (bVar14) {
    fVar21 = 1.15;
  }
  fVar24 = DAT_02be9bf8 + 88.0;
  plVar1 = param_3 + 0x1379;
  uVar13 = 0x43898000;
  if (bVar14) {
    uVar13 = 0x43d48000;
  }
  fVar27 = fVar21 * 48.0;
  FUN_00f0db64(uVar13,0,0x3f800000,plVar1);
  if ((*(float *)(param_3 + 0x1381) != 36.0) || (*(float *)((long)param_3 + 0x9c0c) != fVar24)) {
    *(float *)(param_3 + 0x1381) = 36.0;
    *(float *)((long)param_3 + 0x9c0c) = fVar24;
    FUN_0091ada4(plVar1);
  }
  local_c0 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c0);
  fVar28 = fVar25 + -36.0;
  plVar1 = param_3 + 0x139f;
  fVar26 = fVar28 + fVar27 * -0.5;
  if ((*(float *)(param_3 + 0x13a8) != fVar21) || (*(float *)((long)param_3 + 0x9d44) != fVar21)) {
    *(float *)(param_3 + 0x13a8) = fVar21;
    *(float *)((long)param_3 + 0x9d44) = fVar21;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_3 + 0x13a7) != fVar26) || (*(float *)((long)param_3 + 0x9d3c) != fVar24)) {
    *(float *)(param_3 + 0x13a7) = fVar26;
    *(float *)((long)param_3 + 0x9d3c) = fVar24;
    FUN_0091ada4(plVar1);
  }
  local_c0 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c0);
  plVar1 = param_3 + 0x145e;
  fVar26 = fVar26 - (fVar27 + fVar27);
  if ((*(float *)(param_3 + 0x1467) != fVar21) || (*(float *)((long)param_3 + 0xa33c) != fVar21)) {
    *(float *)(param_3 + 0x1467) = fVar21;
    *(float *)((long)param_3 + 0xa33c) = fVar21;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_3 + 0x1466) != fVar26) || (*(float *)((long)param_3 + 0xa334) != fVar24)) {
    *(float *)(param_3 + 0x1466) = fVar26;
    *(float *)((long)param_3 + 0xa334) = fVar24;
    FUN_0091ada4(plVar1);
  }
  local_c0 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c0);
  plVar1 = param_3 + 0x15dc;
  fVar26 = fVar26 - (fVar27 + fVar27);
  if ((*(float *)(param_3 + 0x15e5) != fVar21) || (*(float *)((long)param_3 + 0xaf2c) != fVar21)) {
    *(float *)(param_3 + 0x15e5) = fVar21;
    *(float *)((long)param_3 + 0xaf2c) = fVar21;
    FUN_0091ada4(plVar1);
  }
  pfVar5 = (float *)(param_3 + 0x15e4);
  pfVar4 = (float *)((long)param_3 + 0xaf24);
  if ((*pfVar5 != fVar26) || (*pfVar4 != fVar24)) {
    *pfVar5 = fVar26;
    *pfVar4 = fVar24;
    FUN_0091ada4(plVar1);
  }
  local_c0 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c0);
  if ((*(byte *)((long)param_3 + 0xaf64) >> 2 & 1) == 0) {
    plVar1 = param_3 + 0x151d;
    if ((*(float *)(param_3 + 0x1525) != fVar26) || (*(float *)((long)param_3 + 0xa92c) != fVar24))
    {
      *(float *)(param_3 + 0x1525) = fVar26;
      *(float *)((long)param_3 + 0xa92c) = fVar24;
      FUN_0091ada4(plVar1);
    }
    local_c0 = 0x3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_c0);
  }
  else {
    if ((*pfVar5 != fVar26) || (*pfVar4 != fVar24)) {
      *pfVar5 = fVar26;
      *pfVar4 = fVar24;
      FUN_0091ada4(plVar1);
    }
    local_c0 = 0x3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_c0);
  }
  if ((*(float *)(param_3 + 0x1526) != fVar21) || (*(float *)((long)param_3 + 0xa934) != fVar21)) {
    *(float *)(param_3 + 0x1526) = fVar21;
    *(float *)((long)param_3 + 0xa934) = fVar21;
    FUN_0091ada4(param_3 + 0x151d);
  }
  plVar1 = param_3 + 0x16c1;
  fVar21 = (float)FUN_00aca658(plVar1);
  fVar21 = fVar28 + fVar21 * -0.5;
  if ((*(float *)(param_3 + 0x16c9) != fVar21) || (*(float *)((long)param_3 + 0xb64c) != fVar24)) {
    *(float *)(param_3 + 0x16c9) = fVar21;
    *(float *)((long)param_3 + 0xb64c) = fVar24;
    FUN_0091ada4(plVar1);
  }
  local_c0 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c0);
  lVar17 = param_3[0x2416];
  if (lVar17 == 0) {
    *(uint *)((long)param_3 + 0x9d7c) = *(uint *)((long)param_3 + 0x9d7c) & 0xfffffffb;
    *(uint *)((long)param_3 + 0xa374) = *(uint *)((long)param_3 + 0xa374) & 0xfffffffb;
    *(uint *)((long)param_3 + 0xb55c) = *(uint *)((long)param_3 + 0xb55c) & 0xfffffffb;
    *(uint *)((long)param_3 + 0xb68c) = *(uint *)((long)param_3 + 0xb68c) & 0xfffffffb;
    goto LAB_00b9a978;
  }
  cVar11 = *(char *)(lVar17 + 0x3dc2);
  uVar19 = (uint)(cVar11 == '\0');
  *(uint *)((long)param_3 + 0x9d7c) =
       *(uint *)((long)param_3 + 0x9d7c) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x9d7c) & 3 | uVar19 << 2;
  *(uint *)((long)param_3 + 0xa374) =
       *(uint *)((long)param_3 + 0xa374) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0xa374) & 3 | uVar19 << 2;
  *(uint *)((long)param_3 + 0xb55c) =
       *(uint *)((long)param_3 + 0xb55c) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0xb55c) & 3 | (uint)(cVar11 == '\0') << 2;
  lVar17 = FUN_009580b8();
  FUN_0090dab8(local_d8,&DAT_01b9349c,lVar17 + 0x5478);
  FUN_008fcdb8(&local_c0,local_d8);
  if ((local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (cVar11 == '\0') {
LAB_00b9a950:
    uVar19 = 0;
  }
  else {
    lVar17 = param_3[0x2416];
    bVar10 = *(byte *)(lVar17 + 0x3d80);
    if ((bVar10 & 1) != 0) {
      if (*(long *)(lVar17 + 0x3d88) != 0) goto LAB_00b9a8c8;
      goto LAB_00b9a950;
    }
    if (bVar10 >> 1 == 0) goto LAB_00b9a950;
LAB_00b9a8c8:
    __n = (ulong)(bVar10 >> 1);
    if ((bVar10 & 1) != 0) {
      __n = *(size_t *)(lVar17 + 0x3d88);
    }
    sVar9 = local_c0 >> 1 & 0x7f;
    if ((local_c0 & 1) != 0) {
      sVar9 = local_b8;
    }
    uVar19 = 0;
    if (__n == sVar9) {
      __s1 = *(void **)(lVar17 + 0x3d90);
      if ((bVar10 & 1) == 0) {
        __s1 = (void *)(lVar17 + 0x3d81);
      }
      __s2 = (char *)((ulong)&local_c0 | 1);
      if ((local_c0 & 1) != 0) {
        __s2 = local_b0;
      }
      if ((bVar10 & 1) == 0) {
        if (__n == 0) {
LAB_00b9ac40:
          uVar19 = 4;
        }
        else {
          pcVar18 = (char *)(lVar17 + 0x3d81);
          lVar17 = -(ulong)(bVar10 >> 1);
          uVar19 = 4;
          do {
            if (*pcVar18 != *__s2) goto LAB_00b9a950;
            pcVar18 = pcVar18 + 1;
            __s2 = __s2 + 1;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0);
        }
      }
      else {
        if (__n == 0) goto LAB_00b9ac40;
        iVar15 = memcmp(__s1,__s2,__n);
        uVar19 = (uint)(iVar15 == 0) << 2;
      }
    }
  }
  *(uint *)((long)param_3 + 0xb68c) = *(uint *)((long)param_3 + 0xb68c) & 0xfffffffb | uVar19;
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
LAB_00b9a978:
  fVar21 = *(float *)(param_3 + 0x16a3);
  plVar1 = param_3 + 0x169b;
  pfVar5 = (float *)((long)param_3 + 0xb51c);
  if ((fVar21 != fVar28) || (fVar21 = *pfVar5, fVar21 != fVar24 + 68.0)) {
    *(float *)(param_3 + 0x16a3) = fVar28;
    *pfVar5 = fVar24 + 68.0;
    FUN_0091ada4(plVar1);
  }
  local_c0 = 0x3f0000003f800000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_c0);
  fVar24 = *pfVar5;
  FUN_00f01c20(plVar1);
  fVar21 = fVar24 + fVar21 * 0.5 + 6.0;
  FUN_00f13f08(fVar25,0x40000000,param_3 + 0x135b);
  pfVar5 = (float *)((long)param_3 + 0x9b1c);
  if ((*(float *)(param_3 + 0x1363) != 0.0) || (fVar24 = *pfVar5, fVar24 != fVar21)) {
    *(float *)(param_3 + 0x1363) = 0.0;
    *pfVar5 = fVar21;
    FUN_0091ada4(param_3 + 0x135b);
    fVar24 = *pfVar5;
  }
  if ((*(float *)(param_3 + 0x1bf0) != 36.0) ||
     (*(float *)((long)param_3 + 0xdf84) != fVar24 + 32.0)) {
    *(float *)(param_3 + 0x1bf0) = 36.0;
    *(float *)((long)param_3 + 0xdf84) = fVar24 + 32.0;
    FUN_0091ada4(param_3 + 0x1be8);
  }
  FUN_00ac1374(fVar25 + -72.0,(fVar22 - fVar21) + -32.0 + -16.0,param_3 + 0x1be8);
  plVar1 = param_3 + 0x2446;
  FUN_00f0dad0(0x441b0000,plVar1,1);
  fVar22 = *(float *)(param_3 + 0x244e);
  if ((fVar22 != 30.0) || (fVar22 = *(float *)((long)param_3 + 0x12274), fVar22 != 30.0)) {
    lVar17 = NEON_fmov(0x41f00000,4);
    param_3[0x244e] = lVar17;
    FUN_0091ada4(plVar1);
  }
  fVar24 = (float)FUN_00f0d4e0(plVar1);
  FUN_00f0d4e0(plVar1);
  FUN_00f13f08(fVar24 + 60.0,fVar22 + 60.0,param_3 + 0x2428);
  fVar22 = (float)FUN_00f01c54(param_3 + 0x2417,0,0,1,1);
  fVar22 = (fVar25 + -12.0) - fVar22;
  if ((*(float *)(param_3 + 0x241f) != fVar22) ||
     (*(float *)((long)param_3 + 0x120fc) != fVar21 + 12.0)) {
    *(float *)(param_3 + 0x241f) = fVar22;
    *(float *)((long)param_3 + 0x120fc) = fVar21 + 12.0;
    FUN_0091ada4(param_3 + 0x2417);
  }
  if (*(long *)(lVar12 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

