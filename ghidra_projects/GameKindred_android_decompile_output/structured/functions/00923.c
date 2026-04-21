// functions/00923 — 19 functions
#include "libGameKindred.h"




void FUN_009230d8(void)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long local_690 [192];
  undefined2 local_90;
  uint local_8e;
  uint local_8a;
  uint local_86;
  uint local_82;
  uint local_7e;
  uint local_7a;
  uint local_76;
  byte local_72;
  
  lVar3 = tpidr_el0;
  lVar9 = *(long *)(lVar3 + 0x28);
  FUN_00922d6c(0xffffffff);
  uVar5 = FUN_019889cc(local_690,0xc0,DAT_02c7bf58,0);
  if (uVar5 != 0) {
    uVar10 = (ulong)uVar5;
    plVar11 = local_690;
    do {
      lVar12 = *plVar11;
      if ((*(byte *)(lVar12 + 0x78) >> 2 & 1) == 0) {
        plVar6 = *(long **)(lVar12 + 0x40);
        if (plVar6 == (long *)0x0) {
          bVar4 = false;
        }
        else if (*(int *)(lVar12 + 0x48) == (int)plVar6[1]) {
          lVar7 = (**(code **)(*plVar6 + 0x10))();
          bVar4 = lVar7 != 0;
        }
        else {
          *(undefined8 *)(lVar12 + 0x40) = 0;
          bVar4 = false;
          *(undefined4 *)(lVar12 + 0x48) = DAT_03214ce8;
        }
        uVar5 = *(uint *)(lVar12 + 0x28);
        lVar7 = (**(code **)(**(long **)(lVar12 + 0x30) + 0x10))();
        uVar2 = *(uint *)(lVar7 + 0x260);
        if (bVar4) {
          lVar7 = (**(code **)(**(long **)(lVar12 + 0x40) + 0x10))();
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          local_8e = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          local_8a = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(lVar7 + 0x260) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar7 + 0x260) & 0xff00ff) << 8;
          local_86 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(lVar12 + 0x5c) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar12 + 0x5c) & 0xff00ff) << 8;
          local_82 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(lVar12 + 0x70) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar12 + 0x70) & 0xff00ff) << 8;
          local_7e = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(lVar12 + 0x74) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar12 + 0x74) & 0xff00ff) << 8;
          local_7a = uVar5 >> 0x10 | uVar5 << 0x10;
          local_90 = 0x2104;
          local_76 = CONCAT31(local_76._1_3_,*(undefined1 *)(lVar12 + 0x78)) & 0xffffff03;
          uVar8 = 0x1b;
        }
        else {
          uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          local_8e = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          local_8a = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(lVar12 + 0x50) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar12 + 0x50) & 0xff00ff) << 8;
          local_86 = uVar5 >> 0x10 | uVar5 << 0x10;
          local_72 = *(byte *)(lVar12 + 0x78) & 3;
          uVar5 = (*(uint *)(lVar12 + 0x58) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar12 + 0x58) & 0xff00ff) << 8;
          local_82 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(lVar12 + 0x5c) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar12 + 0x5c) & 0xff00ff) << 8;
          local_7e = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(lVar12 + 0x70) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar12 + 0x70) & 0xff00ff) << 8;
          local_7a = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar5 = (*(uint *)(lVar12 + 0x74) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar12 + 0x74) & 0xff00ff) << 8;
          local_76 = uVar5 >> 0x10 | uVar5 << 0x10;
          uVar8 = 0x1f;
          local_90 = 0x2004;
        }
        FUN_00923768(&local_90,uVar8);
      }
      else {
        uVar1 = *(undefined4 *)(lVar12 + 0x28);
        lVar7 = (**(code **)(**(long **)(lVar12 + 0x30) + 0x10))();
        FUN_00922540(uVar1,*(undefined4 *)(lVar7 + 0x260),lVar12 + 0x60,lVar12 + 0x68);
      }
      uVar10 = uVar10 - 1;
      plVar11 = plVar11 + 1;
    } while (uVar10 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009232f0(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 auStack_268 [64];
  uint local_228;
  undefined1 local_224;
  uint local_220 [4];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [68];
  undefined1 local_1bc;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  byte local_14d;
  byte local_14c;
  byte local_14b;
  byte local_14a;
  byte local_149;
  undefined2 local_144;
  undefined1 local_142;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00ced6f8();
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      uVar3 = FUN_00cedca4(iVar9);
      memset(local_220,0,0xd8);
      uVar5 = FUN_00cec840(uVar3);
      FUN_00e70978(uVar5,local_220,0xffffffff);
      uVar5 = FUN_00cec930(uVar3);
      FUN_00e70978(uVar5,auStack_188,8);
      uVar5 = FUN_00cec9a0(uVar3);
      FUN_00e70978(uVar5,auStack_190,8);
      uVar4 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      local_180 = uVar4 >> 0x10 | uVar4 << 0x10;
      local_14e = FUN_00cecb68(uVar3);
      uVar4 = FUN_00cecbe0(uVar3);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_17c = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar4 = FUN_00cecc50(uVar3);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      local_178 = uVar4 >> 0x10 | uVar4 << 0x10;
      puVar6 = (uint *)FUN_00ced928(uVar3);
      uVar4 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
      local_174 = uVar4 >> 0x10 | uVar4 << 0x10;
      local_150 = FUN_00cee0c8(uVar3);
      local_14f = FUN_00cee134(uVar3);
      local_14d = FUN_00ced528(uVar3);
      local_14d = local_14d & 1;
      local_14c = FUN_00ced598(uVar3);
      local_14c = local_14c & 1;
      local_14b = FUN_00ced608(uVar3);
      local_14b = local_14b & 1;
      local_14a = FUN_00cedff4(uVar3);
      local_14a = local_14a & 1;
      local_149 = FUN_00ced058(uVar3);
      local_149 = local_149 & 1;
      local_144 = 0xee03;
      memcpy((void *)((ulong)&local_144 | 2),local_220,0xd8);
      FUN_00923768(&local_144,0xda);
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
  }
  memset(auStack_210,0,0x54);
  uVar4 = FUN_00cedce4();
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  local_220[0] = uVar4 >> 0x10 | uVar4 << 0x10;
  local_220[1] = 0;
  local_220[2] = 0;
  local_220[3] = 0;
  FUN_00cedce4();
  local_1bc = FUN_00cecb68();
  pbVar7 = (byte *)FUN_00cead24();
  pbVar8 = *(byte **)(pbVar7 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    pbVar8 = pbVar7 + 1;
  }
  FUN_00e6a50c(auStack_200,0x40,pbVar8);
  local_144 = 0xe903;
  memcpy((void *)((ulong)&local_144 | 2),local_220,0x65);
  FUN_00923768(&local_144,0x67);
  memset(auStack_268,0,0x45);
  pbVar7 = (byte *)FUN_00cead24();
  pbVar8 = *(byte **)(pbVar7 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    pbVar8 = pbVar7 + 1;
  }
  FUN_00e6a50c(auStack_268,0x40,pbVar8);
  FUN_009bbfb0();
  uVar4 = FUN_009bc268();
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  local_228 = uVar4 >> 0x10 | uVar4 << 0x10;
  local_224 = 1;
  local_144 = 0x6f04;
  memcpy((void *)((ulong)&local_144 | 2),auStack_268,0x45);
  FUN_00923768(&local_144,0x47);
  FUN_009230d8();
  local_144 = 0x7004;
  local_142 = 0;
  FUN_00923768(&local_144,3);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_009235b8(undefined8 param_1,uint *param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  param_4 = param_4 & 0xffffffff;
  do {
    if (DAT_02c3bd70 == (FILE *)0x0) {
      return 0;
    }
    iVar2 = FUN_00e6aef0(param_3,4,1);
    if (iVar2 == 1) {
      uVar1 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
      *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
      FUN_00e6aef0(param_2,4,1,DAT_02c3bd70);
      uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      *param_2 = uVar1;
      iVar2 = FUN_00e6aef0(param_1,uVar1,1,DAT_02c3bd70);
      if (iVar2 != 1) {
        return 0;
      }
      return 1;
    }
    if ((param_4 & 1) == 0) {
      return 0;
    }
    iVar2 = 0;
    if (DAT_02c3bd70 != (FILE *)0x0) {
      iVar2 = fclose(DAT_02c3bd70);
      DAT_02c3bd70 = (FILE *)0x0;
    }
    param_4 = 1;
    DAT_02c7bf08 = DAT_02c7bf08 + 1;
    uVar3 = FUN_009236c8(iVar2);
  } while ((uVar3 & 1) != 0);
  return 0;
}




bool FUN_00923698(void)

{
  bool bVar1;
  
  bVar1 = DAT_02c3bd70 != (FILE *)0x0;
  if (bVar1) {
    fclose(DAT_02c3bd70);
    DAT_02c3bd70 = (FILE *)0x0;
  }
  return bVar1;
}




void FUN_009236c8(void)

{
  char *__filename;
  long lVar1;
  FILE *pFVar2;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00923be8(local_50);
  if (DAT_02c3bd70 == (FILE *)0x0) {
    __filename = (char *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      __filename = local_40;
    }
    DAT_02c3bd70 = fopen(__filename,"rb");
  }
  pFVar2 = DAT_02c3bd70;
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pFVar2 != (FILE *)0x0);
}




void FUN_00923768(ushort *param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00ceb604(&DAT_02c3bda8);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar1 = (uint)(*param_1 >> 8) | (*param_1 & 0xff00ff) << 8;
  if (uVar1 < 0x451) {
    if ((uVar1 - 0x411 < 0x3e) &&
       ((1L << ((ulong)(uVar1 - 0x411) & 0x3f) & 0x2000017420000007U) != 0)) {
      return;
    }
    if (uVar1 - 0x3ea < 3) {
      return;
    }
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    uVar1 = uVar1 - 0x451;
    if (uVar1 < 0x2d) {
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x1b140800070dU) != 0) {
        return;
      }
      if ((ulong)uVar1 == 0x1e) {
        DAT_02c7bf0c = 1;
      }
    }
  }
  FUN_00ceb614(DAT_02c7bf10,&DAT_02c3bda8,param_1,param_2);
  return;
}




void FUN_00923848(void)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  FILE *__stream;
  char *pcVar4;
  ulong uVar5;
  byte local_898 [16];
  char *local_888;
  byte local_880 [16];
  void *local_870;
  byte local_868 [16];
  char *local_858;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_008fcdb8(local_880,&DAT_02c3bd78);
  FUN_00923a00(local_868);
  pcVar4 = (char *)((ulong)local_868 | 1);
  if ((local_868[0] & 1) != 0) {
    pcVar4 = local_858;
  }
  __stream = fopen(pcVar4,"r");
  if ((local_868[0] & 1) != 0) {
    operator_delete(local_858);
  }
  if (__stream != (FILE *)0x0) {
    pcVar4 = fgets((char *)local_868,0x800,__stream);
    if (pcVar4 != (char *)0x0) {
      do {
        FUN_008fa54c(local_898,local_868);
        FUN_008fce60(&DAT_02c3bd78,local_898);
        if ((local_898[0] & 1) != 0) {
          operator_delete(local_888);
        }
        FUN_00923aa4(&DAT_02c3bd78,&DAT_0320ff90);
        uVar2 = DAT_02c7bf08;
        DAT_02c7bf08 = 0;
        while (uVar5 = FUN_009236c8(), (uVar5 & 1) != 0) {
          iVar3 = 0;
          if (DAT_02c3bd70 != (FILE *)0x0) {
            iVar3 = fclose(DAT_02c3bd70);
            DAT_02c3bd70 = (FILE *)0x0;
          }
          FUN_00923be8(local_898,iVar3);
          pcVar4 = (char *)((ulong)local_898 | 1);
          if ((local_898[0] & 1) != 0) {
            pcVar4 = local_888;
          }
          unlink(pcVar4);
          DAT_02c7bf08 = DAT_02c7bf08 + 1;
          if ((local_898[0] & 1) != 0) {
            operator_delete(local_888);
          }
        }
        DAT_02c7bf08 = uVar2;
        pcVar4 = fgets((char *)local_868,0x800,__stream);
      } while (pcVar4 != (char *)0x0);
    }
    fclose(__stream);
    FUN_008fce60(&DAT_02c3bd78,local_880);
  }
  if ((local_880[0] & 1) != 0) {
    operator_delete(local_870);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00923a00(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_1138 [256];
  undefined1 auStack_1038 [4096];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00e772cc(&DAT_0320ffc0,2,auStack_1038,0x1000);
  puVar1 = DAT_02c3bda0;
  if ((DAT_02c3bd90 & 1) == 0) {
    puVar1 = &DAT_02c3bd91;
  }
  FUN_00e6a8a8(auStack_1138,"%s/%s",auStack_1038,puVar1);
  FUN_008fa54c(param_1,auStack_1138);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00923aa4(byte *param_1,byte *param_2)

{
  ulong uVar1;
  size_t sVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  void *pvVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  sVar2 = *(size_t *)(param_2 + 8);
  pbVar4 = *(byte **)(param_2 + 0x10);
  bVar5 = (*param_1 & 1) != 0;
  uVar1 = (ulong)(*param_1 >> 1);
  if (bVar5) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (!bVar5) {
    pbVar3 = param_1 + 1;
  }
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
    sVar2 = (ulong)(*param_2 >> 1);
  }
  do {
    uVar9 = uVar1;
    if (uVar9 == 0) {
      uVar9 = 0;
      break;
    }
    if (sVar2 == 0) break;
    pvVar6 = memchr(pbVar4,(uint)pbVar3[uVar9 - 1],sVar2);
    uVar1 = uVar9 - 1;
  } while (pvVar6 != (void *)0x0);
  lVar8 = -1;
  FUN_00924fa8(param_1,uVar9,0xffffffffffffffff);
  uVar1 = (ulong)(*param_1 >> 1);
  pbVar3 = param_1 + 1;
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar3 = *(byte **)(param_1 + 0x10);
  }
  sVar2 = (ulong)(*param_2 >> 1);
  pbVar4 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
    pbVar4 = *(byte **)(param_2 + 0x10);
  }
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      pbVar7 = pbVar3;
      if (sVar2 == 0) {
LAB_00923bbc:
        lVar8 = (long)pbVar7 - (long)pbVar3;
        goto LAB_00923bc0;
      }
      pvVar6 = memchr(pbVar4,(uint)pbVar3[uVar9],sVar2);
      if (pvVar6 == (void *)0x0) {
        pbVar7 = pbVar3 + uVar9;
        goto LAB_00923bbc;
      }
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
    lVar8 = -1;
  }
LAB_00923bc0:
  FUN_00924fa8(param_1,0,lVar8);
  return;
}




void FUN_00923be8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_1138 [256];
  undefined1 auStack_1038 [4096];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00e772cc(&DAT_0320ffc0,2,auStack_1038,0x1000);
  puVar1 = DAT_02c3bd88;
  if ((DAT_02c3bd78 & 1) == 0) {
    puVar1 = &DAT_02c3bd79;
  }
  FUN_00e6a8a8(auStack_1138,"%s/%s.%d.vgr",auStack_1038,puVar1,DAT_02c7bf08);
  FUN_008fa54c(param_1,auStack_1138);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00923c94(void)

{
  char *__filename;
  undefined *puVar1;
  long lVar2;
  FILE *__stream;
  byte local_40 [16];
  char *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00923a00(local_40);
  __filename = (char *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    __filename = local_30;
  }
  __stream = fopen(__filename,"w");
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (__stream != (FILE *)0x0) {
    puVar1 = DAT_02c3bd88;
    if ((DAT_02c3bd78 & 1) == 0) {
      puVar1 = &DAT_02c3bd79;
    }
    FUN_00e6afdc(__stream,&DAT_01e28837,puVar1);
    fclose(__stream);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00923d48(byte param_1)

{
  DAT_02c7bf14 = param_1 & 1;
  if ((param_1 & 1) != 0) {
    return;
  }
  DAT_02c7bf15 = 0;
  FUN_009240b0();
  FUN_00ceb45c(&DAT_02c3bda8);
  return;
}




void FUN_00923d80(void)

{
  DAT_02c7bf15 = 0;
  FUN_009240b0();
  FUN_00ceb45c(&DAT_02c3bda8);
  return;
}




void FUN_00923da4(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  byte local_68 [16];
  void *local_58;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ceb5f4(&DAT_02c3bda8);
  if ((uVar3 & 1) == 0) {
    FUN_008fcdb8(local_50,param_1);
    uVar3 = (ulong)(local_50[0] >> 1);
    if ((local_50[0] & 1) != 0) {
      uVar3 = local_48;
    }
    if (uVar3 != 0) {
      FUN_0090de84(local_50,0x1e21c1a,1);
      uVar3 = *(ulong *)(param_2 + 8);
      pbVar1 = *(byte **)(param_2 + 0x10);
      if ((*param_2 & 1) == 0) {
        pbVar1 = param_2 + 1;
        uVar3 = (ulong)(*param_2 >> 1);
      }
      FUN_0090de84(local_50,pbVar1,uVar3);
      FUN_008fce60(&DAT_02c3bd78,local_50);
      FUN_008fa54c(local_68,"replayManifest-");
      uVar3 = *(ulong *)(param_1 + 8);
      pbVar1 = *(byte **)(param_1 + 0x10);
      if ((*param_1 & 1) == 0) {
        pbVar1 = param_1 + 1;
        uVar3 = (ulong)(*param_1 >> 1);
      }
      FUN_0090de84(local_68,pbVar1,uVar3);
      FUN_0090de84(local_68,".txt",4);
      FUN_008fce60(&DAT_02c3bd90,local_68);
      if ((local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
    }
    DAT_02c7bf10 = 0;
    DAT_02c7bf08 = 0;
    DAT_02c7bf14 = 1;
    FUN_00923848();
    FUN_00923c94();
    FUN_00ceb408(&DAT_02c3bda8);
    FUN_00923f18();
    FUN_009232f0();
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00923f18(void)

{
  char *__filename;
  long lVar1;
  tm *__tp;
  ulong uVar2;
  FILE *pFVar3;
  time_t tStack_88;
  byte local_80 [16];
  char *local_70;
  char acStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00923be8(local_80);
  time(&tStack_88);
  __tp = localtime(&tStack_88);
  strftime(acStack_68,0x40,"_%Y-%m-%dT%H-%M-%S.dat",__tp);
  uVar2 = FUN_00ceb604(&DAT_02c3bda8);
  if ((uVar2 & 1) == 0) {
    __filename = (char *)((ulong)local_80 | 1);
    if ((local_80[0] & 1) != 0) {
      __filename = local_70;
    }
    pFVar3 = fopen(__filename,"wb");
    FUN_00ceb49c(&DAT_02c3bda8,pFVar3);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1 FUN_00923fdc(void)

{
  return DAT_02c7bf15;
}




undefined1 FUN_00923fe8(void)

{
  return DAT_02c7bf14;
}




void FUN_00923ff4(float param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceb5f4(&DAT_02c3bda8);
  if ((((uVar1 & 1) != 0) && (DAT_02c7bf0c == '\x01')) &&
     (DAT_02c7bf10 = DAT_02c7bf10 + param_1, (float)(DAT_02c7bf08 + 1) * 10.0 < DAT_02c7bf10)) {
    FUN_00ceb4a4(&DAT_02c3bda8,0);
    DAT_02c7bf08 = DAT_02c7bf08 + 1;
    FUN_00923f18();
    FUN_009232f0();
    return;
  }
  return;
}




void thunk_FUN_009236c8(void)

{
  char *__filename;
  long lVar1;
  FILE *pFVar2;
  byte abStack_50 [16];
  char *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00923be8(abStack_50);
  if (DAT_02c3bd70 == (FILE *)0x0) {
    __filename = (char *)((ulong)abStack_50 | 1);
    if ((abStack_50[0] & 1) != 0) {
      __filename = pcStack_40;
    }
    DAT_02c3bd70 = fopen(__filename,"rb");
  }
  pFVar2 = DAT_02c3bd70;
  if ((abStack_50[0] & 1) != 0) {
    operator_delete(pcStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pFVar2 != (FILE *)0x0);
}

