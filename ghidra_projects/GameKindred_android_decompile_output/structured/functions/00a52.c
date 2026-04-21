// functions/00a52 — 12 functions
#include "libGameKindred.h"




void FUN_00a52010(undefined8 param_1,long *param_2)

{
  FUN_00f13f08(param_1,param_1,param_2 + 0x2c);
                    /* WARNING: Could not recover jumptable at 0x00a52040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))(param_2);
  return;
}




void FUN_00a52044(long *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  if (param_1[0x4ac] == 0) {
    pvVar1 = operator_new(0x200);
    FUN_00c81dd8(pvVar1,param_2);
    param_1[0x4ac] = (long)pvVar1;
    FUN_00f023ec(param_1 + 0x2c,pvVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00a520a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00a520a8(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2560);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x84) =
         *(uint *)(lVar1 + 0x84) & 0xfffffff8 | *(uint *)(lVar1 + 0x84) & 3 | (param_2 & 1) << 2;
  }
  return;
}




void FUN_00a520c4(long *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = (byte *)((long)param_1 + 0x27f5);
  if (((*pbVar1 ^ 0xff) & 5) == 0) {
    uVar2 = FUN_00a50370(param_1 + 0x2c,param_1[0x19],*(undefined4 *)((long)param_1 + 0xd4));
    if ((uVar2 & 1) != 0) {
      FUN_00a52b38(param_1);
    }
    (**(code **)(*param_1 + 0xe8))(param_1);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  return;
}




void FUN_00a52130(long param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0xd0) != 0xffff) {
    plVar4 = *(long **)(param_1 + 0xb8);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else if (*(int *)(param_1 + 0xc0) == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
    lVar6 = FUN_00d9ec14(uVar5);
    pbVar1 = (byte *)(param_1 + 0x27f5);
    if (*(int *)(lVar6 + 0x28) == 0xfe) {
      if ((*pbVar1 >> 1 & 1) == 0) goto LAB_00a52248;
      uVar7 = FUN_00d9eb0c(uVar5);
      local_4c = *(int *)(param_1 + 0x27ec);
      iVar8 = 0xffff;
      if (local_4c != 0xffff) {
        FUN_00da3f10(uVar5,uVar7,*(undefined8 *)(param_1 + 200),local_4c,&local_4c);
        iVar8 = local_4c;
      }
      *(int *)(param_1 + 0xd4) = iVar8;
    }
    else {
      if ((*pbVar1 >> 1 & 1) == 0) goto LAB_00a52248;
      uVar3 = FUN_00da3904(uVar5,*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0),1,1)
      ;
      *(undefined4 *)(param_1 + 0xd4) = uVar3;
    }
    *pbVar1 = *pbVar1 & 0xf9 | 4;
  }
LAB_00a52248:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a52274(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ushort uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  undefined4 local_90 [2];
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  if (*(int *)(param_1 + 0x27e8) == param_2) goto LAB_00a52988;
  if (param_2 == 3) {
    *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) & 0xfffffffb;
    *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) & 0xfffffffb;
    FUN_00f01980(param_1 + 0x4e8);
    FUN_00f01980(param_1 + 0x5d8);
    FUN_00f01980(param_1 + 0x218);
LAB_00a5297c:
    FUN_00a52b38(param_1);
  }
  else {
    if (param_2 == 2) {
      lVar1 = param_1 + 0x218;
      *(uint *)(param_1 + 0x29c) = *(uint *)(param_1 + 0x29c) & 0xffffffef;
      *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) & 0xfffffffb;
      *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) & 0xfffffffb;
      FUN_00f01980(param_1 + 0x4e8);
      FUN_00f01980(param_1 + 0x5d8);
      FUN_00f01980(lVar1);
      FUN_00f0e6bc(0,lVar1);
      FUN_00f0e698(lVar1,5);
      *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) | 4;
      FUN_00f0e670(param_1 + 0x308,&DAT_01bee7f6,2);
      uVar5 = *(uint *)(param_1 + 0x38c);
      if ((uVar5 & 0x7f80) != 0x2600) {
        *(uint *)(param_1 + 0x38c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x2600;
        FUN_0091ada4(param_1 + 0x308);
      }
      goto LAB_00a5297c;
    }
    if (param_2 == 1) {
      lVar1 = param_1 + 0x218;
      *(uint *)(param_1 + 0x29c) = *(uint *)(param_1 + 0x29c) | 0x10;
      FUN_00f0e6bc(0x3f800000,lVar1);
      FUN_00f0e698(lVar1,4);
      *(uint *)(param_1 + 0x38c) = *(uint *)(param_1 + 0x38c) & 0xfffffffb;
      local_90[0] = 0x40404040;
      uVar7 = FUN_00eff108(0x3e4ccccd,lVar1,local_90,FUN_00a52db8,4);
      local_90[0] = 0xffffffff;
      uVar8 = FUN_00eff108(0x3e19999a,lVar1,local_90,FUN_009a7624,4);
      local_90[0] = 0x808080;
      uVar9 = FUN_00eff108(0x3f800000,lVar1,local_90,FUN_009a7608,4);
      lVar2 = DAT_03210d00;
      uVar10 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar10 == 0xffff) {
        puVar11 = (ushort *)0x0;
      }
      else {
        puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar10 * 0x40 + 0x10);
        if (uVar10 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar10 = 0xffff;
        }
        else {
          uVar10 = *puVar11;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar10;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efd208(puVar11);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efd2dc(puVar11,uVar7,uVar8,uVar9,0);
      uVar7 = FUN_00efed6c(0x3e4ccccd);
      lVar2 = DAT_03210d00;
      uVar10 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar10 == 0xffff) {
        puVar12 = (ushort *)0x0;
      }
      else {
        puVar12 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar10 * 0x40);
        if (uVar10 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar10 = 0xffff;
        }
        else {
          uVar10 = *puVar12;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar10;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efc8e8(puVar12);
        *(undefined ***)puVar12 = &PTR_FUN_027c27b8;
        puVar12[0xc] = 0;
        puVar12[0xd] = 0;
        puVar12[0xe] = 0;
        puVar12[0xf] = 0;
        puVar12[0x10] = 0;
        puVar12[0x11] = 0;
        puVar12[0x12] = 0;
        puVar12[0x13] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      lVar2 = param_1 + 0x4e8;
      *(code **)(puVar12 + 8) = FUN_00a52dd8;
      *(long *)(puVar12 + 0x10) = lVar2;
      uVar8 = FUN_00efed6c(0x3e19999a);
      lVar3 = DAT_03210d00;
      uVar10 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar10 == 0xffff) {
        _DAT_00000020 = param_1 + 0x5d8;
        puVar14 = (ushort *)0x0;
        puVar13 = (ushort *)0x0;
        _DAT_00000010 = FUN_00a52dd8;
      }
      else {
        puVar14 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar10 * 0x40);
        if (uVar10 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar10 = 0xffff;
        }
        else {
          uVar10 = *puVar14;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar10;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efc8e8(puVar14);
        *(undefined ***)puVar14 = &PTR_FUN_027c27b8;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[0x10] = 0;
        puVar14[0x11] = 0;
        puVar14[0x12] = 0;
        puVar14[0x13] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0;
        puVar14[10] = 0;
        puVar14[0xb] = 0;
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
        lVar3 = DAT_03210d00;
        puVar4 = (ushort *)(DAT_03210d00 + 0x20010);
        uVar10 = *puVar4;
        *(code **)(puVar14 + 8) = FUN_00a52dd8;
        *(long *)(puVar14 + 0x10) = param_1 + 0x5d8;
        if ((ulong)uVar10 == 0xffff) {
          puVar13 = (ushort *)0x0;
        }
        else {
          puVar13 = (ushort *)(lVar3 + (ulong)uVar10 * 0x40 + 0x10);
          if (uVar10 == *(ushort *)(lVar3 + 0x20012)) {
            uVar10 = 0xffff;
          }
          else {
            uVar10 = *puVar13;
          }
          *puVar4 = uVar10;
          *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
          FUN_00efd208(puVar13);
          *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
        }
      }
      FUN_00efd2dc(puVar13,uVar7,puVar12,uVar8,puVar14,0);
      lVar3 = DAT_03210d00;
      uVar10 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar10 == 0xffff) {
        puVar12 = (ushort *)0x0;
      }
      else {
        puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar10 * 0x40 + 0x10);
        if (uVar10 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar10 = 0xffff;
        }
        else {
          uVar10 = *puVar12;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar10;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efcd98(puVar12);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar12,puVar11,puVar13,0);
      uVar7 = FUN_00efed6c(0x3f800000);
      lVar3 = DAT_03210d00;
      uVar10 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar10 == 0xffff) {
        puVar11 = (ushort *)0x0;
      }
      else {
        puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar10 * 0x40 + 0x10);
        if (uVar10 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar10 = 0xffff;
        }
        else {
          uVar10 = *puVar11;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar10;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efd208(puVar11);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_00efd2dc(puVar11,puVar12,uVar7,0);
      FUN_00efd3bc(puVar11);
      lVar3 = param_1 + 0x5d8;
      *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) | 4;
      *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) | 4;
      if ((*(float *)(param_1 + 0x530) != 1.0) || (*(float *)(param_1 + 0x534) != 1.0)) {
        uVar7 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0x530) = uVar7;
        FUN_0091ada4(lVar2);
      }
      if ((*(float *)(param_1 + 0x620) != 1.0) || (*(float *)(param_1 + 0x624) != 1.0)) {
        uVar7 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0x620) = uVar7;
        FUN_0091ada4(lVar3);
      }
      if ((~*(uint *)(param_1 + 0x56c) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) | 0x7f80;
        FUN_0091ada4(lVar2);
      }
      if ((~*(uint *)(param_1 + 0x65c) & 0x7f80) != 0) {
        *(uint *)(param_1 + 0x65c) = *(uint *)(param_1 + 0x65c) | 0x7f80;
        FUN_0091ada4(lVar3);
      }
      FUN_00f01980(lVar2);
      FUN_00f01980(lVar3);
      FUN_00f01980(lVar1);
      FUN_00f022a0(lVar1,puVar11);
      goto LAB_00a5297c;
    }
  }
  *(int *)(param_1 + 0x27e8) = param_2;
LAB_00a52988:
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a529c4(long param_1)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x27f5);
  if ((char)*pbVar1 < '\0') goto LAB_00a52b0c;
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 == (long *)0x0) {
    lVar4 = 0;
  }
  else if (*(int *)(param_1 + 0xc0) == (int)plVar3[1]) {
    lVar4 = (**(code **)(*plVar3 + 0x10))();
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    lVar4 = 0;
    *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
  }
  uVar5 = FUN_00d9eae0(lVar4);
  if (((*(int *)(param_1 + 0xd4) == 0xffff) ||
      (uVar6 = FUN_00da3778((int)*(float *)(*(long *)(lVar4 + 0x40) + 800),uVar5,
                            *(undefined8 *)(param_1 + 200),*(int *)(param_1 + 0xd4),0,0),
      (uVar6 & 1) == 0)) || (uVar6 = FUN_00d9f00c(lVar4), (uVar6 & 1) == 0)) goto LAB_00a52b0c;
  FUN_00d005bc(auStack_70,*(undefined4 *)(lVar4 + 0x260),*(undefined4 *)(param_1 + 0xd4));
  FUN_00ce20fc(auStack_70);
  lVar4 = FUN_00d9ebe8(lVar4);
  if (*(int *)(lVar4 + 0x28) == 0xfe) {
    if (*(int *)(param_1 + 0xd4) == *(int *)(param_1 + 0x27ec)) {
      *(undefined4 *)(param_1 + 0x27ec) = 0xffff;
      goto LAB_00a52ad8;
    }
  }
  else {
LAB_00a52ad8:
    *pbVar1 = *pbVar1 | 2;
    FUN_00e70314(param_1 + 0x27d8);
  }
  FUN_00a52f40(param_1);
  FUN_00a531a4(param_1);
  *pbVar1 = *pbVar1 | 0x80;
LAB_00a52b0c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a52b38(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = (int)param_1[0x4fd];
  if (iVar1 == 3) {
    uVar7 = *(uint *)((long)param_1 + 0x271c);
  }
  else {
    if (iVar1 == 2) {
      FUN_00ceace8();
      uVar5 = FUN_00ceaf5c();
      if ((uVar5 & 1) == 0) {
        *(uint *)((long)param_1 + 0x271c) = *(uint *)((long)param_1 + 0x271c) & 0xfffffffb;
      }
      else {
        uVar4 = FUN_00e6ce7c("HUD_QUICKBUY_REMINDER_TO_SHOP",0);
        FUN_00f0d75c(param_1 + 0x4d3,uVar4);
      }
      FUN_00a51df8(param_1);
      goto LAB_00a52c30;
    }
    if (iVar1 != 1) goto LAB_00a52c30;
    if (*(int *)((long)param_1 + 0xd4) == 0xffff) goto LAB_00a52c30;
    lVar9 = param_1[0x19];
    uVar3 = FUN_00d74ad0(lVar9);
    lVar9 = FUN_00d74ab0(lVar9,uVar3);
    plVar8 = (long *)param_1[0x17];
    if (plVar8 == (long *)0x0) {
      uVar4 = 0;
    }
    else if ((int)param_1[0x18] == (int)plVar8[1]) {
      uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else {
      param_1[0x17] = 0;
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
    }
    lVar6 = FUN_00d9ebe8(uVar4);
    uVar7 = *(uint *)((long)param_1 + 0x271c);
    if (*(int *)(lVar6 + 0x28) != 0xfe) {
      *(uint *)((long)param_1 + 0x271c) = uVar7 | 4;
      uVar4 = FUN_00e6ce7c(*(undefined8 *)(lVar9 + 0x28),0);
      thunk_FUN_00e7051c(&local_48,uVar4);
      FUN_00e705c8(&local_58,"[HIGHLIGHT]");
      FUN_00e705c8(&local_68,"{255,170,45,255}");
      FUN_00e71248(&local_48,0,&local_58,&local_68);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      FUN_00e705c8(&local_58,"[/HIGHLIGHT]");
      FUN_00e705c8(&local_68,&DAT_01bd12d3);
      FUN_00e71248(&local_48,0,&local_58,&local_68);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      FUN_00f0d75c(param_1 + 0x4d3,&local_48);
      FUN_00a51df8(param_1);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
      goto LAB_00a52c30;
    }
  }
  *(uint *)((long)param_1 + 0x271c) = uVar7 & 0xfffffffb;
LAB_00a52c30:
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a52d94(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x27ec) = param_2;
  *(byte *)(param_1 + 0x27f5) = *(byte *)(param_1 + 0x27f5) | 2;
  FUN_00e70314(param_1 + 0x27d8);
  return;
}




float FUN_00a52db8(float param_1,float param_2,float param_3,float param_4)

{
  param_1 = param_1 / param_4;
  return param_1 * param_1 * param_1 * param_1 * param_1 * param_3 + param_2;
}




void FUN_00a52dd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  
  FUN_00f01980();
  if ((*(float *)(param_1 + 0x48) != 1.0) || (*(float *)(param_1 + 0x4c) != 1.0)) {
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    FUN_0091ada4(param_1);
  }
  if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
    FUN_0091ada4(param_1);
  }
  uVar5 = FUN_00efee28(0,0x3f4ccccd,FUN_0091aa80);
  uVar2 = FUN_00eff63c(0x40a00000,0x40a00000,0x3f4ccccd,FUN_009a7608);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar4,uVar5,uVar2,0);
  FUN_00f022a0(param_1,puVar4);
  return;
}




void FUN_00a52f40(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_1 = param_1 + 0x160;
  FUN_00f01980(param_1);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_50 = NEON_fmov(0x3fe00000,4);
  FUN_00efe58c(puVar4,&local_50);
  FUN_00efcac4(0x3c23d70a,puVar4);
  FUN_00f022a0(param_1,puVar4);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe530(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  local_50 = NEON_fmov(0x3f800000,4);
  FUN_00efe58c(puVar4,&local_50);
  FUN_00efcac4(0x3e19999a,puVar4);
  FUN_00efcb24(puVar4,FUN_00a269a4);
  FUN_00f022a0(param_1,puVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

