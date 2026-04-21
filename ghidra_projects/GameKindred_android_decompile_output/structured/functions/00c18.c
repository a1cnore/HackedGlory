// functions/00c18 — 25 functions
#include "libGameKindred.h"




void thunk_FUN_00c18480(long param_1)

{
  if ((*(byte *)(param_1 + 0x14c) >> 2 & 1) == 0) {
    return;
  }
  FUN_00afd20c(param_1 + 200,"Effect_Spoils_Ring");
  FUN_00afd018(param_1 + 200,"Effect_Spoils_Ring");
  return;
}




void FUN_00c180bc(undefined8 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_027f68d0;
  if (param_1[0x18] != 0) {
    uVar2 = FUN_00f02540();
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(param_1[0x18],1);
    }
    if ((long *)param_1[0x18] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x18] + 8))();
    }
    param_1[0x18] = 0;
  }
  uVar1 = FUN_00f048a4("SPOILSOFWAR::PULSE_RING");
  FUN_00c18180(param_1,uVar1,thunk_FUN_00c18480,param_1);
  FUN_00f0d3a4(param_1 + 0x73);
  param_1[0x55] = &PTR_FUN_028266f0;
  param_1[0x6c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6f);
  FUN_00f13d08(param_1 + 0x55);
  FUN_00afc0a4(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c18180(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_0099c2fc((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar2 + 6;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_00c181d4(void *param_1)

{
  FUN_00c180bc();
  operator_delete(param_1);
  return;
}




void FUN_00c181f8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1[0x18] == 0) {
    if ((*(uint *)((long)param_1 + 0x14c) >> 2 & 1) == 0) {
      plVar1 = param_1 + 0x19;
      *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 4;
      FUN_00afc2ec(0,0,plVar1,"Effect_Spoils_Ring","build://Effects/Menu/Spoils/Ring/Ring.pfx",4);
      local_40 = 0x3f0000003f000000;
      (**(code **)(param_1[0x19] + 0x28))(plVar1,&local_40);
      FUN_00f13f08(0x441b0000,0x441b0000,plVar1);
      if ((*(float *)(param_1 + 0x22) != 1.3) || (*(float *)((long)param_1 + 0x114) != 1.3)) {
        param_1[0x22] = 0x3fa666663fa66666;
        FUN_0091ada4(plVar1);
      }
      FUN_00afd018(plVar1,"Effect_Spoils_Ring");
      uVar4 = *(uint *)((long)param_1 + 0x32c);
      if ((uVar4 & 0x7f80) != 0) {
        *(uint *)((long)param_1 + 0x32c) = uVar4 & 0xffff807f;
        FUN_0091ada4(param_1 + 0x55);
        uVar4 = *(uint *)((long)param_1 + 0x32c);
      }
      *(uint *)((long)param_1 + 0x32c) = uVar4 | 4;
      uVar3 = FUN_00efee28(0x3f800000,0x3f800000,FUN_009a7624);
      FUN_00f022a0(param_1 + 0x55,uVar3);
    }
  }
  else {
    FUN_00f01a4c(param_1[0x18],1);
    if ((long *)param_1[0x18] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x18] + 8))();
    }
    param_1[0x18] = 0;
  }
  param_1[0x18] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_00c1839c(param_1);
  FUN_00c18480(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1839c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_3[0x18];
  if (lVar2 != 0) {
    local_40 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_3c = param_2;
    FUN_00f13f18(lVar2,&local_40);
    FUN_00f07940(0,0,param_3[0x18],8,param_3,8);
  }
  FUN_00f07940(0,0,param_3 + 0x73,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x55,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x19,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c18480(long param_1)

{
  if ((*(byte *)(param_1 + 0x14c) >> 2 & 1) == 0) {
    return;
  }
  FUN_00afd20c(param_1 + 200,"Effect_Spoils_Ring");
  FUN_00afd018(param_1 + 200,"Effect_Spoils_Ring");
  return;
}




void FUN_00c184c4(long param_1)

{
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c184d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x158))();
    return;
  }
  return;
}




void FUN_00c184dc(long param_1)

{
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c184ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x168))();
    return;
  }
  return;
}




void FUN_00c184f4(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_00c8bde8();
    return;
  }
  return;
}




void FUN_00c18504(long param_1)

{
  if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c18514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x170))();
    return;
  }
  return;
}




void FUN_00c1851c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  if ((*(byte *)(param_1 + 0x14c) >> 2 & 1) == 0) {
    return;
  }
  lVar1 = param_1 + 200;
  FUN_00afc73c(lVar1);
  FUN_00afc2ec(0,0,lVar1,"Effect_Spoils_Ring_Fade",
               "build://Effects/Menu/Spoils/Ring_Fade/Ring_Fade.pfx",4);
  FUN_00afd018(lVar1,"Effect_Spoils_Ring_Fade");
  uVar5 = *(uint *)(param_1 + 0x41c);
  lVar1 = param_1 + 0x398;
  if ((uVar5 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x41c) = uVar5 & 0xffff807f;
    FUN_0091ada4(lVar1);
    uVar5 = *(uint *)(param_1 + 0x41c);
  }
  *(uint *)(param_1 + 0x41c) = uVar5 & 0xfffffffb;
  uVar3 = FUN_00efee28(0x3f3d70a4,0x3f800000,FUN_009a7624);
  FUN_00f022a0(lVar1,uVar3);
  uVar3 = FUN_00efee28(0x3eae147b,0x3f800000,FUN_009a7624);
  FUN_00f022a0(param_1 + 0x2a8,uVar3);
  uVar3 = FUN_00efee28(0x3f666666,0x3f000000,FUN_00aa89f4);
  uVar4 = FUN_00efee28(0x3f0ccccd,0x3f000000,FUN_00aa89f4);
  lVar2 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efd208(puVar7);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar7,uVar3,uVar4,0);
  FUN_00efd3bc(puVar7);
  FUN_00f022a0(lVar1,puVar7);
  return;
}




void thunk_FUN_00c18480(long param_1)

{
  if ((*(byte *)(param_1 + 0x14c) >> 2 & 1) == 0) {
    return;
  }
  FUN_00afd20c(param_1 + 200,"Effect_Spoils_Ring");
  FUN_00afd018(param_1 + 200,"Effect_Spoils_Ring");
  return;
}




void thunk_FUN_00c1839c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_3[0x18];
  if (lVar2 != 0) {
    uStack_40 = (**(code **)(*param_3 + 0x48))(param_3);
    uStack_3c = param_2;
    FUN_00f13f18(lVar2,&uStack_40);
    FUN_00f07940(0,0,param_3[0x18],8,param_3,8);
  }
  FUN_00f07940(0,0,param_3 + 0x73,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x55,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x19,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1871c(undefined8 *param_1)

{
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_027f6a18;
  param_1[0x19] = 0;
  return;
}




void FUN_00c18754(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_027f6a18;
  puVar4 = (uint *)(param_1 + 0x18);
  uVar2 = (ulong)*puVar4;
  if (*puVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if (*(long *)(param_1[0x19] + lVar5) != 0) {
        uVar2 = FUN_00f02540();
        if ((uVar2 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(param_1[0x19] + lVar5),1);
        }
        plVar1 = *(long **)(param_1[0x19] + lVar5);
        if (plVar1 == (long *)0x0) {
          puVar3 = (undefined8 *)(param_1[0x19] + uVar6 * 8);
        }
        else {
          (**(code **)(*plVar1 + 8))();
          puVar3 = (undefined8 *)(param_1[0x19] + lVar5);
        }
        *puVar3 = 0;
        uVar2 = (ulong)*puVar4;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar6 < uVar2);
  }
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c18814(void *param_1)

{
  FUN_00c18754();
  operator_delete(param_1);
  return;
}




void FUN_00c18838(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  FUN_00c18984();
  uVar1 = *(uint *)(param_1 + 0xc0);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 200) + uVar5 * 8);
      lVar2 = plVar4[8];
      fVar7 = *(float *)((long)plVar4 + 0x44);
      *(uint *)((long)plVar4 + 0x84) = *(uint *)((long)plVar4 + 0x84) | 4;
      fVar6 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
      if ((*(float *)(plVar4 + 8) != -fVar6) || (*(float *)((long)plVar4 + 0x44) != fVar7)) {
        *(float *)(plVar4 + 8) = -fVar6;
        *(float *)((long)plVar4 + 0x44) = fVar7;
        FUN_0091ada4(plVar4);
      }
      fVar6 = (float)(int)uVar5 * 0.12 + 0.0;
      uVar3 = FUN_00efed6c(fVar6);
      FUN_00f022a0(*(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8),uVar3);
      uVar3 = FUN_00efef08((int)lVar2,fVar7,0x3ecccccd,FUN_00c18a6c);
      FUN_00f022a0(*(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8),uVar3);
      FUN_00c8a9a8(fVar6,0x3e75c290,0x3e23d70b,*(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8)
                  );
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  return;
}




void FUN_00c18984(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1[0x19] + uVar4 * 8);
      uVar2 = FUN_00c18b08(uVar3);
      if ((uVar2 & 1) == 0) {
        uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_00f13f08(uVar5,0x43520000,uVar3);
        if (uVar4 == 0) {
          FUN_00f07940(0,0,uVar3,6,param_1,6);
        }
        else {
          uVar5 = *(undefined8 *)(param_1[0x19] + (ulong)((int)uVar4 - 1) * 8);
          FUN_00f07b18(0xc1400000,uVar3,2,uVar5,0);
          FUN_00f07b18(0,uVar3,4,uVar5,4);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}




float FUN_00c18a6c(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 + -1.0;
  return (fVar1 * fVar1 * (fVar1 * 2.20158 + 1.20158) + 1.0) * param_3 + param_2;
}




undefined8 FUN_00c18aac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_00c18b08(*(undefined8 *)(*(long *)(param_1 + 200) + uVar3 * 8));
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc0));
  }
  uVar2 = FUN_00f023dc(param_1);
  return uVar2;
}




undefined8 FUN_00c18b08(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00f023dc();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00f023dc(param_1 + 0xb8), (uVar1 & 1) == 0)) {
    uVar2 = FUN_00f023dc(param_1 + 0x2f8);
    return uVar2;
  }
  return 1;
}




void FUN_00c18b4c(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  auVar2 = (**(code **)(*param_1 + 0x48))();
  FUN_00f13f08(auVar2,0x43520000,param_2);
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  FUN_00bc4aa4(param_1 + 0x18,&local_40);
  *(uint *)(local_40 + 0x84) = *(uint *)(local_40 + 0x84) & 0xfffffffb;
  FUN_00c18984(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c18984(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1[0x19] + uVar4 * 8);
      uVar2 = FUN_00c18b08(uVar3);
      if ((uVar2 & 1) == 0) {
        uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
        FUN_00f13f08(uVar5,0x43520000,uVar3);
        if (uVar4 == 0) {
          FUN_00f07940(0,0,uVar3,6,param_1,6);
        }
        else {
          uVar5 = *(undefined8 *)(param_1[0x19] + (ulong)((int)uVar4 - 1) * 8);
          FUN_00f07b18(0xc1400000,uVar3,2,uVar5,0);
          FUN_00f07b18(0,uVar3,4,uVar5,4);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return;
}




void FUN_00c18c00(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  void *pvVar16;
  uint uVar17;
  code *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar14 = tpidr_el0;
  local_68 = *(long *)(lVar14 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f6b60;
  FUN_00f0c714();
  plVar2 = param_1 + 0x33;
  FUN_00f0c714(plVar2);
  plVar3 = param_1 + 0x4e;
  FUN_00f017e8(plVar3);
  plVar4 = param_1 + 0x5f;
  param_1[0x4e] = (long)&PTR_FUN_027c1f80;
  FUN_00f11234(plVar4);
  plVar5 = param_1 + 0x93;
  FUN_00ed66ec(plVar5);
  plVar6 = param_1 + 0x1d8;
  FUN_00c1a180();
  plVar7 = param_1 + 0x510;
  FUN_00ab6c24(plVar7,0);
  plVar8 = param_1 + 0x7c8;
  FUN_00f017e8(plVar8);
  plVar9 = param_1 + 0x7d9;
  param_1[0x7c8] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar9);
  plVar10 = param_1 + 0x7ff;
  FUN_00f017e8(plVar10);
  param_1[0x7ff] = (long)&PTR_FUN_027c1f80;
  plVar11 = param_1 + 0x810;
  FUN_00f0d160(plVar11);
  param_1[0x837] = 0;
  param_1[0x836] = 0;
  param_1[0x839] = 0;
  *(undefined4 *)(param_1 + 0x83a) = 0x41700000;
  *(undefined4 *)((long)param_1 + 0x41e4) = 0;
  *(undefined8 *)((long)param_1 + 0x41dc) = 0;
  *(undefined8 *)((long)param_1 + 0x41d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar3,plVar6,1);
  FUN_00f023ec(plVar3,plVar7,1);
  FUN_00f023ec(plVar3,plVar8,1);
  FUN_00f023ec(plVar8,plVar9,1);
  FUN_00f023ec(plVar3,plVar10,1);
  FUN_00f023ec(plVar10,plVar11,1);
  plVar3 = param_1 + 0x60;
  local_70 = DAT_03210f58;
  local_98 = FUN_00c1922c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_009693a0(plVar3,&local_98);
  local_98 = FUN_00c1922c;
  local_70 = DAT_03210f84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_009693a0(plVar3,&local_98);
  local_98 = FUN_00c1922c;
  uVar12 = DAT_03210f60;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar12;
  FUN_009693a0(plVar3,&local_98);
  uVar13 = DAT_03210f8c;
  local_98 = FUN_00c1922c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar13;
  FUN_009693a0(plVar3,&local_98);
  FUN_00f0c774(plVar1,&DAT_01bee7f6);
  uVar17 = *(uint *)((long)param_1 + 0x144);
  if ((uVar17 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x144) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
    uVar17 = *(uint *)((long)param_1 + 0x144);
  }
  *(uint *)((long)param_1 + 0x144) = uVar17 | 0x10;
  local_98 = FUN_00c19294;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar12;
  FUN_009693a0(param_1 + 0x19,&local_98);
  local_98 = FUN_00c19294;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar13;
  FUN_009693a0(param_1 + 0x19,&local_98);
  FUN_00f0c774(plVar2,&DAT_01bee7f6);
  FUN_00f112f0(plVar4,1);
  local_98 = (code *)CONCAT71(local_98._1_7_,9);
  FUN_00ed5ab0(plVar5,&local_98);
  uVar15 = FUN_00e6ce7c("MENU_INTERSTITIAL_GENERIC_CLOSE",0);
  FUN_00ab703c(0,0x43480000,0x43480000,plVar7,0,uVar15,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00f0d92c(param_1 + 0x5f4,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00ab7598(0x3ecccccd,plVar7,&DAT_01bee7f6);
  local_98 = FUN_00c19294;
  local_80 = 0;
  uStack_78 = 0;
  uVar12 = DAT_03210c64;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar12;
  FUN_009693a0(param_1 + 0x511,&local_98);
  FUN_00b09144(0xbf800000,plVar7);
  FUN_00ab7628(0x42c80000,plVar7);
  *(uint *)((long)param_1 + 0x3ec4) = *(uint *)((long)param_1 + 0x3ec4) & 0xfffffffb;
  uVar15 = FUN_00e6ce7c("MENU_PARTY_CHAT_CONNECTING",0);
  FUN_00f0d75c(plVar9,uVar15);
  *(uint *)((long)param_1 + 0x407c) = *(uint *)((long)param_1 + 0x407c) & 0xfffffffb;
  uVar15 = FUN_00e6ce7c("MENU_PARTY_CHAT_ERROR_CONNECTING",0);
  FUN_00f0d75c(plVar11,uVar15);
  uVar15 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_00b02c3c(plVar6,uVar15,0);
  local_70 = DAT_03210fac;
  local_98 = thunk_FUN_00c196c8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_009693a0(param_1 + 0x1d9,&local_98);
  local_70 = DAT_03210fb0;
  local_98 = thunk_FUN_00c1985c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  FUN_009693a0(param_1 + 0x1d9,&local_98);
  FUN_00ce1cbc(plVar6,1);
  FUN_00ce1e34(plVar6,&DAT_03210450,&DAT_03210450,&DAT_03210450,0,0,0,0,0,1,1,0);
  local_98 = FUN_00c19304;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_90 = param_1;
  local_70 = uVar12;
  FUN_009693a0(param_1 + 0x259,&local_98);
  *(undefined1 *)((long)param_1 + 0x287a) = 0;
  uVar15 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_CHAT_NODE_MESSAGE",0);
  thunk_FUN_00e7051c(&local_98,uVar15);
  pvVar16 = operator_new(0x318);
  FUN_00c1a3e4(pvVar16,&DAT_03210450,&local_98,0,0,1);
  param_1[0x838] = (long)pvVar16;
  FUN_00ed5664(plVar5,pvVar16,1);
  if (local_90 != (long *)0x0) {
    operator_delete__(local_90);
    local_98 = (code *)0x0;
    local_90 = (long *)0x0;
  }
  if (*(long *)(lVar14 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

