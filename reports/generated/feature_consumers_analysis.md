# Feature Flag Consumers & UI Gating Analysis

## 1. Callers of Feature Parser (FUN_1001329b0)

*No callers found*

## 2. References to Config Observer Array (DAT_101d23360/101d23368)

### References to `0x101d23360`

#### `FUN_100133a60` @ `0x100133a60`

Ref from: `0x100133b88`

```c

void FUN_100133a60(long param_1,long param_2)

{
  undefined8 *****pppppuVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 ****local_a8 [2];
  char local_91;
  undefined8 ****local_90 [2];
  char local_79;
  undefined8 ****local_78;
  ulong local_70;
  undefined4 local_68;
  char local_61;
  
  if (*(int *)(param_2 + 0x28) == 0) {
    lVar7 = param_2 + 0x30;
    lVar4 = FUN_1000e86c0(lVar7,PTR_s_constants_10184e3c8);
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar4) {
      lVar4 = 0;
      do {
        pcVar8 = PTR_s_constants_10184e3c8 + lVar4;
        lVar4 = lVar4 + 1;
      } while (*pcVar8 != '\0');
      local_78 = (undefined8 ****)PTR_s_constants_10184e3c8;
      local_68 = 0x100005;
      local_70 = (ulong)((int)lVar4 - 1);
      FUN_1000e87dc(lVar7,&local_78);
    }
    lVar4 = FUN_1000e86c0(lVar7,PTR_s_constants_10184e3c8);
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar4) {
      lVar4 = 0;
      do {
        pcVar8 = PTR_s_constants_10184e3c8 + lVar4;
        lVar4 = lVar4 + 1;
      } while (*pcVar8 != '\0');
      local_78 = (undefined8 ****)PTR_s_constants_10184e3c8;
      local_68 = 0x100005;
      local_70 = (ulong)((int)lVar4 - 1);
      lVar4 = FUN_1000e87dc(lVar7,&local_78);
      if (*(int *)(lVar4 + 0x10) == 3) {
        lVar4 = 0;
        do {
          pcVar8 = PTR_s_constants_10184e3c8 + lVar4;
          lVar4 = lVar4 + 1;
        } while (*pcVar8 != '\0');
        local_78 = (undefined8 ****)PTR_s_constants_10184e3c8;
        local_68 = 0x100005;
        local_70 = (ulong)((int)lVar4 - 1);
        plVar5 = (long *)FUN_1000e87dc(lVar7,&local_78);
        if (DAT_101d23360 != 0) {
          puVar11 = DAT_101d23368;
          do {
            plVar10 = (long *)*puVar11;
            (**(code **)*plVar10)(local_90,plVar10);
            pppppuVar1 = (undefined8 *****)local_90[0];
            if (-1 < local_79) {
              pppppuVar1 = local_90;
            }
            lVar4 = FUN_1000e86c0(plVar5,pppppuVar1);
            if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
              bVar3 = false;
            }
            else {
              (**(code **)*plVar10)(local_a8,plVar10);
              lVar4 = 0;
              local_78 = local_a8[0];
              if (-1 < local_91) {
                local_78 = local_a8;
              }
              do {
                pcVar8 = (char *)((long)local_78 + lVar4);
                lVar4 = lVar4 + 1;
              } while (*pcVar8 != '\0');
              local_68 = 0x100005;
              local_70 = (ulong)((int)lVar4 - 1);
              lVar4 = FUN_1000e87dc(plVar5,&local_78);
              bVar3 = *(int *)(lVar4 + 0x10) == 3;
              if (local_91 < '\0') {
                operator_delete(local_a8[0]);
              }
            }
            if (local_79 < '\0') {
              operator_delete(local_90[0]);
              if (!bVar3) goto LAB_100133cf4;
LAB_100133c74:
              (**(code **)*plVar10)(local_90,plVar10);
              lVar4 = 0;
              local_78 = local_90[0];
              if (-1 < local_79) {
                local_78 = local_90;
              }
              do {
                pcVar8 = (char *)((long)local_78 + lVar4);
                lVar4 = lVar4 + 1;
              } while (*pcVar8 != '\0');
              local_68 = 0x100005;
              local_70 = (ulong)((int)lVar4 - 1);
              uVar6 = FUN_1000e87dc(plVar5,&local_78);
              (**(code **)(*plVar10 + 8))(plVar10,uVar6);
              pppppuVar1 = (undefined8 *****)local_90[0];
              cVar2 = local_79;
            }
            else {
              if (bVar3) goto LAB_100133c74;
LAB_100133cf4:
              (**(code **)*plVar10)(&local_78,plVar10);
              pppppuVar1 = (undefined8 *****)local_78;
              cVar2 = local_61;
            }
            if (cVar2 < '\0') {
              operator_delete(pppppuVar1);
            }
            puVar11 = puVar11 + 1;
          } while (puVar11 != DAT_101d23368 + DAT_101d23360);
        }
      }
    }
    lVar4 = FUN_1000e86c0(lVar7,"experimentDetails");
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar4) {
      local_68 = 0x100005;
      local_78 = (undefined8 ****)0x1013dcb07;
      local_70 = 0x11;
      lVar4 = FUN_1000e87dc(lVar7,&local_78);
      if (*(int *)(lVar4 + 0x10) == 4) {
        local_68 = 0x100005;
        local_78 = (undefined8 ****)0x1013dcb07;
        local_70 = 0x11;
        plVar5 = (long *)FUN_1000e87dc(lVar7,&local_78);
        if ((int)plVar5[1] != 0) {
          plVar10 = (long *)*plVar5;
          do {
            lVar7 = FUN_1000e86c0(plVar10,"experimentId");
            if (*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x30 == lVar7) {
              pcVar8 = "";
            }
            else {
              local_68 = 0x100005;
              local_78 = (undefined8 ****)0x1013dcb19;
              local_70 = 0xc;
              lVar7 = FUN_1000e87dc(plVar10,&local_78);
              pcVar8 = "";
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = (undefined8 ****)0x1013dcb19;
                local_70 = 0xc;
                pcVar8 = (char *)FUN_1000e87dc(plVar10,&local_78);
                if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                  pcVar8 = *(char **)pcVar8;
                }
              }
            }
            lVar7 = FUN_1000e86c0(plVar10,"variantString");
            if (*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x30 == lVar7) {
              pcVar9 = "";
            }
            else {
              local_68 = 0x100005;
              local_78 = (undefined8 ****)0x1013dcb26;
              local_70 = 0xd;
              lVar7 = FUN_1000e87dc(plVar10,&local_78);
              pcVar9 = "";
 
// ...truncated...
```

#### `FUN_100131800` @ `0x100131800`

Ref from: `0x100131838`

```c

undefined8 * FUN_100131800(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a790;
  FUN_1001347f4(param_1 + 1,param_1[2]);
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return param_1;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}


```

#### `FUN_100131a58` @ `0x100131a58`

Ref from: `0x100131a98`

```c

undefined8 * FUN_100131a58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a910;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return param_1;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}


```

#### `FUN_100134b20` @ `0x100134b20`

Ref from: `0x1001351f4`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100134b20(void)

{
  undefined8 *local_48;
  
  DAT_101e3a248 = 0xff;
  DAT_101e3a24a = 0xffff;
  DAT_101e3a24c = 0xffff;
  DAT_101e3a24e = 0xffbc9c44;
  DAT_101e3a252 = 0xff1166f2;
  DAT_101e3a256 = 0xffe0e0e0;
  DAT_101e3a25a = 0xffa0a0a0;
  DAT_101e3a25e = 0xff8c8c8c;
  DAT_101e3a262 = 0xff322213;
  DAT_101e3a266 = 0xff091911;
  DAT_101e3a26a = 0xff170c19;
  DAT_101e3a26e = 0xff241a14;
  DAT_101e3a272 = 0xff14171c;
  DAT_101e3a276 = 0xff221911;
  DAT_101e3a27a = 0xff1a1416;
  DAT_101e3a27e = 0xff121414;
  DAT_101e3a282 = 0xff1a1809;
  DAT_101e3a286 = 0xff141414;
  DAT_101e3a28a = 0xff141414;
  DAT_101e3a28e = 0xff2929c0;
  DAT_101e3a292 = 0xff283082;
  DAT_101e3a296 = 0xff5262cc;
  DAT_101e3a29a = 0xff283082;
  DAT_101e3a29e = 0xff5262cc;
  DAT_101e3a2a2 = 0xff745c42;
  DAT_101e3a2a6 = 0xff184155;
  DAT_101e3a2aa = 0xff92665e;
  DAT_101e3a2ae = 0xffbc9c44;
  DAT_101e3a2b2 = 0xffbbae56;
  DAT_101e3a2b6 = 0xff8b7b01;
  DAT_101e3a2ba = 0xff90b3ef;
  DAT_101e3a2be = 0xff728ebe;
  DAT_101e3a2c2 = 0xff19459d;
  DAT_101e3a2c6 = 0xff9d877b;
  DAT_101e3a2ca = 0xffcbb1a3;
  DAT_101e3a2ce = 0xff3f6fb5;
  DAT_101e3a2d2 = 0xffc5c5c5;
  DAT_101e3a2d6 = 0xff4fc1f1;
  DAT_101e3a2da = 0xff606060;
  DAT_101e3a2de = 0xffc5ff7b;
  DAT_101e3a2e2 = 0xff5271eb;
  DAT_101e3a2e6 = 0xfffae076;
  DAT_101e3a2ea = 0xff3ac8f6;
  DAT_101e3a2ee = 0xffaaaaaa;
  DAT_101e3a2f2 = 0xffe19400;
  DAT_101e3a2f6 = 0xffe19400;
  DAT_101e3a2fa = 0xffe550b2;
  DAT_101e3a2fe = 0xfff22ae8;
  DAT_101e3a302 = 0xff005ae1;
  DAT_101e3a306 = 0xff1addfa;
  DAT_101e3a30a = 0xff2424b3;
  DAT_101e3a30e = 0xff2424b3;
  DAT_101e3a312 = 0xff646464;
  DAT_101e3a316 = 0xff92665e;
  DAT_101e3a31a = 0xff646037;
  DAT_101e3a320 = 0xffffffff;
  DAT_101e3a324 = 0xff1111a1;
  DAT_101e3a328 = 0xff321ee1;
  DAT_101e3a32c = 0xffc8c8c8;
  DAT_101e3a330 = 0xff321ee1;
  DAT_101e3a334 = 0xff7fe801;
  DAT_101e3a338 = 0xffffffff;
  DAT_101e3a33c = 0xff6259b3;
  DAT_101e3a340 = 0xff506e73;
  DAT_101e3a344 = 0xff9dbf86;
  DAT_101e3a348 = 0xffa35244;
  DAT_101e3a34c = 0xffca828e;
  DAT_101e3a350 = 0xffa6a6a6;
  DAT_101e3a354 = 0xffa6a6a6;
  DAT_101e3a358 = 0xffffffff;
  DAT_101e3a35c = 0xff88ea2f;
  DAT_101e3a360 = 0xff8c8c8c;
  DAT_101e3a364 = 0xffffb400;
  DAT_101e3a368 = 0xffff00ff;
  DAT_101e3a36c = 0xff00aded;
  DAT_101e3a370 = 0xff33d3ff;
  DAT_101e3a374 = 0xff7fe801;
  DAT_101e3a378 = 0xff282828;
  DAT_101e3a37c = 0xfff0f0f0;
  DAT_101e3a380 = 0xffa4781e;
  DAT_101e3a384 = 0xffa6654b;
  DAT_101e3a388 = 0xff93435b;
  DAT_101e3a38c = 0xff387f9c;
  DAT_101e3a390 = 0xffa3781e;
  DAT_101e3a394 = 0xffffd18a;
  DAT_101e3a398 = 0xffff61f7;
  DAT_101e3a39c = 0xff5de1f2;
  DAT_101e3a3a0 = 0xff80eaff;
  DAT_101e3a3a4 = 0xff32e00e;
  DAT_101e3a3a8 = 0xff5a3c10;
  DAT_101e3a3ac = 0xff330b03;
  DAT_101e3a3b0 = 0xff33031d;
  DAT_101e3a3b4 = 0xff032433;
  DAT_101e3a3b8 = 0xff9e8e8d;
  _DAT_101d23360 = 0;
  DAT_101d23368 = 0;
  ___cxa_atexit(FUN_1001315ac,&DAT_101d23360,0x100000000);
  DAT_101d23370 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23370;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23370 = &PTR_FUN_10145a6a0;
  uRam0000000101d23380 = 0;
  _DAT_101d23378 = 0;
  uRam0000000101d23390 = 0;
  _DAT_101d23388 = 0;
  uRam0000000101d233a0 = 0;
  _DAT_101d23398 = 0;
  DAT_101d233a8 = 0;
  ___cxa_atexit(FUN_1001315dc,&DAT_101d23370,0x100000000);
  DAT_101d233b0 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233b0;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233b0 = &PTR_FUN_10145a6d0;
  DAT_101d233b8 = 0;
  DAT_101d233c0 = 1;
  ___cxa_atexit(FUN_100131690,&DAT_101d233b0,0x100000000);
  DAT_101d233c8 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233c8;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233c8 = &PTR_FUN_10145a700;
  DAT_101d233d0 = 0;
  ___cxa_atexit(FUN_1001316ec,&DAT_101d233c8,0x100000000);
  DAT_101d233d8 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233d8;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233d8 = &PTR_FUN_10145a730;
  DAT_101d233e0 = 0;
  ___cxa_atexit(FUN_100131748,&DAT_101d233d8,0x100000000);
  DAT_101d233e8 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233e8;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233e8 = &PTR_FUN_10145a760;
  DAT_101d233f0._0_7_ = 0;
  DAT_101d233f0._7_1_ = 0;
  uRam0000000101d233f8 = 0;
  ___cxa_atexit(FUN_1001317a4,&DAT_101d233e8,0x100000000);
  DAT_101d23400 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23400;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23418 = 0;
  DAT_101d23410 = 0;
  DAT_101d23400 = &PTR_FUN_10145a790;
  DAT_101d23408 = &DAT_101d23410;
  ___cxa_atexit(FUN_100131800,&DAT_101d23400,0x100000000);
  DAT_101d23420 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23420;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23420 = &PTR_FUN_10145a7c0;
  DAT_101d23428 = 1;
  ___cxa_atexit(FUN_10013188c,&DAT_101d23420,0x100000000);
  DAT_101d23430 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23430;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23430 = &PTR_FUN_10145a7f0;
  DAT_101d23438 = 0x1010101;
  DAT_101d2343c = 0;
  ___cxa_atexit(FUN_1001318e8,&DAT_101d23430,0x100000000);
  DAT_101d23440 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23440;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23440 = &PTR_FUN_10145a820;
  DAT_101d23448 = 1;
  ___cxa_atexit(FUN_100131944,&DAT_101d23440,0x100000000);
  DAT_101d23450 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23450;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23450 = &PTR_FUN_10145a850;
  DAT_101d23458 = 1;
  ___cxa_atexit(FUN_1001319a0,&DAT_101d23450,0x100000000);
  DAT_101d23460 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23460;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23460 = &PTR_FUN_10145a880;
  DAT_101d23468 = 0;
  ___cxa_
// ...truncated...
```

#### `FUN_1001341ec` @ `0x1001341ec`

Ref from: `0x100134240`

```c

void FUN_1001341ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a6a0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        break;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}


```

### References to `0x101d23368`

#### `FUN_100133a60` @ `0x100133a60`

Ref from: `0x100133b98`

```c

void FUN_100133a60(long param_1,long param_2)

{
  undefined8 *****pppppuVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 ****local_a8 [2];
  char local_91;
  undefined8 ****local_90 [2];
  char local_79;
  undefined8 ****local_78;
  ulong local_70;
  undefined4 local_68;
  char local_61;
  
  if (*(int *)(param_2 + 0x28) == 0) {
    lVar7 = param_2 + 0x30;
    lVar4 = FUN_1000e86c0(lVar7,PTR_s_constants_10184e3c8);
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar4) {
      lVar4 = 0;
      do {
        pcVar8 = PTR_s_constants_10184e3c8 + lVar4;
        lVar4 = lVar4 + 1;
      } while (*pcVar8 != '\0');
      local_78 = (undefined8 ****)PTR_s_constants_10184e3c8;
      local_68 = 0x100005;
      local_70 = (ulong)((int)lVar4 - 1);
      FUN_1000e87dc(lVar7,&local_78);
    }
    lVar4 = FUN_1000e86c0(lVar7,PTR_s_constants_10184e3c8);
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar4) {
      lVar4 = 0;
      do {
        pcVar8 = PTR_s_constants_10184e3c8 + lVar4;
        lVar4 = lVar4 + 1;
      } while (*pcVar8 != '\0');
      local_78 = (undefined8 ****)PTR_s_constants_10184e3c8;
      local_68 = 0x100005;
      local_70 = (ulong)((int)lVar4 - 1);
      lVar4 = FUN_1000e87dc(lVar7,&local_78);
      if (*(int *)(lVar4 + 0x10) == 3) {
        lVar4 = 0;
        do {
          pcVar8 = PTR_s_constants_10184e3c8 + lVar4;
          lVar4 = lVar4 + 1;
        } while (*pcVar8 != '\0');
        local_78 = (undefined8 ****)PTR_s_constants_10184e3c8;
        local_68 = 0x100005;
        local_70 = (ulong)((int)lVar4 - 1);
        plVar5 = (long *)FUN_1000e87dc(lVar7,&local_78);
        if (DAT_101d23360 != 0) {
          puVar11 = DAT_101d23368;
          do {
            plVar10 = (long *)*puVar11;
            (**(code **)*plVar10)(local_90,plVar10);
            pppppuVar1 = (undefined8 *****)local_90[0];
            if (-1 < local_79) {
              pppppuVar1 = local_90;
            }
            lVar4 = FUN_1000e86c0(plVar5,pppppuVar1);
            if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
              bVar3 = false;
            }
            else {
              (**(code **)*plVar10)(local_a8,plVar10);
              lVar4 = 0;
              local_78 = local_a8[0];
              if (-1 < local_91) {
                local_78 = local_a8;
              }
              do {
                pcVar8 = (char *)((long)local_78 + lVar4);
                lVar4 = lVar4 + 1;
              } while (*pcVar8 != '\0');
              local_68 = 0x100005;
              local_70 = (ulong)((int)lVar4 - 1);
              lVar4 = FUN_1000e87dc(plVar5,&local_78);
              bVar3 = *(int *)(lVar4 + 0x10) == 3;
              if (local_91 < '\0') {
                operator_delete(local_a8[0]);
              }
            }
            if (local_79 < '\0') {
              operator_delete(local_90[0]);
              if (!bVar3) goto LAB_100133cf4;
LAB_100133c74:
              (**(code **)*plVar10)(local_90,plVar10);
              lVar4 = 0;
              local_78 = local_90[0];
              if (-1 < local_79) {
                local_78 = local_90;
              }
              do {
                pcVar8 = (char *)((long)local_78 + lVar4);
                lVar4 = lVar4 + 1;
              } while (*pcVar8 != '\0');
              local_68 = 0x100005;
              local_70 = (ulong)((int)lVar4 - 1);
              uVar6 = FUN_1000e87dc(plVar5,&local_78);
              (**(code **)(*plVar10 + 8))(plVar10,uVar6);
              pppppuVar1 = (undefined8 *****)local_90[0];
              cVar2 = local_79;
            }
            else {
              if (bVar3) goto LAB_100133c74;
LAB_100133cf4:
              (**(code **)*plVar10)(&local_78,plVar10);
              pppppuVar1 = (undefined8 *****)local_78;
              cVar2 = local_61;
            }
            if (cVar2 < '\0') {
              operator_delete(pppppuVar1);
            }
            puVar11 = puVar11 + 1;
          } while (puVar11 != DAT_101d23368 + DAT_101d23360);
        }
      }
    }
    lVar4 = FUN_1000e86c0(lVar7,"experimentDetails");
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar4) {
      local_68 = 0x100005;
      local_78 = (undefined8 ****)0x1013dcb07;
      local_70 = 0x11;
      lVar4 = FUN_1000e87dc(lVar7,&local_78);
      if (*(int *)(lVar4 + 0x10) == 4) {
        local_68 = 0x100005;
        local_78 = (undefined8 ****)0x1013dcb07;
        local_70 = 0x11;
        plVar5 = (long *)FUN_1000e87dc(lVar7,&local_78);
        if ((int)plVar5[1] != 0) {
          plVar10 = (long *)*plVar5;
          do {
            lVar7 = FUN_1000e86c0(plVar10,"experimentId");
            if (*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x30 == lVar7) {
              pcVar8 = "";
            }
            else {
              local_68 = 0x100005;
              local_78 = (undefined8 ****)0x1013dcb19;
              local_70 = 0xc;
              lVar7 = FUN_1000e87dc(plVar10,&local_78);
              pcVar8 = "";
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = (undefined8 ****)0x1013dcb19;
                local_70 = 0xc;
                pcVar8 = (char *)FUN_1000e87dc(plVar10,&local_78);
                if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                  pcVar8 = *(char **)pcVar8;
                }
              }
            }
            lVar7 = FUN_1000e86c0(plVar10,"variantString");
            if (*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x30 == lVar7) {
              pcVar9 = "";
            }
            else {
              local_68 = 0x100005;
              local_78 = (undefined8 ****)0x1013dcb26;
              local_70 = 0xd;
              lVar7 = FUN_1000e87dc(plVar10,&local_78);
              pcVar9 = "";
 
// ...truncated...
```

#### `FUN_100131800` @ `0x100131800`

Ref from: `0x100131840`

```c

undefined8 * FUN_100131800(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a790;
  FUN_1001347f4(param_1 + 1,param_1[2]);
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return param_1;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}


```

#### `FUN_100131a58` @ `0x100131a58`

Ref from: `0x100131aa0`

```c

undefined8 * FUN_100131a58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a910;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return param_1;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}


```

#### `FUN_100134b20` @ `0x100134b20`

Ref from: `0x1001351f4`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100134b20(void)

{
  undefined8 *local_48;
  
  DAT_101e3a248 = 0xff;
  DAT_101e3a24a = 0xffff;
  DAT_101e3a24c = 0xffff;
  DAT_101e3a24e = 0xffbc9c44;
  DAT_101e3a252 = 0xff1166f2;
  DAT_101e3a256 = 0xffe0e0e0;
  DAT_101e3a25a = 0xffa0a0a0;
  DAT_101e3a25e = 0xff8c8c8c;
  DAT_101e3a262 = 0xff322213;
  DAT_101e3a266 = 0xff091911;
  DAT_101e3a26a = 0xff170c19;
  DAT_101e3a26e = 0xff241a14;
  DAT_101e3a272 = 0xff14171c;
  DAT_101e3a276 = 0xff221911;
  DAT_101e3a27a = 0xff1a1416;
  DAT_101e3a27e = 0xff121414;
  DAT_101e3a282 = 0xff1a1809;
  DAT_101e3a286 = 0xff141414;
  DAT_101e3a28a = 0xff141414;
  DAT_101e3a28e = 0xff2929c0;
  DAT_101e3a292 = 0xff283082;
  DAT_101e3a296 = 0xff5262cc;
  DAT_101e3a29a = 0xff283082;
  DAT_101e3a29e = 0xff5262cc;
  DAT_101e3a2a2 = 0xff745c42;
  DAT_101e3a2a6 = 0xff184155;
  DAT_101e3a2aa = 0xff92665e;
  DAT_101e3a2ae = 0xffbc9c44;
  DAT_101e3a2b2 = 0xffbbae56;
  DAT_101e3a2b6 = 0xff8b7b01;
  DAT_101e3a2ba = 0xff90b3ef;
  DAT_101e3a2be = 0xff728ebe;
  DAT_101e3a2c2 = 0xff19459d;
  DAT_101e3a2c6 = 0xff9d877b;
  DAT_101e3a2ca = 0xffcbb1a3;
  DAT_101e3a2ce = 0xff3f6fb5;
  DAT_101e3a2d2 = 0xffc5c5c5;
  DAT_101e3a2d6 = 0xff4fc1f1;
  DAT_101e3a2da = 0xff606060;
  DAT_101e3a2de = 0xffc5ff7b;
  DAT_101e3a2e2 = 0xff5271eb;
  DAT_101e3a2e6 = 0xfffae076;
  DAT_101e3a2ea = 0xff3ac8f6;
  DAT_101e3a2ee = 0xffaaaaaa;
  DAT_101e3a2f2 = 0xffe19400;
  DAT_101e3a2f6 = 0xffe19400;
  DAT_101e3a2fa = 0xffe550b2;
  DAT_101e3a2fe = 0xfff22ae8;
  DAT_101e3a302 = 0xff005ae1;
  DAT_101e3a306 = 0xff1addfa;
  DAT_101e3a30a = 0xff2424b3;
  DAT_101e3a30e = 0xff2424b3;
  DAT_101e3a312 = 0xff646464;
  DAT_101e3a316 = 0xff92665e;
  DAT_101e3a31a = 0xff646037;
  DAT_101e3a320 = 0xffffffff;
  DAT_101e3a324 = 0xff1111a1;
  DAT_101e3a328 = 0xff321ee1;
  DAT_101e3a32c = 0xffc8c8c8;
  DAT_101e3a330 = 0xff321ee1;
  DAT_101e3a334 = 0xff7fe801;
  DAT_101e3a338 = 0xffffffff;
  DAT_101e3a33c = 0xff6259b3;
  DAT_101e3a340 = 0xff506e73;
  DAT_101e3a344 = 0xff9dbf86;
  DAT_101e3a348 = 0xffa35244;
  DAT_101e3a34c = 0xffca828e;
  DAT_101e3a350 = 0xffa6a6a6;
  DAT_101e3a354 = 0xffa6a6a6;
  DAT_101e3a358 = 0xffffffff;
  DAT_101e3a35c = 0xff88ea2f;
  DAT_101e3a360 = 0xff8c8c8c;
  DAT_101e3a364 = 0xffffb400;
  DAT_101e3a368 = 0xffff00ff;
  DAT_101e3a36c = 0xff00aded;
  DAT_101e3a370 = 0xff33d3ff;
  DAT_101e3a374 = 0xff7fe801;
  DAT_101e3a378 = 0xff282828;
  DAT_101e3a37c = 0xfff0f0f0;
  DAT_101e3a380 = 0xffa4781e;
  DAT_101e3a384 = 0xffa6654b;
  DAT_101e3a388 = 0xff93435b;
  DAT_101e3a38c = 0xff387f9c;
  DAT_101e3a390 = 0xffa3781e;
  DAT_101e3a394 = 0xffffd18a;
  DAT_101e3a398 = 0xffff61f7;
  DAT_101e3a39c = 0xff5de1f2;
  DAT_101e3a3a0 = 0xff80eaff;
  DAT_101e3a3a4 = 0xff32e00e;
  DAT_101e3a3a8 = 0xff5a3c10;
  DAT_101e3a3ac = 0xff330b03;
  DAT_101e3a3b0 = 0xff33031d;
  DAT_101e3a3b4 = 0xff032433;
  DAT_101e3a3b8 = 0xff9e8e8d;
  _DAT_101d23360 = 0;
  DAT_101d23368 = 0;
  ___cxa_atexit(FUN_1001315ac,&DAT_101d23360,0x100000000);
  DAT_101d23370 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23370;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23370 = &PTR_FUN_10145a6a0;
  uRam0000000101d23380 = 0;
  _DAT_101d23378 = 0;
  uRam0000000101d23390 = 0;
  _DAT_101d23388 = 0;
  uRam0000000101d233a0 = 0;
  _DAT_101d23398 = 0;
  DAT_101d233a8 = 0;
  ___cxa_atexit(FUN_1001315dc,&DAT_101d23370,0x100000000);
  DAT_101d233b0 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233b0;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233b0 = &PTR_FUN_10145a6d0;
  DAT_101d233b8 = 0;
  DAT_101d233c0 = 1;
  ___cxa_atexit(FUN_100131690,&DAT_101d233b0,0x100000000);
  DAT_101d233c8 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233c8;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233c8 = &PTR_FUN_10145a700;
  DAT_101d233d0 = 0;
  ___cxa_atexit(FUN_1001316ec,&DAT_101d233c8,0x100000000);
  DAT_101d233d8 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233d8;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233d8 = &PTR_FUN_10145a730;
  DAT_101d233e0 = 0;
  ___cxa_atexit(FUN_100131748,&DAT_101d233d8,0x100000000);
  DAT_101d233e8 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233e8;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233e8 = &PTR_FUN_10145a760;
  DAT_101d233f0._0_7_ = 0;
  DAT_101d233f0._7_1_ = 0;
  uRam0000000101d233f8 = 0;
  ___cxa_atexit(FUN_1001317a4,&DAT_101d233e8,0x100000000);
  DAT_101d23400 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23400;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23418 = 0;
  DAT_101d23410 = 0;
  DAT_101d23400 = &PTR_FUN_10145a790;
  DAT_101d23408 = &DAT_101d23410;
  ___cxa_atexit(FUN_100131800,&DAT_101d23400,0x100000000);
  DAT_101d23420 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23420;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23420 = &PTR_FUN_10145a7c0;
  DAT_101d23428 = 1;
  ___cxa_atexit(FUN_10013188c,&DAT_101d23420,0x100000000);
  DAT_101d23430 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23430;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23430 = &PTR_FUN_10145a7f0;
  DAT_101d23438 = 0x1010101;
  DAT_101d2343c = 0;
  ___cxa_atexit(FUN_1001318e8,&DAT_101d23430,0x100000000);
  DAT_101d23440 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23440;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23440 = &PTR_FUN_10145a820;
  DAT_101d23448 = 1;
  ___cxa_atexit(FUN_100131944,&DAT_101d23440,0x100000000);
  DAT_101d23450 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23450;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23450 = &PTR_FUN_10145a850;
  DAT_101d23458 = 1;
  ___cxa_atexit(FUN_1001319a0,&DAT_101d23450,0x100000000);
  DAT_101d23460 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23460;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23460 = &PTR_FUN_10145a880;
  DAT_101d23468 = 0;
  ___cxa_
// ...truncated...
```

#### `FUN_1001341ec` @ `0x1001341ec`

Ref from: `0x100134248`

```c

void FUN_1001341ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a6a0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        break;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}


```

## 3. Leaderboard Navigation Button Handlers

### `homepanel_overflow_nav_button_leaderboards`

#### `FUN_1002a88f0` @ `0x1002a88f0`

```c

long FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *local_88 [2];
  char local_71;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_10064e2bc_101482958;
  uVar5 = FUN_1002a90f8(puVar4,1);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = FUN_1002a916c(uVar5,1);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = FUN_1002a916c(*(undefined8 *)(param_1 + 0xc0),1);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) & 0xfffffffb;
  uVar5 = FUN_1002a90f8(param_1,1);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = FUN_1001b16e8(uVar5,1);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_1002a91e0(uVar5,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xd8),1);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_tiv");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_tiv",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_news");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_news",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_leaderboards");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_leaderboards",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x100);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_academy");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_academy",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x108);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_settings");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_settings",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar5 = *(undefined8 *)(param_1 + 200);
  FUN_10001549c(&local_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  uVar2 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002a8e70;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&local_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&local_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e80;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&local_70,"secondary_nav_news");
  FUN_10001549c(local_88,"secondary_nav_news_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e90;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x108),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  FUN_10001549c(&local_70,"secondary_nav_settings");
  FUN_10001549c(local_88,"secondary_nav_settings_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ea0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x108) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  FUN_10001549c(&local_70,"secondary_nav_leaderboards");
  FUN_10001549c(local_88,"secondary_nav_leaderboards_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8eb0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf8) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x100),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  FUN_10001549c(&local_70,"secondary_nav_academy");
  FUN_10001549c(local_88,"secondary_nav_academy_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ec0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param
// ...truncated...
```

##### Caller: `thunk_FUN_1002a88f0` @ `0x1002a8f04`

```c

long thunk_FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *apvStack_88 [2];
  char cStack_71;
  code *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_10064e2bc_101482958;
  uVar5 = FUN_1002a90f8(puVar4,1);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = FUN_1002a916c(uVar5,1);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = FUN_1002a916c(*(undefined8 *)(param_1 + 0xc0),1);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) & 0xfffffffb;
  uVar5 = FUN_1002a90f8(param_1,1);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = FUN_1001b16e8(uVar5,1);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_1002a91e0(uVar5,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xd8),1);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_tiv");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_tiv",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_news");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_news",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_leaderboards");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_leaderboards",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x100);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_academy");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_academy",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x108);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_settings");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_settings",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar5 = *(undefined8 *)(param_1 + 200);
  FUN_10001549c(&pcStack_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60._7_1_ < '\0') {
    operator_delete(pcStack_70);
  }
  uVar2 = DAT_101d91884;
  uStack_48 = DAT_101d91884;
  pcStack_70 = FUN_1002a8e70;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&pcStack_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&pcStack_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8e80;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&pcStack_70,"secondary_nav_news");
  FUN_10001549c(apvStack_88,"se
// ...truncated...
```

#### `FUN_1001f4cb0` @ `0x1001f4cb0`

```c

void FUN_1001f4cb0(void)

{
  FUN_1002207b8("homepanel_overflow_nav_button_leaderboards");
  return;
}


```

### `secondary_nav_leaderboards`

#### `FUN_1002a88f0` @ `0x1002a88f0`

```c

long FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *local_88 [2];
  char local_71;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_10064e2bc_101482958;
  uVar5 = FUN_1002a90f8(puVar4,1);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = FUN_1002a916c(uVar5,1);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = FUN_1002a916c(*(undefined8 *)(param_1 + 0xc0),1);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) & 0xfffffffb;
  uVar5 = FUN_1002a90f8(param_1,1);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = FUN_1001b16e8(uVar5,1);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_1002a91e0(uVar5,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xd8),1);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_tiv");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_tiv",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_news");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_news",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_leaderboards");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_leaderboards",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x100);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_academy");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_academy",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x108);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_settings");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_settings",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar5 = *(undefined8 *)(param_1 + 200);
  FUN_10001549c(&local_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  uVar2 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002a8e70;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&local_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&local_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e80;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&local_70,"secondary_nav_news");
  FUN_10001549c(local_88,"secondary_nav_news_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e90;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x108),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  FUN_10001549c(&local_70,"secondary_nav_settings");
  FUN_10001549c(local_88,"secondary_nav_settings_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ea0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x108) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  FUN_10001549c(&local_70,"secondary_nav_leaderboards");
  FUN_10001549c(local_88,"secondary_nav_leaderboards_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8eb0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf8) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x100),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  FUN_10001549c(&local_70,"secondary_nav_academy");
  FUN_10001549c(local_88,"secondary_nav_academy_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ec0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param
// ...truncated...
```

##### Caller: `thunk_FUN_1002a88f0` @ `0x1002a8f04`

```c

long thunk_FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *apvStack_88 [2];
  char cStack_71;
  code *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_10064e2bc_101482958;
  uVar5 = FUN_1002a90f8(puVar4,1);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = FUN_1002a916c(uVar5,1);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = FUN_1002a916c(*(undefined8 *)(param_1 + 0xc0),1);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) & 0xfffffffb;
  uVar5 = FUN_1002a90f8(param_1,1);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = FUN_1001b16e8(uVar5,1);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_1002a91e0(uVar5,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xd8),1);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_tiv");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_tiv",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_news");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_news",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_leaderboards");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_leaderboards",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x100);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_academy");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_academy",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x108);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_settings");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_settings",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar5 = *(undefined8 *)(param_1 + 200);
  FUN_10001549c(&pcStack_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60._7_1_ < '\0') {
    operator_delete(pcStack_70);
  }
  uVar2 = DAT_101d91884;
  uStack_48 = DAT_101d91884;
  pcStack_70 = FUN_1002a8e70;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&pcStack_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&pcStack_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8e80;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&pcStack_70,"secondary_nav_news");
  FUN_10001549c(apvStack_88,"se
// ...truncated...
```

### `secondary_nav_leaderboards_hit`

#### `FUN_1002a88f0` @ `0x1002a88f0`

```c

long FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *local_88 [2];
  char local_71;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_10064e2bc_101482958;
  uVar5 = FUN_1002a90f8(puVar4,1);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = FUN_1002a916c(uVar5,1);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = FUN_1002a916c(*(undefined8 *)(param_1 + 0xc0),1);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) & 0xfffffffb;
  uVar5 = FUN_1002a90f8(param_1,1);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = FUN_1001b16e8(uVar5,1);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_1002a91e0(uVar5,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xd8),1);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_tiv");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_tiv",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_news");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_news",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_leaderboards");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_leaderboards",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x100);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_academy");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_academy",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x108);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_settings");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_settings",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar5 = *(undefined8 *)(param_1 + 200);
  FUN_10001549c(&local_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60._7_1_ < '\0') {
    operator_delete(local_70);
  }
  uVar2 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = FUN_1002a8e70;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&local_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&local_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&local_70);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e80;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&local_70,"secondary_nav_news");
  FUN_10001549c(local_88,"secondary_nav_news_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8e90;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf0) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x108),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  FUN_10001549c(&local_70,"secondary_nav_settings");
  FUN_10001549c(local_88,"secondary_nav_settings_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ea0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x108) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf8),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  FUN_10001549c(&local_70,"secondary_nav_leaderboards");
  FUN_10001549c(local_88,"secondary_nav_leaderboards_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8eb0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xf8) + 8,&local_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0x100),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0x100);
  FUN_10001549c(&local_70,"secondary_nav_academy");
  FUN_10001549c(local_88,"secondary_nav_academy_hit");
  FUN_1002ece5c(uVar6,uVar5,&local_70,local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  local_48 = uVar2;
  local_70 = FUN_1002a8ec0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param
// ...truncated...
```

##### Caller: `thunk_FUN_1002a88f0` @ `0x1002a8f04`

```c

long thunk_FUN_1002a88f0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *apvStack_88 [2];
  char cStack_71;
  code *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  puVar4[0x17] = 0;
  *puVar4 = &PTR_thunk_FUN_10064e2bc_101482958;
  uVar5 = FUN_1002a90f8(puVar4,1);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  uVar5 = FUN_1002a916c(uVar5,1);
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = FUN_1002a916c(*(undefined8 *)(param_1 + 0xc0),1);
  *(undefined8 *)(param_1 + 0xd0) = uVar5;
  *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xc0) + 0x84) & 0xfffffffb;
  uVar5 = FUN_1002a90f8(param_1,1);
  *(undefined8 *)(param_1 + 0xd8) = uVar5;
  uVar5 = FUN_1001b16e8(uVar5,1);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  uVar5 = FUN_1002a91e0(uVar5,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xe0),1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  uVar5 = FUN_1002a91e0(*(undefined8 *)(param_1 + 0xd8),1);
  *(undefined8 *)(param_1 + 0x108) = uVar5;
  lVar7 = *(long *)(param_1 + 0xe8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_tiv");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_tiv",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf0);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_news");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_news",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0xf8);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_leaderboards");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_leaderboards",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x100);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_academy");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_academy",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  lVar7 = *(long *)(param_1 + 0x108);
  uVar2 = FUN_1004d2524("homepanel_overflow_nav_button_settings");
  uVar3 = FUN_100015208("homepanel_overflow_nav_button_settings",uVar2,0x1234);
  uVar1 = *(uint *)(lVar7 + 0x84);
  *(uint *)(lVar7 + 0x84) = uVar1 & 0x80000000 | uVar1 & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar5 = *(undefined8 *)(param_1 + 200);
  FUN_10001549c(&pcStack_70,"ice_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60._7_1_ < '\0') {
    operator_delete(pcStack_70);
  }
  uVar2 = DAT_101d91884;
  uStack_48 = DAT_101d91884;
  pcStack_70 = FUN_1002a8e70;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 200) + 8,&pcStack_70);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  FUN_10001549c(&pcStack_70,"glory_icon_small");
  FUN_1002ee358(uVar5,&pcStack_70);
  if (uStack_60 < 0) {
    operator_delete(pcStack_70);
  }
  uStack_48 = uVar2;
  pcStack_70 = FUN_1002a8e80;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0xd0) + 8,&pcStack_70);
  FUN_1002eb970(*(undefined8 *)(param_1 + 0xf0),0);
  uVar5 = DAT_101854a08;
  uVar6 = *(undefined8 *)(param_1 + 0xf0);
  FUN_10001549c(&pcStack_70,"secondary_nav_news");
  FUN_10001549c(apvStack_88,"se
// ...truncated...
```

## 4. Social/Friends Navigation Handlers

### `MAIN_MENU_SOCIAL`

#### `FUN_10020d970` @ `0x10020d970`

```c

void FUN_10020d970(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}


```

#### `FUN_10020d980` @ `0x10020d980`

```c

void FUN_10020d980(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}


```

#### `FUN_100267f98` @ `0x100267f98`

```c

void FUN_100267f98(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}


```

#### `FUN_100267fa8` @ `0x100267fa8`

```c

void FUN_100267fa8(void)

{
  FUN_1004e0150("MAIN_MENU_SOCIAL",0);
  return;
}


```

### `UI::EVENT_MENU_FRIENDS_SELECTED`

#### `FUN_10026dad4` @ `0x10026dad4`

```c

/* WARNING: Removing unreachable block (ram,0x00010026f348) */
/* WARNING: Removing unreachable block (ram,0x00010026f2e8) */
/* WARNING: Removing unreachable block (ram,0x00010026f318) */
/* WARNING: Removing unreachable block (ram,0x00010026f4c8) */

void FUN_10026dad4(long *param_1)

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
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  char *pcVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  uint uVar41;
  float fVar42;
  undefined4 uVar43;
  long lVar44;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  plVar1 = param_1 + 0x79;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x90;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x130b;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar4 = param_1 + 0x131c;
  FUN_100642bd8(plVar3,plVar4,1);
  plVar5 = param_1 + 0x133a;
  FUN_100642bd8(plVar3,plVar5,1);
  plVar6 = param_1 + 0x1bd3;
  FUN_100642bd8(plVar5,plVar6,1);
  plVar7 = param_1 + 0x134b;
  FUN_100642bd8(plVar5,plVar7,1);
  FUN_100642bd8(plVar5,param_1 + 0x1369,1);
  FUN_100642bd8(plVar5,param_1 + 0x138f,1);
  FUN_100642bd8(plVar5,param_1 + 0x144d,1);
  FUN_100642bd8(plVar5,param_1 + 0x150b,1);
  FUN_100642bd8(plVar5,param_1 + 0x15c9,1);
  FUN_100642bd8(plVar5,param_1 + 0x1687,1);
  plVar3 = param_1 + 0x23ff;
  FUN_100642bd8(plVar5,plVar3,1);
  plVar8 = param_1 + 0x2410;
  FUN_100642bd8(plVar3,plVar8,1);
  plVar9 = param_1 + 0x242e;
  FUN_100642bd8(plVar3,plVar9,1);
  plVar10 = param_1 + 0x16ad;
  FUN_100642bd8(plVar5,plVar10,1);
  plVar11 = param_1 + 0x686;
  FUN_100642bd8(plVar1,plVar11,1);
  plVar12 = param_1 + 0x6ba;
  FUN_100642bd8(plVar11,plVar12,1);
  plVar13 = param_1 + 0x6e0;
  FUN_100642bd8(plVar11,plVar13,1);
  plVar14 = param_1 + 0x714;
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_1005308f8(plVar14,param_1 + 0x878,1);
  FUN_1005308f8(plVar14,param_1 + 0x9d8,1);
  FUN_1005308f8(plVar14,param_1 + 0xb38,1);
  FUN_1005308f8(plVar14,param_1 + 0xc98,1);
  FUN_1005308f8(plVar14,param_1 + 0xdf8,1);
  FUN_1005308f8(plVar14,param_1 + 0xf58,1);
  FUN_1005308f8(plVar14,param_1 + 0x10b8,1);
  FUN_1005308f8(plVar14,param_1 + 0x889,1);
  FUN_1005308f8(plVar14,param_1 + 0x9e9,1);
  plVar15 = param_1 + 0xb49;
  FUN_1005308f8(plVar14,plVar15,1);
  plVar16 = param_1 + 0xe09;
  FUN_1005308f8(plVar14,plVar16,1);
  plVar17 = param_1 + 0xf69;
  FUN_1005308f8(plVar14,plVar17,1);
  plVar18 = param_1 + 0xca9;
  FUN_1005308f8(plVar14,plVar18,1);
  plVar19 = param_1 + 0x10c9;
  FUN_1005308f8(plVar14,plVar19,1);
  plVar20 = param_1 + 0x82c;
  FUN_1005308f8(plVar14,plVar20,1);
  plVar21 = param_1 + 0x852;
  FUN_1005308f8(plVar14,plVar21,1);
  plVar22 = param_1 + 0x8d6;
  FUN_1005308f8(plVar14,plVar22,1);
  FUN_1005308f8(plVar14,param_1 + 0x91a,1);
  plVar23 = param_1 + 0xa36;
  FUN_1005308f8(plVar14,plVar23,1);
  FUN_1005308f8(plVar14,param_1 + 0xa7a,1);
  plVar24 = param_1 + 0xa5c;
  FUN_1005308f8(plVar14,plVar24,1);
  plVar25 = param_1 + 0xb96;
  FUN_1005308f8(plVar14,plVar25,1);
  FUN_1005308f8(plVar14,param_1 + 0xbda,1);
  plVar26 = param_1 + 0xbbc;
  FUN_1005308f8(plVar14,plVar26,1);
  plVar27 = param_1 + 0xe56;
  FUN_1005308f8(plVar14,plVar27,1);
  plVar28 = param_1 + 0xe7c;
  FUN_1005308f8(plVar14,plVar28,1);
  FUN_1005308f8(plVar14,param_1 + 0xe9a,1);
  plVar29 = param_1 + 0xfb6;
  FUN_1005308f8(plVar14,plVar29,1);
  plVar30 = param_1 + 0xfdc;
  FUN_1005308f8(plVar14,plVar30,1);
  FUN_1005308f8(plVar14,param_1 + 0xffa,1);
  plVar31 = param_1 + 0xcf6;
  FUN_1005308f8(plVar14,plVar31,1);
  FUN_1005308f8(plVar14,param_1 + 0xd3a,1);
  plVar32 = param_1 + 0xd1c;
  FUN_1005308f8(plVar14,plVar32,1);
  plVar33 = param_1 + 0x1116;
  FUN_1005308f8(plVar14,plVar33,1);
  FUN_1005308f8(plVar14,param_1 + 0x115a,1);
  plVar34 = param_1 + 0x113c;
  FUN_1005308f8(plVar14,plVar34,1);
  FUN_1005308f8(plVar14,param_1 + 0x1218,1);
  FUN_1005308f8(plVar14,param_1 + 0x12c7,1);
  FUN_1005308f8(plVar14,param_1 + 0x12e5,1);
  FUN_1005308f8(plVar14,param_1 + 0x2471,1);
  FUN_100642bd8(plVar1,param_1 + 0x7bb,1);
  plVar3 = param_1 + 0x118;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar35 = param_1 + 0x3cf;
  FUN_100642bd8(plVar1,plVar35,1);
  plVar36 = param_1 + 0x7f0;
  FUN_100642bd8(plVar1,plVar36,1);
  plVar37 = param_1 + 0x80e;
  FUN_100642bd8(plVar1,plVar37,1);
  FUN_100642bd8(plVar1,param_1 + 0x2454,1);
  plVar1 = param_1 + 0xae;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar5 = param_1 + 0xcc;
  FUN_100642bd8(plVar1,plVar5,1);
  *(uint *)((long)param_1 + 0x504) = *(uint *)((long)param_1 + 0x504) | 0x10;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xff362626);
  FUN_100652dd4(plVar2,&local_b8,2);
  uVar41 = *(uint *)((long)param_1 + 0x504);
  if ((uVar41 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x504) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x2600;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a168,2);
  uVar41 = *(uint *)((long)param_1 + 0x5f4);
  if ((uVar41 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x5f4) = uVar41 & 0xffff8000 | uVar41 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar1);
  }
  uVar40 = FUN_1004e0150("MENU_FRIENDS_FRIENDS_
// ...truncated...
```

##### Caller: `FUN_10026d50c` @ `0x10026d50c`

```c

undefined8 * FUN_10026d50c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10026d1f4();
  FUN_1004f0a20(lVar1 + 0x368);
  FUN_10014f4a0(param_1 + 0x70);
  param_1[0x73] = &PTR_FUN_10147e208;
  FUN_10032b50c(param_1 + 0x74);
  param_1[0x78] = 0;
  *param_1 = &PTR_thunk_FUN_10026f59c_10147d898;
  param_1[0x6d] = &PTR_FUN_10147dab0;
  param_1[0x70] = &PTR_FUN_10147dae0;
  param_1[0x73] = &PTR_FUN_10147de78;
  param_1[0x74] = &PTR_FUN_10147ded8;
  param_1[0x77] = &PTR_FUN_10147df00;
  FUN_10064e264(param_1 + 0x79);
  thunk_FUN_100652c08(param_1 + 0x90);
  thunk_FUN_100652c08(param_1 + 0xae);
  thunk_FUN_100650e64(param_1 + 0xcc);
  thunk_FUN_100650e64(param_1 + 0xf2);
  thunk_FUN_100181304(param_1 + 0x118,0);
  thunk_FUN_100181304(param_1 + 0x3cf,0);
  thunk_FUN_1006543ec(param_1 + 0x686);
  thunk_FUN_100650e64(param_1 + 0x6ba);
  thunk_FUN_1006543ec(param_1 + 0x6e0);
  FUN_10053077c(param_1 + 0x714,0);
  FUN_10064e264(param_1 + 0x7bb);
  thunk_FUN_100652c08(param_1 + 0x7d2);
  thunk_FUN_100652c08(param_1 + 0x7f0);
  thunk_FUN_100652c08(param_1 + 0x80e);
  thunk_FUN_100650e64(param_1 + 0x82c);
  thunk_FUN_100650e64(param_1 + 0x852);
  FUN_1006421a8(param_1 + 0x878);
  param_1[0x878] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x889);
  thunk_FUN_100650e64(param_1 + 0x8d6);
  thunk_FUN_100652c08(param_1 + 0x8fc);
  FUN_1002774c8(param_1 + 0x91a);
  FUN_1006421a8(param_1 + 0x9d8);
  param_1[0x9d8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x9e9);
  thunk_FUN_100650e64(param_1 + 0xa36);
  thunk_FUN_100652c08(param_1 + 0xa5c);
  FUN_1002774c8(param_1 + 0xa7a);
  FUN_1006421a8(param_1 + 0xb38);
  param_1[0xb38] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xb49);
  thunk_FUN_100650e64(param_1 + 0xb96);
  thunk_FUN_100652c08(param_1 + 0xbbc);
  FUN_1002774c8(param_1 + 0xbda);
  FUN_1006421a8(param_1 + 0xc98);
  param_1[0xc98] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xca9);
  thunk_FUN_100650e64(param_1 + 0xcf6);
  thunk_FUN_100652c08(param_1 + 0xd1c);
  FUN_1002774c8(param_1 + 0xd3a);
  FUN_1006421a8(param_1 + 0xdf8);
  param_1[0xdf8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xe09);
  thunk_FUN_100650e64(param_1 + 0xe56);
  thunk_FUN_100652c08(param_1 + 0xe7c);
  FUN_1002774c8(param_1 + 0xe9a);
  FUN_1006421a8(param_1 + 0xf58);
  param_1[0xf58] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0xf69);
  thunk_FUN_100650e64(param_1 + 0xfb6);
  thunk_FUN_100652c08(param_1 + 0xfdc);
  FUN_1002774c8(param_1 + 0xffa);
  FUN_1006421a8(param_1 + 0x10b8);
  param_1[0x10b8] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001b4648(param_1 + 0x10c9);
  thunk_FUN_100650e64(param_1 + 0x1116);
  thunk_FUN_100652c08(param_1 + 0x113c);
  FUN_1002774c8(param_1 + 0x115a);
  thunk_FUN_1001c0c34(param_1 + 0x1218,0);
  thunk_FUN_100652c08(param_1 + 0x12c7);
  thunk_FUN_100650e64(param_1 + 0x12e5);
  FUN_1006421a8(param_1 + 0x130b);
  param_1[0x130b] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x131c);
  FUN_1006421a8(param_1 + 0x133a);
  param_1[0x133a] = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x134b);
  thunk_FUN_100650e64(param_1 + 0x1369);
  thunk_FUN_100183990(param_1 + 0x138f,0);
  thunk_FUN_100183990(param_1 + 0x144d,0);
  thunk_FUN_100183990(param_1 + 0x150b,0);
  thunk_FUN_100183990(param_1 + 0x15c9,0);
  thunk_FUN_100650e64(param_1 + 0x1687);
  thunk_FUN_10018ceb0(param_1 + 0x16ad);
  thunk_FUN_1001862ec(param_1 + 0x1bd3,param_1 + 0x73);
  param_1[0x23fe] = 0;
  param_1[0x23fb] = 0;
  param_1[0x23fa] = 0;
  param_1[0x23fd] = 0;
  param_1[0x23fc] = 0;
  param_1[0x23f7] = 0;
  param_1[0x23f6] = 0;
  param_1[0x23f9] = 0;
  param_1[0x23f8] = 0;
  param_1[0x23f3] = 0;
  param_1[0x23f2] = 0;
  param_1[0x23f5] = 0;
  param_1[0x23f4] = 0;
  param_1[0x23f1] = 0;
  param_1[0x23f0] = 0;
  FUN_1006421a8(param_1 + 0x23ff);
  param_1[0x23ff] 
// ...truncated...
```

#### `FUN_10019fd3c` @ `0x10019fd3c`

```c

void FUN_10019fd3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  if ((*(char *)(param_1 + 0x3dad) == '\0') && (*(char *)(param_1 + 0x3dae) == '\0')) {
    uVar1 = FUN_100644a94("UI::EVENT_MENU_FRIENDS_SELECTED");
    FUN_100644aec(auStack_40,uVar1,param_1);
    FUN_100644c34(param_1,auStack_40,1);
  }
  FUN_100644b14(param_2);
  return;
}


```

##### Caller: `FUN_10019d7e4` @ `0x10019d7e4`

```c

void FUN_10019d7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10019fd3c(param_1,param_4);
  return;
}


```

### `FRIENDS.*`

#### `FUN_10020cfb8` @ `0x10020cfb8`

```c

undefined8 * FUN_10020cfb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  *param_1 = &PTR____cxa_pure_virtual_101471f78;
  operator_new(0x3cf8);
  lVar1 = thunk_FUN_1002e0920();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[1] = lVar1;
  param_1[2] = &DAT_101471ee0;
  puVar3 = param_1 + 3;
  *puVar3 = &PTR_FUN_101471f38;
  param_1[4] = 0;
  FUN_1004f0a20(param_1 + 5);
  FUN_10014f4a0(param_1 + 8);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_1014719a8;
  param_1[2] = &PTR_FUN_101471a68;
  *puVar3 = &PTR_FUN_101471ac0;
  param_1[5] = &PTR_FUN_101471b00;
  param_1[8] = &PTR_FUN_101471b30;
  param_1[0xb] = &PTR_FUN_101471ec8;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  thunk_FUN_100016500(param_1 + 0x14,"FRIENDS.*",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = param_1 + 0x19;
  FUN_1001e7abc(param_1 + 0x1b);
  FUN_1004e313c(param_1 + 0x1c);
  FUN_10003330c(param_1 + 0x1e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x21,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_10003330c(param_1 + 0x25,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x28,&DAT_101d91198);
  *(undefined4 *)((long)param_1 + 0x15b) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_1001116f8(puVar3);
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_1004e3120(auStack_40,"REQUESTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_1004e3120(auStack_40,"RECENTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1004e3120(auStack_40,"TEAM");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1004e3120(auStack_40,"GUILD");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"ONLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"OFFLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  uVar2 = FUN_1002e1420(param_1[1],"TEAM");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"GUILD");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"ONLINE_FRIENDS");
  FUN_1001d9594(uVar2,1);
  return param_1;
}


```

##### Caller: `thunk_FUN_10020cfb8` @ `0x10020d2d4`

```c

undefined8 * thunk_FUN_10020cfb8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_101471f78;
  operator_new(0x3cf8);
  lVar1 = thunk_FUN_1002e0920();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[1] = lVar1;
  param_1[2] = &DAT_101471ee0;
  puVar3 = param_1 + 3;
  *puVar3 = &PTR_FUN_101471f38;
  param_1[4] = 0;
  FUN_1004f0a20(param_1 + 5);
  FUN_10014f4a0(param_1 + 8);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_1014719a8;
  param_1[2] = &PTR_FUN_101471a68;
  *puVar3 = &PTR_FUN_101471ac0;
  param_1[5] = &PTR_FUN_101471b00;
  param_1[8] = &PTR_FUN_101471b30;
  param_1[0xb] = &PTR_FUN_101471ec8;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  thunk_FUN_100016500(param_1 + 0x14,"FRIENDS.*",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = param_1 + 0x19;
  FUN_1001e7abc(param_1 + 0x1b);
  FUN_1004e313c(param_1 + 0x1c);
  FUN_10003330c(param_1 + 0x1e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x21,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_10003330c(param_1 + 0x25,&DAT_101d91198);
  FUN_10003330c(param_1 + 0x28,&DAT_101d91198);
  *(undefined4 *)((long)param_1 + 0x15b) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_1001116f8(puVar3);
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_1004e3120(auStack_40,"REQUESTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_1004e3120(auStack_40,"RECENTS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1004e3120(auStack_40,"TEAM");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1004e3120(auStack_40,"GUILD");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"ONLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar4 = param_1[1];
  uVar2 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1004e3120(auStack_40,"OFFLINE_FRIENDS");
  FUN_1002e133c(uVar4,uVar2,auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  uVar2 = FUN_1002e1420(param_1[1],"TEAM");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"GUILD");
  FUN_1001d9594(uVar2,1);
  uVar2 = FUN_1002e1420(param_1[1],"ONLINE_FRIENDS");
  FUN_1001d9594(uVar2,1);
  return param_1;
}


```

#### `FUN_100267fb8` @ `0x100267fb8`

```c

void FUN_100267fb8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001c3fc8(param_2,"FRIENDS.*");
  FUN_1001c3fc8(param_2,"GUILD.*");
  FUN_1001c3fc8(param_2,"TEAM.*");
  return;
}


```

##### Caller: `thunk_FUN_100267fb8` @ `0x100268000`

```c

void thunk_FUN_100267fb8(void)

{
  FUN_100267fb8();
  return;
}


```

#### `FUN_100266a50` @ `0x100266a50`

```c

undefined8 * FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  local_70 = thunk_FUN_100268004;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  local_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  local_70 = thunk_FUN_1002681ac;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&local_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```

##### Caller: `thunk_FUN_100266a50` @ `0x100266d00`

```c

undefined8 * thunk_FUN_100266a50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar5 = FUN_1001e6910();
  FUN_10014f4a0(lVar5 + 0x2c30);
  param_1[0x589] = &DAT_101471ee0;
  FUN_1004f0a20(param_1 + 0x58a);
  param_1[0x58f] = 0;
  param_1[0x58e] = 0;
  puVar2 = param_1 + 0x58d;
  *param_1 = &PTR_thunk_FUN_100266d04_10147c5e0;
  param_1[0x586] = &PTR_FUN_10147c810;
  param_1[0x589] = &PTR_FUN_10147cba8;
  param_1[0x58a] = &PTR_FUN_10147cc00;
  param_1[0x58d] = &PTR_FUN_10147cc30;
  puVar3 = param_1 + 0x590;
  thunk_FUN_10026d50c(puVar3);
  thunk_FUN_10027e884(param_1 + 0x2a47);
  thunk_FUN_1002850d0(param_1 + 0x11d7f);
  thunk_FUN_10023b4b8(param_1 + 0x1738f);
  thunk_FUN_100264e14(param_1 + 0x23c57);
  FUN_100016064(param_1 + 0x26e3c);
  param_1[0x26e42] = 0;
  iVar4 = FUN_100642d08(param_1 + 0x566);
  if (iVar4 != 0) {
    FUN_1006423ec(param_1 + 0x566,1);
  }
  uVar6 = FUN_1004e0150("MENU_PEOPLE_FRIENDS_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,1,uVar6,puVar3);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,2,uVar6,param_1 + 0x2a47);
  uVar6 = FUN_1004e0150("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_1001e6e9c(param_1,3,uVar6,param_1 + 0x11d7f);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_GUILD");
  pcStack_70 = thunk_FUN_100268004;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  uStack_48 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  pcStack_70 = thunk_FUN_1002681ac;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  puStack_68 = param_1;
  FUN_10001554c(param_1 + 0x591,&pcStack_70);
  puVar1 = param_1 + 0x62;
  FUN_1001e68a4(puVar1,1,"FRIENDS.*");
  FUN_1001e68a4(puVar1,2,"GUILD.*");
  FUN_1001e68a4(puVar1,3,"TEAM.*");
  FUN_1001dac1c(puVar2,"GUILD",param_1,FUN_1002683fc);
  FUN_1001dac1c(puVar2,"FRIENDS",param_1,FUN_100268428);
  FUN_1001dac1c(puVar2,"TEAM",param_1,FUN_100268454);
  iVar4 = FUN_1004eef24();
  if (iVar4 != 0) {
    FUN_100270a84(puVar3);
  }
  return param_1;
}


```

## 5. Leaderboard RPC Gate Analysis

### getLeaderboardData caller (FUN_100502c60)

#### `FUN_100502c60` @ `0x100502c60`

```c

undefined8 FUN_100502c60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getLeaderboardData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0xb4,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}


```


### Callers of getLeaderboardData

*No callers found*

## 6. FriendListAll Caller Analysis

### friendListAll caller (FUN_1004f58d8)

#### `FUN_1004f58d8` @ `0x1004f58d8`

```c

undefined8 FUN_1004f58d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_31 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"friendListAll");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f59d0(local_68,lVar1,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}


```


### Callers of friendListAll

*No callers found*

## 7. Panel Show/Hide Functions

### `HomePanelVCHighlightPlay`

#### `FUN_1002a72d4` @ `0x1002a72d4`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a72d4(void)

{
  DAT_101e44718 = 0xff;
  DAT_101e4471a = 0xffff;
  DAT_101e4471c = 0xffff;
  DAT_101e4471e = 0xffbc9c44;
  DAT_101e44722 = 0xff1166f2;
  DAT_101e44726 = 0xffe0e0e0;
  DAT_101e4472a = 0xffa0a0a0;
  DAT_101e4472e = 0xff8c8c8c;
  DAT_101e44732 = 0xff322213;
  DAT_101e44736 = 0xff091911;
  DAT_101e4473a = 0xff170c19;
  DAT_101e4473e = 0xff241a14;
  DAT_101e44742 = 0xff14171c;
  DAT_101e44746 = 0xff221911;
  DAT_101e4474a = 0xff1a1416;
  DAT_101e4474e = 0xff121414;
  DAT_101e44752 = 0xff1a1809;
  DAT_101e44756 = 0xff141414;
  DAT_101e4475a = 0xff141414;
  DAT_101e4475e = 0xff2929c0;
  DAT_101e44762 = 0xff283082;
  DAT_101e44766 = 0xff5262cc;
  DAT_101e4476a = 0xff283082;
  DAT_101e4476e = 0xff5262cc;
  DAT_101e44772 = 0xff745c42;
  DAT_101e44776 = 0xff184155;
  DAT_101e4477a = 0xff92665e;
  DAT_101e4477e = 0xffbc9c44;
  DAT_101e44782 = 0xffbbae56;
  DAT_101e44786 = 0xff8b7b01;
  DAT_101e4478a = 0xff90b3ef;
  DAT_101e4478e = 0xff728ebe;
  DAT_101e44792 = 0xff19459d;
  DAT_101e44796 = 0xff9d877b;
  DAT_101e4479a = 0xffcbb1a3;
  DAT_101e4479e = 0xff3f6fb5;
  DAT_101e447a2 = 0xffc5c5c5;
  DAT_101e447a6 = 0xff4fc1f1;
  DAT_101e447aa = 0xff606060;
  DAT_101e447ae = 0xffc5ff7b;
  DAT_101e447b2 = 0xff5271eb;
  DAT_101e447b6 = 0xfffae076;
  DAT_101e447ba = 0xff3ac8f6;
  DAT_101e447be = 0xffaaaaaa;
  DAT_101e447c2 = 0xffe19400;
  DAT_101e447c6 = 0xffe19400;
  DAT_101e447ca = 0xffe550b2;
  DAT_101e447ce = 0xfff22ae8;
  DAT_101e447d2 = 0xff005ae1;
  DAT_101e447d6 = 0xff1addfa;
  DAT_101e447da = 0xff2424b3;
  DAT_101e447de = 0xff2424b3;
  DAT_101e447e2 = 0xff646464;
  DAT_101e447e6 = 0xff92665e;
  DAT_101e447ea = 0xff646037;
  DAT_101e447f0 = 0xffffffff;
  DAT_101e447f4 = 0xff1111a1;
  DAT_101e447f8 = 0xff321ee1;
  DAT_101e447fc = 0xffc8c8c8;
  DAT_101e44800 = 0xff321ee1;
  DAT_101e44804 = 0xff7fe801;
  DAT_101e44808 = 0xffffffff;
  DAT_101e4480c = 0xff6259b3;
  DAT_101e44810 = 0xff506e73;
  DAT_101e44814 = 0xff9dbf86;
  DAT_101e44818 = 0xffa35244;
  DAT_101e4481c = 0xffca828e;
  DAT_101e44820 = 0xffa6a6a6;
  DAT_101e44824 = 0xffa6a6a6;
  DAT_101e44828 = 0xffffffff;
  DAT_101e4482c = 0xff88ea2f;
  DAT_101e44830 = 0xff8c8c8c;
  DAT_101e44834 = 0xffffb400;
  DAT_101e44838 = 0xffff00ff;
  DAT_101e4483c = 0xff00aded;
  DAT_101e44840 = 0xff33d3ff;
  DAT_101e44844 = 0xff7fe801;
  DAT_101e44848 = 0xff282828;
  DAT_101e4484c = 0xfff0f0f0;
  DAT_101e44850 = 0xffa4781e;
  DAT_101e44854 = 0xffa6654b;
  DAT_101e44858 = 0xff93435b;
  DAT_101e4485c = 0xff387f9c;
  DAT_101e44860 = 0xffa3781e;
  DAT_101e44864 = 0xffffd18a;
  DAT_101e44868 = 0xffff61f7;
  DAT_101e4486c = 0xff5de1f2;
  DAT_101e44870 = 0xff80eaff;
  DAT_101e44874 = 0xff32e00e;
  DAT_101e44878 = 0xff5a3c10;
  DAT_101e4487c = 0xff330b03;
  DAT_101e44880 = 0xff33031d;
  DAT_101e44884 = 0xff032433;
  DAT_101e44888 = 0xff9e8e8d;
  DAT_101e44890 = 0x4326000041900000;
  DAT_101e44898 = 0x4326000041c00000;
  _DAT_101e448a0 = 0x43700000442a0000;
  DAT_101e448a8 = 0xffe0e0e0;
  FUN_10001549c(&DAT_101e448b0,"HomePanelVCHighlightPlay");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e448b0,0x100000000);
  FUN_10001549c(&DAT_101e448c8,"HomePanelVCKeyholeTiV");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e448c8,0x100000000);
  return;
}


```

### `HomePanelVCKeyholeTiV`

#### `FUN_1002a72d4` @ `0x1002a72d4`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a72d4(void)

{
  DAT_101e44718 = 0xff;
  DAT_101e4471a = 0xffff;
  DAT_101e4471c = 0xffff;
  DAT_101e4471e = 0xffbc9c44;
  DAT_101e44722 = 0xff1166f2;
  DAT_101e44726 = 0xffe0e0e0;
  DAT_101e4472a = 0xffa0a0a0;
  DAT_101e4472e = 0xff8c8c8c;
  DAT_101e44732 = 0xff322213;
  DAT_101e44736 = 0xff091911;
  DAT_101e4473a = 0xff170c19;
  DAT_101e4473e = 0xff241a14;
  DAT_101e44742 = 0xff14171c;
  DAT_101e44746 = 0xff221911;
  DAT_101e4474a = 0xff1a1416;
  DAT_101e4474e = 0xff121414;
  DAT_101e44752 = 0xff1a1809;
  DAT_101e44756 = 0xff141414;
  DAT_101e4475a = 0xff141414;
  DAT_101e4475e = 0xff2929c0;
  DAT_101e44762 = 0xff283082;
  DAT_101e44766 = 0xff5262cc;
  DAT_101e4476a = 0xff283082;
  DAT_101e4476e = 0xff5262cc;
  DAT_101e44772 = 0xff745c42;
  DAT_101e44776 = 0xff184155;
  DAT_101e4477a = 0xff92665e;
  DAT_101e4477e = 0xffbc9c44;
  DAT_101e44782 = 0xffbbae56;
  DAT_101e44786 = 0xff8b7b01;
  DAT_101e4478a = 0xff90b3ef;
  DAT_101e4478e = 0xff728ebe;
  DAT_101e44792 = 0xff19459d;
  DAT_101e44796 = 0xff9d877b;
  DAT_101e4479a = 0xffcbb1a3;
  DAT_101e4479e = 0xff3f6fb5;
  DAT_101e447a2 = 0xffc5c5c5;
  DAT_101e447a6 = 0xff4fc1f1;
  DAT_101e447aa = 0xff606060;
  DAT_101e447ae = 0xffc5ff7b;
  DAT_101e447b2 = 0xff5271eb;
  DAT_101e447b6 = 0xfffae076;
  DAT_101e447ba = 0xff3ac8f6;
  DAT_101e447be = 0xffaaaaaa;
  DAT_101e447c2 = 0xffe19400;
  DAT_101e447c6 = 0xffe19400;
  DAT_101e447ca = 0xffe550b2;
  DAT_101e447ce = 0xfff22ae8;
  DAT_101e447d2 = 0xff005ae1;
  DAT_101e447d6 = 0xff1addfa;
  DAT_101e447da = 0xff2424b3;
  DAT_101e447de = 0xff2424b3;
  DAT_101e447e2 = 0xff646464;
  DAT_101e447e6 = 0xff92665e;
  DAT_101e447ea = 0xff646037;
  DAT_101e447f0 = 0xffffffff;
  DAT_101e447f4 = 0xff1111a1;
  DAT_101e447f8 = 0xff321ee1;
  DAT_101e447fc = 0xffc8c8c8;
  DAT_101e44800 = 0xff321ee1;
  DAT_101e44804 = 0xff7fe801;
  DAT_101e44808 = 0xffffffff;
  DAT_101e4480c = 0xff6259b3;
  DAT_101e44810 = 0xff506e73;
  DAT_101e44814 = 0xff9dbf86;
  DAT_101e44818 = 0xffa35244;
  DAT_101e4481c = 0xffca828e;
  DAT_101e44820 = 0xffa6a6a6;
  DAT_101e44824 = 0xffa6a6a6;
  DAT_101e44828 = 0xffffffff;
  DAT_101e4482c = 0xff88ea2f;
  DAT_101e44830 = 0xff8c8c8c;
  DAT_101e44834 = 0xffffb400;
  DAT_101e44838 = 0xffff00ff;
  DAT_101e4483c = 0xff00aded;
  DAT_101e44840 = 0xff33d3ff;
  DAT_101e44844 = 0xff7fe801;
  DAT_101e44848 = 0xff282828;
  DAT_101e4484c = 0xfff0f0f0;
  DAT_101e44850 = 0xffa4781e;
  DAT_101e44854 = 0xffa6654b;
  DAT_101e44858 = 0xff93435b;
  DAT_101e4485c = 0xff387f9c;
  DAT_101e44860 = 0xffa3781e;
  DAT_101e44864 = 0xffffd18a;
  DAT_101e44868 = 0xffff61f7;
  DAT_101e4486c = 0xff5de1f2;
  DAT_101e44870 = 0xff80eaff;
  DAT_101e44874 = 0xff32e00e;
  DAT_101e44878 = 0xff5a3c10;
  DAT_101e4487c = 0xff330b03;
  DAT_101e44880 = 0xff33031d;
  DAT_101e44884 = 0xff032433;
  DAT_101e44888 = 0xff9e8e8d;
  DAT_101e44890 = 0x4326000041900000;
  DAT_101e44898 = 0x4326000041c00000;
  _DAT_101e448a0 = 0x43700000442a0000;
  DAT_101e448a8 = 0xffe0e0e0;
  FUN_10001549c(&DAT_101e448b0,"HomePanelVCHighlightPlay");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e448b0,0x100000000);
  FUN_10001549c(&DAT_101e448c8,"HomePanelVCKeyholeTiV");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e448c8,0x100000000);
  return;
}


```

### `homepanel_play_button`

#### `FUN_1001f37a8` @ `0x1001f37a8`

```c

void FUN_1001f37a8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1001311d4();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_10032523c();
    FUN_100325328(uVar2,"5v5_bots_solo","easy");
    return;
  }
  FUN_1002219a0("homepanel_play_button");
  return;
}


```

##### Caller: `FUN_1001f3d84` @ `0x1001f3d84`

```c

undefined8 FUN_1001f3d84(void)

{
  FUN_1001f37a8();
  return 0;
}


```

##### Caller: `FUN_1001ff0f0` @ `0x1001ff0f0`

```c

undefined8 FUN_1001ff0f0(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_1001f37a8(*(undefined8 *)(param_1 + 0xe0));
  }
  return 0;
}


```

#### `FUN_1002a616c` @ `0x1002a616c`

```c

long * FUN_1002a616c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  code *local_90;
  long *local_88;
  long *local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  puVar11[0x17] = 0;
  *puVar11 = &PTR_thunk_FUN_1002a6738_101482408;
  puVar11 = puVar11 + 0x18;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_1 + 0x43;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x69;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8f;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xb5;
  thunk_FUN_100655644(plVar4);
  thunk_FUN_1001c0c34(param_1 + 0xe0,0);
  param_1[399] = 0;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x1ae;
  FUN_1001b11fc(plVar5);
  plVar6 = param_1 + 0x1c8;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x311;
  thunk_FUN_1002eca3c(plVar7,0);
  thunk_FUN_100652c08(param_1 + 0x45a);
  *(undefined4 *)(param_1 + 0x478) = 0;
  lVar12 = FUN_1002a7160(param_1,1);
  param_1[399] = lVar12;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_1001b127c(plVar5,plVar6);
  FUN_1001b127c(plVar5,plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_100655930(puVar11,plVar2,1);
  FUN_100655930(puVar11,plVar3,1);
  FUN_100655930(puVar11,plVar4,1);
  FUN_100655930(plVar4,param_1 + 0xe0,1);
  lVar12 = FUN_10032523c();
  local_90 = (code *)0x0;
  local_78 = thunk_FUN_1002a7060;
  local_88 = param_1;
  local_80 = param_1;
  FUN_1002a71d4(lVar12 + 0x50,&local_90);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10064e5cc(plVar1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&local_90,"Blitz | Casual | Solo");
  FUN_1006513c0(plVar2,&local_90);
  if (local_88 != (long *)0x0) {
    operator_delete__(local_88);
  }
  FUN_100651460(plVar2,&DAT_101e44726);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar13 = FUN_1004e0150("MAIN_MENU_MATCHING_BOX_SUBTITLE",0);
  FUN_1006513c0(plVar3,uVar13);
  FUN_10064e5cc(plVar3,1);
  FUN_100651460(plVar3,&DAT_101e44726);
  uVar8 = FUN_1004d2524("homepanel_play_button");
  uVar9 = FUN_100015208("homepanel_play_button",uVar8,0x1234);
  *(uint *)((long)param_1 + 0xec4) =
       *(uint *)((long)param_1 + 0xec4) & 0x80000000 |
       *(uint *)((long)param_1 + 0xec4) & 0x7fff | (uVar9 & 0xffff) << 0xf;
  uVar8 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = FUN_1002a666c;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x1c9,&local_90);
  FUN_1002ebf04(plVar6,&DAT_101d23748);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  FUN_1002eccb4(plVar6,&DAT_101e448a8);
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff646464);
  FUN_1002ecd8c(plVar6,&local_90);
  FUN_1002ecd84(plVar6,1);
  uVar13 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  FUN_1002ecce4(plVar6,uVar13);
  FUN_1002ebe0c(plVar6,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebee0(0x42200000,0x42200000,plVar6);
  FUN_100652590(param_1 + 0x23a,&DAT_101e448a8,2);
  local_68 = uVar8;
  local_90 = FUN_1002a6684;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  local_80 = (long *)0x0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x312,&local_90);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Bold_100_f_10184e258);
  FUN_1002eccb4(plVar7,&DAT_101e448a8);
  uVar13 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1002ecce4(plVar7,uVar13);
  FUN_1002ebe0c(plVar7,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff606060);
  FUN_1002ebe4c(plVar7,&local_90);
  FUN_1002ebea0(plVar7,1);
  FUN_100652590(param_1 + 899,&DAT_101e448a8,2);
  FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 0x23a);
  FUN_1006525c4(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_1 + 899);
  uVar13 = FUN_100345b94();
  FUN_10034c450(uVar13,"*KindredMenuAnimatedSplashMesh*");
  iVar10 = FUN_100126d70();
  if (iVar10 == 0xe) {
    FUN_100652cac(param_1 + 400,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_18_plus");
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 400,1);
  }
  FUN_1002a669c(param_1);
  return param_1;
}


```

##### Caller: `thunk_FUN_1002a616c` @ `0x1002a6734`

```c

long * thunk_FUN_1002a616c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcStack_90;
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar11 = (undefined8 *)FUN_10064e20c();
  puVar11[0x17] = 0;
  *puVar11 = &PTR_thunk_FUN_1002a6738_101482408;
  puVar11 = puVar11 + 0x18;
  thunk_FUN_100655644(puVar11);
  plVar1 = param_1 + 0x43;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x69;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x8f;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xb5;
  thunk_FUN_100655644(plVar4);
  thunk_FUN_1001c0c34(param_1 + 0xe0,0);
  param_1[399] = 0;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x1ae;
  FUN_1001b11fc(plVar5);
  plVar6 = param_1 + 0x1c8;
  thunk_FUN_1002eca3c(plVar6,0);
  plVar7 = param_1 + 0x311;
  thunk_FUN_1002eca3c(plVar7,0);
  thunk_FUN_100652c08(param_1 + 0x45a);
  *(undefined4 *)(param_1 + 0x478) = 0;
  lVar12 = FUN_1002a7160(param_1,1);
  param_1[399] = lVar12;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_1001b127c(plVar5,plVar6);
  FUN_1001b127c(plVar5,plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100655930(puVar11,plVar1,1);
  FUN_100655930(puVar11,plVar2,1);
  FUN_100655930(puVar11,plVar3,1);
  FUN_100655930(puVar11,plVar4,1);
  FUN_100655930(plVar4,param_1 + 0xe0,1);
  lVar12 = FUN_10032523c();
  pcStack_90 = (code *)0x0;
  pcStack_78 = thunk_FUN_1002a7060;
  plStack_88 = param_1;
  plStack_80 = param_1;
  FUN_1002a71d4(lVar12 + 0x50,&pcStack_90);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10064e5cc(plVar1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(&pcStack_90,"Blitz | Casual | Solo");
  FUN_1006513c0(plVar2,&pcStack_90);
  if (plStack_88 != (long *)0x0) {
    operator_delete__(plStack_88);
  }
  FUN_100651460(plVar2,&DAT_101e44726);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  uVar13 = FUN_1004e0150("MAIN_MENU_MATCHING_BOX_SUBTITLE",0);
  FUN_1006513c0(plVar3,uVar13);
  FUN_10064e5cc(plVar3,1);
  FUN_100651460(plVar3,&DAT_101e44726);
  uVar8 = FUN_1004d2524("homepanel_play_button");
  uVar9 = FUN_100015208("homepanel_play_button",uVar8,0x1234);
  *(uint *)((long)param_1 + 0xec4) =
       *(uint *)((long)param_1 + 0xec4) & 0x80000000 |
       *(uint *)((long)param_1 + 0xec4) & 0x7fff | (uVar9 & 0xffff) << 0xf;
  uVar8 = DAT_101d91884;
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002a666c;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1c9,&pcStack_90);
  FUN_1002ebf04(plVar6,&DAT_101d23748);
  FUN_1002eb970(plVar6,1);
  FUN_1002ecc7c(plVar6,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  FUN_1002eccb4(plVar6,&DAT_101e448a8);
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff646464);
  FUN_1002ecd8c(plVar6,&pcStack_90);
  FUN_1002ecd84(plVar6,1);
  uVar13 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  FUN_1002ecce4(plVar6,uVar13);
  FUN_1002ebe0c(plVar6,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  FUN_1002ebea0(plVar6,1);
  FUN_1002ebee0(0x42200000,0x42200000,plVar6);
  FUN_100652590(param_1 + 0x23a,&DAT_101e448a8,2);
  uStack_68 = uVar8;
  pcStack_90 = FUN_1002a6684;
  pcStack_78 = (code *)0x0;
  uStack_70 = 0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x312,&pcStack_90);
  FUN_1002eb970(plVar7,1);
  FUN_1002ecc7c(plVar7,PTR_s_build___Fonts_Brandon_Bold_100_f_10184e258);
  FUN_1002eccb4(plVar7,&DAT_101e448a8);
  uVar13 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1002ecce4(plVar7,uVar13);
  FUN_1002ebe0c(plVar7,PTR_s_build___VGX_common_atlas_101854980,"play_button_bg");
  pcStack_90 = (code *)CONCAT44(pcStack_9
// ...truncated...
```

### `homepanel_profile_avatar`

#### `FUN_1002a9254` @ `0x1002a9254`

```c

long * FUN_1002a9254(long *param_1)

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
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  void *local_a8 [2];
  char local_91;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  *puVar13 = &PTR_thunk_FUN_1002a99a8_101482aa0;
  puVar13 = puVar13 + 0x18;
  thunk_FUN_100652c08(puVar13);
  plVar1 = param_1 + 0x36;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x54;
  thunk_FUN_1002ecd94(plVar2,0);
  plVar3 = param_1 + 0x1ce;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x1e5;
  FUN_10064e264(plVar4);
  thunk_FUN_1001c6e5c();
  thunk_FUN_1001c6e5c();
  plVar5 = param_1 + 0x2f0;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x316;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x33c;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x362;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x388;
  thunk_FUN_100650e64();
  thunk_FUN_1001c397c(param_1 + 0x3ae);
  (**(code **)(*param_1 + 0x78))(param_1,puVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3ae,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,param_1 + 0x276,1);
  FUN_100642bd8(plVar4,plVar8,1);
  FUN_100642bd8(plVar4,param_1 + 0x1fc,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar1,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar9,1);
  FUN_100652cac(puVar13,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_profile_bg");
  uVar12 = *(uint *)((long)param_1 + 0x144);
  if ((uVar12 & 0x7f80) != 0x7100) {
    *(uint *)((long)param_1 + 0x144) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7100;
    FUN_1000200a0(puVar13);
  }
  uVar11 = FUN_1004d2524("homepanel_profile_avatar");
  uVar12 = FUN_100015208("homepanel_profile_avatar",uVar11,0x1234);
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0x80000000 |
       *(uint *)((long)param_1 + 0x324) & 0x7fff | (uVar12 & 0xffff) << 0xf;
  FUN_1002eb970(plVar2,0);
  puVar10 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&local_90,"player_avatar_placeholder");
  FUN_10001549c(local_a8,"player_avatar_placeholder");
  FUN_1002ece5c(plVar2,puVar10,&local_90,local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  if (local_80._7_1_ < '\0') {
    operator_delete(local_90);
  }
  local_68 = DAT_101d91884;
  local_90 = FUN_1002a97cc;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x55,&local_90);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_100651460(plVar5,&DAT_1011588ac);
  FUN_1001c7278(param_1 + 0x1fc,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1001c7278(param_1 + 0x276,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651460(plVar7,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar7,uVar14);
  FUN_100651460(plVar8,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar8,uVar14);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"brawl_trophy");
  uVar12 = *(uint *)((long)param_1 + 0x234);
  if ((uVar12 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x234) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x2600;
    FUN_1000200a0(plVar1);
  }
  FUN_100651460(plVar6,&DAT_1011588ac);
  FUN_100651460(plVar9,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("MENU_PLAY_MENU_MODE_BLITZ_SELECTION_TITLE",0);
  FUN_1006513c0(plVar9,uVar14);
  local_68 = DAT_101dbd458;
  local_90 = FUN_1002a97dc;
  plVar1 = param_1 + 0x19;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd484;
  local_90 = FUN_1002a97dc;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd460;
  local_90 = FUN_1002a9828;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd48c;
  local_90 = FUN_1002a9828;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = DAT_101dbd4a4;
  local_90 = FUN_1002a9874;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) | 0x10;
  FUN_1002a98c0(param_1);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}


```

##### Caller: `thunk_FUN_1002a9254` @ `0x1002a99a4`

```c

long * thunk_FUN_1002a9254(long *param_1)

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
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  void *apvStack_a8 [2];
  char cStack_91;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar13 = (undefined8 *)FUN_10064e20c();
  puVar13[0x17] = 0;
  *puVar13 = &PTR_thunk_FUN_1002a99a8_101482aa0;
  puVar13 = puVar13 + 0x18;
  thunk_FUN_100652c08(puVar13);
  plVar1 = param_1 + 0x36;
  thunk_FUN_100652c08();
  plVar2 = param_1 + 0x54;
  thunk_FUN_1002ecd94(plVar2,0);
  plVar3 = param_1 + 0x1ce;
  FUN_10064e264(plVar3);
  plVar4 = param_1 + 0x1e5;
  FUN_10064e264(plVar4);
  thunk_FUN_1001c6e5c();
  thunk_FUN_1001c6e5c();
  plVar5 = param_1 + 0x2f0;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x316;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x33c;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x362;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x388;
  thunk_FUN_100650e64();
  thunk_FUN_1001c397c(param_1 + 0x3ae);
  (**(code **)(*param_1 + 0x78))(param_1,puVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3ae,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,param_1 + 0x276,1);
  FUN_100642bd8(plVar4,plVar8,1);
  FUN_100642bd8(plVar4,param_1 + 0x1fc,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar1,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar9,1);
  FUN_100652cac(puVar13,PTR_s_build___VGX_common_atlas_101854980,"corner_widget_profile_bg");
  uVar12 = *(uint *)((long)param_1 + 0x144);
  if ((uVar12 & 0x7f80) != 0x7100) {
    *(uint *)((long)param_1 + 0x144) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7100;
    FUN_1000200a0(puVar13);
  }
  uVar11 = FUN_1004d2524("homepanel_profile_avatar");
  uVar12 = FUN_100015208("homepanel_profile_avatar",uVar11,0x1234);
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0x80000000 |
       *(uint *)((long)param_1 + 0x324) & 0x7fff | (uVar12 & 0xffff) << 0xf;
  FUN_1002eb970(plVar2,0);
  puVar10 = PTR_s_build___VGX_common_atlas_101854980;
  FUN_10001549c(&pcStack_90,"player_avatar_placeholder");
  FUN_10001549c(apvStack_a8,"player_avatar_placeholder");
  FUN_1002ece5c(plVar2,puVar10,&pcStack_90,apvStack_a8);
  if (cStack_91 < '\0') {
    operator_delete(apvStack_a8[0]);
  }
  if (uStack_80._7_1_ < '\0') {
    operator_delete(pcStack_90);
  }
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_1002a97cc;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x55,&pcStack_90);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  FUN_100651460(plVar5,&DAT_1011588ac);
  FUN_1001c7278(param_1 + 0x1fc,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_1001c7278(param_1 + 0x276,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651038(plVar9,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  FUN_100651460(plVar7,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("GENERIC_3V3",0);
  FUN_1006513c0(plVar7,uVar14);
  FUN_100651460(plVar8,&DAT_1011588ac);
  uVar14 = FUN_1004e0150("GENERIC_5V5",0);
  FUN_1006513c0(plVar8,uVar14);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"brawl_trophy");
  uVar12 = *(uint *)((long)param_1 + 0x234);
  if ((uVar12 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x234) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x2600;
    
// ...truncated...
```

#### `FUN_1001f3b40` @ `0x1001f3b40`

```c

void FUN_1001f3b40(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef10();
  if ((iVar1 != 0) && (uVar2 = FUN_1001311d4(), (uVar2 & 1) == 0)) {
    uVar2 = FUN_10014e20c();
    if ((uVar2 & 1) != 0) {
      FUN_100220d08();
      return;
    }
    FUN_100221f98("homepanel_profile_avatar");
    return;
  }
  return;
}


```

##### Caller: `FUN_1001ff1bc` @ `0x1001ff1bc`

```c

undefined8 FUN_1001ff1bc(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_1001f3b40(*(undefined8 *)(param_1 + 0xe0));
  }
  return 0;
}


```

#### `FUN_1001f505c` @ `0x1001f505c`

```c

void FUN_1001f505c(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef10();
  if ((iVar1 == 0) || (uVar2 = FUN_1001311d4(), (uVar2 & 1) != 0)) {
    return;
  }
  uVar2 = FUN_100131560();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_10014e20c(), (uVar2 & 1) != 0)) {
    FUN_100220d08();
    return;
  }
  FUN_100221f98("homepanel_profile_avatar");
  return;
}


```

