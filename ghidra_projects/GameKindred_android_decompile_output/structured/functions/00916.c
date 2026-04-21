// functions/00916 — 36 functions
#include "libGameKindred.h"




long FUN_00916004(ulong param_1)

{
  return *(long *)(DAT_02c09210 + 0x278) + (param_1 & 0xffffffff) * 0x188;
}




void FUN_00916020(undefined8 param_1)

{
  FUN_00913cd8(DAT_02c09210,param_1);
  return;
}




void FUN_00916034(undefined8 param_1)

{
  FUN_00913d4c(DAT_02c09210,param_1);
  return;
}




void FUN_00916048(undefined8 param_1)

{
  FUN_00913e3c(DAT_02c09210,param_1);
  return;
}




void FUN_0091605c(undefined8 param_1)

{
  FUN_00913f24(DAT_02c09210,param_1);
  return;
}




void FUN_00916070(undefined8 param_1)

{
  FUN_00913fa0(DAT_02c09210,param_1);
  return;
}




void FUN_00916084(undefined8 param_1)

{
  FUN_00913fe8(DAT_02c09210,param_1);
  return;
}




undefined4 FUN_00916098(void)

{
  return *(undefined4 *)(DAT_02c09210 + 0x280);
}




long FUN_009160a8(ulong param_1)

{
  return *(long *)(DAT_02c09210 + 0x288) + (param_1 & 0xffffffff) * 0x188;
}




void FUN_009160c4(undefined8 param_1)

{
  FUN_0091412c(DAT_02c09210,param_1);
  return;
}




void FUN_009160d8(undefined8 param_1)

{
  FUN_009141a0(DAT_02c09210,param_1);
  return;
}




void FUN_009160ec(undefined8 param_1)

{
  FUN_00914290(DAT_02c09210,param_1);
  return;
}




void FUN_00916100(undefined8 param_1)

{
  FUN_009142f4(DAT_02c09210,param_1);
  return;
}




void FUN_00916114(undefined8 param_1,undefined8 param_2)

{
  FUN_00914354(param_1,param_1,param_2);
  return;
}




undefined4 FUN_00916120(void)

{
  return *(undefined4 *)(DAT_02c09210 + 0x290);
}




long FUN_00916130(ulong param_1)

{
  return *(long *)(DAT_02c09210 + 0x298) + (param_1 & 0xffffffff) * 0x38;
}




void FUN_0091614c(undefined8 param_1)

{
  FUN_00914c64(DAT_02c09210,param_1);
  return;
}




void FUN_00916160(undefined8 param_1)

{
  FUN_00913e94(DAT_02c09210,param_1);
  return;
}




void FUN_00916174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9948;
  param_1[3] = &PTR_FUN_027b9980;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00e84dd8(param_1 + 3);
  operator_delete(param_1);
  return;
}




void FUN_009161d0(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x59) == '\0') {
    bVar1 = *(char *)(param_1 + 0x58) != '\0';
  }
  FUN_00e81574(param_1 + 0x18,bVar1);
  *(undefined1 *)(param_1 + 0x59) = 0;
  return;
}




long FUN_00916210(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00916218(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9980;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00916258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b9980;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009162a0(void)

{
  return 7;
}




void FUN_009162a8(void)

{
  return;
}




void FUN_009162ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00916304(void)

{
  return 1;
}




void FUN_0091630c(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_0090eb54(param_1,1);
    FUN_009106c4(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 << 4;
      do {
        thunk_FUN_00e7051c(lVar3,lVar2);
        lVar2 = lVar2 + 0x10;
        lVar4 = lVar4 + -0x10;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00916394(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  void *local_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(param_2 + 2);
  if ((uVar1 & 0xff) - 3 < 2) {
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_70 = (void *)0x0;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_68 = 0;
    local_40 = 0x400;
    local_38 = 0;
    local_30 = 0;
    local_78 = param_3;
    FUN_009164d8(param_2,&local_90);
    pvVar3 = local_70;
    lVar5 = local_50 + -0x18;
    uVar6 = *(undefined8 *)(local_50 + -0x18);
    param_1[1] = *(undefined8 *)(local_50 + -0x10);
    *param_1 = uVar6;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(local_50 + -8);
    *(undefined4 *)(local_50 + -8) = 0;
    local_50 = lVar5;
    if (local_70 != (void *)0x0) {
      FUN_008fd2c4(local_70);
      operator_delete(pvVar3);
    }
    free(local_58);
    if (local_60 != (void *)0x0) {
      operator_delete(local_60);
    }
  }
  else {
    if ((uVar1 & 0xff) == 5) {
      if (uVar1 != 0x100005) {
        if ((uVar1 >> 0x16 & 1) == 0) {
          iVar4 = (int)param_2[1];
          param_2 = (long *)*param_2;
        }
        else {
          iVar4 = 0xf - (uint)*(byte *)((long)param_2 + 0xf);
        }
        FUN_008fe834(param_1,param_2,iVar4);
        goto LAB_009164b4;
      }
      *(undefined4 *)(param_1 + 2) = 0x100005;
    }
    else {
      *(uint *)(param_1 + 2) = uVar1;
    }
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
  }
LAB_009164b4:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009164d8(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  
  uVar1 = *(uint *)(param_1 + 2);
  switch(uVar1 & 0xff) {
  case 0:
    puVar5 = *(undefined8 **)(param_2 + 0x40);
    puVar10 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x48) <= puVar10) {
      FUN_008fe2e0(param_2 + 0x28,1);
      puVar5 = *(undefined8 **)(param_2 + 0x40);
      puVar10 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x40) = puVar10;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    return 1;
  case 1:
    plVar6 = *(long **)(param_2 + 0x40);
    plVar8 = plVar6 + 3;
    if (*(long **)(param_2 + 0x48) <= plVar8) {
      FUN_008fe2e0(param_2 + 0x28,1);
      plVar6 = *(long **)(param_2 + 0x40);
      plVar8 = plVar6 + 3;
    }
    *(long **)(param_2 + 0x40) = plVar8;
    *plVar6 = 0;
    plVar6[1] = 0;
    uVar7 = 0x101;
    break;
  case 2:
    plVar6 = *(long **)(param_2 + 0x40);
    plVar8 = plVar6 + 3;
    if (*(long **)(param_2 + 0x48) <= plVar8) {
      FUN_008fe2e0(param_2 + 0x28,1);
      plVar6 = *(long **)(param_2 + 0x40);
      plVar8 = plVar6 + 3;
    }
    *(long **)(param_2 + 0x40) = plVar8;
    *plVar6 = 0;
    plVar6[1] = 0;
    uVar7 = 0x102;
    break;
  case 3:
    puVar5 = *(undefined8 **)(param_2 + 0x40);
    puVar10 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x48) <= puVar10) {
      FUN_008fe2e0(param_2 + 0x28,1);
      puVar5 = *(undefined8 **)(param_2 + 0x40);
      puVar10 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x40) = puVar10;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 3;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      puVar10 = (undefined8 *)*param_1;
      do {
        if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
          iVar2 = *(int *)(puVar10 + 1);
          puVar5 = (undefined8 *)*puVar10;
        }
        else {
          iVar2 = 0xf - (uint)*(byte *)((long)puVar10 + 0xf);
          puVar5 = puVar10;
        }
        uVar3 = FUN_008fe574(param_2,puVar5,iVar2,*(uint *)(puVar10 + 2) >> 0x15 & 1);
        if (((uVar3 & 1) == 0) || (uVar3 = FUN_009164d8(puVar10 + 3,param_2), (uVar3 & 1) == 0)) {
          return 0;
        }
        uVar3 = (ulong)*(uint *)(param_1 + 1);
        puVar10 = puVar10 + 6;
      } while (puVar10 != (undefined8 *)(*param_1 + uVar3 * 0x30));
    }
    uVar4 = FUN_008fe978(param_2,uVar3);
    return uVar4;
  case 4:
    puVar5 = *(undefined8 **)(param_2 + 0x40);
    puVar10 = puVar5 + 3;
    if (*(undefined8 **)(param_2 + 0x48) <= puVar10) {
      FUN_008fe2e0(param_2 + 0x28,1);
      puVar5 = *(undefined8 **)(param_2 + 0x40);
      puVar10 = puVar5 + 3;
    }
    *(undefined8 **)(param_2 + 0x40) = puVar10;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 4;
    if ((int)param_1[1] == 0) {
      uVar3 = 0;
    }
    else {
      lVar9 = *param_1;
      do {
        uVar3 = FUN_009164d8(lVar9,param_2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        uVar3 = (ulong)*(uint *)(param_1 + 1);
        lVar9 = lVar9 + 0x18;
      } while (lVar9 != *param_1 + uVar3 * 0x18);
    }
    uVar4 = FUN_008fe9f4(param_2,uVar3);
    return uVar4;
  case 5:
    if ((uVar1 >> 0x16 & 1) == 0) {
      iVar2 = (int)param_1[1];
      param_1 = (long *)*param_1;
    }
    else {
      iVar2 = 0xf - (uint)*(byte *)((long)param_1 + 0xf);
    }
    uVar4 = FUN_008fe574(param_2,param_1,iVar2,uVar1 >> 0x15 & 1);
    return uVar4;
  default:
    if ((uVar1 >> 10 & 1) != 0) {
      uVar4 = FUN_008feb8c(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar4 = FUN_008febf4(param_2,(int)*param_1);
      return uVar4;
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar4 = FUN_008fea70(param_2,*param_1);
      return uVar4;
    }
    lVar9 = *param_1;
    if ((uVar1 >> 0xd & 1) != 0) {
      uVar4 = FUN_008feb08(param_2,lVar9);
      return uVar4;
    }
    plVar6 = *(long **)(param_2 + 0x40);
    plVar8 = plVar6 + 3;
    if (*(long **)(param_2 + 0x48) <= plVar8) {
      FUN_008fe2e0(param_2 + 0x28,1);
      plVar6 = *(long **)(param_2 + 0x40);
      plVar8 = plVar6 + 3;
    }
    *(long **)(param_2 + 0x40) = plVar8;
    uVar7 = 0x4206;
    *plVar6 = lVar9;
    plVar6[1] = 0;
  }
  *(undefined4 *)(plVar6 + 2) = uVar7;
  return 1;
}




undefined4 * FUN_0091681c(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  
  if (param_3 != param_4) {
    puVar14 = *(undefined4 **)(param_1 + 2);
    uVar2 = *param_1;
    uVar5 = param_1[1];
    uVar11 = ((long)param_4 - (long)param_3 >> 3) * 0x6db6db6db6db6db7;
    uVar10 = (uint)uVar11;
    uVar9 = ((long)param_2 - (long)puVar14 >> 3) * 0x6db6db6db6db6db7;
    if (uVar5 - uVar2 < uVar10) {
      uVar2 = uVar2 + uVar10;
      if (uVar5 < 0x20) {
        uVar5 = uVar5 << 1;
      }
      else if (uVar5 == 0xffffffff) {
        uVar5 = 0;
      }
      else {
        uVar5 = (uVar5 + 0x10) - (uVar5 & 0xf);
      }
      uVar10 = uVar2;
      if (uVar2 <= uVar5) {
        uVar10 = uVar5;
      }
      puVar4 = operator_new__((ulong)uVar10 * 0x38);
      puVar13 = puVar4;
      for (; puVar14 != param_2; puVar14 = puVar14 + 0xe) {
        *puVar13 = *puVar14;
        FUN_008fcdb8(puVar13 + 2,puVar14 + 2);
        thunk_FUN_00e7051c(puVar13 + 8,puVar14 + 8);
        *(undefined2 *)(puVar13 + 0xd) = *(undefined2 *)(puVar14 + 0xd);
        puVar13[0xc] = puVar14[0xc];
        puVar13 = puVar13 + 0xe;
      }
      puVar13 = puVar4 + (uVar9 & 0xffffffff) * 0xe;
      puVar14 = puVar13;
      do {
        *puVar14 = *param_3;
        FUN_008fcdb8(puVar14 + 2,param_3 + 2);
        thunk_FUN_00e7051c(puVar14 + 8,param_3 + 8);
        *(undefined2 *)(puVar14 + 0xd) = *(undefined2 *)(param_3 + 0xd);
        puVar6 = param_3 + 0xc;
        param_3 = param_3 + 0xe;
        puVar14[0xc] = *puVar6;
        puVar14 = puVar14 + 0xe;
      } while (param_3 != param_4);
      puVar14 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x38);
      if (puVar14 != param_2) {
        puVar6 = puVar13 + (uVar11 & 0xffffffff) * 0xe;
        do {
          *puVar6 = *param_2;
          FUN_008fcdb8(puVar6 + 2,param_2 + 2);
          thunk_FUN_00e7051c(puVar6 + 8,param_2 + 8);
          *(undefined2 *)(puVar6 + 0xd) = *(undefined2 *)(param_2 + 0xd);
          puVar1 = param_2 + 0xc;
          param_2 = param_2 + 0xe;
          puVar6[0xc] = *puVar1;
          puVar6 = puVar6 + 0xe;
        } while (param_2 != puVar14);
      }
      FUN_00914e9c(param_1,1);
      *(undefined4 **)(param_1 + 2) = puVar4;
      *param_1 = uVar2;
      param_1[1] = uVar10;
      param_2 = puVar13;
    }
    else {
      puVar14 = puVar14 + (ulong)uVar2 * 0xe;
      uVar12 = ((long)puVar14 - (long)param_2 >> 3) * 0x6db6db6db6db6db7;
      uVar11 = uVar11 & 0xffffffff;
      if (uVar10 < (uint)uVar12) {
        puVar13 = puVar14 + uVar11 * -0xe;
        if (uVar11 != 0) {
          lVar15 = 0;
          do {
            puVar4 = (undefined4 *)((long)puVar13 + lVar15);
            puVar6 = (undefined4 *)((long)puVar14 + lVar15);
            *puVar6 = *puVar4;
            FUN_008fcdb8(puVar6 + 2,puVar4 + 2);
            thunk_FUN_00e7051c(puVar6 + 8,puVar4 + 8);
            lVar15 = lVar15 + 0x38;
            *(undefined2 *)(puVar6 + 0xd) = *(undefined2 *)(puVar4 + 0xd);
            puVar6[0xc] = puVar4[0xc];
          } while (uVar11 * 0x38 - lVar15 != 0);
          puVar13 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x38 + uVar11 * -0x38)
          ;
        }
        lVar15 = (long)puVar13 - (long)param_2;
        if (lVar15 != 0) {
          lVar7 = 0;
          do {
            lVar3 = lVar7 + lVar15 + uVar11 * 0x38;
            *(undefined4 *)((long)param_2 + lVar3 + -0x38) =
                 *(undefined4 *)((long)puVar13 + lVar7 + -0x38);
            FUN_008fce60((long)param_2 + lVar3 + -0x30,(long)puVar13 + lVar7 + -0x30);
            FUN_00910394((long)param_2 + lVar3 + -0x18,(long)puVar13 + lVar7 + -0x18);
            lVar8 = lVar7 + -0x38;
            *(undefined2 *)((long)param_2 + lVar3 + -4) =
                 *(undefined2 *)((long)puVar13 + lVar7 + -4);
            *(undefined4 *)((long)param_2 + lVar3 + -8) =
                 *(undefined4 *)((long)puVar13 + lVar7 + -8);
            lVar7 = lVar8;
          } while (-lVar8 != lVar15);
        }
        do {
          *param_2 = *param_3;
          FUN_008fce60(param_2 + 2,param_3 + 2);
          FUN_00910394(param_2 + 8,param_3 + 8);
          *(undefined2 *)(param_2 + 0xd) = *(undefined2 *)(param_3 + 0xd);
          puVar14 = param_3 + 0xc;
          param_3 = param_3 + 0xe;
          param_2[0xc] = *puVar14;
          param_2 = param_2 + 0xe;
        } while (param_3 != param_4);
      }
      else {
        puVar13 = param_2;
        if (puVar14 != param_2) {
          do {
            puVar6 = puVar13 + uVar11 * 0xe;
            *puVar6 = *puVar13;
            FUN_008fcdb8(puVar6 + 2,puVar13 + 2);
            thunk_FUN_00e7051c(puVar6 + 8,puVar13 + 8);
            *(undefined2 *)(puVar6 + 0xd) = *(undefined2 *)(puVar13 + 0xd);
            puVar4 = puVar13 + 0xe;
            puVar6[0xc] = puVar13[0xc];
            puVar13 = puVar4;
          } while (puVar14 != puVar4);
          puVar14 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x38);
        }
        uVar12 = uVar12 & 0xffffffff;
        puVar4 = param_3 + uVar12 * 0xe;
        for (puVar13 = puVar4; puVar13 != param_4; puVar13 = puVar13 + 0xe) {
          *puVar14 = *puVar13;
          FUN_008fcdb8(puVar14 + 2,puVar13 + 2);
          thunk_FUN_00e7051c(puVar14 + 8,puVar13 + 8);
          *(undefined2 *)(puVar14 + 0xd) = *(undefined2 *)(puVar13 + 0xd);
          puVar14[0xc] = puVar13[0xc];
          puVar14 = puVar14 + 0xe;
        }
        if (uVar12 != 0) {
          do {
            *param_2 = *param_3;
            FUN_008fce60(param_2 + 2,param_3 + 2);
            FUN_00910394(param_2 + 8,param_3 + 8);
            *(undefined2 *)(param_2 + 0xd) = *(undefined2 *)(param_3 + 0xd);
            puVar14 = param_3 + 0xc;
            param_3 = param_3 + 0xe;
            param_2[0xc] = *puVar14;
            param_2 = param_2 + 0xe;
          } while (param_3 != puVar4);
        }
      }
      param_2 = (undefined4 *)(*(long *)(param_1 + 2) + (uVar9 & 0xffffffff) * 0x38);
      *param_1 = *param_1 + uVar10;
    }
  }
  return param_2;
}




void FUN_00916ca8(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar3 = *param_1;
  iVar4 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar3 != iVar4 * -0x49249249) {
    puVar5 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x38);
    lVar2 = (long)puVar5 - (long)param_3;
    puVar6 = param_2;
    if (lVar2 != 0) {
      do {
        *puVar6 = *param_3;
        FUN_008fce60(puVar6 + 2,param_3 + 2);
        FUN_00910394(puVar6 + 8,param_3 + 8);
        *(undefined2 *)(puVar6 + 0xd) = *(undefined2 *)(param_3 + 0xd);
        puVar1 = param_3 + 0xc;
        param_3 = param_3 + 0xe;
        puVar6[0xc] = *puVar1;
        puVar6 = puVar6 + 0xe;
      } while (param_3 != puVar5);
      uVar3 = *param_1;
      puVar5 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x38);
    }
    param_2 = param_2 + ((lVar2 >> 3) * 0xb6db6db7 & 0xffffffffU) * 0xe;
    if (param_2 != puVar5) {
      do {
        if (*(void **)(param_2 + 10) != (void *)0x0) {
          operator_delete__(*(void **)(param_2 + 10));
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 10) = 0;
        }
        if ((*(byte *)(param_2 + 2) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 6));
        }
        param_2 = param_2 + 0xe;
      } while (puVar5 != param_2);
      uVar3 = *param_1;
    }
    *param_1 = uVar3 + iVar4 * 0x49249249;
    return;
  }
  FUN_00914e9c(param_1,1);
  return;
}




undefined8 FUN_00916df0(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  FUN_00916f0c(param_1,3);
  puVar1 = (undefined8 *)param_1[4];
  puVar3 = puVar1 + 2;
  if ((undefined8 *)param_1[5] <= puVar3) {
    FUN_00917274(param_1 + 1,1);
    puVar1 = (undefined8 *)param_1[4];
    puVar3 = puVar1 + 2;
  }
  param_1[4] = (long)puVar3;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  lVar5 = *param_1;
  puVar2 = *(undefined1 **)(lVar5 + 0x18);
  puVar4 = puVar2 + 1;
  if (*(undefined1 **)(lVar5 + 0x20) <= puVar4) {
    FUN_008fe7c0(lVar5,1);
    puVar2 = *(undefined1 **)(lVar5 + 0x18);
    puVar4 = puVar2 + 1;
  }
  *(undefined1 **)(lVar5 + 0x18) = puVar4;
  *puVar2 = 0x7b;
  return 1;
}




undefined8 FUN_00916e7c(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  FUN_00916f0c(param_1,4);
  puVar1 = (undefined8 *)param_1[4];
  puVar3 = puVar1 + 2;
  if ((undefined8 *)param_1[5] <= puVar3) {
    FUN_00917274(param_1 + 1,1);
    puVar1 = (undefined8 *)param_1[4];
    puVar3 = puVar1 + 2;
  }
  param_1[4] = (long)puVar3;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar5 = *param_1;
  puVar2 = *(undefined1 **)(lVar5 + 0x18);
  puVar4 = puVar2 + 1;
  if (*(undefined1 **)(lVar5 + 0x20) <= puVar4) {
    FUN_008fe7c0(lVar5,1);
    puVar2 = *(undefined1 **)(lVar5 + 0x18);
    puVar4 = puVar2 + 1;
  }
  *(undefined1 **)(lVar5 + 0x18) = puVar4;
  *puVar2 = 0x5b;
  return 1;
}




void FUN_00916f0c(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  long lVar5;
  
  lVar1 = param_1[4];
  if (lVar1 == param_1[3]) {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    if (*(ulong *)(lVar1 + -0x10) != 0) {
      lVar5 = *param_1;
      if (*(char *)(lVar1 + -8) == '\0') {
        puVar3 = *(undefined1 **)(lVar5 + 0x18);
        uVar4 = 0x2c;
        if ((*(ulong *)(lVar1 + -0x10) & 1) != 0) {
          uVar4 = 0x3a;
        }
        puVar2 = puVar3 + 1;
        if (*(undefined1 **)(lVar5 + 0x20) <= puVar2) {
          FUN_008fe7c0(lVar5,1);
          puVar3 = *(undefined1 **)(lVar5 + 0x18);
          puVar2 = puVar3 + 1;
        }
        *(undefined1 **)(lVar5 + 0x18) = puVar2;
        *puVar3 = uVar4;
      }
      else {
        puVar2 = *(undefined1 **)(lVar5 + 0x18);
        puVar3 = puVar2 + 1;
        if (*(undefined1 **)(lVar5 + 0x20) <= puVar3) {
          FUN_008fe7c0(lVar5,1);
          puVar2 = *(undefined1 **)(lVar5 + 0x18);
          puVar3 = puVar2 + 1;
        }
        *(undefined1 **)(lVar5 + 0x18) = puVar3;
        *puVar2 = 0x2c;
      }
    }
    *(long *)(lVar1 + -0x10) = *(long *)(lVar1 + -0x10) + 1;
  }
  return;
}




undefined8 FUN_00916fd4(long *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  puVar1 = *(undefined1 **)(lVar3 + 0x18);
  puVar2 = puVar1 + 1;
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar2) {
    FUN_008fe7c0(lVar3,1);
    puVar1 = *(undefined1 **)(lVar3 + 0x18);
    puVar2 = puVar1 + 1;
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar2;
  *puVar1 = 0x6e;
  lVar3 = *param_1;
  puVar1 = *(undefined1 **)(lVar3 + 0x18);
  puVar2 = puVar1 + 1;
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar2) {
    FUN_008fe7c0(lVar3,1);
    puVar1 = *(undefined1 **)(lVar3 + 0x18);
    puVar2 = puVar1 + 1;
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar2;
  *puVar1 = 0x75;
  lVar3 = *param_1;
  puVar1 = *(undefined1 **)(lVar3 + 0x18);
  puVar2 = puVar1 + 1;
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar2) {
    FUN_008fe7c0(lVar3,1);
    puVar1 = *(undefined1 **)(lVar3 + 0x18);
    puVar2 = puVar1 + 1;
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar2;
  *puVar1 = 0x6c;
  lVar3 = *param_1;
  puVar1 = *(undefined1 **)(lVar3 + 0x18);
  puVar2 = puVar1 + 1;
  if (*(undefined1 **)(lVar3 + 0x20) <= puVar2) {
    FUN_008fe7c0(lVar3,1);
    puVar1 = *(undefined1 **)(lVar3 + 0x18);
    puVar2 = puVar1 + 1;
  }
  *(undefined1 **)(lVar3 + 0x18) = puVar2;
  *puVar1 = 0x6c;
  return 1;
}

