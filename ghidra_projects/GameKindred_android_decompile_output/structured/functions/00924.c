// functions/00924 — 21 functions
#include "libGameKindred.h"




undefined4 FUN_00924098(void)

{
  return DAT_02c7bf10;
}




undefined4 FUN_009240a4(void)

{
  return DAT_02c7bf18;
}




void FUN_009240b0(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceb604(&DAT_02c3bda8);
  if ((uVar1 & 1) != 0) {
    FUN_00ceb4a4(&DAT_02c3bda8,1);
    return;
  }
  return;
}




void FUN_009240e4(void)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_850;
  undefined4 local_84c;
  undefined1 auStack_848 [2048];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (DAT_02c7bed8 != 0) {
    DAT_02c7bed0._0_4_ = 0;
  }
  if (DAT_02c7bee8 != 0) {
    DAT_02c7bee0._0_4_ = 0;
  }
  FUN_00924f5c(&DAT_02c7bef0,DAT_02c7bef8);
  DAT_02c7bef0 = &DAT_02c7bef8;
  DAT_02c7bef8 = 0;
  DAT_02c7bf00 = 0;
  DAT_02c7bf08 = 0;
  DAT_02c7bf15 = 1;
  uVar4 = FUN_01988718();
  lVar5 = FUN_01987114(uVar4,0,"*KindredManifest*",0);
  if (lVar5 == 0) {
    FUN_01988700(0,"build://Levels/DefinitionManifest.def");
    FUN_019887c4("*KindredManifest*",0,0xffffffff,0);
    FUN_00cead30();
  }
  uVar6 = FUN_009236c8();
  while ((uVar6 & 1) != 0) {
    uVar6 = FUN_009235b8(auStack_848,&local_84c,&local_850,0);
    if ((uVar6 & 1) != 0) {
      FUN_009242bc(&DAT_02c7bed0,&local_850);
      do {
        FUN_00924344(local_850,auStack_848,local_84c);
        uVar6 = FUN_009235b8(auStack_848,&local_84c,&local_850,0);
      } while ((uVar6 & 1) != 0);
    }
    DAT_02c7bf08 = DAT_02c7bf08 + 1;
    iVar3 = 0;
    if (DAT_02c3bd70 != (FILE *)0x0) {
      iVar3 = fclose(DAT_02c3bd70);
      DAT_02c3bd70 = (FILE *)0x0;
    }
    uVar6 = FUN_009236c8(iVar3);
  }
  DAT_02c7bf08 = (int)DAT_02c7bed0 + -1;
  uVar6 = FUN_009236c8();
  uVar2 = DAT_02c7bf18;
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_009235b8(auStack_848,&local_84c,&local_850,1);
    uVar2 = DAT_02c7bf18;
    DAT_02c7bf18 = local_850;
    while ((uVar6 & 1) != 0) {
      local_850 = DAT_02c7bf18;
      uVar6 = FUN_009235b8(auStack_848,&local_84c,&local_850,1);
      uVar2 = DAT_02c7bf18;
      DAT_02c7bf18 = local_850;
    }
  }
  DAT_02c7bf18 = uVar2;
  DAT_02c7bf08 = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009242bc(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00925040(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 4 + -4) = *param_2;
  return;
}




void FUN_00924344(undefined8 param_1,ushort *param_2)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  uint auStack_350 [4];
  long local_340;
  uint local_338 [4];
  undefined2 local_328;
  undefined2 uStack_326;
  undefined2 local_324;
  undefined2 uStack_322;
  undefined2 local_320;
  undefined2 uStack_31e;
  undefined2 local_31c;
  undefined2 uStack_31a;
  undefined2 local_318;
  undefined2 uStack_316;
  undefined2 local_314;
  undefined2 uStack_312;
  undefined2 local_310;
  undefined2 uStack_30e;
  undefined2 local_30c;
  undefined2 uStack_30a;
  undefined2 local_308;
  undefined2 uStack_306;
  undefined2 local_304;
  undefined2 uStack_302;
  undefined2 local_300;
  undefined2 uStack_2fe;
  undefined2 local_2fc;
  undefined2 uStack_2fa;
  undefined2 local_2f8;
  undefined2 uStack_2f6;
  undefined2 local_2f4;
  undefined2 uStack_2f2;
  undefined2 local_2f0;
  undefined2 uStack_2ee;
  undefined2 local_2ec;
  undefined2 uStack_2ea;
  undefined2 local_2e8;
  undefined2 uStack_2e6;
  undefined2 local_2e4;
  undefined2 uStack_2e2;
  undefined2 uStack_2e0;
  uint local_2de;
  uint local_2da;
  uint local_2d6;
  uint local_2d2;
  uint local_2ce;
  undefined2 uStack_2ca;
  undefined2 local_2c8;
  undefined2 uStack_2c6;
  undefined2 uStack_2c4;
  uint local_2c2;
  uint local_2be;
  uint local_2ba;
  uint local_2b6;
  uint local_2b2;
  uint local_2ae;
  uint local_2aa;
  uint local_2a6;
  uint local_2a2;
  uint local_29e;
  uint local_29a;
  uint local_296;
  uint local_286;
  uint local_282;
  uint local_27e;
  uint local_27a;
  uint local_276;
  uint local_272;
  uint local_26e;
  uint local_26a;
  uint local_266;
  uint local_262;
  uint local_25e;
  uint local_25a;
  uint local_256;
  uint local_252;
  uint local_24e;
  uint local_24a;
  uint local_246;
  uint local_242;
  uint local_23e;
  uint local_23a;
  uint local_236;
  uint local_232;
  uint local_22e;
  uint local_22a;
  uint local_226;
  uint local_222;
  uint local_21e;
  uint local_21a;
  uint local_216;
  uint local_212;
  uint local_20e;
  uint local_20a;
  uint local_206;
  uint local_202;
  uint local_1fe;
  uint local_1fa;
  uint local_1f6;
  uint local_1f2;
  uint local_1ee;
  uint local_1ea;
  uint local_1e6;
  uint local_1e2;
  uint local_1de;
  uint local_1da;
  uint local_1d6 [10];
  uint local_1ae [10];
  uint local_186 [10];
  uint local_15e [20];
  uint local_10e [3];
  uint local_102 [3];
  uint local_f6 [3];
  uint local_e7;
  uint local_e3;
  uint local_df [8];
  uint local_bf [8];
  uint local_9f [8];
  uint local_7f;
  uint local_7b;
  uint local_77;
  uint local_73;
  uint local_57;
  uint local_53;
  
  lVar10 = tpidr_el0;
  local_340 = *(long *)(lVar10 + 0x28);
  puVar13 = (uint *)(param_2 + 1);
  uVar6 = *param_2 >> 8 | *param_2 << 8;
  if (DAT_02c7bf14 != '\0') {
    FUN_00923768();
  }
  if (uVar6 == 0x430) {
    uVar7 = (*puVar13 & 0xff00ff00) >> 8 | (*puVar13 & 0xff00ff) << 8;
    local_338[0] = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (*(uint *)(param_2 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 3) & 0xff00ff) << 8;
    local_338[1] = uVar7 >> 0x10 | uVar7 << 0x10;
    FUN_00924dd4(param_1,local_338);
  }
  else if (uVar6 == 0x3f3) {
    memcpy(local_338,puVar13,0x2ea);
    uVar7 = (local_338[0] & 0xff00ff00) >> 8 | (local_338[0] & 0xff00ff) << 8;
    local_338[0] = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_338[1] & 0xff00ff00) >> 8 | (local_338[1] & 0xff00ff) << 8;
    local_338[1] = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_338[2] & 0xff00ff00) >> 8 | (local_338[2] & 0xff00ff) << 8;
    local_338[2] = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_338[3] & 0xff00ff00) >> 8 | (local_338[3] & 0xff00ff) << 8;
    local_338[3] = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (CONCAT22(local_324,uStack_326) & 0xff00ff00) >> 8 |
            (CONCAT22(local_324,uStack_326) & 0xff00ff) << 8;
    uStack_326 = (undefined2)(uVar7 >> 0x10);
    local_324 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_320,uStack_322) & 0xff00ff00) >> 8 |
            (CONCAT22(local_320,uStack_322) & 0xff00ff) << 8;
    uStack_322 = (undefined2)(uVar7 >> 0x10);
    local_320 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_31c,uStack_31e) & 0xff00ff00) >> 8 |
            (CONCAT22(local_31c,uStack_31e) & 0xff00ff) << 8;
    uStack_31e = (undefined2)(uVar7 >> 0x10);
    local_31c = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_318,uStack_31a) & 0xff00ff00) >> 8 |
            (CONCAT22(local_318,uStack_31a) & 0xff00ff) << 8;
    uStack_31a = (undefined2)(uVar7 >> 0x10);
    local_318 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_314,uStack_316) & 0xff00ff00) >> 8 |
            (CONCAT22(local_314,uStack_316) & 0xff00ff) << 8;
    uStack_316 = (undefined2)(uVar7 >> 0x10);
    local_314 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_310,uStack_312) & 0xff00ff00) >> 8 |
            (CONCAT22(local_310,uStack_312) & 0xff00ff) << 8;
    uStack_312 = (undefined2)(uVar7 >> 0x10);
    local_310 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_30c,uStack_30e) & 0xff00ff00) >> 8 |
            (CONCAT22(local_30c,uStack_30e) & 0xff00ff) << 8;
    uStack_30e = (undefined2)(uVar7 >> 0x10);
    local_30c = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_308,uStack_30a) & 0xff00ff00) >> 8 |
            (CONCAT22(local_308,uStack_30a) & 0xff00ff) << 8;
    uStack_30a = (undefined2)(uVar7 >> 0x10);
    local_308 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_304,uStack_306) & 0xff00ff00) >> 8 |
            (CONCAT22(local_304,uStack_306) & 0xff00ff) << 8;
    uStack_306 = (undefined2)(uVar7 >> 0x10);
    local_304 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_300,uStack_302) & 0xff00ff00) >> 8 |
            (CONCAT22(local_300,uStack_302) & 0xff00ff) << 8;
    uStack_302 = (undefined2)(uVar7 >> 0x10);
    local_300 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_2fc,uStack_2fe) & 0xff00ff00) >> 8 |
            (CONCAT22(local_2fc,uStack_2fe) & 0xff00ff) << 8;
    uStack_2fe = (undefined2)(uVar7 >> 0x10);
    local_2fc = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_2f8,uStack_2fa) & 0xff00ff00) >> 8 |
            (CONCAT22(local_2f8,uStack_2fa) & 0xff00ff) << 8;
    uStack_2fa = (undefined2)(uVar7 >> 0x10);
    local_2f8 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_2f4,uStack_2f6) & 0xff00ff00) >> 8 |
            (CONCAT22(local_2f4,uStack_2f6) & 0xff00ff) << 8;
    uStack_2f6 = (undefined2)(uVar7 >> 0x10);
    local_2f4 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_2f0,uStack_2f2) & 0xff00ff00) >> 8 |
            (CONCAT22(local_2f0,uStack_2f2) & 0xff00ff) << 8;
    uStack_2f2 = (undefined2)(uVar7 >> 0x10);
    local_2f0 = (undefined2)uVar7;
    uVar7 = (local_1e6 & 0xff00ff00) >> 8 | (local_1e6 & 0xff00ff) << 8;
    local_1e6 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_1e2 & 0xff00ff00) >> 8 | (local_1e2 & 0xff00ff) << 8;
    local_1e2 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_1de & 0xff00ff00) >> 8 | (local_1de & 0xff00ff) << 8;
    local_1de = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (CONCAT22(local_2ec,uStack_2ee) & 0xff00ff00) >> 8 |
            (CONCAT22(local_2ec,uStack_2ee) & 0xff00ff) << 8;
    uStack_2ee = (undefined2)(uVar7 >> 0x10);
    local_2ec = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_2e8,uStack_2ea) & 0xff00ff00) >> 8 |
            (CONCAT22(local_2e8,uStack_2ea) & 0xff00ff) << 8;
    uStack_2ea = (undefined2)(uVar7 >> 0x10);
    local_2e8 = (undefined2)uVar7;
    uVar7 = (CONCAT22(local_2e4,uStack_2e6) & 0xff00ff00) >> 8 |
            (CONCAT22(local_2e4,uStack_2e6) & 0xff00ff) << 8;
    uStack_2e6 = (undefined2)(uVar7 >> 0x10);
    local_2e4 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2e0,uStack_2e2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2e0,uStack_2e2) & 0xff00ff) << 8;
    uStack_2e2 = (undefined2)(uVar7 >> 0x10);
    uStack_2e0 = (undefined2)uVar7;
    uVar7 = (local_2de & 0xff00ff00) >> 8 | (local_2de & 0xff00ff) << 8;
    local_2de = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2da & 0xff00ff00) >> 8 | (local_2da & 0xff00ff) << 8;
    local_2da = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2d6 & 0xff00ff00) >> 8 | (local_2d6 & 0xff00ff) << 8;
    local_2d6 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2d2 & 0xff00ff00) >> 8 | (local_2d2 & 0xff00ff) << 8;
    local_2d2 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2ce & 0xff00ff00) >> 8 | (local_2ce & 0xff00ff) << 8;
    local_2ce = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (CONCAT22(local_2c8,uStack_2ca) & 0xff00ff00) >> 8 |
            (CONCAT22(local_2c8,uStack_2ca) & 0xff00ff) << 8;
    uStack_2ca = (undefined2)(uVar7 >> 0x10);
    local_2c8 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2c4,uStack_2c6) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2c4,uStack_2c6) & 0xff00ff) << 8;
    uStack_2c6 = (undefined2)(uVar7 >> 0x10);
    uStack_2c4 = (undefined2)uVar7;
    uVar7 = (local_2c2 & 0xff00ff00) >> 8 | (local_2c2 & 0xff00ff) << 8;
    local_2c2 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2be & 0xff00ff00) >> 8 | (local_2be & 0xff00ff) << 8;
    local_2be = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2ba & 0xff00ff00) >> 8 | (local_2ba & 0xff00ff) << 8;
    local_2ba = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2b6 & 0xff00ff00) >> 8 | (local_2b6 & 0xff00ff) << 8;
    local_2b6 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2b2 & 0xff00ff00) >> 8 | (local_2b2 & 0xff00ff) << 8;
    local_2b2 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2ae & 0xff00ff00) >> 8 | (local_2ae & 0xff00ff) << 8;
    local_2ae = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2aa & 0xff00ff00) >> 8 | (local_2aa & 0xff00ff) << 8;
    local_2aa = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2a6 & 0xff00ff00) >> 8 | (local_2a6 & 0xff00ff) << 8;
    local_2a6 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_2a2 & 0xff00ff00) >> 8 | (local_2a2 & 0xff00ff) << 8;
    local_2a2 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_29e & 0xff00ff00) >> 8 | (local_29e & 0xff00ff) << 8;
    local_29e = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_29a & 0xff00ff00) >> 8 | (local_29a & 0xff00ff) << 8;
    local_29a = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_296 & 0xff00ff00) >> 8 | (local_296 & 0xff00ff) << 8;
    local_296 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_286 & 0xff00ff00) >> 8 | (local_286 & 0xff00ff) << 8;
    local_286 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_282 & 0xff00ff00) >> 8 | (local_282 & 0xff00ff) << 8;
    local_282 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_27e & 0xff00ff00) >> 8 | (local_27e & 0xff00ff) << 8;
    local_27e = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_27a & 0xff00ff00) >> 8 | (local_27a & 0xff00ff) << 8;
    local_27a = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_276 & 0xff00ff00) >> 8 | (local_276 & 0xff00ff) << 8;
    local_276 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_272 & 0xff00ff00) >> 8 | (local_272 & 0xff00ff) << 8;
    local_272 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_26e & 0xff00ff00) >> 8 | (local_26e & 0xff00ff) << 8;
    local_26e = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_26a & 0xff00ff00) >> 8 | (local_26a & 0xff00ff) << 8;
    local_26a = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_266 & 0xff00ff00) >> 8 | (local_266 & 0xff00ff) << 8;
    local_266 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_262 & 0xff00ff00) >> 8 | (local_262 & 0xff00ff) << 8;
    local_262 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_25e & 0xff00ff00) >> 8 | (local_25e & 0xff00ff) << 8;
    local_25e = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_25a & 0xff00ff00) >> 8 | (local_25a & 0xff00ff) << 8;
    local_25a = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_256 & 0xff00ff00) >> 8 | (local_256 & 0xff00ff) << 8;
    local_256 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_252 & 0xff00ff00) >> 8 | (local_252 & 0xff00ff) << 8;
    local_252 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_24e & 0xff00ff00) >> 8 | (local_24e & 0xff00ff) << 8;
    local_24e = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_24a & 0xff00ff00) >> 8 | (local_24a & 0xff00ff) << 8;
    local_24a = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_246 & 0xff00ff00) >> 8 | (local_246 & 0xff00ff) << 8;
    local_246 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_242 & 0xff00ff00) >> 8 | (local_242 & 0xff00ff) << 8;
    local_242 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_23e & 0xff00ff00) >> 8 | (local_23e & 0xff00ff) << 8;
    local_23e = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_23a & 0xff00ff00) >> 8 | (local_23a & 0xff00ff) << 8;
    local_23a = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_236 & 0xff00ff00) >> 8 | (local_236 & 0xff00ff) << 8;
    local_236 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_232 & 0xff00ff00) >> 8 | (local_232 & 0xff00ff) << 8;
    local_232 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_22e & 0xff00ff00) >> 8 | (local_22e & 0xff00ff) << 8;
    local_22e = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_22a & 0xff00ff00) >> 8 | (local_22a & 0xff00ff) << 8;
    local_22a = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_226 & 0xff00ff00) >> 8 | (local_226 & 0xff00ff) << 8;
    local_226 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_222 & 0xff00ff00) >> 8 | (local_222 & 0xff00ff) << 8;
    local_222 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_21e & 0xff00ff00) >> 8 | (local_21e & 0xff00ff) << 8;
    local_21e = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_21a & 0xff00ff00) >> 8 | (local_21a & 0xff00ff) << 8;
    local_21a = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_216 & 0xff00ff00) >> 8 | (local_216 & 0xff00ff) << 8;
    local_216 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_212 & 0xff00ff00) >> 8 | (local_212 & 0xff00ff) << 8;
    local_212 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_20e & 0xff00ff00) >> 8 | (local_20e & 0xff00ff) << 8;
    local_20e = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_20a & 0xff00ff00) >> 8 | (local_20a & 0xff00ff) << 8;
    local_20a = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_206 & 0xff00ff00) >> 8 | (local_206 & 0xff00ff) << 8;
    local_206 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_202 & 0xff00ff00) >> 8 | (local_202 & 0xff00ff) << 8;
    local_202 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_1fe & 0xff00ff00) >> 8 | (local_1fe & 0xff00ff) << 8;
    local_1fe = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_1fa & 0xff00ff00) >> 8 | (local_1fa & 0xff00ff) << 8;
    local_1fa = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_1f6 & 0xff00ff00) >> 8 | (local_1f6 & 0xff00ff) << 8;
    local_1f6 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_1f2 & 0xff00ff00) >> 8 | (local_1f2 & 0xff00ff) << 8;
    local_1f2 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_1ee & 0xff00ff00) >> 8 | (local_1ee & 0xff00ff) << 8;
    local_1ee = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_1ea & 0xff00ff00) >> 8 | (local_1ea & 0xff00ff) << 8;
    local_1ea = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_1da & 0xff00ff00) >> 8 | (local_1da & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar8 = (local_e7 & 0xff00ff00) >> 8 | (local_e7 & 0xff00ff) << 8;
    local_e7 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar8 = (local_77 & 0xff00ff00) >> 8 | (local_77 & 0xff00ff) << 8;
    local_77 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar8 = (local_73 & 0xff00ff00) >> 8 | (local_73 & 0xff00ff) << 8;
    local_73 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar8 = (local_57 & 0xff00ff00) >> 8 | (local_57 & 0xff00ff) << 8;
    local_57 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar8 = (local_53 & 0xff00ff00) >> 8 | (local_53 & 0xff00ff) << 8;
    local_53 = uVar8 >> 0x10 | uVar8 << 0x10;
    if (local_1da != 0) {
      uVar12 = 0;
      do {
        uVar8 = local_1d6[uVar12];
        uVar1 = uVar12 + 1;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        local_1d6[uVar12] = uVar8 >> 0x10 | uVar8 << 0x10;
        uVar8 = local_1ae[uVar12];
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        local_1ae[uVar12] = uVar8 >> 0x10 | uVar8 << 0x10;
        uVar8 = local_186[uVar12];
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        local_186[uVar12] = uVar8 >> 0x10 | uVar8 << 0x10;
        uVar8 = local_15e[uVar12];
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        local_15e[uVar12] = uVar8 >> 0x10 | uVar8 << 0x10;
        uVar12 = uVar1;
      } while (uVar1 < uVar7);
    }
    lVar11 = 0x242;
    do {
      uVar5 = *(uint *)((long)auStack_350 + lVar11 + 0xc);
      uVar8 = *(uint *)((long)local_338 + lVar11);
      lVar2 = lVar11 + 4;
      uVar9 = (*(uint *)((long)auStack_350 + lVar11) & 0xff00ff00) >> 8 |
              (*(uint *)((long)auStack_350 + lVar11) & 0xff00ff) << 8;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      *(uint *)((long)auStack_350 + lVar11) = uVar9 >> 0x10 | uVar9 << 0x10;
      *(uint *)((long)auStack_350 + lVar11 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
      *(uint *)((long)local_338 + lVar11) = uVar8 >> 0x10 | uVar8 << 0x10;
      lVar11 = lVar2;
    } while (lVar2 != 0x24e);
    if (local_e3 != 0) {
      uVar12 = 0;
      do {
        puVar13 = local_df + uVar12;
        uVar8 = *puVar13;
        puVar3 = local_bf + uVar12;
        puVar4 = local_9f + uVar12;
        uVar12 = uVar12 + 1;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        *puVar13 = uVar8 >> 0x10 | uVar8 << 0x10;
        uVar8 = *puVar3;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        *puVar3 = uVar8 >> 0x10 | uVar8 << 0x10;
        uVar8 = *puVar4;
        uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
        *puVar4 = uVar8 >> 0x10 | uVar8 << 0x10;
      } while (uVar12 < local_e3);
    }
    uVar8 = (local_7f & 0xff00ff00) >> 8 | (local_7f & 0xff00ff) << 8;
    local_7f = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar8 = (local_7b & 0xff00ff00) >> 8 | (local_7b & 0xff00ff) << 8;
    local_7b = uVar8 >> 0x10 | uVar8 << 0x10;
    local_1da = uVar7;
    FUN_00924d48(local_338);
  }
  else if (uVar6 == 0x3f2) {
    memcpy(local_338,puVar13,0x7a);
    uVar7 = (local_338[0] & 0xff00ff00) >> 8 | (local_338[0] & 0xff00ff) << 8;
    local_338[0] = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_338[1] & 0xff00ff00) >> 8 | (local_338[1] & 0xff00ff) << 8;
    local_338[1] = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_338[2] & 0xff00ff00) >> 8 | (local_338[2] & 0xff00ff) << 8;
    local_338[2] = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (local_338[3] & 0xff00ff00) >> 8 | (local_338[3] & 0xff00ff) << 8;
    local_338[3] = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (CONCAT22(uStack_326,local_328) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_326,local_328) & 0xff00ff) << 8;
    local_328 = (undefined2)(uVar7 >> 0x10);
    uStack_326 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_322,local_324) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_322,local_324) & 0xff00ff) << 8;
    local_324 = (undefined2)(uVar7 >> 0x10);
    uStack_322 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_31e,local_320) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_31e,local_320) & 0xff00ff) << 8;
    local_320 = (undefined2)(uVar7 >> 0x10);
    uStack_31e = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_31a,local_31c) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_31a,local_31c) & 0xff00ff) << 8;
    local_31c = (undefined2)(uVar7 >> 0x10);
    uStack_31a = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_316,local_318) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_316,local_318) & 0xff00ff) << 8;
    local_318 = (undefined2)(uVar7 >> 0x10);
    uStack_316 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_312,local_314) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_312,local_314) & 0xff00ff) << 8;
    local_314 = (undefined2)(uVar7 >> 0x10);
    uStack_312 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_30e,local_310) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_30e,local_310) & 0xff00ff) << 8;
    local_310 = (undefined2)(uVar7 >> 0x10);
    uStack_30e = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_30a,local_30c) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_30a,local_30c) & 0xff00ff) << 8;
    local_30c = (undefined2)(uVar7 >> 0x10);
    uStack_30a = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_306,local_308) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_306,local_308) & 0xff00ff) << 8;
    local_308 = (undefined2)(uVar7 >> 0x10);
    uStack_306 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_302,local_304) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_302,local_304) & 0xff00ff) << 8;
    local_304 = (undefined2)(uVar7 >> 0x10);
    uStack_302 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2fe,local_300) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2fe,local_300) & 0xff00ff) << 8;
    local_300 = (undefined2)(uVar7 >> 0x10);
    uStack_2fe = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2fa,local_2fc) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2fa,local_2fc) & 0xff00ff) << 8;
    local_2fc = (undefined2)(uVar7 >> 0x10);
    uStack_2fa = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2f6,local_2f8) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2f6,local_2f8) & 0xff00ff) << 8;
    local_2f8 = (undefined2)(uVar7 >> 0x10);
    uStack_2f6 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2f2,local_2f4) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2f2,local_2f4) & 0xff00ff) << 8;
    local_2f4 = (undefined2)(uVar7 >> 0x10);
    uStack_2f2 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2ee,local_2f0) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2ee,local_2f0) & 0xff00ff) << 8;
    local_2f0 = (undefined2)(uVar7 >> 0x10);
    uStack_2ee = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2ea,local_2ec) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2ea,local_2ec) & 0xff00ff) << 8;
    local_2ec = (undefined2)(uVar7 >> 0x10);
    uStack_2ea = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2e6,local_2e8) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2e6,local_2e8) & 0xff00ff) << 8;
    local_2e8 = (undefined2)(uVar7 >> 0x10);
    uStack_2e6 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2e2,local_2e4) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2e2,local_2e4) & 0xff00ff) << 8;
    local_2e4 = (undefined2)(uVar7 >> 0x10);
    uStack_2e2 = (undefined2)uVar7;
    uVar7 = (CONCAT22(uStack_2c6,local_2c8) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_2c6,local_2c8) & 0xff00ff) << 8;
    local_2c8 = (undefined2)(uVar7 >> 0x10);
    uStack_2c6 = (undefined2)uVar7;
    FUN_00924cbc(local_338);
  }
  if (*(long *)(lVar10 + 0x28) == local_340) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00924afc(void)

{
  int iVar1;
  
  DAT_02c7bf15 = 0;
  iVar1 = 0;
  if (DAT_02c3bd70 != (FILE *)0x0) {
    iVar1 = fclose(DAT_02c3bd70);
    DAT_02c3bd70 = (FILE *)0x0;
  }
  return iVar1;
}




void FUN_00924b34(void)

{
  DAT_02c7bf15 = 0;
  FUN_00923848();
  DAT_02c7bf14 = 1;
  return;
}




void FUN_00924b5c(void)

{
  DAT_02c7bf14 = 1;
  return;
}




float FUN_00924b6c(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if ((uint)DAT_02c7bed0 == 0) {
    uVar4 = 0;
    fVar6 = 0.0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    fVar6 = 0.0;
    do {
      fVar5 = *(float *)(DAT_02c7bed8 + uVar3 * 4);
      uVar1 = (int)uVar3;
      if (ABS(param_1 - fVar6) <= ABS(param_1 - fVar5)) {
        fVar5 = fVar6;
        uVar1 = uVar4;
      }
      uVar4 = uVar1;
      fVar6 = fVar5;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)DAT_02c7bed0);
  }
  iVar2 = 0;
  if (DAT_02c3bd70 != (FILE *)0x0) {
    iVar2 = fclose(DAT_02c3bd70);
    DAT_02c3bd70 = (FILE *)0x0;
  }
  DAT_02c7bf15 = 1;
  DAT_02c7bf08 = uVar4;
  FUN_009236c8(iVar2);
  return fVar6;
}




bool FUN_00924c18(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = DAT_02c3bd70 != (FILE *)0x0;
  if (bVar1) {
    iVar2 = fclose(DAT_02c3bd70);
    DAT_02c3bd70 = (FILE *)0x0;
    DAT_02c7bf08 = 0;
    FUN_009236c8(iVar2);
    DAT_02c7bf0c = 0;
    DAT_02c7bf10 = 0;
  }
  return bVar1;
}




void FUN_00924c64(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceb604(&DAT_02c3bda8);
  if ((uVar1 & 1) != 0) {
    FUN_00ceb4e4(&DAT_02c3bda8,1);
    return;
  }
  return;
}




undefined4 FUN_00924c98(void)

{
  return (undefined4)DAT_02c7bee0;
}




long FUN_00924ca4(ulong param_1)

{
  return DAT_02c7bee8 + (param_1 & 0xffffffff) * 0xc;
}




void FUN_00924cbc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  undefined4 *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00d6eb50();
  puVar5 = (undefined4 *)FUN_00d6eb88(uVar4,*param_1);
  uVar2 = *(undefined1 *)((long)param_1 + 0x79);
  uVar1 = *puVar5;
  local_40 = param_1 + 2;
  lVar6 = FUN_009250c0(&DAT_02c7bef0,local_40,&DAT_01b94b60,&local_40,auStack_48);
  *(undefined4 *)(lVar6 + 0x20) = uVar1;
  *(undefined1 *)(lVar6 + 0x24) = uVar2;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00924d48(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  undefined4 *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00d6eb50();
  puVar5 = (undefined4 *)FUN_00d6eb88(uVar4,*param_1);
  uVar1 = param_1[3];
  uVar2 = *puVar5;
  local_40 = param_1 + 2;
  lVar6 = FUN_009250c0(&DAT_02c7bef0,local_40,&DAT_01b94b60,&local_40,auStack_48);
  *(undefined4 *)(lVar6 + 0x20) = uVar2;
  *(char *)(lVar6 + 0x24) = (char)uVar1;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00924dd4(undefined4 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60 = param_2;
  lVar3 = FUN_009250c0(&DAT_02c7bef0,param_2,&DAT_01b94b60,&local_60,auStack_50);
  local_60 = param_2 + 4;
  lVar4 = FUN_009250c0(&DAT_02c7bef0,local_60,&DAT_01b94b60,&local_60,auStack_50);
  local_58 = *(undefined1 *)(lVar4 + 0x24);
  local_60 = CONCAT44(param_1,(undefined4)local_60);
  uVar1 = *(uint *)(lVar3 + 0x20);
  if ((uVar1 < 10) && ((0x21dU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    local_60 = CONCAT44(param_1,*(undefined4 *)(&DAT_01b94b70 + (long)(int)uVar1 * 4));
    FUN_00924ec8(&DAT_02c7bee0,&local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00924ec8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
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
    FUN_009251e8(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0xc;
  *(undefined4 *)(lVar2 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + -0xc) = *param_2;
  return;
}




void FUN_00924f5c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00924f5c(param_1,*param_2);
    FUN_00924f5c(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




byte * FUN_00924fa8(byte *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  
  bVar2 = *param_1;
  if ((bVar2 & 1) == 0) {
    uVar5 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar3 = uVar5 - param_2;
  if (param_2 <= uVar5) {
    if (param_3 != 0) {
      if ((bVar2 & 1) == 0) {
        pbVar6 = param_1 + 1;
      }
      else {
        pbVar6 = *(byte **)(param_1 + 0x10);
      }
      uVar1 = uVar3;
      if (param_3 <= uVar3) {
        uVar1 = param_3;
      }
      if (uVar3 - uVar1 != 0) {
        memmove(pbVar6 + param_2,pbVar6 + param_2 + uVar1,uVar3 - uVar1);
        bVar2 = *param_1;
      }
      lVar4 = uVar5 - uVar1;
      if ((bVar2 & 1) == 0) {
        *param_1 = (byte)((int)lVar4 << 1);
      }
      else {
        *(long *)(param_1 + 8) = lVar4;
      }
      pbVar6[lVar4] = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




int thunk_FUN_00924afc(void)

{
  int iVar1;
  
  DAT_02c7bf15 = 0;
  iVar1 = 0;
  if (DAT_02c3bd70 != (FILE *)0x0) {
    iVar1 = fclose(DAT_02c3bd70);
    DAT_02c3bd70 = (FILE *)0x0;
  }
  return iVar1;
}

