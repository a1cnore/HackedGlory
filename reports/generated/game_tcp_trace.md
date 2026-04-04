# Game TCP Trace (Pass 2) - E.V.I.L. Engine Network Module

## Phase 1: FUN_1004ec13c Caller Chain

## Caller (depth=0): `FUN_100148ab0` @ 0x100148ab0

Calls: `FUN_1004ebfcc`@0x1004ebfcc `FUN_1004ec0e8`@0x1004ec0e8 `FUN_1004e3004`@0x1004e3004 `_mach_absolute_time`@0x101149404 `_pthread_mutex_lock`@0x1004e44e0 `FUN_1004ec2f8`@0x1004ec2f8 `FUN_1004ec2c4`@0x1004ec2c4 `FUN_1004ec23c`@0x1004ec23c `_memcmp`@0x101149440 `FUN_1004ec13c`@0x1004ec13c `FUN_1004ec368`@0x1004ec368 `FUN_1004ec994`@0x1004ec994 `FUN_10014848c`@0x10014848c `_pthread_mutex_unlock`@0x1004e44e4 `FUN_100149214`@0x100149214 `FUN_1004d29c0`@0x1004d29c0 `FUN_1004ec0f8`@0x1004ec0f8 `FUN_1004ec088`@0x1004ec088 `___stack_chk_fail`@0x101148e40 

```c

undefined8 FUN_100148ab0(void)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint64_t uVar13;
  ulong uVar14;
  uint64_t uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long local_788;
  undefined **local_780;
  char local_778;
  undefined1 auStack_770 [1728];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uVar20 = (ulong)DAT_101e3a93c;
  FUN_1004ebfcc(auStack_770);
  local_780 = &PTR_FUN_10145b1c8;
  local_778 = '\0';
  iVar11 = FUN_1004ec0e8(auStack_770,&local_780);
  if (iVar11 != 0) {
    FUN_1004e3004(&local_788);
    FUN_1004e3004(&local_788);
    if (DAT_101e3a938 != '\0') {
      dVar21 = (double)NEON_ucvtf(uVar20);
      do {
        uVar13 = _mach_absolute_time();
        lVar9 = local_788;
        lVar7 = DAT_101d91638;
        if (DAT_101e3c942 == 0) {
          uVar15 = uVar13;
          if (DAT_101e3c940 != 0) {
            uVar20 = 0;
            pbVar18 = (byte *)((long)&DAT_101e3a940 + 1);
            do {
              _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8b8);
              if (DAT_101e3c940 <= uVar20) {
LAB_100148e58:
                uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
                uVar15 = (uint64_t)uVar12;
                break;
              }
              local_778 = '\0';
              uVar14 = FUN_1004ec2f8(auStack_770);
              if (((uVar14 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
                FUN_1004ec23c(auStack_770);
              }
              puVar1 = &DAT_101e3a940 + uVar20 * 0x40;
              uVar15 = _mach_absolute_time();
              lVar10 = local_788;
              lVar8 = DAT_101d91638;
              bVar6 = (&DAT_101e3a957)[uVar20 * 0x200];
              uVar14 = (ulong)bVar6;
              sVar2 = (&DAT_101e3a948)[uVar20 * 0x40];
              if (-1 < (char)bVar6) {
                sVar2 = uVar14;
              }
              sVar3 = DAT_101d911a0;
              if (-1 < (char)DAT_101d911a8._7_1_) {
                sVar3 = (ulong)DAT_101d911a8._7_1_;
              }
              if (sVar2 == sVar3) {
                puVar19 = (undefined8 *)*puVar1;
                puVar4 = puVar19;
                if (-1 < (char)bVar6) {
                  puVar4 = puVar1;
                }
                pbVar16 = DAT_101d91198;
                if (-1 < (char)DAT_101d911a8._7_1_) {
                  pbVar16 = (byte *)&DAT_101d91198;
                }
                if ((char)bVar6 < '\0') {
                  if ((sVar2 != 0) && (iVar11 = _memcmp(puVar4,pbVar16,sVar2), iVar11 != 0)) {
                    iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                    goto joined_r0x000100148cf0;
                  }
                }
                else if (sVar2 != 0) {
                  pbVar17 = pbVar18;
                  if ((uint)*pbVar16 == ((uint)puVar19 & 0xff)) {
                    do {
                      uVar14 = uVar14 - 1;
                      pbVar16 = pbVar16 + 1;
                      if (uVar14 == 0) goto LAB_100148e34;
                      bVar5 = *pbVar17;
                      pbVar17 = pbVar17 + 1;
                    } while (bVar5 == *pbVar16);
                    goto LAB_100148cb8;
                  }
                  iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                  puVar19 = puVar1;
joined_r0x000100148cf0:
                  if (0 < iVar11) goto LAB_100148d14;
                }
              }
              else {
LAB_100148cb8:
                iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                if (iVar11 < 1) goto LAB_100148e34;
                puVar19 = puVar1;
                if ((char)bVar6 < '\0') {
                  puVar19 = (undefined8 *)*puVar1;
                }
LAB_100148d14:
                iVar11 = FUN_1004ec13c(auStack_770,puVar19,iVar11,0,0);
                if (iVar11 != 0) {
                  dVar23 = (double)((uVar15 - lVar10) * lVar8) * 1e-09;
                  do {
                    if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                    FUN_1004ec368(0x40000000,0xbf800000,auStack_770);
                  } while ((local_778 == '\0') &&
                          (uVar15 = _mach_absolute_time(),
                          -2.0 <= dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09))
                  ;
                  uVar15 = _mach_absolute_time();
                  if ((dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09 < -2.0) &&
                     (iVar11 = FUN_1004ec994(auStack_770), iVar11 != 0)) {
                    FUN_1004ec23c(auStack_770);
                  }
                  uVar15 = _mach_absolute_time();
                  dVar23 = -((double)((uVar15 - local_788) * DAT_101d91638) * -1e-09) - dVar23;
                  if (dVar23 <= 0.0) {
                    dVar23 = 0.0;
                  }
                  FUN_10014848c((float)(dVar23 * 1000.0),&DAT_101e3a978 + uVar20 * 0x200,puVar1,
                                (&DAT_101e3a974)[uVar20 * 0x200] != '\0' && (DAT_101e3c942 & 1) == 0
                               );
                  (&DAT_101e3ab3c)[uVar20 * 0x80] = (float)(dVar23 * 1000.0);
                  if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                }
              }
LAB_100148e34:
              uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
              uVar15 = (uint64_t)uVar12;
              uVar20 = uVar20 + 1;
              pbVar18 = pbVar18 + 0x200;
            } while (uVar20 < DAT_101e3c940);
          }
          FUN_100149214(uVar15);
        }
        uVar15 = _mach_absolute_time();
        if (DAT_101e3a938 != '\0') {
          dVar23 = (double)NEON_fminnm(dVar21 * 0.001 +
                                       ((double)((uVar13 - lVar9) * lVar7) -
                                       (double)((uVar15 - local_788) * DAT_101d91638)) * 1e-09,
                                       dVar21 * 0.001);
          if (dVar23 <= 0.0) {
            dVar23 = 0.0;
          }
          for (; 0.0 < dVar23; dVar23 = dVar23 + -0.1) {
            dVar22 = (double)NEON_fminnm(dVar23,0x3fb999999999999a);
            FUN_1004d29c0((int)(dVar22 * 1000.0));
            if (DAT_101e3a938 == '\0') break;
          }
        }
      } while (DAT_101e3a938 != '\0');
    }
    uVar20 = FUN_1004ec2f8(auStack_770);
    if (((uVar20 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
      FUN_1004ec23c(auStack_770);
    }
    FUN_1004ec0f8(auStack_770);
  }
  FUN_1004ec088(auStack_770);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

## Caller (depth=0): `FUN_100147410` @ 0x100147410

Calls: `FUN_10014e2cc`@0x10014e2cc `FUN_1004ec13c`@0x1004ec13c `operator.delete`@0x101148d74 

```c

undefined8 FUN_100147410(long param_1)

{
  undefined8 uVar1;
  undefined8 *******pppppppuVar2;
  undefined1 local_3d;
  int local_3c;
  undefined8 ******local_38;
  long local_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *******)0x0;
  local_30 = 0;
  local_28 = 0;
  local_3c = 0;
  local_3d = 1;
  FUN_10014e2cc(&local_38,&local_3c,&local_3d);
  if (local_28 < 0) {
    pppppppuVar2 = (undefined8 *******)local_38;
    if (local_30 == 0 || local_3c == 0) {
      uVar1 = 0;
      goto LAB_1001474ac;
    }
  }
  else {
    if (local_28._7_1_ == '\0' || local_3c == 0) {
      return 0;
    }
    pppppppuVar2 = &local_38;
  }
  uVar1 = FUN_1004ec13c(param_1 + 8,pppppppuVar2,local_3c,0,0);
  if (-1 < local_28) {
    return uVar1;
  }
LAB_1001474ac:
  operator_delete(local_38);
  return uVar1;
}


```

---

## Phase 2: _write / _read Wrappers

### FUN_1004e2594 (calls _write)

Calls: `_write`@0x101149db8 

```c

void FUN_1004e2594(int *param_1,void *param_2,ulong param_3,uint *param_4)

{
  ssize_t sVar1;
  
  sVar1 = _write(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((int)sVar1 == -1);
  }
  return;
}


```

---

## Caller (depth=0): `FUN_1004ec720` @ 0x1004ec720

Calls: `FUN_1004e2594`@0x1004e2594 

```c

undefined4 FUN_1004ec720(long param_1)

{
  undefined4 local_24;
  
  local_24 = 0;
  if (*(int *)(param_1 + 0x4bc) < 1) {
    local_24 = 0;
  }
  else {
    FUN_1004e2594(param_1,param_1 + 0xc,*(int *)(param_1 + 0x4bc),&local_24);
    *(undefined4 *)(param_1 + 0x4bc) = 0;
  }
  return local_24;
}


```

---

### Caller (depth=1): `FUN_1004ec034` @ 0x1004ec034

Calls: `FUN_1004e262c`@0x1004e262c `FUN_1004ec720`@0x1004ec720 `FUN_1004e2508`@0x1004e2508 `FUN_1004e24d0`@0x1004e24d0 

```c

undefined8 * FUN_1004ec034(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  *param_1 = &PTR_FUN_10149e320;
  iVar1 = FUN_1004e262c(puVar2);
  if (iVar1 != 0) {
    FUN_1004ec720(puVar2);
    FUN_1004e2508(puVar2);
  }
  FUN_1004e24d0(puVar2);
  return param_1;
}


```

---

#### Caller (depth=2): `FUN_1004ec0b0` @ 0x1004ec0b0

Calls: `FUN_1004ec034`@0x1004ec034 `operator.delete`@0x101148d74 

```c

void FUN_1004ec0b0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10149e2e0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  pvVar1 = (void *)FUN_1004ec034();
  operator_delete(pvVar1);
  return;
}


```

---

#### Caller (depth=2): `FUN_1004ec088` @ 0x1004ec088

Calls: `FUN_1004ec034`@0x1004ec034 

```c

void FUN_1004ec088(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e2e0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  FUN_1004ec034();
  return;
}


```

---

### Caller (depth=1): `FUN_1004ec0f8` @ 0x1004ec0f8

Calls: `FUN_1004e262c`@0x1004e262c `FUN_1004ec720`@0x1004ec720 `FUN_1004e2508`@0x1004e2508 

```c

void FUN_1004ec0f8(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_1004e262c(lVar1);
  if (iVar2 != 0) {
    FUN_1004ec720(lVar1);
    FUN_1004e2508(lVar1);
  }
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  return;
}


```

---

#### Caller (depth=2): `FUN_1001473bc` @ 0x1001473bc

Calls: `FUN_1004ec32c`@0x1004ec32c `FUN_1004ec23c`@0x1004ec23c `FUN_1004ec0f8`@0x1004ec0f8 `FUN_10011eee0`@0x10011eee0 

```c

void FUN_1001473bc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 8;
  uVar2 = FUN_1004ec32c(lVar1);
  if ((uVar2 & 1) == 0) {
    FUN_1004ec23c(lVar1);
  }
  FUN_1004ec0f8(lVar1);
  if (*(long **)(param_1 + 0x6c8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x6c8) + 8))();
  }
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  FUN_10011eee0();
  return;
}


```

---

#### Caller (depth=2): `FUN_100148ab0` @ 0x100148ab0

Calls: `FUN_1004ebfcc`@0x1004ebfcc `FUN_1004ec0e8`@0x1004ec0e8 `FUN_1004e3004`@0x1004e3004 `_mach_absolute_time`@0x101149404 `_pthread_mutex_lock`@0x1004e44e0 `FUN_1004ec2f8`@0x1004ec2f8 `FUN_1004ec2c4`@0x1004ec2c4 `FUN_1004ec23c`@0x1004ec23c `_memcmp`@0x101149440 `FUN_1004ec13c`@0x1004ec13c `FUN_1004ec368`@0x1004ec368 `FUN_1004ec994`@0x1004ec994 `FUN_10014848c`@0x10014848c `_pthread_mutex_unlock`@0x1004e44e4 `FUN_100149214`@0x100149214 `FUN_1004d29c0`@0x1004d29c0 `FUN_1004ec0f8`@0x1004ec0f8 `FUN_1004ec088`@0x1004ec088 `___stack_chk_fail`@0x101148e40 

```c

undefined8 FUN_100148ab0(void)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint64_t uVar13;
  ulong uVar14;
  uint64_t uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long local_788;
  undefined **local_780;
  char local_778;
  undefined1 auStack_770 [1728];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uVar20 = (ulong)DAT_101e3a93c;
  FUN_1004ebfcc(auStack_770);
  local_780 = &PTR_FUN_10145b1c8;
  local_778 = '\0';
  iVar11 = FUN_1004ec0e8(auStack_770,&local_780);
  if (iVar11 != 0) {
    FUN_1004e3004(&local_788);
    FUN_1004e3004(&local_788);
    if (DAT_101e3a938 != '\0') {
      dVar21 = (double)NEON_ucvtf(uVar20);
      do {
        uVar13 = _mach_absolute_time();
        lVar9 = local_788;
        lVar7 = DAT_101d91638;
        if (DAT_101e3c942 == 0) {
          uVar15 = uVar13;
          if (DAT_101e3c940 != 0) {
            uVar20 = 0;
            pbVar18 = (byte *)((long)&DAT_101e3a940 + 1);
            do {
              _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8b8);
              if (DAT_101e3c940 <= uVar20) {
LAB_100148e58:
                uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
                uVar15 = (uint64_t)uVar12;
                break;
              }
              local_778 = '\0';
              uVar14 = FUN_1004ec2f8(auStack_770);
              if (((uVar14 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
                FUN_1004ec23c(auStack_770);
              }
              puVar1 = &DAT_101e3a940 + uVar20 * 0x40;
              uVar15 = _mach_absolute_time();
              lVar10 = local_788;
              lVar8 = DAT_101d91638;
              bVar6 = (&DAT_101e3a957)[uVar20 * 0x200];
              uVar14 = (ulong)bVar6;
              sVar2 = (&DAT_101e3a948)[uVar20 * 0x40];
              if (-1 < (char)bVar6) {
                sVar2 = uVar14;
              }
              sVar3 = DAT_101d911a0;
              if (-1 < (char)DAT_101d911a8._7_1_) {
                sVar3 = (ulong)DAT_101d911a8._7_1_;
              }
              if (sVar2 == sVar3) {
                puVar19 = (undefined8 *)*puVar1;
                puVar4 = puVar19;
                if (-1 < (char)bVar6) {
                  puVar4 = puVar1;
                }
                pbVar16 = DAT_101d91198;
                if (-1 < (char)DAT_101d911a8._7_1_) {
                  pbVar16 = (byte *)&DAT_101d91198;
                }
                if ((char)bVar6 < '\0') {
                  if ((sVar2 != 0) && (iVar11 = _memcmp(puVar4,pbVar16,sVar2), iVar11 != 0)) {
                    iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                    goto joined_r0x000100148cf0;
                  }
                }
                else if (sVar2 != 0) {
                  pbVar17 = pbVar18;
                  if ((uint)*pbVar16 == ((uint)puVar19 & 0xff)) {
                    do {
                      uVar14 = uVar14 - 1;
                      pbVar16 = pbVar16 + 1;
                      if (uVar14 == 0) goto LAB_100148e34;
                      bVar5 = *pbVar17;
                      pbVar17 = pbVar17 + 1;
                    } while (bVar5 == *pbVar16);
                    goto LAB_100148cb8;
                  }
                  iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                  puVar19 = puVar1;
joined_r0x000100148cf0:
                  if (0 < iVar11) goto LAB_100148d14;
                }
              }
              else {
LAB_100148cb8:
                iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                if (iVar11 < 1) goto LAB_100148e34;
                puVar19 = puVar1;
                if ((char)bVar6 < '\0') {
                  puVar19 = (undefined8 *)*puVar1;
                }
LAB_100148d14:
                iVar11 = FUN_1004ec13c(auStack_770,puVar19,iVar11,0,0);
                if (iVar11 != 0) {
                  dVar23 = (double)((uVar15 - lVar10) * lVar8) * 1e-09;
                  do {
                    if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                    FUN_1004ec368(0x40000000,0xbf800000,auStack_770);
                  } while ((local_778 == '\0') &&
                          (uVar15 = _mach_absolute_time(),
                          -2.0 <= dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09))
                  ;
                  uVar15 = _mach_absolute_time();
                  if ((dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09 < -2.0) &&
                     (iVar11 = FUN_1004ec994(auStack_770), iVar11 != 0)) {
                    FUN_1004ec23c(auStack_770);
                  }
                  uVar15 = _mach_absolute_time();
                  dVar23 = -((double)((uVar15 - local_788) * DAT_101d91638) * -1e-09) - dVar23;
                  if (dVar23 <= 0.0) {
                    dVar23 = 0.0;
                  }
                  FUN_10014848c((float)(dVar23 * 1000.0),&DAT_101e3a978 + uVar20 * 0x200,puVar1,
                                (&DAT_101e3a974)[uVar20 * 0x200] != '\0' && (DAT_101e3c942 & 1) == 0
                               );
                  (&DAT_101e3ab3c)[uVar20 * 0x80] = (float)(dVar23 * 1000.0);
                  if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                }
              }
LAB_100148e34:
              uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
              uVar15 = (uint64_t)uVar12;
              uVar20 = uVar20 + 1;
              pbVar18 = pbVar18 + 0x200;
            } while (uVar20 < DAT_101e3c940);
          }
          FUN_100149214(uVar15);
        }
        uVar15 = _mach_absolute_time();
        if (DAT_101e3a938 != '\0') {
          dVar23 = (double)NEON_fminnm(dVar21 * 0.001 +
                                       ((double)((uVar13 - lVar9) * lVar7) -
                                       (double)((uVar15 - local_788) * DAT_101d91638)) * 1e-09,
                                       dVar21 * 0.001);
          if (dVar23 <= 0.0) {
            dVar23 = 0.0;
          }
          for (; 0.0 < dVar23; dVar23 = dVar23 + -0.1) {
            dVar22 = (double)NEON_fminnm(dVar23,0x3fb999999999999a);
            FUN_1004d29c0((int)(dVar22 * 1000.0));
            if (DAT_101e3a938 == '\0') break;
          }
        }
      } while (DAT_101e3a938 != '\0');
    }
    uVar20 = FUN_1004ec2f8(auStack_770);
    if (((uVar20 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
      FUN_1004ec23c(auStack_770);
    }
    FUN_1004ec0f8(auStack_770);
  }
  FUN_1004ec088(auStack_770);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

### Caller (depth=1): `FUN_1004ec23c` @ 0x1004ec23c

Calls: `FUN_1004ece98`@0x1004ece98 `FUN_1004ec720`@0x1004ec720 `FUN_1004e2508`@0x1004e2508 

```c

void FUN_1004ec23c(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x520);
  if (lVar4 != 0) {
    lVar2 = param_1 + 0x520;
    do {
      if (lVar4 == param_1) goto LAB_1004ec26c;
      lVar4 = *(long *)(lVar4 + 0x4d8);
    } while (lVar4 != 0);
  }
  lVar2 = param_1 + 0x508;
LAB_1004ec26c:
  FUN_1004ece98(lVar2,param_1);
  FUN_1004ec720(param_1 + 8);
  FUN_1004e2508(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  plVar3 = *(long **)(param_1 + 0x6b8);
  if ((plVar3 != (long *)0x0) && (iVar1 == 2)) {
                    /* WARNING: Could not recover jumptable at 0x0001004ec2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
    return;
  }
  return;
}


```

---

#### Caller (depth=2): `FUN_1001473bc` @ 0x1001473bc

Calls: `FUN_1004ec32c`@0x1004ec32c `FUN_1004ec23c`@0x1004ec23c `FUN_1004ec0f8`@0x1004ec0f8 `FUN_10011eee0`@0x10011eee0 

```c

void FUN_1001473bc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 8;
  uVar2 = FUN_1004ec32c(lVar1);
  if ((uVar2 & 1) == 0) {
    FUN_1004ec23c(lVar1);
  }
  FUN_1004ec0f8(lVar1);
  if (*(long **)(param_1 + 0x6c8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x6c8) + 8))();
  }
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  FUN_10011eee0();
  return;
}


```

---

#### Caller (depth=2): `FUN_1001474c8` @ 0x1001474c8

Calls: `FUN_1004ec32c`@0x1004ec32c `FUN_1004ec23c`@0x1004ec23c 

```c

void FUN_1001474c8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004ec32c(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1004ec23c(param_1 + 8);
  return;
}


```

---

#### Caller (depth=2): `FUN_1001493f0` @ 0x1001493f0

Calls: `FUN_1004ec5bc`@0x1004ec5bc `FUN_1004ec23c`@0x1004ec23c 

```c

void FUN_1001493f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec5bc(param_2);
  FUN_1004ec23c(param_2);
  return;
}


```

---

#### Caller (depth=2): `FUN_100149418` @ 0x100149418

Calls: `FUN_1004ec5bc`@0x1004ec5bc `FUN_1004ec23c`@0x1004ec23c 

```c

void FUN_100149418(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec5bc(param_2);
  FUN_1004ec23c(param_2);
  return;
}


```

---

#### Caller (depth=2): `FUN_100149440` @ 0x100149440

Calls: `FUN_1004ec5bc`@0x1004ec5bc `FUN_1004ec23c`@0x1004ec23c 

```c

void FUN_100149440(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ec5bc(param_2);
  FUN_1004ec23c(param_2);
  return;
}


```

---

#### Caller (depth=2): `FUN_1004ec5cc` @ 0x1004ec5cc

Calls: `FUN_1004e2a90`@0x1004e2a90 `FUN_1004ec23c`@0x1004ec23c 

```c

void FUN_1004ec5cc(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x6b8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x4e8) == 1) {
      iVar1 = FUN_1004e2a90(param_1 + 8);
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_1 + 0x6b8) + 0x28))(*(long **)(param_1 + 0x6b8),param_1);
LAB_1004ec6a8:
        FUN_1004ec23c(param_1);
        return;
      }
      *(undefined4 *)(param_1 + 0x4e8) = 2;
      iVar1 = (**(code **)(**(long **)(param_1 + 0x6b8) + 0x18))
                        (*(long **)(param_1 + 0x6b8),param_1);
      if (iVar1 == 0) goto LAB_1004ec6a8;
      plVar2 = *(long **)(param_1 + 0x6b8);
    }
    if (plVar2 != (long *)0x0 && (param_2 & 1) != 0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
      plVar2 = *(long **)(param_1 + 0x6b8);
    }
    if ((plVar2 != (long *)0x0) && ((param_2 >> 1 & 1) != 0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
      plVar2 = *(long **)(param_1 + 0x6b8);
    }
    if ((plVar2 != (long *)0x0) && ((param_2 >> 2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001004ec698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
      return;
    }
  }
  return;
}


```

---

#### Caller (depth=2): `FUN_100148ab0` @ 0x100148ab0

Calls: `FUN_1004ebfcc`@0x1004ebfcc `FUN_1004ec0e8`@0x1004ec0e8 `FUN_1004e3004`@0x1004e3004 `_mach_absolute_time`@0x101149404 `_pthread_mutex_lock`@0x1004e44e0 `FUN_1004ec2f8`@0x1004ec2f8 `FUN_1004ec2c4`@0x1004ec2c4 `FUN_1004ec23c`@0x1004ec23c `_memcmp`@0x101149440 `FUN_1004ec13c`@0x1004ec13c `FUN_1004ec368`@0x1004ec368 `FUN_1004ec994`@0x1004ec994 `FUN_10014848c`@0x10014848c `_pthread_mutex_unlock`@0x1004e44e4 `FUN_100149214`@0x100149214 `FUN_1004d29c0`@0x1004d29c0 `FUN_1004ec0f8`@0x1004ec0f8 `FUN_1004ec088`@0x1004ec088 `___stack_chk_fail`@0x101148e40 

```c

undefined8 FUN_100148ab0(void)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint64_t uVar13;
  ulong uVar14;
  uint64_t uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long local_788;
  undefined **local_780;
  char local_778;
  undefined1 auStack_770 [1728];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uVar20 = (ulong)DAT_101e3a93c;
  FUN_1004ebfcc(auStack_770);
  local_780 = &PTR_FUN_10145b1c8;
  local_778 = '\0';
  iVar11 = FUN_1004ec0e8(auStack_770,&local_780);
  if (iVar11 != 0) {
    FUN_1004e3004(&local_788);
    FUN_1004e3004(&local_788);
    if (DAT_101e3a938 != '\0') {
      dVar21 = (double)NEON_ucvtf(uVar20);
      do {
        uVar13 = _mach_absolute_time();
        lVar9 = local_788;
        lVar7 = DAT_101d91638;
        if (DAT_101e3c942 == 0) {
          uVar15 = uVar13;
          if (DAT_101e3c940 != 0) {
            uVar20 = 0;
            pbVar18 = (byte *)((long)&DAT_101e3a940 + 1);
            do {
              _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8b8);
              if (DAT_101e3c940 <= uVar20) {
LAB_100148e58:
                uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
                uVar15 = (uint64_t)uVar12;
                break;
              }
              local_778 = '\0';
              uVar14 = FUN_1004ec2f8(auStack_770);
              if (((uVar14 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
                FUN_1004ec23c(auStack_770);
              }
              puVar1 = &DAT_101e3a940 + uVar20 * 0x40;
              uVar15 = _mach_absolute_time();
              lVar10 = local_788;
              lVar8 = DAT_101d91638;
              bVar6 = (&DAT_101e3a957)[uVar20 * 0x200];
              uVar14 = (ulong)bVar6;
              sVar2 = (&DAT_101e3a948)[uVar20 * 0x40];
              if (-1 < (char)bVar6) {
                sVar2 = uVar14;
              }
              sVar3 = DAT_101d911a0;
              if (-1 < (char)DAT_101d911a8._7_1_) {
                sVar3 = (ulong)DAT_101d911a8._7_1_;
              }
              if (sVar2 == sVar3) {
                puVar19 = (undefined8 *)*puVar1;
                puVar4 = puVar19;
                if (-1 < (char)bVar6) {
                  puVar4 = puVar1;
                }
                pbVar16 = DAT_101d91198;
                if (-1 < (char)DAT_101d911a8._7_1_) {
                  pbVar16 = (byte *)&DAT_101d91198;
                }
                if ((char)bVar6 < '\0') {
                  if ((sVar2 != 0) && (iVar11 = _memcmp(puVar4,pbVar16,sVar2), iVar11 != 0)) {
                    iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                    goto joined_r0x000100148cf0;
                  }
                }
                else if (sVar2 != 0) {
                  pbVar17 = pbVar18;
                  if ((uint)*pbVar16 == ((uint)puVar19 & 0xff)) {
                    do {
                      uVar14 = uVar14 - 1;
                      pbVar16 = pbVar16 + 1;
                      if (uVar14 == 0) goto LAB_100148e34;
                      bVar5 = *pbVar17;
                      pbVar17 = pbVar17 + 1;
                    } while (bVar5 == *pbVar16);
                    goto LAB_100148cb8;
                  }
                  iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                  puVar19 = puVar1;
joined_r0x000100148cf0:
                  if (0 < iVar11) goto LAB_100148d14;
                }
              }
              else {
LAB_100148cb8:
                iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                if (iVar11 < 1) goto LAB_100148e34;
                puVar19 = puVar1;
                if ((char)bVar6 < '\0') {
                  puVar19 = (undefined8 *)*puVar1;
                }
LAB_100148d14:
                iVar11 = FUN_1004ec13c(auStack_770,puVar19,iVar11,0,0);
                if (iVar11 != 0) {
                  dVar23 = (double)((uVar15 - lVar10) * lVar8) * 1e-09;
                  do {
                    if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                    FUN_1004ec368(0x40000000,0xbf800000,auStack_770);
                  } while ((local_778 == '\0') &&
                          (uVar15 = _mach_absolute_time(),
                          -2.0 <= dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09))
                  ;
                  uVar15 = _mach_absolute_time();
                  if ((dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09 < -2.0) &&
                     (iVar11 = FUN_1004ec994(auStack_770), iVar11 != 0)) {
                    FUN_1004ec23c(auStack_770);
                  }
                  uVar15 = _mach_absolute_time();
                  dVar23 = -((double)((uVar15 - local_788) * DAT_101d91638) * -1e-09) - dVar23;
                  if (dVar23 <= 0.0) {
                    dVar23 = 0.0;
                  }
                  FUN_10014848c((float)(dVar23 * 1000.0),&DAT_101e3a978 + uVar20 * 0x200,puVar1,
                                (&DAT_101e3a974)[uVar20 * 0x200] != '\0' && (DAT_101e3c942 & 1) == 0
                               );
                  (&DAT_101e3ab3c)[uVar20 * 0x80] = (float)(dVar23 * 1000.0);
                  if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                }
              }
LAB_100148e34:
              uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
              uVar15 = (uint64_t)uVar12;
              uVar20 = uVar20 + 1;
              pbVar18 = pbVar18 + 0x200;
            } while (uVar20 < DAT_101e3c940);
          }
          FUN_100149214(uVar15);
        }
        uVar15 = _mach_absolute_time();
        if (DAT_101e3a938 != '\0') {
          dVar23 = (double)NEON_fminnm(dVar21 * 0.001 +
                                       ((double)((uVar13 - lVar9) * lVar7) -
                                       (double)((uVar15 - local_788) * DAT_101d91638)) * 1e-09,
                                       dVar21 * 0.001);
          if (dVar23 <= 0.0) {
            dVar23 = 0.0;
          }
          for (; 0.0 < dVar23; dVar23 = dVar23 + -0.1) {
            dVar22 = (double)NEON_fminnm(dVar23,0x3fb999999999999a);
            FUN_1004d29c0((int)(dVar22 * 1000.0));
            if (DAT_101e3a938 == '\0') break;
          }
        }
      } while (DAT_101e3a938 != '\0');
    }
    uVar20 = FUN_1004ec2f8(auStack_770);
    if (((uVar20 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
      FUN_1004ec23c(auStack_770);
    }
    FUN_1004ec0f8(auStack_770);
  }
  FUN_1004ec088(auStack_770);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

### Caller (depth=1): `FUN_1004ece58` @ 0x1004ece58

Calls: `FUN_1004e262c`@0x1004e262c `FUN_1004ec720`@0x1004ec720 

```c

void FUN_1004ece58(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  while (lVar3 != 0) {
    lVar1 = lVar3 + 8;
    lVar3 = *(long *)(lVar3 + 0x4d8);
    iVar2 = FUN_1004e262c(lVar1);
    if (iVar2 != 0) {
      FUN_1004ec720(lVar1);
    }
  }
  return;
}


```

---

#### Caller (depth=2): `FUN_1004ec370` @ 0x1004ec370

Calls: `FUN_1004eca64`@0x1004eca64 `_mach_absolute_time`@0x101149404 `FUN_1004ece58`@0x1004ece58 

```c

void FUN_1004ec370(undefined8 param_1,float param_2,long *param_3)

{
  uint64_t uVar1;
  long *plVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_2 < 0.0) {
    FUN_1004eca64(param_1,param_3);
    return;
  }
  fVar5 = (float)param_1;
  fVar4 = (float)NEON_fminnm(param_2,fVar5);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  dVar7 = -1.0;
  if (0.0 <= fVar5) {
    uVar1 = _mach_absolute_time();
    dVar7 = (double)fVar5 + (double)((uVar1 - *param_3) * DAT_101d91638) * 1e-09;
  }
  do {
    uVar1 = _mach_absolute_time();
    uVar3 = (uVar1 - *param_3) * DAT_101d91638;
    dVar6 = -1.0;
    if (0.0 <= fVar5) {
      uVar1 = _mach_absolute_time();
      dVar6 = dVar7 + (double)((uVar1 - *param_3) * DAT_101d91638) * -1e-09;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
    }
    dVar8 = 0.0;
    if (fVar5 != 0.0) {
      dVar8 = dVar6;
    }
    uVar1 = _mach_absolute_time();
    dVar6 = (double)fVar4 + ((double)uVar3 - (double)((uVar1 - *param_3) * DAT_101d91638)) * 1e-09;
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    dVar6 = (double)NEON_fminnm(dVar8,dVar6);
    FUN_1004eca64((float)dVar6,param_3);
    FUN_1004ece58(param_3);
  } while ((dVar7 < 0.0) ||
          (uVar1 = _mach_absolute_time(),
          (double)((uVar1 - *param_3) * DAT_101d91638) * 1e-09 <= dVar7));
  uVar1 = _mach_absolute_time();
  dVar7 = (double)((uVar1 - *param_3) * DAT_101d91638) * 1e-09;
  fVar4 = (float)(dVar7 - (double)param_3[1]);
  plVar2 = (long *)param_3[6];
  if (plVar2 != (long *)0x0) {
    do {
      if ((0.0 <= fVar4) && (0.0 <= *(float *)((long)plVar2 + 0x4d4))) {
        fVar5 = *(float *)((long)plVar2 + 0x4d4) - fVar4;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        *(float *)((long)plVar2 + 0x4d4) = fVar5;
        if (fVar5 == 0.0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      plVar2 = (long *)plVar2[0x9b];
    } while (plVar2 != (long *)0x0);
  }
  plVar2 = (long *)param_3[3];
  if (plVar2 != (long *)0x0) {
    do {
      if ((0.0 <= fVar4) && (0.0 <= *(float *)((long)plVar2 + 0x4d4))) {
        fVar5 = *(float *)((long)plVar2 + 0x4d4) - fVar4;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        *(float *)((long)plVar2 + 0x4d4) = fVar5;
        if (fVar5 == 0.0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      plVar2 = (long *)plVar2[0x9b];
    } while (plVar2 != (long *)0x0);
  }
  param_3[1] = (long)dVar7;
  return;
}


```

---

### Caller (depth=1): `FUN_1004ec770` @ 0x1004ec770

Calls: `_memmove`@0x101149458 `FUN_1004ec720`@0x1004ec720 `FUN_1004e2594`@0x1004e2594 

```c

ulong FUN_1004ec770(long param_1,void *param_2,ulong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_3;
  if (*(int *)(param_1 + 0x4bc) + uVar3 < 0x4b0) {
    _memmove((void *)(param_1 + *(int *)(param_1 + 0x4bc) + 0xc),param_2,param_3 & 0xffffffff);
    *(uint *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + uVar3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_1004ec720(param_1);
    if (0x4af < uVar3) {
      uVar2 = FUN_1004e2594(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    _memmove((void *)(param_1 + *(int *)(param_1 + 0x4bc) + 0xc),param_2,param_3 & 0xffffffff);
    *(uint *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + uVar3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar1;
    }
  }
  return param_3;
}


```

---

#### Caller (depth=2): `FUN_1004ec8f4` @ 0x1004ec8f4

Calls: `FUN_1004e262c`@0x1004e262c `FUN_1004ec770`@0x1004ec770 

```c

undefined8 FUN_1004ec8f4(long param_1,long param_2,ulong param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_44;
  
  local_44 = 0;
  if ((int)param_3 != 0) {
    do {
      uVar3 = FUN_1004e262c(param_1 + 8);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      iVar2 = FUN_1004ec770(param_1 + 8,param_2,param_3,&local_44);
      if (param_4 != (int *)0x0) {
        *param_4 = local_44;
      }
      if (local_44 != 0) {
        return 0;
      }
      param_2 = param_2 + iVar2;
      *(int *)(param_1 + 0x4d0) = *(int *)(param_1 + 0x4d0) + iVar2;
      uVar1 = (int)param_3 - iVar2;
      param_3 = (ulong)uVar1;
    } while (uVar1 != 0);
  }
  return 1;
}


```

---

### Caller (depth=1): `FUN_1004ec13c` @ 0x1004ec13c

Calls: `FUN_1004e253c`@0x1004e253c `FUN_1004ec6f0`@0x1004ec6f0 `FUN_1004e264c`@0x1004e264c `FUN_1004ec720`@0x1004ec720 `FUN_1004e2508`@0x1004e2508 

```c

undefined8
FUN_1004ec13c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1 + 8;
  uVar1 = FUN_1004e253c(lVar4);
  if ((int)uVar1 != 0) {
    FUN_1004ec6f0(lVar4);
    plVar2 = *(long **)(param_1 + 0x6b8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
    uVar3 = FUN_1004e264c(lVar4,param_2,param_3,param_4,param_5);
    if ((uVar3 & 1) == 0) {
      FUN_1004ec720(lVar4);
      FUN_1004e2508(lVar4);
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x4e8) = 1;
      *(undefined4 *)(param_1 + 0x4c8) = 2;
      plVar2 = (long *)(param_1 + 0x508);
      do {
        lVar4 = *plVar2;
        plVar2 = (long *)(lVar4 + 0x4d8);
      } while (lVar4 != 0);
      *(undefined8 *)(param_1 + 0x4d8) = 0;
      *(long *)(param_1 + 0x4e0) = *(long *)(param_1 + 0x528);
      plVar2 = (long *)(param_1 + 0x520);
      if (*(long *)(param_1 + 0x520) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x528) + 0x4d8);
      }
      *plVar2 = param_1;
      *(long *)(param_1 + 0x528) = param_1;
      *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
      uVar1 = 1;
    }
  }
  return uVar1;
}


```

---

#### Caller (depth=2): `FUN_100148ab0` @ 0x100148ab0

Calls: `FUN_1004ebfcc`@0x1004ebfcc `FUN_1004ec0e8`@0x1004ec0e8 `FUN_1004e3004`@0x1004e3004 `_mach_absolute_time`@0x101149404 `_pthread_mutex_lock`@0x1004e44e0 `FUN_1004ec2f8`@0x1004ec2f8 `FUN_1004ec2c4`@0x1004ec2c4 `FUN_1004ec23c`@0x1004ec23c `_memcmp`@0x101149440 `FUN_1004ec13c`@0x1004ec13c `FUN_1004ec368`@0x1004ec368 `FUN_1004ec994`@0x1004ec994 `FUN_10014848c`@0x10014848c `_pthread_mutex_unlock`@0x1004e44e4 `FUN_100149214`@0x100149214 `FUN_1004d29c0`@0x1004d29c0 `FUN_1004ec0f8`@0x1004ec0f8 `FUN_1004ec088`@0x1004ec088 `___stack_chk_fail`@0x101148e40 

```c

undefined8 FUN_100148ab0(void)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint64_t uVar13;
  ulong uVar14;
  uint64_t uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long local_788;
  undefined **local_780;
  char local_778;
  undefined1 auStack_770 [1728];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uVar20 = (ulong)DAT_101e3a93c;
  FUN_1004ebfcc(auStack_770);
  local_780 = &PTR_FUN_10145b1c8;
  local_778 = '\0';
  iVar11 = FUN_1004ec0e8(auStack_770,&local_780);
  if (iVar11 != 0) {
    FUN_1004e3004(&local_788);
    FUN_1004e3004(&local_788);
    if (DAT_101e3a938 != '\0') {
      dVar21 = (double)NEON_ucvtf(uVar20);
      do {
        uVar13 = _mach_absolute_time();
        lVar9 = local_788;
        lVar7 = DAT_101d91638;
        if (DAT_101e3c942 == 0) {
          uVar15 = uVar13;
          if (DAT_101e3c940 != 0) {
            uVar20 = 0;
            pbVar18 = (byte *)((long)&DAT_101e3a940 + 1);
            do {
              _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8b8);
              if (DAT_101e3c940 <= uVar20) {
LAB_100148e58:
                uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
                uVar15 = (uint64_t)uVar12;
                break;
              }
              local_778 = '\0';
              uVar14 = FUN_1004ec2f8(auStack_770);
              if (((uVar14 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
                FUN_1004ec23c(auStack_770);
              }
              puVar1 = &DAT_101e3a940 + uVar20 * 0x40;
              uVar15 = _mach_absolute_time();
              lVar10 = local_788;
              lVar8 = DAT_101d91638;
              bVar6 = (&DAT_101e3a957)[uVar20 * 0x200];
              uVar14 = (ulong)bVar6;
              sVar2 = (&DAT_101e3a948)[uVar20 * 0x40];
              if (-1 < (char)bVar6) {
                sVar2 = uVar14;
              }
              sVar3 = DAT_101d911a0;
              if (-1 < (char)DAT_101d911a8._7_1_) {
                sVar3 = (ulong)DAT_101d911a8._7_1_;
              }
              if (sVar2 == sVar3) {
                puVar19 = (undefined8 *)*puVar1;
                puVar4 = puVar19;
                if (-1 < (char)bVar6) {
                  puVar4 = puVar1;
                }
                pbVar16 = DAT_101d91198;
                if (-1 < (char)DAT_101d911a8._7_1_) {
                  pbVar16 = (byte *)&DAT_101d91198;
                }
                if ((char)bVar6 < '\0') {
                  if ((sVar2 != 0) && (iVar11 = _memcmp(puVar4,pbVar16,sVar2), iVar11 != 0)) {
                    iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                    goto joined_r0x000100148cf0;
                  }
                }
                else if (sVar2 != 0) {
                  pbVar17 = pbVar18;
                  if ((uint)*pbVar16 == ((uint)puVar19 & 0xff)) {
                    do {
                      uVar14 = uVar14 - 1;
                      pbVar16 = pbVar16 + 1;
                      if (uVar14 == 0) goto LAB_100148e34;
                      bVar5 = *pbVar17;
                      pbVar17 = pbVar17 + 1;
                    } while (bVar5 == *pbVar16);
                    goto LAB_100148cb8;
                  }
                  iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                  puVar19 = puVar1;
joined_r0x000100148cf0:
                  if (0 < iVar11) goto LAB_100148d14;
                }
              }
              else {
LAB_100148cb8:
                iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                if (iVar11 < 1) goto LAB_100148e34;
                puVar19 = puVar1;
                if ((char)bVar6 < '\0') {
                  puVar19 = (undefined8 *)*puVar1;
                }
LAB_100148d14:
                iVar11 = FUN_1004ec13c(auStack_770,puVar19,iVar11,0,0);
                if (iVar11 != 0) {
                  dVar23 = (double)((uVar15 - lVar10) * lVar8) * 1e-09;
                  do {
                    if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                    FUN_1004ec368(0x40000000,0xbf800000,auStack_770);
                  } while ((local_778 == '\0') &&
                          (uVar15 = _mach_absolute_time(),
                          -2.0 <= dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09))
                  ;
                  uVar15 = _mach_absolute_time();
                  if ((dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09 < -2.0) &&
                     (iVar11 = FUN_1004ec994(auStack_770), iVar11 != 0)) {
                    FUN_1004ec23c(auStack_770);
                  }
                  uVar15 = _mach_absolute_time();
                  dVar23 = -((double)((uVar15 - local_788) * DAT_101d91638) * -1e-09) - dVar23;
                  if (dVar23 <= 0.0) {
                    dVar23 = 0.0;
                  }
                  FUN_10014848c((float)(dVar23 * 1000.0),&DAT_101e3a978 + uVar20 * 0x200,puVar1,
                                (&DAT_101e3a974)[uVar20 * 0x200] != '\0' && (DAT_101e3c942 & 1) == 0
                               );
                  (&DAT_101e3ab3c)[uVar20 * 0x80] = (float)(dVar23 * 1000.0);
                  if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                }
              }
LAB_100148e34:
              uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
              uVar15 = (uint64_t)uVar12;
              uVar20 = uVar20 + 1;
              pbVar18 = pbVar18 + 0x200;
            } while (uVar20 < DAT_101e3c940);
          }
          FUN_100149214(uVar15);
        }
        uVar15 = _mach_absolute_time();
        if (DAT_101e3a938 != '\0') {
          dVar23 = (double)NEON_fminnm(dVar21 * 0.001 +
                                       ((double)((uVar13 - lVar9) * lVar7) -
                                       (double)((uVar15 - local_788) * DAT_101d91638)) * 1e-09,
                                       dVar21 * 0.001);
          if (dVar23 <= 0.0) {
            dVar23 = 0.0;
          }
          for (; 0.0 < dVar23; dVar23 = dVar23 + -0.1) {
            dVar22 = (double)NEON_fminnm(dVar23,0x3fb999999999999a);
            FUN_1004d29c0((int)(dVar22 * 1000.0));
            if (DAT_101e3a938 == '\0') break;
          }
        }
      } while (DAT_101e3a938 != '\0');
    }
    uVar20 = FUN_1004ec2f8(auStack_770);
    if (((uVar20 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
      FUN_1004ec23c(auStack_770);
    }
    FUN_1004ec0f8(auStack_770);
  }
  FUN_1004ec088(auStack_770);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

#### Caller (depth=2): `FUN_100147410` @ 0x100147410

Calls: `FUN_10014e2cc`@0x10014e2cc `FUN_1004ec13c`@0x1004ec13c `operator.delete`@0x101148d74 

```c

undefined8 FUN_100147410(long param_1)

{
  undefined8 uVar1;
  undefined8 *******pppppppuVar2;
  undefined1 local_3d;
  int local_3c;
  undefined8 ******local_38;
  long local_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *******)0x0;
  local_30 = 0;
  local_28 = 0;
  local_3c = 0;
  local_3d = 1;
  FUN_10014e2cc(&local_38,&local_3c,&local_3d);
  if (local_28 < 0) {
    pppppppuVar2 = (undefined8 *******)local_38;
    if (local_30 == 0 || local_3c == 0) {
      uVar1 = 0;
      goto LAB_1001474ac;
    }
  }
  else {
    if (local_28._7_1_ == '\0' || local_3c == 0) {
      return 0;
    }
    pppppppuVar2 = &local_38;
  }
  uVar1 = FUN_1004ec13c(param_1 + 8,pppppppuVar2,local_3c,0,0);
  if (-1 < local_28) {
    return uVar1;
  }
LAB_1001474ac:
  operator_delete(local_38);
  return uVar1;
}


```

---

### Caller (depth=1): `FUN_1004ec854` @ 0x1004ec854

Calls: `FUN_1004e262c`@0x1004e262c `FUN_1004ec720`@0x1004ec720 `FUN_1004e2508`@0x1004e2508 

```c

void FUN_1004ec854(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_1004e262c(lVar1);
  if (iVar2 != 0) {
    FUN_1004ec720(lVar1);
    FUN_1004e2508(lVar1);
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0xbf800000;
  return;
}


```

---

### Caller (depth=1): `FUN_1004ec6b8` @ 0x1004ec6b8

Calls: `FUN_1004e262c`@0x1004e262c `FUN_1004ec720`@0x1004ec720 

```c

void FUN_1004ec6b8(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004e262c(param_1 + 8);
  if (iVar1 != 0) {
    FUN_1004ec720(param_1 + 8);
    return;
  }
  return;
}


```

---

#### Caller (depth=2): `FUN_100147500` @ 0x100147500

Calls: `FUN_1004ec2f8`@0x1004ec2f8 `FUN_1004ec2c4`@0x1004ec2c4 `FUN_1004ec368`@0x1004ec368 `FUN_1004ec6b8`@0x1004ec6b8 

```c

void FUN_100147500(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  param_1 = param_1 + 8;
  uVar2 = FUN_1004ec2f8(param_1);
  if (((uVar2 & 1) == 0) && (iVar1 = FUN_1004ec2c4(param_1), iVar1 == 0)) {
    return;
  }
  FUN_1004ec368(0,0xbf800000,param_1);
  FUN_1004ec6b8(param_1);
  return;
}


```

---

### FUN_1004e2550 (calls _read)

Calls: `_read`@0x101149860 

```c

void FUN_1004e2550(int *param_1,void *param_2,ulong param_3,int *param_4)

{
  int iVar1;
  ssize_t sVar2;
  
  sVar2 = _read(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (int *)0x0) {
    iVar1 = (uint)((int)sVar2 == 0) << 1;
    if ((int)sVar2 == -1) {
      iVar1 = 1;
    }
    *param_4 = iVar1;
  }
  return;
}


```

---

## Caller (depth=0): `FUN_1004ec8bc` @ 0x1004ec8bc

Calls: `FUN_1004e2550`@0x1004e2550 

```c

void FUN_1004ec8bc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004e2550(param_1 + 8);
  if (0 < iVar1) {
    *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + iVar1;
  }
  return;
}


```

---

### Caller (depth=1): `FUN_10010ccbc` @ 0x10010ccbc

Calls: `FUN_1004ec8bc`@0x1004ec8bc `FUN_1004e2a68`@0x1004e2a68 `operator.delete`@0x101148d74 `FUN_1001478d8`@0x1001478d8 `FUN_1001148bc`@0x1001148bc `FUN_100115fcc`@0x100115fcc `FUN_1004ec32c`@0x1004ec32c `FUN_100346750`@0x100346750 `FUN_10034677c`@0x10034677c `FUN_1003467b8`@0x1003467b8 `FUN_100123fa0`@0x100123fa0 `_memmove`@0x101149458 `___stack_chk_fail`@0x101148e40 

```c

/* WARNING: Removing unreachable block (ram,0x00010010cd34) */

void FUN_10010ccbc(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 auStack_80 [8];
  uint local_78 [7];
  int local_5c;
  long local_58;
  
  puVar8 = auStack_80;
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  local_5c = 1;
  iVar4 = FUN_1004ec8bc(param_2,param_1 + 8 + (long)*(int *)(param_1 + 0x2808),
                        0x2800 - *(int *)(param_1 + 0x2808),&local_5c);
  if (local_5c == 0) {
    iVar4 = *(int *)(param_1 + 0x2808) + iVar4;
    *(int *)(param_1 + 0x2808) = iVar4;
    if (2 < iVar4) {
      puVar2 = (undefined1 *)(param_1 + 10);
      do {
        FUN_1001148bc();
        uVar5 = FUN_100115fcc();
        if ((((uVar5 & 1) != 0) || (uVar5 = FUN_1004ec32c(param_2), (uVar5 & 1) != 0)) ||
           (uVar5 = (**(code **)(*param_2 + 0x28))(param_2), (uVar5 & 1) == 0)) {
          *(undefined4 *)(param_1 + 0x2808) = 0;
          break;
        }
        uVar3 = (uint)(*(ushort *)(param_1 + 8) >> 8) | (*(ushort *)(param_1 + 8) & 0xff00ff) << 8;
        uVar1 = uVar3 + 2;
        if (*(int *)(param_1 + 0x2808) < (int)uVar1) break;
        iVar4 = FUN_100346750();
        puVar6 = puVar2;
        uVar7 = uVar3;
        if ((iVar4 == 0) || (*(char *)(param_1 + 0x280c) == '\0')) {
LAB_10010ce08:
          FUN_100123fa0(puVar6,uVar7);
        }
        else {
          uVar5 = FUN_10034677c(uVar3);
          puVar8 = puVar8 + -((uVar5 & 0xffffffff) + 0xf & 0x1fffffff0);
          iVar4 = FUN_1003467b8(puVar2,uVar3,puVar8,local_78);
          puVar6 = puVar8;
          uVar7 = local_78[0];
          if (iVar4 != 0) goto LAB_10010ce08;
          FUN_10034677c(uVar3);
        }
        if (*(int *)(param_1 + 0x2808) < 1) break;
        _memmove((void *)(param_1 + 8),(void *)(param_1 + (ulong)uVar1 + 8),
                 (ulong)(*(int *)(param_1 + 0x2808) - uVar1));
        iVar4 = *(int *)(param_1 + 0x2808) - uVar1;
        *(int *)(param_1 + 0x2808) = iVar4;
      } while (2 < iVar4);
    }
  }
  else {
    FUN_1004e2a68(local_78,param_2 + 1);
    FUN_1001478d8();
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

## Phase 3: Network Module (0x1004e0000-0x1004f0000)

Total functions in range: 667

### Function Listing

- `FUN_1004e0124` @ 0x1004e0124 (28B)
- `FUN_1004e0140` @ 0x1004e0140 (16B)
- `FUN_1004e0150` @ 0x1004e0150 (200B)
- `FUN_1004e0218` @ 0x1004e0218 (136B)
- `FUN_1004e02a0` @ 0x1004e02a0 (72B)
- `FUN_1004e02e8` @ 0x1004e02e8 (64B)
- `FUN_1004e0328` @ 0x1004e0328 (72B)
- `FUN_1004e0370` @ 0x1004e0370 (68B)
- `FUN_1004e03b4` @ 0x1004e03b4 (128B)
- `FUN_1004e0434` @ 0x1004e0434 (128B)
- `FUN_1004e04b4` @ 0x1004e04b4 (128B)
- `FUN_1004e0534` @ 0x1004e0534 (164B)
- `FUN_1004e05d8` @ 0x1004e05d8 (84B)
- `FUN_1004e062c` @ 0x1004e062c (144B)
- `FUN_1004e06bc` @ 0x1004e06bc (164B)
- `FUN_1004e0760` @ 0x1004e0760 (84B)
- `FUN_1004e07b4` @ 0x1004e07b4 (36B)
- `FUN_1004e07d8` @ 0x1004e07d8 (36B)
- `thunk_FUN_1004e0894` @ 0x1004e07fc (4B) [MEMCPY]
- `FUN_1004e0800` @ 0x1004e0800 (36B)
- `thunk_FUN_1004e13c8` @ 0x1004e0824 (4B)
- `FUN_1004e0828` @ 0x1004e0828 (80B)
- `FUN_1004e0878` @ 0x1004e0878 (28B)
- `FUN_1004e0894` @ 0x1004e0894 (244B) [MEMCPY]
- `FUN_1004e0988` @ 0x1004e0988 (2624B) [XOR,0x80]
- `FUN_1004e13c8` @ 0x1004e13c8 (232B)
- `FUN_1004e14b0` @ 0x1004e14b0 (4B)
- `thunk_FUN_1004e14b8` @ 0x1004e14b4 (4B)
- `FUN_1004e14b8` @ 0x1004e14b8 (56B)
- `FUN_1004e14f0` @ 0x1004e14f0 (140B) [PORT]
- `FUN_1004e157c` @ 0x1004e157c (568B) [CLOSE]
- `FUN_1004e17b4` @ 0x1004e17b4 (160B) [HOST,PORT]
- `FUN_1004e1854` @ 0x1004e1854 (52B)
- `FUN_1004e1888` @ 0x1004e1888 (52B)
- `FUN_1004e18bc` @ 0x1004e18bc (212B)
- `FUN_1004e1990` @ 0x1004e1990 (128B)
- `FUN_1004e1a10` @ 0x1004e1a10 (188B)
- `FUN_1004e1acc` @ 0x1004e1acc (140B)
- `FUN_1004e1b58` @ 0x1004e1b58 (180B)
- `FUN_1004e1c0c` @ 0x1004e1c0c (76B)
- `FUN_1004e1c58` @ 0x1004e1c58 (124B)
- `FUN_1004e1cd4` @ 0x1004e1cd4 (84B)
- `FUN_1004e1d28` @ 0x1004e1d28 (120B)
- `FUN_1004e1da0` @ 0x1004e1da0 (52B)
- `FUN_1004e1dd4` @ 0x1004e1dd4 (64B)
- `FUN_1004e1e14` @ 0x1004e1e14 (48B)
- `FUN_1004e1e44` @ 0x1004e1e44 (612B)
- `FUN_1004e20a8` @ 0x1004e20a8 (372B)
- `FUN_1004e221c` @ 0x1004e221c (16B)
- `FUN_1004e222c` @ 0x1004e222c (164B)
- `FUN_1004e22d0` @ 0x1004e22d0 (324B)
- `FUN_1004e2414` @ 0x1004e2414 (156B)
- `FUN_1004e24b0` @ 0x1004e24b0 (12B)
- `FUN_1004e24bc` @ 0x1004e24bc (4B)
- `FUN_1004e24c0` @ 0x1004e24c0 (16B)
- `FUN_1004e24d0` @ 0x1004e24d0 (56B) [CLOSE]
- `FUN_1004e2508` @ 0x1004e2508 (52B) [CLOSE]
- `FUN_1004e253c` @ 0x1004e253c (20B)
- `FUN_1004e2550` @ 0x1004e2550 (68B) [READ]
- `FUN_1004e2594` @ 0x1004e2594 (56B) [WRITE]
- `FUN_1004e25cc` @ 0x1004e25cc (96B) [FCNTL]
- `FUN_1004e262c` @ 0x1004e262c (32B)
- `FUN_1004e264c` @ 0x1004e264c (688B) [CONNECT,SOCKET,GETADDRINFO,SELECT,CLOSE,GETSOCKOPT]
- `FUN_1004e28fc` @ 0x1004e28fc (204B) [FCNTL,SETSOCKOPT]
- `FUN_1004e29c8` @ 0x1004e29c8 (80B) [SETSOCKOPT]
- `FUN_1004e2a18` @ 0x1004e2a18 (80B) [SETSOCKOPT]
- `FUN_1004e2a68` @ 0x1004e2a68 (40B)
- `FUN_1004e2a90` @ 0x1004e2a90 (84B) [GETSOCKOPT]
- `FUN_1004e2ae4` @ 0x1004e2ae4 (180B) [0x86,0x88,0x80]
- `FUN_1004e2b98` @ 0x1004e2b98 (48B)
- `FUN_1004e2bc8` @ 0x1004e2bc8 (8B) [SELECT]
- `FUN_1004e2bd0` @ 0x1004e2bd0 (44B) [SELECT]
- `FUN_1004e2bfc` @ 0x1004e2bfc (104B)
- `FUN_1004e2c64` @ 0x1004e2c64 (104B)
- `FUN_1004e2ccc` @ 0x1004e2ccc (112B)
- `FUN_1004e2d3c` @ 0x1004e2d3c (220B) [0x88,0x80]
- `FUN_1004e2e18` @ 0x1004e2e18 (12B)
- `FUN_1004e2e24` @ 0x1004e2e24 (120B)
- `FUN_1004e2e9c` @ 0x1004e2e9c (132B)
- `FUN_1004e2f20` @ 0x1004e2f20 (8B)
- `FUN_1004e2f28` @ 0x1004e2f28 (8B)
- `FUN_1004e2f30` @ 0x1004e2f30 (8B)
- `FUN_1004e2f38` @ 0x1004e2f38 (8B)
- `FUN_1004e2f40` @ 0x1004e2f40 (8B)
- `FUN_1004e2f48` @ 0x1004e2f48 (40B)
- `FUN_1004e2f70` @ 0x1004e2f70 (8B)
- `FUN_1004e2f78` @ 0x1004e2f78 (8B)
- `FUN_1004e2f80` @ 0x1004e2f80 (8B)
- `FUN_1004e2f88` @ 0x1004e2f88 (8B)
- `FUN_1004e2f90` @ 0x1004e2f90 (28B)
- `FUN_1004e2fac` @ 0x1004e2fac (48B)
- `FUN_1004e2fdc` @ 0x1004e2fdc (8B)
- `FUN_1004e2fe4` @ 0x1004e2fe4 (8B)
- `FUN_1004e2fec` @ 0x1004e2fec (12B)
- `FUN_1004e2ff8` @ 0x1004e2ff8 (12B)
- `FUN_1004e3004` @ 0x1004e3004 (80B)
- `FUN_1004e3054` @ 0x1004e3054 (204B)
- `FUN_1004e3120` @ 0x1004e3120 (28B)
- `FUN_1004e313c` @ 0x1004e313c (8B)
- `thunk_FUN_1004e439c` @ 0x1004e3144 (4B)
- `FUN_1004e3148` @ 0x1004e3148 (40B)
- `FUN_1004e3170` @ 0x1004e3170 (40B)
- `FUN_1004e3198` @ 0x1004e3198 (132B)
- `FUN_1004e321c` @ 0x1004e321c (252B)
- `FUN_1004e3318` @ 0x1004e3318 (40B)
- `FUN_1004e3340` @ 0x1004e3340 (28B)
- `FUN_1004e335c` @ 0x1004e335c (124B)
- `FUN_1004e33d8` @ 0x1004e33d8 (28B)
- `FUN_1004e33f4` @ 0x1004e33f4 (124B)
- `FUN_1004e3470` @ 0x1004e3470 (36B)
- `FUN_1004e3494` @ 0x1004e3494 (52B)
- `FUN_1004e34c8` @ 0x1004e34c8 (16B)
- `FUN_1004e34d8` @ 0x1004e34d8 (164B) [0x80]
- `FUN_1004e357c` @ 0x1004e357c (164B)
- `thunk_FUN_100015420` @ 0x1004e3620 (4B)
- `FUN_1004e3624` @ 0x1004e3624 (16B)
- `FUN_1004e3634` @ 0x1004e3634 (8B)
- `FUN_1004e363c` @ 0x1004e363c (12B)
- `FUN_1004e3648` @ 0x1004e3648 (12B)
- `FUN_1004e3654` @ 0x1004e3654 (108B)
- `FUN_1004e36c0` @ 0x1004e36c0 (108B)
- `FUN_1004e372c` @ 0x1004e372c (100B)
- `FUN_1004e3790` @ 0x1004e3790 (104B)
- `FUN_1004e37f8` @ 0x1004e37f8 (180B)
- `FUN_1004e38ac` @ 0x1004e38ac (148B)
- `FUN_1004e3940` @ 0x1004e3940 (172B)
- `FUN_1004e39ec` @ 0x1004e39ec (128B)
- `FUN_1004e3a6c` @ 0x1004e3a6c (344B) [XOR]
- `FUN_1004e3bc4` @ 0x1004e3bc4 (396B)
- `FUN_1004e3d50` @ 0x1004e3d50 (448B)
- `FUN_1004e3f10` @ 0x1004e3f10 (8B)
- `FUN_1004e3f18` @ 0x1004e3f18 (292B)
- `FUN_1004e403c` @ 0x1004e403c (72B)
- `FUN_1004e4084` @ 0x1004e4084 (108B)
- `FUN_1004e40f0` @ 0x1004e40f0 (64B)
- `FUN_1004e4130` @ 0x1004e4130 (36B)
- `FUN_1004e4154` @ 0x1004e4154 (56B)
- `FUN_1004e418c` @ 0x1004e418c (528B) [MEMCPY]
- `FUN_1004e439c` @ 0x1004e439c (88B)
- `FUN_1004e43f4` @ 0x1004e43f4 (112B)
- `FUN_1004e4464` @ 0x1004e4464 (120B)
- `_pthread_mutex_destroy` @ 0x1004e44dc (4B)
- `_pthread_mutex_lock` @ 0x1004e44e0 (4B)
- `_pthread_mutex_unlock` @ 0x1004e44e4 (4B)
- `FUN_1004e44e8` @ 0x1004e44e8 (100B)
- `FUN_1004e454c` @ 0x1004e454c (160B)
- `FUN_1004e45ec` @ 0x1004e45ec (180B)
- `FUN_1004e46a0` @ 0x1004e46a0 (72B)
- `FUN_1004e46e8` @ 0x1004e46e8 (152B)
- `FUN_1004e4780` @ 0x1004e4780 (36B)
- `FUN_1004e47a4` @ 0x1004e47a4 (36B)
- `FUN_1004e47c8` @ 0x1004e47c8 (80B)
- `FUN_1004e4818` @ 0x1004e4818 (108B)
- `FUN_1004e4884` @ 0x1004e4884 (20B)
- `FUN_1004e4898` @ 0x1004e4898 (64B)
- `FUN_1004e48d8` @ 0x1004e48d8 (48B)
- `FUN_1004e4908` @ 0x1004e4908 (4B)
- `FUN_1004e490c` @ 0x1004e490c (4B)
- `FUN_1004e4910` @ 0x1004e4910 (84B)
- `FUN_1004e4964` @ 0x1004e4964 (56B)
- `FUN_1004e499c` @ 0x1004e499c (56B)
- `FUN_1004e49d4` @ 0x1004e49d4 (140B)
- `FUN_1004e4a60` @ 0x1004e4a60 (112B)
- `FUN_1004e4ad0` @ 0x1004e4ad0 (136B)
- `thunk_FUN_1004e63dc` @ 0x1004e4b58 (4B)
- `FUN_1004e4b5c` @ 0x1004e4b5c (96B)
- `thunk_FUN_1004e6660` @ 0x1004e4bbc (4B) [CLOSE]
- `FUN_1004e4bc0` @ 0x1004e4bc0 (20B)
- `FUN_1004e4bd4` @ 0x1004e4bd4 (28B)
- `FUN_1004e4bf0` @ 0x1004e4bf0 (4B)
- `FUN_1004e4bf4` @ 0x1004e4bf4 (104B)
- `FUN_1004e4c5c` @ 0x1004e4c5c (48B)
- `FUN_1004e4c8c` @ 0x1004e4c8c (56B)
- `FUN_1004e4cc4` @ 0x1004e4cc4 (172B)
- `FUN_1004e4d70` @ 0x1004e4d70 (40B)
- `FUN_1004e4d98` @ 0x1004e4d98 (40B)
- `FUN_1004e4dc0` @ 0x1004e4dc0 (12B)
- `FUN_1004e4dcc` @ 0x1004e4dcc (144B)
- `thunk_FUN_1004e4dcc` @ 0x1004e4e5c (4B)
- `FUN_1004e4e60` @ 0x1004e4e60 (32B)
- `thunk_FUN_1004e5088` @ 0x1004e4e80 (4B)
- `FUN_1004e4e84` @ 0x1004e4e84 (72B) [0x88]
- `FUN_1004e4ecc` @ 0x1004e4ecc (16B)
- `FUN_1004e4edc` @ 0x1004e4edc (424B)
- `thunk_FUN_1004e4e84` @ 0x1004e5084 (4B) [0x88]
- `FUN_1004e5088` @ 0x1004e5088 (300B)
- `FUN_1004e51b4` @ 0x1004e51b4 (16B)
- `FUN_1004e51c4` @ 0x1004e51c4 (56B)
- `FUN_1004e51fc` @ 0x1004e51fc (12B)
- `FUN_1004e5208` @ 0x1004e5208 (196B)
- `FUN_1004e52cc` @ 0x1004e52cc (100B)
- `FUN_1004e5330` @ 0x1004e5330 (16B)
- `FUN_1004e5340` @ 0x1004e5340 (84B)
- `FUN_1004e5394` @ 0x1004e5394 (152B)
- `FUN_1004e542c` @ 0x1004e542c (300B)
- `FUN_1004e5558` @ 0x1004e5558 (112B)
- `FUN_1004e55c8` @ 0x1004e55c8 (80B)
- `FUN_1004e5618` @ 0x1004e5618 (260B)
- `FUN_1004e571c` @ 0x1004e571c (48B)
- `FUN_1004e574c` @ 0x1004e574c (148B)
- `FUN_1004e57e0` @ 0x1004e57e0 (140B)
- `FUN_1004e586c` @ 0x1004e586c (172B)
- `FUN_1004e5918` @ 0x1004e5918 (344B)
- `FUN_1004e5a70` @ 0x1004e5a70 (92B)
- `FUN_1004e5acc` @ 0x1004e5acc (72B)
- `FUN_1004e5b14` @ 0x1004e5b14 (188B)
- `FUN_1004e5bd0` @ 0x1004e5bd0 (176B)
- `FUN_1004e5c80` @ 0x1004e5c80 (84B)
- `FUN_1004e5cd4` @ 0x1004e5cd4 (120B)
- `FUN_1004e5d4c` @ 0x1004e5d4c (180B)
- `FUN_1004e5e00` @ 0x1004e5e00 (124B)
- `FUN_1004e5e7c` @ 0x1004e5e7c (240B)
- `FUN_1004e5f6c` @ 0x1004e5f6c (132B)
- `FUN_1004e5ff0` @ 0x1004e5ff0 (220B)
- `FUN_1004e60cc` @ 0x1004e60cc (12B)
- `FUN_1004e60d8` @ 0x1004e60d8 (100B)
- `thunk_FUN_1004e7798` @ 0x1004e613c (4B)
- `FUN_1004e6140` @ 0x1004e6140 (152B)
- `FUN_1004e61d8` @ 0x1004e61d8 (172B)
- `FUN_1004e6284` @ 0x1004e6284 (100B)
- `FUN_1004e62e8` @ 0x1004e62e8 (116B)
- `FUN_1004e635c` @ 0x1004e635c (128B)
- `FUN_1004e63dc` @ 0x1004e63dc (644B)
- `FUN_1004e6660` @ 0x1004e6660 (420B) [CLOSE]
- `FUN_1004e6804` @ 0x1004e6804 (28B)
- `FUN_1004e6820` @ 0x1004e6820 (28B)
- `FUN_1004e683c` @ 0x1004e683c (28B)
- `FUN_1004e6858` @ 0x1004e6858 (28B)
- `FUN_1004e6874` @ 0x1004e6874 (52B)
- `thunk_FUN_1004e68ac` @ 0x1004e68a8 (4B)
- `FUN_1004e68ac` @ 0x1004e68ac (48B)
- `FUN_1004e68dc` @ 0x1004e68dc (12B)
- `FUN_1004e68e8` @ 0x1004e68e8 (16B)
- `thunk_FUN_1004e68fc` @ 0x1004e68f8 (4B)
- `FUN_1004e68fc` @ 0x1004e68fc (76B)
- `FUN_1004e6948` @ 0x1004e6948 (12B)
- `FUN_1004e6954` @ 0x1004e6954 (40B)
- `FUN_1004e697c` @ 0x1004e697c (88B)
- `FUN_1004e69d4` @ 0x1004e69d4 (32B)
- `FUN_1004e69f4` @ 0x1004e69f4 (8B)
- `FUN_1004e69fc` @ 0x1004e69fc (56B)
- `FUN_1004e6a34` @ 0x1004e6a34 (128B)
- `FUN_1004e6ab4` @ 0x1004e6ab4 (156B)
- `FUN_1004e6b50` @ 0x1004e6b50 (104B)
- `FUN_1004e6bb8` @ 0x1004e6bb8 (16B)
- `FUN_1004e6bc8` @ 0x1004e6bc8 (16B)
- `FUN_1004e6bd8` @ 0x1004e6bd8 (16B)
- `operator.delete` @ 0x1004e6be8 (4B)
- `FUN_1004e6bec` @ 0x1004e6bec (96B)
- `FUN_1004e6c4c` @ 0x1004e6c4c (108B)
- `FUN_1004e6cb8` @ 0x1004e6cb8 (16B)
- `FUN_1004e6cc8` @ 0x1004e6cc8 (108B)
- `FUN_1004e6d34` @ 0x1004e6d34 (124B)
- `FUN_1004e6db0` @ 0x1004e6db0 (264B)
- `FUN_1004e6eb8` @ 0x1004e6eb8 (144B) [CLOSE]
- `FUN_1004e6f48` @ 0x1004e6f48 (244B)
- `FUN_1004e703c` @ 0x1004e703c (240B)
- `FUN_1004e712c` @ 0x1004e712c (68B)
- `FUN_1004e7170` @ 0x1004e7170 (72B)
- `FUN_1004e71b8` @ 0x1004e71b8 (196B)
- `FUN_1004e727c` @ 0x1004e727c (124B)
- `FUN_1004e72f8` @ 0x1004e72f8 (140B)
- `FUN_1004e7384` @ 0x1004e7384 (144B)
- `FUN_1004e7414` @ 0x1004e7414 (128B)
- `FUN_1004e7494` @ 0x1004e7494 (52B)
- `thunk_FUN_1004e71b8` @ 0x1004e74c8 (4B)
- `FUN_1004e74cc` @ 0x1004e74cc (88B)
- `FUN_1004e7524` @ 0x1004e7524 (56B)
- `FUN_1004e755c` @ 0x1004e755c (324B)
- `FUN_1004e76a0` @ 0x1004e76a0 (12B)
- `FUN_1004e76ac` @ 0x1004e76ac (12B)
- `FUN_1004e76b8` @ 0x1004e76b8 (48B)
- `FUN_1004e76e8` @ 0x1004e76e8 (40B)
- `FUN_1004e7710` @ 0x1004e7710 (40B)
- `FUN_1004e7738` @ 0x1004e7738 (12B)
- `FUN_1004e7744` @ 0x1004e7744 (56B)
- `FUN_1004e777c` @ 0x1004e777c (24B)
- `FUN_1004e7794` @ 0x1004e7794 (4B)
- `FUN_1004e7798` @ 0x1004e7798 (148B)
- `FUN_1004e782c` @ 0x1004e782c (464B)
- `FUN_1004e79fc` @ 0x1004e79fc (112B) [CLOSE]
- `FUN_1004e7a6c` @ 0x1004e7a6c (80B)
- `FUN_1004e7abc` @ 0x1004e7abc (88B)
- `FUN_1004e7b14` @ 0x1004e7b14 (124B) [XOR,0x80]
- `FUN_1004e7b90` @ 0x1004e7b90 (196B)
- `FUN_1004e7c54` @ 0x1004e7c54 (68B)
- `FUN_1004e7c98` @ 0x1004e7c98 (188B)
- `FUN_1004e7d54` @ 0x1004e7d54 (140B)
- `FUN_1004e7de0` @ 0x1004e7de0 (148B)
- `FUN_1004e7e74` @ 0x1004e7e74 (124B)
- `FUN_1004e7ef0` @ 0x1004e7ef0 (92B)
- `FUN_1004e7f4c` @ 0x1004e7f4c (400B)
- `FUN_1004e80dc` @ 0x1004e80dc (144B)
- `FUN_1004e816c` @ 0x1004e816c (172B)
- `FUN_1004e8218` @ 0x1004e8218 (84B)
- `FUN_1004e826c` @ 0x1004e826c (84B)
- `FUN_1004e82c0` @ 0x1004e82c0 (112B)
- `FUN_1004e8330` @ 0x1004e8330 (8B)
- `FUN_1004e8338` @ 0x1004e8338 (140B)
- `FUN_1004e83c4` @ 0x1004e83c4 (24B)
- `FUN_1004e83dc` @ 0x1004e83dc (124B)
- `thunk_FUN_1004e83dc` @ 0x1004e8458 (4B)
- `FUN_1004e845c` @ 0x1004e845c (20B)
- `FUN_1004e8470` @ 0x1004e8470 (128B)
- `FUN_1004e84f0` @ 0x1004e84f0 (76B)
- `FUN_1004e853c` @ 0x1004e853c (76B)
- `FUN_1004e8588` @ 0x1004e8588 (76B)
- `FUN_1004e85d4` @ 0x1004e85d4 (76B)
- `FUN_1004e8620` @ 0x1004e8620 (104B)
- `FUN_1004e8688` @ 0x1004e8688 (76B)
- `FUN_1004e86d4` @ 0x1004e86d4 (124B)
- `FUN_1004e8750` @ 0x1004e8750 (128B) [0x80]
- `FUN_1004e87d0` @ 0x1004e87d0 (108B) [0x80]
- `FUN_1004e883c` @ 0x1004e883c (184B) [0x80]
- `FUN_1004e88f4` @ 0x1004e88f4 (88B)
- `thunk_FUN_1004e88f4` @ 0x1004e894c (4B)
- `FUN_1004e8950` @ 0x1004e8950 (20B)
- `FUN_1004e8964` @ 0x1004e8964 (36B)
- `FUN_1004e8988` @ 0x1004e8988 (108B)
- `FUN_1004e89f4` @ 0x1004e89f4 (48B)
- `FUN_1004e8a24` @ 0x1004e8a24 (8B)
- `FUN_1004e8a2c` @ 0x1004e8a2c (116B)
- `FUN_1004e8aa0` @ 0x1004e8aa0 (64B)
- `FUN_1004e8ae0` @ 0x1004e8ae0 (208B)
- `FUN_1004e8bb0` @ 0x1004e8bb0 (60B)
- `FUN_1004e8bec` @ 0x1004e8bec (180B)
- `FUN_1004e8ca0` @ 0x1004e8ca0 (172B) [0x88,0x80]
- `FUN_1004e8d4c` @ 0x1004e8d4c (116B)
- `thunk_FUN_1004e8d4c` @ 0x1004e8dc0 (4B)
- `FUN_1004e8dc4` @ 0x1004e8dc4 (8B)
- `FUN_1004e8dcc` @ 0x1004e8dcc (8B)
- `FUN_1004e8dd4` @ 0x1004e8dd4 (20B)
- `FUN_1004e8de8` @ 0x1004e8de8 (24B)
- `FUN_1004e8e00` @ 0x1004e8e00 (24B)
- `FUN_1004e8e18` @ 0x1004e8e18 (16B)
- `FUN_1004e8e28` @ 0x1004e8e28 (8B)
- `FUN_1004e8e30` @ 0x1004e8e30 (8B)
- `FUN_1004e8e38` @ 0x1004e8e38 (332B) [0x88,0x80]
- `FUN_1004e8f84` @ 0x1004e8f84 (252B)
- `FUN_1004e9080` @ 0x1004e9080 (8B)
- `FUN_1004e9088` @ 0x1004e9088 (8B)
- `FUN_1004e9090` @ 0x1004e9090 (124B)
- `FUN_1004e910c` @ 0x1004e910c (64B)
- `FUN_1004e914c` @ 0x1004e914c (8B)
- `FUN_1004e9154` @ 0x1004e9154 (64B)
- `FUN_1004e9194` @ 0x1004e9194 (60B)
- `FUN_1004e91d0` @ 0x1004e91d0 (16B)
- `FUN_1004e91e0` @ 0x1004e91e0 (20B)
- `FUN_1004e91f4` @ 0x1004e91f4 (96B)
- `FUN_1004e9254` @ 0x1004e9254 (40B)
- `FUN_1004e927c` @ 0x1004e927c (112B)
- `FUN_1004e92ec` @ 0x1004e92ec (16B)
- `FUN_1004e92fc` @ 0x1004e92fc (32B)
- `FUN_1004e931c` @ 0x1004e931c (64B)
- `FUN_1004e935c` @ 0x1004e935c (12B)
- `thunk_FUN_1004e8bec` @ 0x1004e9368 (4B)
- `FUN_1004e936c` @ 0x1004e936c (12B)
- `FUN_1004e9378` @ 0x1004e9378 (20B)
- `FUN_1004e938c` @ 0x1004e938c (12B)
- `FUN_1004e9398` @ 0x1004e9398 (44B)
- `FUN_1004e93c4` @ 0x1004e93c4 (44B)
- `FUN_1004e93f0` @ 0x1004e93f0 (44B)
- `FUN_1004e941c` @ 0x1004e941c (36B)
- `FUN_1004e9440` @ 0x1004e9440 (4B)
- `FUN_1004e9444` @ 0x1004e9444 (4B)
- `operator.delete` @ 0x1004e9448 (4B)
- `FUN_1004e944c` @ 0x1004e944c (4B)
- `FUN_1004e9450` @ 0x1004e9450 (4B)
- `FUN_1004e9454` @ 0x1004e9454 (4B)
- `FUN_1004e9458` @ 0x1004e9458 (4B)
- `FUN_1004e945c` @ 0x1004e945c (4B)
- `FUN_1004e9460` @ 0x1004e9460 (4B)
- `FUN_1004e9464` @ 0x1004e9464 (4B)
- `FUN_1004e9468` @ 0x1004e9468 (4B)
- `FUN_1004e946c` @ 0x1004e946c (8B)
- `FUN_1004e9474` @ 0x1004e9474 (24B)
- `FUN_1004e948c` @ 0x1004e948c (16B)
- `FUN_1004e949c` @ 0x1004e949c (20B)
- `FUN_1004e94b0` @ 0x1004e94b0 (20B)
- `FUN_1004e94c4` @ 0x1004e94c4 (16B)
- `FUN_1004e94d4` @ 0x1004e94d4 (16B)
- `FUN_1004e94e4` @ 0x1004e94e4 (16B)
- `FUN_1004e94f4` @ 0x1004e94f4 (16B) [0x80]
- `FUN_1004e9504` @ 0x1004e9504 (16B) [0x88]
- `FUN_1004e9514` @ 0x1004e9514 (16B)
- `FUN_1004e9524` @ 0x1004e9524 (16B)
- `FUN_1004e9534` @ 0x1004e9534 (16B)
- `FUN_1004e9544` @ 0x1004e9544 (16B)
- `FUN_1004e9554` @ 0x1004e9554 (16B)
- `FUN_1004e9564` @ 0x1004e9564 (16B)
- `FUN_1004e9574` @ 0x1004e9574 (16B)
- `FUN_1004e9584` @ 0x1004e9584 (24B)
- `FUN_1004e959c` @ 0x1004e959c (16B)
- `FUN_1004e95ac` @ 0x1004e95ac (4B)
- `FUN_1004e95b0` @ 0x1004e95b0 (4B)
- `FUN_1004e95b4` @ 0x1004e95b4 (20B)
- `FUN_1004e95c8` @ 0x1004e95c8 (20B)
- `FUN_1004e95dc` @ 0x1004e95dc (20B)
- `FUN_1004e95f0` @ 0x1004e95f0 (20B)
- `FUN_1004e9604` @ 0x1004e9604 (20B)
- `FUN_1004e9618` @ 0x1004e9618 (20B)
- `FUN_1004e962c` @ 0x1004e962c (20B)
- `FUN_1004e9640` @ 0x1004e9640 (20B)
- `FUN_1004e9654` @ 0x1004e9654 (148B)
- `FUN_1004e96e8` @ 0x1004e96e8 (4B)
- `FUN_1004e96ec` @ 0x1004e96ec (4B)
- `FUN_1004e96f0` @ 0x1004e96f0 (8B)
- `FUN_1004e96f8` @ 0x1004e96f8 (4B)
- `FUN_1004e96fc` @ 0x1004e96fc (12B)
- `FUN_1004e9708` @ 0x1004e9708 (60B)
- `FUN_1004e9744` @ 0x1004e9744 (96B)
- `FUN_1004e97a4` @ 0x1004e97a4 (20B)
- `FUN_1004e97b8` @ 0x1004e97b8 (20B)
- `FUN_1004e97cc` @ 0x1004e97cc (28B)
- `FUN_1004e97e8` @ 0x1004e97e8 (56B)
- `FUN_1004e9820` @ 0x1004e9820 (76B)
- `FUN_1004e986c` @ 0x1004e986c (52B)
- `FUN_1004e98a0` @ 0x1004e98a0 (60B)
- `init` @ 0x1004e98dc (156B)
- `dealloc` @ 0x1004e9978 (60B)
- `loadView` @ 0x1004e99b4 (356B)
- `setApplicationPlatformImp:` @ 0x1004e9b18 (16B)
- `startTick:` @ 0x1004e9b28 (268B) [SELECT]
- `stopTick` @ 0x1004e9c34 (84B)
- `setContentScale:` @ 0x1004e9c88 (24B)
- `getFullContentScale` @ 0x1004e9ca0 (44B)
- `setAllowedOrientations:` @ 0x1004e9ccc (16B)
- `onTick` @ 0x1004e9cdc (24B)
- `getSize` @ 0x1004e9cf4 (24B)
- `getGameView` @ 0x1004e9d0c (16B)
- `swapBuffers` @ 0x1004e9d1c (24B)
- `exitMainLoop` @ 0x1004e9d34 (4B)
- `didReceiveMemoryWarning` @ 0x1004e9d38 (132B)
- `grabGraphicsContext` @ 0x1004e9dbc (4B)
- `shouldAutorotateToInterfaceOrientation:` @ 0x1004e9dc0 (56B)
- `shouldAutorotate` @ 0x1004e9df8 (8B)
- `prefersStatusBarHidden` @ 0x1004e9e00 (8B)
- `supportedInterfaceOrientations` @ 0x1004e9e08 (52B) [PORT]
- `_keepAtLinkTime` @ 0x1004e9e3c (4B)
- `preferredScreenEdgesDeferringSystemGestures` @ 0x1004e9e40 (8B)
- `dealloc` @ 0x1004e9e48 (80B)
- `createApplication:` @ 0x1004e9e98 (552B) [SELECT]
- `application:openURL:sourceApplication:annotation:` @ 0x1004ea0d4 (224B)
- `application:didFinishLaunchingWithOptions:` @ 0x1004ea1b4 (692B)
- `application:didReceiveLocalNotification:` @ 0x1004ea468 (568B)
- `applicationWillTerminate:` @ 0x1004ea6a0 (28B)
- `applicationWillResignActive:` @ 0x1004ea6bc (44B)
- `applicationDidBecomeActive:` @ 0x1004ea6e8 (4B)
- `applicationDidEnterBackground:` @ 0x1004ea6ec (68B)
- `applicationWillEnterForeground:` @ 0x1004ea730 (56B)
- `application:didRegisterForRemoteNotificationsWithDeviceToken:` @ 0x1004ea768 (144B)
- `application:didFailToRegisterForRemoteNotificationsWithError:` @ 0x1004ea7f8 (40B)
- `application:didReceiveRemoteNotification:` @ 0x1004ea820 (664B)
- `batteryStatus` @ 0x1004eaab8 (172B)
- `_keepAtLinkTime` @ 0x1004eab64 (4B)
- `window` @ 0x1004eab68 (8B)
- `FUN_1004eab70` @ 0x1004eab70 (56B)
- `FUN_1004eaba8` @ 0x1004eaba8 (20B)
- `FUN_1004eabbc` @ 0x1004eabbc (16B)
- `FUN_1004eabcc` @ 0x1004eabcc (92B)
- `FUN_1004eac28` @ 0x1004eac28 (220B)
- `FUN_1004ead04` @ 0x1004ead04 (16B)
- `FUN_1004ead14` @ 0x1004ead14 (16B)
- `FUN_1004ead24` @ 0x1004ead24 (16B)
- `FUN_1004ead34` @ 0x1004ead34 (16B)
- `FUN_1004ead44` @ 0x1004ead44 (64B)
- `FUN_1004ead84` @ 0x1004ead84 (20B)
- `FUN_1004ead98` @ 0x1004ead98 (16B)
- `FUN_1004eada8` @ 0x1004eada8 (4B)
- `FUN_1004eadac` @ 0x1004eadac (280B)
- `thunk_FUN_1004e959c` @ 0x1004eaee0 (4B)
- `FUN_1004eaee4` @ 0x1004eaee4 (36B)
- `FUN_1004eaf1c` @ 0x1004eaf1c (4B)
- `FUN_1004eaf20` @ 0x1004eaf20 (4B)
- `FUN_1004eaf24` @ 0x1004eaf24 (4B)
- `FUN_1004eaf28` @ 0x1004eaf28 (4B)
- `setContentScale:` @ 0x1004eaf2c (32B)
- `contentScale` @ 0x1004eaf4c (16B)
- `getFullContentScale` @ 0x1004eaf5c (32B)
- `layoutSubviews` @ 0x1004eaf7c (192B)
- `handleTouches:` @ 0x1004eb03c (200B)
- `touchesBegan:withEvent:` @ 0x1004eb104 (12B)
- `touchesMoved:withEvent:` @ 0x1004eb110 (12B)
- `touchesEnded:withEvent:` @ 0x1004eb11c (12B)
- `touchesCancelled:withEvent:` @ 0x1004eb128 (12B)
- `entry` @ 0x1004eb134 (260B)
- `FUN_1004eb238` @ 0x1004eb238 (2404B) [0x88]
- `metalLayer` @ 0x1004ebbe0 (12B)
- `layerClass` @ 0x1004ebbec (20B)
- `initWithFrame:` @ 0x1004ebc00 (292B)
- `presentFramebuffer` @ 0x1004ebd24 (132B)
- `getSize` @ 0x1004ebda8 (112B)
- `isFlipped` @ 0x1004ebe18 (8B)
- `_keepAtLinkTime` @ 0x1004ebe20 (4B)
- `FUN_1004ebe24` @ 0x1004ebe24 (8B)
- `FUN_1004ebe2c` @ 0x1004ebe2c (52B)
- `FUN_1004ebe60` @ 0x1004ebe60 (24B)
- `FUN_1004ebe78` @ 0x1004ebe78 (72B)
- `FUN_1004ebec0` @ 0x1004ebec0 (64B)
- `FUN_1004ebf00` @ 0x1004ebf00 (192B) [MEMCPY,0x80]
- `FUN_1004ebfc0` @ 0x1004ebfc0 (12B)
- `FUN_1004ebfcc` @ 0x1004ebfcc (104B)
- `FUN_1004ec034` @ 0x1004ec034 (84B)
- `FUN_1004ec088` @ 0x1004ec088 (40B)
- `FUN_1004ec0b0` @ 0x1004ec0b0 (56B)
- `FUN_1004ec0e8` @ 0x1004ec0e8 (16B)
- `FUN_1004ec0f8` @ 0x1004ec0f8 (68B)
- `FUN_1004ec13c` @ 0x1004ec13c (248B)
- `FUN_1004ec234` @ 0x1004ec234 (8B)
- `FUN_1004ec23c` @ 0x1004ec23c (136B)
- `FUN_1004ec2c4` @ 0x1004ec2c4 (52B)
- `FUN_1004ec2f8` @ 0x1004ec2f8 (52B)
- `FUN_1004ec32c` @ 0x1004ec32c (60B)
- `FUN_1004ec368` @ 0x1004ec368 (8B)
- `FUN_1004ec370` @ 0x1004ec370 (588B)
- `FUN_1004ec5bc` @ 0x1004ec5bc (16B)
- `FUN_1004ec5cc` @ 0x1004ec5cc (236B)
- `FUN_1004ec6b8` @ 0x1004ec6b8 (56B)
- `FUN_1004ec6f0` @ 0x1004ec6f0 (48B)
- `FUN_1004ec720` @ 0x1004ec720 (80B)
- `FUN_1004ec770` @ 0x1004ec770 (220B)
- `FUN_1004ec84c` @ 0x1004ec84c (4B)
- `FUN_1004ec850` @ 0x1004ec850 (4B)
- `FUN_1004ec854` @ 0x1004ec854 (68B)
- `FUN_1004ec898` @ 0x1004ec898 (36B)
- `FUN_1004ec8bc` @ 0x1004ec8bc (56B)
- `FUN_1004ec8f4` @ 0x1004ec8f4 (160B)
- `FUN_1004ec994` @ 0x1004ec994 (8B)
- `FUN_1004ec99c` @ 0x1004ec99c (200B)
- `FUN_1004eca64` @ 0x1004eca64 (320B)
- `FUN_1004ecba4` @ 0x1004ecba4 (112B)
- `FUN_1004ecc14` @ 0x1004ecc14 (412B) [0x88,0x80]
- `FUN_1004ecdb0` @ 0x1004ecdb0 (168B)
- `FUN_1004ece58` @ 0x1004ece58 (64B)
- `FUN_1004ece98` @ 0x1004ece98 (100B)
- `FUN_1004ecefc` @ 0x1004ecefc (92B)
- `FUN_1004ecf58` @ 0x1004ecf58 (84B)
- `thunk_FUN_1004e24b0` @ 0x1004ecfac (4B)
- `thunk_FUN_1004e24bc` @ 0x1004ecfb0 (4B)
- `FUN_1004ecfb4` @ 0x1004ecfb4 (52B)
- `FUN_1004ecfe8` @ 0x1004ecfe8 (52B)
- `operator.delete` @ 0x1004ed01c (4B)
- `FUN_1004ed020` @ 0x1004ed020 (8B)
- `FUN_1004ed028` @ 0x1004ed028 (12B)
- `FUN_1004ed034` @ 0x1004ed034 (8B)
- `FUN_1004ed03c` @ 0x1004ed03c (180B)
- `FUN_1004ed0f0` @ 0x1004ed0f0 (180B)
- `FUN_1004ed1a4` @ 0x1004ed1a4 (8B)
- `FUN_1004ed1ac` @ 0x1004ed1ac (172B)
- `FUN_1004ed258` @ 0x1004ed258 (64B)
- `FUN_1004ed298` @ 0x1004ed298 (76B)
- `FUN_1004ed2e4` @ 0x1004ed2e4 (144B)
- `FUN_1004ed374` @ 0x1004ed374 (236B)
- `FUN_1004ed460` @ 0x1004ed460 (96B)
- `FUN_1004ed4c0` @ 0x1004ed4c0 (88B)
- `FUN_1004ed518` @ 0x1004ed518 (60B)
- `FUN_1004ed554` @ 0x1004ed554 (384B)
- `FUN_1004ed6d4` @ 0x1004ed6d4 (148B)
- `FUN_1004ed768` @ 0x1004ed768 (480B)
- `FUN_1004ed948` @ 0x1004ed948 (384B)
- `FUN_1004edac8` @ 0x1004edac8 (112B)
- `FUN_1004edb38` @ 0x1004edb38 (104B)
- `FUN_1004edba0` @ 0x1004edba0 (76B)
- `FUN_1004edbec` @ 0x1004edbec (120B)
- `FUN_1004edc64` @ 0x1004edc64 (88B)
- `FUN_1004edcbc` @ 0x1004edcbc (12B)
- `FUN_1004edcc8` @ 0x1004edcc8 (12B)
- `FUN_1004edcd4` @ 0x1004edcd4 (80B)
- `FUN_1004edd24` @ 0x1004edd24 (52B)
- `FUN_1004edd58` @ 0x1004edd58 (56B)
- `thunk_FUN_1004edd58` @ 0x1004edd90 (4B)
- `FUN_1004edd94` @ 0x1004edd94 (96B)
- `FUN_1004eddf4` @ 0x1004eddf4 (64B)
- `FUN_1004ede34` @ 0x1004ede34 (32B)
- `FUN_1004ede54` @ 0x1004ede54 (8B)
- `FUN_1004ede5c` @ 0x1004ede5c (108B)
- `FUN_1004edec8` @ 0x1004edec8 (40B)
- `FUN_1004edef0` @ 0x1004edef0 (3756B) [0x88,0x80]
- `FUN_1004eed9c` @ 0x1004eed9c (144B)
- `FUN_1004eee2c` @ 0x1004eee2c (60B)
- `FUN_1004eee68` @ 0x1004eee68 (32B)
- `FUN_1004eee88` @ 0x1004eee88 (92B)
- `FUN_1004eeee4` @ 0x1004eeee4 (44B)
- `FUN_1004eef10` @ 0x1004eef10 (20B)
- `FUN_1004eef24` @ 0x1004eef24 (84B)
- `FUN_1004eef78` @ 0x1004eef78 (28B)
- `FUN_1004eef94` @ 0x1004eef94 (60B)
- `FUN_1004eefd0` @ 0x1004eefd0 (72B)
- `FUN_1004ef018` @ 0x1004ef018 (60B)
- `FUN_1004ef054` @ 0x1004ef054 (148B)
- `FUN_1004ef0e8` @ 0x1004ef0e8 (64B)
- `FUN_1004ef128` @ 0x1004ef128 (68B)
- `FUN_1004ef16c` @ 0x1004ef16c (24B)
- `FUN_1004ef184` @ 0x1004ef184 (24B)
- `FUN_1004ef19c` @ 0x1004ef19c (24B)
- `FUN_1004ef1b4` @ 0x1004ef1b4 (88B)
- `FUN_1004ef20c` @ 0x1004ef20c (24B) [XOR]
- `FUN_1004ef224` @ 0x1004ef224 (48B)
- `FUN_1004ef254` @ 0x1004ef254 (32B) [0x80]
- `FUN_1004ef274` @ 0x1004ef274 (52B)
- `FUN_1004ef2a8` @ 0x1004ef2a8 (56B)
- `FUN_1004ef2e0` @ 0x1004ef2e0 (48B)
- `FUN_1004ef310` @ 0x1004ef310 (24B)
- `FUN_1004ef328` @ 0x1004ef328 (28B)
- `FUN_1004ef344` @ 0x1004ef344 (56B)
- `FUN_1004ef37c` @ 0x1004ef37c (48B)
- `FUN_1004ef3ac` @ 0x1004ef3ac (48B)
- `FUN_1004ef3dc` @ 0x1004ef3dc (52B)
- `FUN_1004ef410` @ 0x1004ef410 (52B)
- `FUN_1004ef444` @ 0x1004ef444 (52B)
- `FUN_1004ef478` @ 0x1004ef478 (52B)
- `FUN_1004ef4ac` @ 0x1004ef4ac (52B)
- `FUN_1004ef4e0` @ 0x1004ef4e0 (52B)
- `FUN_1004ef514` @ 0x1004ef514 (52B)
- `FUN_1004ef548` @ 0x1004ef548 (48B)
- `FUN_1004ef578` @ 0x1004ef578 (48B)
- `FUN_1004ef5a8` @ 0x1004ef5a8 (48B)
- `FUN_1004ef5d8` @ 0x1004ef5d8 (52B)
- `FUN_1004ef60c` @ 0x1004ef60c (48B)
- `FUN_1004ef63c` @ 0x1004ef63c (48B)
- `FUN_1004ef66c` @ 0x1004ef66c (48B)
- `FUN_1004ef69c` @ 0x1004ef69c (52B)
- `FUN_1004ef6d0` @ 0x1004ef6d0 (52B)
- `FUN_1004ef704` @ 0x1004ef704 (52B)
- `FUN_1004ef738` @ 0x1004ef738 (52B)
- `FUN_1004ef76c` @ 0x1004ef76c (64B)
- `FUN_1004ef7ac` @ 0x1004ef7ac (60B)
- `FUN_1004ef7e8` @ 0x1004ef7e8 (48B)
- `FUN_1004ef818` @ 0x1004ef818 (48B)
- `FUN_1004ef848` @ 0x1004ef848 (48B)
- `FUN_1004ef878` @ 0x1004ef878 (48B)
- `FUN_1004ef8a8` @ 0x1004ef8a8 (68B)
- `FUN_1004ef8ec` @ 0x1004ef8ec (48B)
- `FUN_1004ef91c` @ 0x1004ef91c (52B)
- `FUN_1004ef950` @ 0x1004ef950 (52B)
- `FUN_1004ef984` @ 0x1004ef984 (52B)
- `FUN_1004ef9b8` @ 0x1004ef9b8 (52B)
- `FUN_1004ef9ec` @ 0x1004ef9ec (56B)
- `FUN_1004efa24` @ 0x1004efa24 (60B)
- `FUN_1004efa60` @ 0x1004efa60 (60B)
- `FUN_1004efa9c` @ 0x1004efa9c (56B)
- `FUN_1004efad4` @ 0x1004efad4 (56B)
- `FUN_1004efb0c` @ 0x1004efb0c (52B)
- `FUN_1004efb40` @ 0x1004efb40 (56B)
- `FUN_1004efb78` @ 0x1004efb78 (56B)
- `FUN_1004efbb0` @ 0x1004efbb0 (56B)
- `FUN_1004efbe8` @ 0x1004efbe8 (48B)
- `FUN_1004efc18` @ 0x1004efc18 (48B)
- `FUN_1004efc48` @ 0x1004efc48 (48B)
- `FUN_1004efc78` @ 0x1004efc78 (48B)
- `FUN_1004efca8` @ 0x1004efca8 (56B)
- `FUN_1004efce0` @ 0x1004efce0 (60B)
- `FUN_1004efd1c` @ 0x1004efd1c (48B)
- `FUN_1004efd4c` @ 0x1004efd4c (52B)
- `FUN_1004efd80` @ 0x1004efd80 (52B)
- `FUN_1004efdb4` @ 0x1004efdb4 (52B)
- `FUN_1004efde8` @ 0x1004efde8 (52B)
- `FUN_1004efe1c` @ 0x1004efe1c (56B)
- `FUN_1004efe54` @ 0x1004efe54 (48B)
- `FUN_1004efe84` @ 0x1004efe84 (56B)
- `FUN_1004efebc` @ 0x1004efebc (56B)
- `FUN_1004efef4` @ 0x1004efef4 (56B)
- `FUN_1004eff2c` @ 0x1004eff2c (48B)
- `FUN_1004eff5c` @ 0x1004eff5c (52B)
- `FUN_1004eff90` @ 0x1004eff90 (52B)
- `FUN_1004effc4` @ 0x1004effc4 (52B)
- `FUN_1004efff8` @ 0x1004efff8 (72B)

### Decompiled Functions with Network/Crypto Tags

#### `FUN_1004e0988` @ 0x1004e0988

Calls: `___stack_chk_fail`@0x101148e40 

```c

void FUN_1004e0988(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar14 = *(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar15 = *(uint *)(param_1 + 0x14);
  if (((ulong)param_2 & 3) != 0) {
    uStack_a8 = *(undefined8 *)(param_2 + 2);
    local_b0 = *(undefined8 *)param_2;
    local_98 = *(undefined8 *)(param_2 + 6);
    local_a0 = *(undefined8 *)(param_2 + 4);
    uStack_88 = *(undefined8 *)(param_2 + 10);
    local_90 = *(undefined8 *)(param_2 + 8);
    local_78 = *(undefined8 *)(param_2 + 0xe);
    local_80 = *(undefined8 *)(param_2 + 0xc);
    param_2 = (int *)&local_b0;
  }
  iVar6 = *param_2;
  iVar16 = param_2[1];
  uVar1 = *(int *)(param_1 + 8) + (uVar5 & uVar14) + (uVar15 & (uVar14 ^ 0xffffffff)) + iVar6 +
          0xd76aa478;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar14;
  uVar2 = uVar15 + iVar16 + (uVar5 & (uVar1 ^ 0xffffffff)) + (uVar1 & uVar14) + 0xe8c7b756;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar7 = param_2[2];
  iVar17 = param_2[3];
  uVar3 = uVar5 + iVar7 + (uVar14 & (uVar2 ^ 0xffffffff)) + (uVar2 & uVar1) + 0x242070db;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = uVar14 + iVar17 + (uVar1 & (uVar3 ^ 0xffffffff)) + (uVar3 & uVar2) + 0xc1bdceee;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iVar8 = param_2[4];
  iVar18 = param_2[5];
  uVar1 = uVar1 + iVar8 + (uVar2 & (uVar4 ^ 0xffffffff)) + (uVar4 & uVar3) + 0xf57c0faf;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar18 + uVar2 + (uVar3 & (uVar1 ^ 0xffffffff)) + (uVar1 & uVar4) + 0x4787c62a;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar9 = param_2[6];
  iVar19 = param_2[7];
  uVar3 = iVar9 + uVar3 + (uVar4 & (uVar2 ^ 0xffffffff)) + (uVar2 & uVar1) + 0xa8304613;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar19 + uVar4 + (uVar1 & (uVar3 ^ 0xffffffff)) + (uVar3 & uVar2) + 0xfd469501;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iVar10 = param_2[8];
  iVar20 = param_2[9];
  uVar1 = iVar10 + uVar1 + (uVar2 & (uVar4 ^ 0xffffffff)) + (uVar4 & uVar3) + 0x698098d8;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar20 + uVar2 + (uVar3 & (uVar1 ^ 0xffffffff)) + (uVar1 & uVar4) + 0x8b44f7af;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar11 = param_2[10];
  iVar21 = param_2[0xb];
  uVar3 = (iVar11 + uVar3 + (uVar4 & (uVar2 ^ 0xffffffff)) + (uVar2 & uVar1)) - 0xa44f;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar21 + uVar4 + (uVar1 & (uVar3 ^ 0xffffffff)) + (uVar3 & uVar2) + 0x895cd7be;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iVar12 = param_2[0xc];
  iVar22 = param_2[0xd];
  uVar1 = iVar12 + uVar1 + (uVar2 & (uVar4 ^ 0xffffffff)) + (uVar4 & uVar3) + 0x6b901122;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iVar22 + uVar2 + (uVar3 & (uVar1 ^ 0xffffffff)) + (uVar1 & uVar4) + 0xfd987193;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar13 = param_2[0xe];
  iVar23 = param_2[0xf];
  uVar3 = iVar13 + uVar3 + (uVar4 & (uVar2 ^ 0xffffffff)) + (uVar2 & uVar1) + 0xa679438e;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iVar23 + uVar4 + (uVar1 & (uVar3 ^ 0xffffffff)) + (uVar3 & uVar2) + 0x49b40821;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = iVar16 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar4 & uVar2) + 0xf61e2562;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar9 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0xc040b340;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar21 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + (uVar2 & uVar4) + 0x265e5a51;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar6 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0xe9b6c7aa;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar18 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar4 & uVar2) + 0xd62f105d;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar11 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0x2441453;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar23 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + (uVar2 & uVar4) + 0xd8a1e681;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar8 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0xe7d3fbc8;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar20 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar4 & uVar2) + 0x21e1cde6;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar13 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0xc33707d6;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar17 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + (uVar2 & uVar4) + 0xf4d50d87;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar10 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0x455a14ed;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar22 + uVar1 + (uVar3 & (uVar2 ^ 0xffffffff)) + (uVar4 & uVar2) + 0xa9e3e905;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar7 + uVar2 + (uVar4 & (uVar3 ^ 0xffffffff)) + (uVar1 & uVar3) + 0xfcefa3f8;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar19 + uVar3 + (uVar1 & (uVar4 ^ 0xffffffff)) + (uVar2 & uVar4) + 0x676f02d9;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar12 + uVar4 + (uVar2 & (uVar1 ^ 0xffffffff)) + (uVar3 & uVar1) + 0x8d2a4c8a;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = (iVar18 + uVar1 + (uVar4 ^ uVar3 ^ uVar2)) - 0x5c6be;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar10 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x8771f681;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar21 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x6d9d6122;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar13 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xfde5380c;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar16 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xa4beea44;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar8 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x4bdecfa9;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar19 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xf6bb4b60;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar11 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xbebfbc70;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar22 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0x289b7ec6;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar6 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xeaa127fa;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar17 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xd4ef3085;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar9 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0x4881d05;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar20 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xd9d4d039;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar12 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xe6db99e5;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar23 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x1fa27cf8;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar7 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xc4ac5665;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar6 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf4292244;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar19 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x432aff97;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar13 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xab9423a7;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar18 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xfc93a039;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar12 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x655b59c3;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar17 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x8f0ccc92;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = (iVar11 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1)) - 0x100b83;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar16 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x85845dd1;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar10 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x6fa87e4f;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar23 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xfe2ce6e0;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar9 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xa3014314;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar22 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x4e0811a1;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar8 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf7537e82;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar21 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xbd3af235;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar7 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0x2ad7d2bb;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar20 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xeb86d391;
  *(uint *)(param_1 + 8) = uVar1 + *(int *)(param_1 + 8);
  *(uint *)(param_1 + 0xc) = uVar3 + uVar14 + (uVar4 >> 0xb | uVar4 * 0x200000);
  *(uint *)(param_1 + 0x10) = uVar3 + uVar5;
  *(uint *)(param_1 + 0x14) = uVar2 + uVar15;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

#### `FUN_1004e14f0` @ 0x1004e14f0

Calls: `FUN_1004e20a8`@0x1004e20a8 `FUN_1004d2554`@0x1004d2554 `___stack_chk_fail`@0x101148e40 

```c

undefined1 * FUN_1004e14f0(void)

{
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101e94480 == '\0') {
    FUN_1004e20a8(&DAT_101d911b0,2,auStack_428,0x400);
    FUN_1004d2554(auStack_428,0x400,"nuo_memory_report.txt");
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return &DAT_101e94480;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

#### `FUN_1004e17b4` @ 0x1004e17b4

Calls: `_task_info`@0x101149d28 `_mach_host_self`@0x101149410 `_host_page_size`@0x101149338 `_host_statistics`@0x101149344 

```c

kern_return_t FUN_1004e17b4(undefined8 *param_1,long *param_2)

{
  kern_return_t kVar1;
  mach_port_t host_priv;
  uint local_70 [3];
  undefined8 local_64;
  undefined8 local_30;
  mach_msg_type_number_t local_24;
  
  kVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    local_30._0_4_ = 0x28;
    kVar1 = _task_info(*(task_name_t *)PTR__mach_task_self__101444368,0x12,(task_info_t)local_70,
                       (mach_msg_type_number_t *)&local_30);
    if (kVar1 != 0) {
      local_64 = 0;
    }
    *param_1 = local_64;
  }
  if (param_2 != (long *)0x0) {
    host_priv = _mach_host_self();
    local_24 = 0xf;
    _host_page_size(host_priv,&local_30);
    kVar1 = _host_statistics(host_priv,2,(host_info_t)local_70,&local_24);
    *param_2 = CONCAT44(local_30._4_4_,(mach_msg_type_number_t)local_30) * (ulong)local_70[0];
  }
  return kVar1;
}


```

---

#### `FUN_1004e2550` @ 0x1004e2550

Calls: `_read`@0x101149860 

```c

void FUN_1004e2550(int *param_1,void *param_2,ulong param_3,int *param_4)

{
  int iVar1;
  ssize_t sVar2;
  
  sVar2 = _read(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (int *)0x0) {
    iVar1 = (uint)((int)sVar2 == 0) << 1;
    if ((int)sVar2 == -1) {
      iVar1 = 1;
    }
    *param_4 = iVar1;
  }
  return;
}


```

---

#### `FUN_1004e2594` @ 0x1004e2594

Calls: `_write`@0x101149db8 

```c

void FUN_1004e2594(int *param_1,void *param_2,ulong param_3,uint *param_4)

{
  ssize_t sVar1;
  
  sVar1 = _write(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((int)sVar1 == -1);
  }
  return;
}


```

---

#### `FUN_1004e2ae4` @ 0x1004e2ae4

Calls: `_strerror_r`@0x101149c44 `FUN_1004e2b98`@0x1004e2b98 `FUN_10001549c`@0x10001549c `___stack_chk_fail`@0x101148e40 

```c

void FUN_1004e2ae4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_240 [256];
  char local_140 [264];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_140[0xe8] = '\0';
  local_140[0xe9] = '\0';
  local_140[0xea] = '\0';
  local_140[0xeb] = '\0';
  local_140[0xec] = '\0';
  local_140[0xed] = '\0';
  local_140[0xee] = '\0';
  local_140[0xef] = '\0';
  local_140[0xe0] = '\0';
  local_140[0xe1] = '\0';
  local_140[0xe2] = '\0';
  local_140[0xe3] = '\0';
  local_140[0xe4] = '\0';
  local_140[0xe5] = '\0';
  local_140[0xe6] = '\0';
  local_140[0xe7] = '\0';
  local_140[0xf8] = '\0';
  local_140[0xf9] = '\0';
  local_140[0xfa] = '\0';
  local_140[0xfb] = '\0';
  local_140[0xfc] = '\0';
  local_140[0xfd] = '\0';
  local_140[0xfe] = '\0';
  local_140[0xff] = '\0';
  local_140[0xf0] = '\0';
  local_140[0xf1] = '\0';
  local_140[0xf2] = '\0';
  local_140[0xf3] = '\0';
  local_140[0xf4] = '\0';
  local_140[0xf5] = '\0';
  local_140[0xf6] = '\0';
  local_140[0xf7] = '\0';
  local_140[200] = '\0';
  local_140[0xc9] = '\0';
  local_140[0xca] = '\0';
  local_140[0xcb] = '\0';
  local_140[0xcc] = '\0';
  local_140[0xcd] = '\0';
  local_140[0xce] = '\0';
  local_140[0xcf] = '\0';
  local_140[0xc0] = '\0';
  local_140[0xc1] = '\0';
  local_140[0xc2] = '\0';
  local_140[0xc3] = '\0';
  local_140[0xc4] = '\0';
  local_140[0xc5] = '\0';
  local_140[0xc6] = '\0';
  local_140[199] = '\0';
  local_140[0xd8] = '\0';
  local_140[0xd9] = '\0';
  local_140[0xda] = '\0';
  local_140[0xdb] = '\0';
  local_140[0xdc] = '\0';
  local_140[0xdd] = '\0';
  local_140[0xde] = '\0';
  local_140[0xdf] = '\0';
  local_140[0xd0] = '\0';
  local_140[0xd1] = '\0';
  local_140[0xd2] = '\0';
  local_140[0xd3] = '\0';
  local_140[0xd4] = '\0';
  local_140[0xd5] = '\0';
  local_140[0xd6] = '\0';
  local_140[0xd7] = '\0';
  local_140[0xa8] = '\0';
  local_140[0xa9] = '\0';
  local_140[0xaa] = '\0';
  local_140[0xab] = '\0';
  local_140[0xac] = '\0';
  local_140[0xad] = '\0';
  local_140[0xae] = '\0';
  local_140[0xaf] = '\0';
  local_140[0xa0] = '\0';
  local_140[0xa1] = '\0';
  local_140[0xa2] = '\0';
  local_140[0xa3] = '\0';
  local_140[0xa4] = '\0';
  local_140[0xa5] = '\0';
  local_140[0xa6] = '\0';
  local_140[0xa7] = '\0';
  local_140[0xb8] = '\0';
  local_140[0xb9] = '\0';
  local_140[0xba] = '\0';
  local_140[0xbb] = '\0';
  local_140[0xbc] = '\0';
  local_140[0xbd] = '\0';
  local_140[0xbe] = '\0';
  local_140[0xbf] = '\0';
  local_140[0xb0] = '\0';
  local_140[0xb1] = '\0';
  local_140[0xb2] = '\0';
  local_140[0xb3] = '\0';
  local_140[0xb4] = '\0';
  local_140[0xb5] = '\0';
  local_140[0xb6] = '\0';
  local_140[0xb7] = '\0';
  local_140[0x88] = '\0';
  local_140[0x89] = '\0';
  local_140[0x8a] = '\0';
  local_140[0x8b] = '\0';
  local_140[0x8c] = '\0';
  local_140[0x8d] = '\0';
  local_140[0x8e] = '\0';
  local_140[0x8f] = '\0';
  local_140[0x80] = '\0';
  local_140[0x81] = '\0';
  local_140[0x82] = '\0';
  local_140[0x83] = '\0';
  local_140[0x84] = '\0';
  local_140[0x85] = '\0';
  local_140[0x86] = '\0';
  local_140[0x87] = '\0';
  local_140[0x98] = '\0';
  local_140[0x99] = '\0';
  local_140[0x9a] = '\0';
  local_140[0x9b] = '\0';
  local_140[0x9c] = '\0';
  local_140[0x9d] = '\0';
  local_140[0x9e] = '\0';
  local_140[0x9f] = '\0';
  local_140[0x90] = '\0';
  local_140[0x91] = '\0';
  local_140[0x92] = '\0';
  local_140[0x93] = '\0';
  local_140[0x94] = '\0';
  local_140[0x95] = '\0';
  local_140[0x96] = '\0';
  local_140[0x97] = '\0';
  local_140[0x68] = '\0';
  local_140[0x69] = '\0';
  local_140[0x6a] = '\0';
  local_140[0x6b] = '\0';
  local_140[0x6c] = '\0';
  local_140[0x6d] = '\0';
  local_140[0x6e] = '\0';
  local_140[0x6f] = '\0';
  local_140[0x60] = '\0';
  local_140[0x61] = '\0';
  local_140[0x62] = '\0';
  local_140[99] = '\0';
  local_140[100] = '\0';
  local_140[0x65] = '\0';
  local_140[0x66] = '\0';
  local_140[0x67] = '\0';
  local_140[0x78] = '\0';
  local_140[0x79] = '\0';
  local_140[0x7a] = '\0';
  local_140[0x7b] = '\0';
  local_140[0x7c] = '\0';
  local_140[0x7d] = '\0';
  local_140[0x7e] = '\0';
  local_140[0x7f] = '\0';
  local_140[0x70] = '\0';
  local_140[0x71] = '\0';
  local_140[0x72] = '\0';
  local_140[0x73] = '\0';
  local_140[0x74] = '\0';
  local_140[0x75] = '\0';
  local_140[0x76] = '\0';
  local_140[0x77] = '\0';
  local_140[0x48] = '\0';
  local_140[0x49] = '\0';
  local_140[0x4a] = '\0';
  local_140[0x4b] = '\0';
  local_140[0x4c] = '\0';
  local_140[0x4d] = '\0';
  local_140[0x4e] = '\0';
  local_140[0x4f] = '\0';
  local_140[0x40] = '\0';
  local_140[0x41] = '\0';
  local_140[0x42] = '\0';
  local_140[0x43] = '\0';
  local_140[0x44] = '\0';
  local_140[0x45] = '\0';
  local_140[0x46] = '\0';
  local_140[0x47] = '\0';
  local_140[0x58] = '\0';
  local_140[0x59] = '\0';
  local_140[0x5a] = '\0';
  local_140[0x5b] = '\0';
  local_140[0x5c] = '\0';
  local_140[0x5d] = '\0';
  local_140[0x5e] = '\0';
  local_140[0x5f] = '\0';
  local_140[0x50] = '\0';
  local_140[0x51] = '\0';
  local_140[0x52] = '\0';
  local_140[0x53] = '\0';
  local_140[0x54] = '\0';
  local_140[0x55] = '\0';
  local_140[0x56] = '\0';
  local_140[0x57] = '\0';
  local_140[0x28] = '\0';
  local_140[0x29] = '\0';
  local_140[0x2a] = '\0';
  local_140[0x2b] = '\0';
  local_140[0x2c] = '\0';
  local_140[0x2d] = '\0';
  local_140[0x2e] = '\0';
  local_140[0x2f] = '\0';
  local_140[0x20] = '\0';
  local_140[0x21] = '\0';
  local_140[0x22] = '\0';
  local_140[0x23] = '\0';
  local_140[0x24] = '\0';
  local_140[0x25] = '\0';
  local_140[0x26] = '\0';
  local_140[0x27] = '\0';
  local_140[0x38] = '\0';
  local_140[0x39] = '\0';
  local_140[0x3a] = '\0';
  local_140[0x3b] = '\0';
  local_140[0x3c] = '\0';
  local_140[0x3d] = '\0';
  local_140[0x3e] = '\0';
  local_140[0x3f] = '\0';
  local_140[0x30] = '\0';
  local_140[0x31] = '\0';
  local_140[0x32] = '\0';
  local_140[0x33] = '\0';
  local_140[0x34] = '\0';
  local_140[0x35] = '\0';
  local_140[0x36] = '\0';
  local_140[0x37] = '\0';
  local_140[8] = '\0';
  local_140[9] = '\0';
  local_140[10] = '\0';
  local_140[0xb] = '\0';
  local_140[0xc] = '\0';
  local_140[0xd] = '\0';
  local_140[0xe] = '\0';
  local_140[0xf] = '\0';
  local_140[0] = '\0';
  local_140[1] = '\0';
  local_140[2] = '\0';
  local_140[3] = '\0';
  local_140[4] = '\0';
  local_140[5] = '\0';
  local_140[6] = '\0';
  local_140[7] = '\0';
  local_140[0x18] = '\0';
  local_140[0x19] = '\0';
  local_140[0x1a] = '\0';
  local_140[0x1b] = '\0';
  local_140[0x1c] = '\0';
  local_140[0x1d] = '\0';
  local_140[0x1e] = '\0';
  local_140[0x1f] = '\0';
  local_140[0x10] = '\0';
  local_140[0x11] = '\0';
  local_140[0x12] = '\0';
  local_140[0x13] = '\0';
  local_140[0x14] = '\0';
  local_140[0x15] = '\0';
  local_140[0x16] = '\0';
  local_140[0x17] = '\0';
  _strerror_r(param_3,local_140,0x100);
  FUN_1004e2b98(auStack_240,"%s (error %d)");
  FUN_10001549c(param_1,auStack_240);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

#### `FUN_1004e2bc8` @ 0x1004e2bc8

Calls: `_select`@0x1011498cc 

```c

int FUN_1004e2bc8(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4)

{
  int iVar1;
  
  iVar1 = _select(param_1,param_2,param_3,param_4,(timeval *)0x0);
  return iVar1;
}


```

---

#### `FUN_1004e2bd0` @ 0x1004e2bd0

Calls: `_select`@0x1011498cc 

```c

int FUN_1004e2bd0(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4,ulong param_5,
                 __darwin_suseconds_t param_6)

{
  int iVar1;
  timeval local_20;
  
  local_20.tv_sec = param_5 & 0xffffffff;
  local_20.tv_usec = param_6;
  iVar1 = _select(param_1,param_2,param_3,param_4,&local_20);
  return iVar1;
}


```

---

#### `FUN_1004e2d3c` @ 0x1004e2d3c

Calls: `FUN_1004d25b8`@0x1004d25b8 

```c

undefined1 * FUN_1004e2d3c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x477] = param_1[0x477] & 0xfe;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x32f) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_1004d25b8(param_1 + 0x233,4,"US");
  FUN_1004d25b8(param_1 + 0x237,0x100,"en");
  *(undefined8 *)(param_1 + 0x33f) = 0;
  *(undefined8 *)(param_1 + 0x337) = 0;
  *(undefined8 *)(param_1 + 0x34f) = 0;
  *(undefined8 *)(param_1 + 0x347) = 0;
  *(undefined8 *)(param_1 + 0x35f) = 0;
  *(undefined8 *)(param_1 + 0x357) = 0;
  *(undefined8 *)(param_1 + 0x36f) = 0;
  *(undefined8 *)(param_1 + 0x367) = 0;
  return param_1;
}


```

---

#### `FUN_1004e34d8` @ 0x1004e34d8

```c

void FUN_1004e34d8(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *param_1;
  pbVar4 = param_2;
  if (uVar1 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(ushort *)(*(long *)(param_1 + 2) + lVar5);
      if ((0 < (int)param_3) && ((long)(param_2 + ((ulong)param_3 - (long)pbVar4)) < 5)) break;
      if (uVar2 < 0x80) {
        *pbVar4 = (byte)uVar2;
        lVar6 = 1;
      }
      else {
        bVar3 = (byte)uVar2 & 0x3f | 0x80;
        if (uVar2 < 0x800) {
          *pbVar4 = (byte)(uVar2 >> 6) | 0xc0;
          pbVar4[1] = bVar3;
          lVar6 = 2;
        }
        else {
          *pbVar4 = (byte)(uVar2 >> 0xc) | 0xe0;
          pbVar4[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
          pbVar4[2] = bVar3;
          lVar6 = 3;
        }
      }
      pbVar4 = pbVar4 + lVar6;
      lVar5 = lVar5 + 2;
    } while ((ulong)uVar1 * 2 - lVar5 != 0);
  }
  *pbVar4 = 0;
  return;
}


```

---

#### `FUN_1004e3a6c` @ 0x1004e3a6c

Calls: `FUN_1004e3198`@0x1004e3198 

```c

undefined8
FUN_1004e3a6c(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6,
             int *param_7,uint *param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  uVar8 = *param_1;
  if (param_2 < uVar8) {
    uVar7 = (ulong)param_2;
    puVar4 = (ushort *)(*(long *)(param_1 + 2) + (ulong)param_2 * 2);
    do {
      if ((*puVar4 == param_3) && ((((param_5 ^ 1) & 1) != 0 || uVar7 == 0 || (puVar4[-1] != 0x5c)))
         ) goto LAB_1004e3aec;
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar8 != uVar7);
    uVar7 = 0xffffffff;
LAB_1004e3aec:
    iVar6 = (int)uVar7;
    uVar1 = iVar6 + 1;
    if (uVar1 < uVar8) {
      lVar9 = 0;
      puVar4 = (ushort *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 2);
      do {
        if ((*puVar4 == param_4) &&
           ((((param_5 ^ 1) & 1) != 0 || (ulong)uVar1 - lVar9 == 0 || (puVar4[-1] != 0x5c)))) {
          if (iVar6 == -1) {
            return 0;
          }
          uVar8 = (uint)((ulong)uVar1 - lVar9);
          if ((param_6 != 0) && (FUN_1004e3198(param_6,-(int)lVar9,0), uVar1 < uVar8)) {
            uVar2 = -lVar9;
            puVar5 = (undefined2 *)(*(long *)(param_1 + 2) + (uVar7 & 0xffffffff) * 2);
            puVar3 = *(undefined2 **)(param_6 + 8);
            do {
              puVar5 = puVar5 + 1;
              *puVar3 = *puVar5;
              uVar1 = (int)uVar2 - 1;
              uVar2 = (ulong)uVar1;
              puVar3 = puVar3 + 1;
            } while (uVar1 != 0);
          }
          if (param_7 != (int *)0x0) {
            *param_7 = iVar6;
          }
          if (param_8 != (uint *)0x0) {
            *param_8 = uVar8;
          }
          return 1;
        }
        lVar9 = lVar9 + -1;
        puVar4 = puVar4 + 1;
      } while ((iVar6 - uVar8) + 1 != (int)lVar9);
    }
  }
  return 0;
}


```

---

#### `FUN_1004e4e84` @ 0x1004e4e84

Calls: `FUN_1004e4edc`@0x1004e4edc `_pthread_mutex_destroy`@0x1011497c4 

```c

long FUN_1004e4e84(long param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_1004e4edc(param_1);
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xe0));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x88));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x48));
  return param_1;
}


```

---

#### `thunk_FUN_1004e4e84` @ 0x1004e5084

```c

long thunk_FUN_1004e4e84(long param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_1004e4edc(param_1);
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xe0));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x88));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x48));
  return param_1;
}


```

---

#### `FUN_1004e7b14` @ 0x1004e7b14

```c

long FUN_1004e7b14(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (uint *)(param_1 + 0x80);
  do {
    uVar5 = *puVar1;
    if (uVar5 == 0xffffffff) {
      return 0;
    }
    while (*puVar1 == uVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 + 1 | uVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        uVar5 = uVar5 + 1 & (uVar5 ^ 0xffffffff);
        if (uVar5 < 2) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          do {
            uVar4 = uVar4 + 1;
            bVar3 = 3 < uVar5;
            uVar5 = uVar5 >> 1;
          } while (bVar3);
          if (uVar4 == 0x10) {
            return 0;
          }
        }
        return param_1 + (ulong)uVar4 * 8;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


```

---

#### `FUN_1004e8750` @ 0x1004e8750

Calls: `FUN_1004e87d0`@0x1004e87d0 `FUN_1004e883c`@0x1004e883c 

```c

void FUN_1004e8750(long param_1)

{
  long lVar1;
  
  FUN_1004e87d0();
  FUN_1004e883c(param_1);
  DAT_10184dc58 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184dc58 + 1;
  lVar1 = param_1 + (ulong)DAT_10184dc58 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = thunk_FUN_1004e8bec;
  *(code **)(lVar1 + 0xb8) = FUN_1004e936c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184dc58;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x400;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}


```

---

#### `FUN_1004e87d0` @ 0x1004e87d0

Calls: `FUN_1010a0944`@0x1010a0944 

```c

void FUN_1004e87d0(long param_1)

{
  long lVar1;
  
  DAT_10184ded0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184ded0 + 1;
  lVar1 = param_1 + (ulong)DAT_10184ded0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1004e931c;
  *(code **)(lVar1 + 0xb8) = FUN_1004e935c;
  *(uint *)(lVar1 + 0xa4) = DAT_10184ded0;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_1004e8964,0);
  return;
}


```

---

#### `FUN_1004e883c` @ 0x1004e883c

Calls: `FUN_1010a0944`@0x1010a0944 `FUN_1010a16d8`@0x1010a16d8 `FUN_1010a1d54`@0x1010a1d54 

```c

void FUN_1004e883c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_101867488 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_101867488 + 1;
  lVar2 = param_1 + (ulong)DAT_101867488 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_1004e9378;
  *(code **)(lVar2 + 0xb8) = FUN_1004e938c;
  *(uint *)(lVar2 + 0xa4) = DAT_101867488;
  *(undefined4 *)(lVar2 + 0xa8) = 0x30;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 100;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  FUN_1010a0944(param_1,0,FUN_1004e91f4,0);
  FUN_1010a0944(param_1,1,FUN_1004e9254,0);
  uVar1 = FUN_1010a16d8();
  FUN_1010a1d54(uVar1,PTR_DAT_101872df8,FUN_1004e927c);
  return;
}


```

---

#### `FUN_1004e8ca0` @ 0x1004e8ca0

Calls: `FUN_1010a1cc8`@0x1010a1cc8 `FUN_1010a1dcc`@0x1010a1dcc 

```c

void FUN_1004e8ca0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_38 = 0xbf800000bf800000;
  local_30 = 0xbf800000;
  local_2c = 0x3f8000003f800000;
  local_24 = 0x3f800000;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  uVar2 = FUN_1010a1cc8();
  uVar1 = FUN_1010a1dcc(uVar2,&local_38,param_3,param_1 + 0x30);
  *(undefined2 *)(param_1 + 0xb0) = uVar1;
  *(int *)(param_1 + 0xb4) = (int)param_3;
  return;
}


```

---

#### `FUN_1004e8e38` @ 0x1004e8e38

Calls: `FUN_1010a5260`@0x1010a5260 `FUN_1004e8f84`@0x1004e8f84 

```c

void FUN_1004e8e38(long param_1,float *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (((((*param_2 != *(float *)(param_1 + 0x70)) || (param_2[1] != *(float *)(param_1 + 0x74))) ||
       (param_2[2] != *(float *)(param_1 + 0x78))) ||
      (((param_2[3] != *(float *)(param_1 + 0x7c) || (param_2[4] != *(float *)(param_1 + 0x80))) ||
       ((param_2[5] != *(float *)(param_1 + 0x84) ||
        ((param_2[6] != *(float *)(param_1 + 0x88) || (param_2[7] != *(float *)(param_1 + 0x8c))))))
       ))) || ((param_2[8] != *(float *)(param_1 + 0x90) ||
               (((((param_2[9] != *(float *)(param_1 + 0x94) ||
                   (param_2[10] != *(float *)(param_1 + 0x98))) ||
                  (param_2[0xb] != *(float *)(param_1 + 0x9c))) ||
                 ((param_2[0xc] != *(float *)(param_1 + 0xa0) ||
                  (param_2[0xd] != *(float *)(param_1 + 0xa4))))) ||
                ((param_2[0xe] != *(float *)(param_1 + 0xa8) ||
                 (param_2[0xf] != *(float *)(param_1 + 0xac))))))))) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar8 = *(undefined8 *)(param_2 + 0xe);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    *(undefined8 *)(param_1 + 0xa8) = uVar8;
    *(undefined8 *)(param_1 + 0xa0) = uVar7;
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    iVar1 = FUN_1010a5260(param_1 + 0x58);
    if (iVar1 != 0) {
      FUN_1004e8f84(param_1);
      return;
    }
  }
  return;
}


```

---

#### `FUN_1004e94f4` @ 0x1004e94f4

```c

void FUN_1004e94f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x80))();
  return;
}


```

---

#### `FUN_1004e9504` @ 0x1004e9504

```c

void FUN_1004e9504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x88))();
  return;
}


```

---

#### `supportedInterfaceOrientations` @ 0x1004e9e08

```c

/* Function Stack Size: 0x10 bytes */

unsigned_long_long AppController::supportedInterfaceOrientations(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + (long)mAppOrient);
  return (ulong)(uVar1 << 1) & 2 | (ulong)uVar1 & 8 | (ulong)(uVar1 << 1) & 4 |
         (ulong)(uVar1 << 2) & 0x10;
}


```

---

#### `FUN_1004ebf00` @ 0x1004ebf00

Calls: `operator.new`@0x101148d8c `_memcpy`@0x10114944c `FUN_1004ebe78`@0x1004ebe78 `FUN_1004ebfc0`@0x1004ebfc0 

```c

undefined8 * FUN_1004ebf00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar2 = DAT_101d911a0;
    puVar3 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004ebfc0();
    }
  }
  else {
    uVar2 = (ulong)DAT_101d911a8._7_1_;
    puVar3 = &DAT_101d91198;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_1004ebf94;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[1] = uVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
LAB_1004ebf94:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  FUN_1004ebe78(param_1,param_2);
  return param_1;
}


```

---

#### `FUN_1004ecc14` @ 0x1004ecc14

Calls: `FUN_1004ecefc`@0x1004ecefc `FUN_1004e2bc8`@0x1004e2bc8 `FUN_1004e2bd0`@0x1004e2bd0 

```c

void FUN_1004ecc14(float param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  
  puVar6 = (undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *puVar6 = 0;
  puVar7 = (undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  lVar1 = param_2 + 0x148;
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined8 *)(param_2 + 0x188) = 0;
  *(undefined8 *)(param_2 + 0x1a0) = 0;
  *(undefined8 *)(param_2 + 0x198) = 0;
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  lVar9 = *(long *)(param_2 + 0x18);
  if (lVar9 == 0) {
    iVar8 = -1;
  }
  else {
    iVar8 = -1;
    do {
      while( true ) {
        uVar3 = *(uint *)(lVar9 + 0x4c8);
        piVar2 = (int *)(lVar9 + 8);
        lVar9 = *(long *)(lVar9 + 0x4d8);
        if ((uVar3 & 1) == 0) break;
        FUN_1004ecefc(puVar6,piVar2);
        if ((uVar3 >> 1 & 1) != 0) goto LAB_1004eccbc;
LAB_1004ecc9c:
        if ((uVar3 >> 2 & 1) == 0) goto LAB_1004ecca0;
LAB_1004ecccc:
        FUN_1004ecefc(lVar1,piVar2);
LAB_1004eccd8:
        iVar5 = *piVar2;
        if (*piVar2 <= iVar8) {
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        if (lVar9 == 0) goto LAB_1004eccf0;
      }
      if ((uVar3 >> 1 & 1) == 0) goto LAB_1004ecc9c;
LAB_1004eccbc:
      FUN_1004ecefc(puVar7,piVar2);
      if ((uVar3 >> 2 & 1) != 0) goto LAB_1004ecccc;
LAB_1004ecca0:
      if (uVar3 != 0) goto LAB_1004eccd8;
    } while (lVar9 != 0);
  }
LAB_1004eccf0:
  if (param_1 < 0.0) {
    FUN_1004e2bc8(iVar8 + 1,puVar6,puVar7,lVar1);
    return;
  }
  if (param_1 == 0.0) {
    iVar4 = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = (int)param_1;
    iVar5 = (int)((param_1 - (float)(int)param_1) * 1e+06) % 1000000;
  }
  FUN_1004e2bd0(iVar8 + 1,puVar6,puVar7,lVar1,iVar4,iVar5);
  return;
}


```

---

#### `FUN_1004edef0` @ 0x1004edef0

Calls: `FUN_1000e86c0`@0x1000e86c0 `FUN_1000e87dc`@0x1000e87dc `FUN_1000ee4ec`@0x1000ee4ec `operator=`@0x101148cb4 `operator.delete`@0x101148d74 `FUN_10014eb80`@0x10014eb80 `compare`@0x101148c18 `FUN_1004eed9c`@0x1004eed9c `FUN_1005220b4`@0x1005220b4 `FUN_1001339ec`@0x1001339ec `FUN_1002115d0`@0x1002115d0 

```c

string * FUN_1004edef0(string *param_1,long *param_2)

{
  string *psVar1;
  string sVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ushort *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  string *psVar18;
  void *local_b8 [2];
  char local_a1;
  void *local_a0;
  ulong local_98;
  byte local_89;
  char *local_88;
  ulong local_80;
  ulong local_78;
  undefined1 local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(string **)(param_1 + 0x30) = param_1 + 0x38;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(string **)(param_1 + 0x48) = param_1 + 0x50;
  psVar18 = param_1 + 0x60;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)psVar18 = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  psVar1 = param_1 + 0x140;
  sVar2 = param_1[0x142];
  *(undefined2 *)(param_1 + 0x140) = 0xffff;
  param_1[0x142] = SUB41((byte)sVar2 & 0xfff0,0);
  if ((int)param_2[0xb] != 0) {
    uVar15 = ((byte)sVar2 & 0xfff0) << 0x10 | 0xfffa;
    goto LAB_1004eead8;
  }
  lVar4 = FUN_1000e86c0(param_2,"httpStatus");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_1004ee004:
    param_1[0x142] = (string)((byte)param_1[0x142] & 0xfe);
  }
  else {
    local_78 = CONCAT44(local_78._4_4_,0x100005);
    local_88 = "httpStatus";
    local_80 = 10;
    lVar4 = FUN_1000e87dc(param_2,&local_88);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_1004ee004;
    local_78 = CONCAT44(local_78._4_4_,0x100005);
    local_88 = "httpStatus";
    local_80 = 10;
    piVar8 = (int *)FUN_1000e87dc(param_2,&local_88);
    iVar3 = *piVar8;
    param_1[0x142] = (string)((byte)param_1[0x142] & 0xfe | iVar3 == 0x130);
    if (iVar3 == 0x130) {
      return param_1;
    }
  }
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "tag";
  local_80 = 3;
  plVar5 = (long *)FUN_1000e87dc(param_2,&local_88);
  plVar6 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar6 = plVar5;
  }
  FUN_1000ee4ec(&local_88,plVar6);
  std::string::operator=(param_1 + 0x18,(string *)&local_88);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "time";
  local_80 = 4;
  plVar5 = (long *)FUN_1000e87dc(param_2,&local_88);
  plVar6 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar6 = plVar5;
  }
  FUN_1000ee4ec(&local_88,plVar6);
  std::string::operator=(param_1,(string *)&local_88);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  local_78._0_4_ = 0x100005;
  local_88 = "text";
  local_80 = 4;
  plVar6 = (long *)FUN_1000e87dc(param_2,&local_88);
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "code";
  local_80 = 4;
  puVar7 = (ushort *)FUN_1000e87dc(plVar6,&local_88);
  *(ushort *)psVar1 = *puVar7;
  *(undefined4 *)(param_1 + 0x138) = 4;
  FUN_10014eb80(psVar18,0);
  lVar4 = FUN_1000e86c0(plVar6,"quintPartyStateUpdate");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
    lVar4 = FUN_1000e86c0(plVar6,"quintPartyJoinRequest");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
      lVar4 = FUN_1000e86c0(plVar6,"quintPartyPlayerLeft");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
        lVar4 = FUN_1000e86c0(plVar6,"quintPartyMemberKick");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          lVar4 = FUN_1000e86c0(plVar6,"type");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
            local_78._0_4_ = 0x100005;
            local_88 = "type";
            local_80 = 4;
            uVar9 = FUN_1000e87dc(plVar6,&local_88);
            local_78 = CONCAT44(local_78._4_4_,0x100005);
            local_88 = "stateUpdate";
            local_80 = 0xb;
            iVar3 = FUN_1005220b4(uVar9,&local_88);
            if ((iVar3 != 0) &&
               (lVar4 = FUN_1000e86c0(plVar6,"states"),
               *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
              local_78 = CONCAT44(local_78._4_4_,0x100005);
              local_88 = "states";
              local_80 = 6;
              lVar4 = FUN_1000e87dc(plVar6,&local_88);
              if (*(int *)(lVar4 + 0x10) == 3) {
                local_78 = CONCAT44(local_78._4_4_,0x100005);
                local_88 = "states";
                local_80 = 6;
                plVar5 = (long *)FUN_1000e87dc(plVar6,&local_88);
                uVar16 = (ulong)*(uint *)(plVar5 + 1);
                if (*(uint *)(plVar5 + 1) != 0) {
                  lVar4 = *plVar5;
                  puVar10 = (undefined8 *)(lVar4 + 0x18);
                  do {
                    if ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0) {
                      puVar13 = puVar10;
                      if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                        puVar13 = (undefined8 *)*puVar10;
                      }
                      FUN_1000ee4ec(&local_88,puVar13);
                      if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
                        puVar13 = (undefined8 *)puVar10[-3];
                      }
                      else {
                        puVar13 = puVar10 + -3;
                      }
                      FUN_1000ee4ec(&local_a0,puVar13);
                      psVar18 = (string *)FUN_1001339ec(param_1 + 0x30,&local_a0);
                      std::string::operator=(psVar18,(string *)&local_88);
                      if ((char)local_89 < '\0') {
                        operator_delete(local_a0);
                      }
                      if ((long)local_78 < 0) {
                        operator_delete(local_88);
                      }
                      lVar4 = *plVar5;
                      uVar16 = (ulong)*(uint *)(plVar5 + 1);
                    }
                    puVar13 = puVar10 + 3;
                    puVar10 = puVar10 + 6;
                  } while (puVar13 != (undefined8 *)(lVar4 + uVar16 * 0x30));
                }
                if (*(int *)(param_1 + 0x40) != 0) {
                  param_1[0x142] = (string)((byte)param_1[0x142] | 8);
                }
              }
            }
            local_78 = CONCAT44(local_78._4_4_,0x100005);
            local_88 = "stateUpdate";
            local_80 = 0xb;
            iVar3 = FUN_1005220b4(uVar9,&local_88);
            if ((iVar3 != 0) &&
               (lVar4 = FUN_1000e86c0(plVar6,"counts"),
               *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
              local_78 = CONCAT44(local_78._4_4_,0x100005);
              local_88 = "counts";
              local_80 = 6;
              lVar4 = FUN_1000e87dc(plVar6,&local_88);
              if (*(int *)(lVar4 + 0x10) == 3) {
                local_78 = CONCAT44(local_78._4_4_,0x100005);
                local_88 = "counts";
                local_80 = 6;
                puVar10 = (undefined8 *)FUN_1000e87dc(plVar6,&local_88);
                uVar15 = *(uint *)(puVar10 + 1);
                if (uVar15 != 0) {
                  puVar17 = (undefined8 *)*puVar10;
                  puVar13 = puVar17;
                  do {
                    if ((*(byte *)((long)puVar13 + 0x29) >> 2 & 1) != 0) {
                      puVar17 = puVar13;
                      if ((*(byte *)((long)puVar13 + 0x12) >> 6 & 1) == 0) {
                        puVar17 = (undefined8 *)*puVar13;
                      }
                      uVar14 = *(undefined4 *)(puVar13 + 3);
                      FUN_1000ee4ec(&local_88,puVar17);
                      puVar11 = (undefined4 *)FUN_1002115d0(param_1 + 0x48,&local_88);
                      *puVar11 = uVar14;
                      if ((long)local_78 < 0) {
                        operator_delete(local_88);
                      }
                      puVar17 = (undefined8 *)*puVar10;
                      uVar15 = *(uint *)(puVar10 + 1);
                    }
                    puVar13 = puVar13 + 6;
                  } while (puVar13 != puVar17 + (ulong)uVar15 * 6);
                }
              }
            }
          }
          goto LAB_1004eea98;
        }
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
            else {
              puVar13 = puVar10 + -3;
            }
            FUN_1000ee4ec(&local_88,puVar13);
            uVar16 = local_80;
            if (-1 < (long)local_78) {
              uVar16 = local_78 >> 0x38;
            }
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

#### `FUN_1004ef254` @ 0x1004ef254

```c

void FUN_1004ef254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001004ef270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x80))(DAT_101e94738,param_1,param_2,param_3);
  return;
}


```

---

## Phase 4: Connection Object Users

### Caller of 1004ec13c: 0x100148ab0

Calls: `FUN_1004ebfcc`@0x1004ebfcc `FUN_1004ec0e8`@0x1004ec0e8 `FUN_1004e3004`@0x1004e3004 `_mach_absolute_time`@0x101149404 `_pthread_mutex_lock`@0x1004e44e0 `FUN_1004ec2f8`@0x1004ec2f8 `FUN_1004ec2c4`@0x1004ec2c4 `FUN_1004ec23c`@0x1004ec23c `_memcmp`@0x101149440 `FUN_1004ec13c`@0x1004ec13c `FUN_1004ec368`@0x1004ec368 `FUN_1004ec994`@0x1004ec994 `FUN_10014848c`@0x10014848c `_pthread_mutex_unlock`@0x1004e44e4 `FUN_100149214`@0x100149214 `FUN_1004d29c0`@0x1004d29c0 `FUN_1004ec0f8`@0x1004ec0f8 `FUN_1004ec088`@0x1004ec088 `___stack_chk_fail`@0x101148e40 

```c

undefined8 FUN_100148ab0(void)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint64_t uVar13;
  ulong uVar14;
  uint64_t uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ulong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  long local_788;
  undefined **local_780;
  char local_778;
  undefined1 auStack_770 [1728];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uVar20 = (ulong)DAT_101e3a93c;
  FUN_1004ebfcc(auStack_770);
  local_780 = &PTR_FUN_10145b1c8;
  local_778 = '\0';
  iVar11 = FUN_1004ec0e8(auStack_770,&local_780);
  if (iVar11 != 0) {
    FUN_1004e3004(&local_788);
    FUN_1004e3004(&local_788);
    if (DAT_101e3a938 != '\0') {
      dVar21 = (double)NEON_ucvtf(uVar20);
      do {
        uVar13 = _mach_absolute_time();
        lVar9 = local_788;
        lVar7 = DAT_101d91638;
        if (DAT_101e3c942 == 0) {
          uVar15 = uVar13;
          if (DAT_101e3c940 != 0) {
            uVar20 = 0;
            pbVar18 = (byte *)((long)&DAT_101e3a940 + 1);
            do {
              _pthread_mutex_lock((pthread_mutex_t *)&DAT_101e3a8b8);
              if (DAT_101e3c940 <= uVar20) {
LAB_100148e58:
                uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
                uVar15 = (uint64_t)uVar12;
                break;
              }
              local_778 = '\0';
              uVar14 = FUN_1004ec2f8(auStack_770);
              if (((uVar14 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
                FUN_1004ec23c(auStack_770);
              }
              puVar1 = &DAT_101e3a940 + uVar20 * 0x40;
              uVar15 = _mach_absolute_time();
              lVar10 = local_788;
              lVar8 = DAT_101d91638;
              bVar6 = (&DAT_101e3a957)[uVar20 * 0x200];
              uVar14 = (ulong)bVar6;
              sVar2 = (&DAT_101e3a948)[uVar20 * 0x40];
              if (-1 < (char)bVar6) {
                sVar2 = uVar14;
              }
              sVar3 = DAT_101d911a0;
              if (-1 < (char)DAT_101d911a8._7_1_) {
                sVar3 = (ulong)DAT_101d911a8._7_1_;
              }
              if (sVar2 == sVar3) {
                puVar19 = (undefined8 *)*puVar1;
                puVar4 = puVar19;
                if (-1 < (char)bVar6) {
                  puVar4 = puVar1;
                }
                pbVar16 = DAT_101d91198;
                if (-1 < (char)DAT_101d911a8._7_1_) {
                  pbVar16 = (byte *)&DAT_101d91198;
                }
                if ((char)bVar6 < '\0') {
                  if ((sVar2 != 0) && (iVar11 = _memcmp(puVar4,pbVar16,sVar2), iVar11 != 0)) {
                    iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                    goto joined_r0x000100148cf0;
                  }
                }
                else if (sVar2 != 0) {
                  pbVar17 = pbVar18;
                  if ((uint)*pbVar16 == ((uint)puVar19 & 0xff)) {
                    do {
                      uVar14 = uVar14 - 1;
                      pbVar16 = pbVar16 + 1;
                      if (uVar14 == 0) goto LAB_100148e34;
                      bVar5 = *pbVar17;
                      pbVar17 = pbVar17 + 1;
                    } while (bVar5 == *pbVar16);
                    goto LAB_100148cb8;
                  }
                  iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                  puVar19 = puVar1;
joined_r0x000100148cf0:
                  if (0 < iVar11) goto LAB_100148d14;
                }
              }
              else {
LAB_100148cb8:
                iVar11 = (&DAT_101e3a970)[uVar20 * 0x80];
                if (iVar11 < 1) goto LAB_100148e34;
                puVar19 = puVar1;
                if ((char)bVar6 < '\0') {
                  puVar19 = (undefined8 *)*puVar1;
                }
LAB_100148d14:
                iVar11 = FUN_1004ec13c(auStack_770,puVar19,iVar11,0,0);
                if (iVar11 != 0) {
                  dVar23 = (double)((uVar15 - lVar10) * lVar8) * 1e-09;
                  do {
                    if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                    FUN_1004ec368(0x40000000,0xbf800000,auStack_770);
                  } while ((local_778 == '\0') &&
                          (uVar15 = _mach_absolute_time(),
                          -2.0 <= dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09))
                  ;
                  uVar15 = _mach_absolute_time();
                  if ((dVar23 + (double)((uVar15 - local_788) * DAT_101d91638) * -1e-09 < -2.0) &&
                     (iVar11 = FUN_1004ec994(auStack_770), iVar11 != 0)) {
                    FUN_1004ec23c(auStack_770);
                  }
                  uVar15 = _mach_absolute_time();
                  dVar23 = -((double)((uVar15 - local_788) * DAT_101d91638) * -1e-09) - dVar23;
                  if (dVar23 <= 0.0) {
                    dVar23 = 0.0;
                  }
                  FUN_10014848c((float)(dVar23 * 1000.0),&DAT_101e3a978 + uVar20 * 0x200,puVar1,
                                (&DAT_101e3a974)[uVar20 * 0x200] != '\0' && (DAT_101e3c942 & 1) == 0
                               );
                  (&DAT_101e3ab3c)[uVar20 * 0x80] = (float)(dVar23 * 1000.0);
                  if (DAT_101e3a938 == '\0') goto LAB_100148e58;
                }
              }
LAB_100148e34:
              uVar12 = _pthread_mutex_unlock((pthread_mutex_t *)&DAT_101e3a8b8);
              uVar15 = (uint64_t)uVar12;
              uVar20 = uVar20 + 1;
              pbVar18 = pbVar18 + 0x200;
            } while (uVar20 < DAT_101e3c940);
          }
          FUN_100149214(uVar15);
        }
        uVar15 = _mach_absolute_time();
        if (DAT_101e3a938 != '\0') {
          dVar23 = (double)NEON_fminnm(dVar21 * 0.001 +
                                       ((double)((uVar13 - lVar9) * lVar7) -
                                       (double)((uVar15 - local_788) * DAT_101d91638)) * 1e-09,
                                       dVar21 * 0.001);
          if (dVar23 <= 0.0) {
            dVar23 = 0.0;
          }
          for (; 0.0 < dVar23; dVar23 = dVar23 + -0.1) {
            dVar22 = (double)NEON_fminnm(dVar23,0x3fb999999999999a);
            FUN_1004d29c0((int)(dVar22 * 1000.0));
            if (DAT_101e3a938 == '\0') break;
          }
        }
      } while (DAT_101e3a938 != '\0');
    }
    uVar20 = FUN_1004ec2f8(auStack_770);
    if (((uVar20 & 1) != 0) || (iVar11 = FUN_1004ec2c4(auStack_770), iVar11 != 0)) {
      FUN_1004ec23c(auStack_770);
    }
    FUN_1004ec0f8(auStack_770);
  }
  FUN_1004ec088(auStack_770);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_b0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


```

---

### Caller of 1004ec13c: 0x100147410

Calls: `FUN_10014e2cc`@0x10014e2cc `FUN_1004ec13c`@0x1004ec13c `operator.delete`@0x101148d74 

```c

undefined8 FUN_100147410(long param_1)

{
  undefined8 uVar1;
  undefined8 *******pppppppuVar2;
  undefined1 local_3d;
  int local_3c;
  undefined8 ******local_38;
  long local_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *******)0x0;
  local_30 = 0;
  local_28 = 0;
  local_3c = 0;
  local_3d = 1;
  FUN_10014e2cc(&local_38,&local_3c,&local_3d);
  if (local_28 < 0) {
    pppppppuVar2 = (undefined8 *******)local_38;
    if (local_30 == 0 || local_3c == 0) {
      uVar1 = 0;
      goto LAB_1001474ac;
    }
  }
  else {
    if (local_28._7_1_ == '\0' || local_3c == 0) {
      return 0;
    }
    pppppppuVar2 = &local_38;
  }
  uVar1 = FUN_1004ec13c(param_1 + 8,pppppppuVar2,local_3c,0,0);
  if (-1 < local_28) {
    return uVar1;
  }
LAB_1001474ac:
  operator_delete(local_38);
  return uVar1;
}


```

---

## Phase 5: Sibling Network Functions (0x1004eb000-0x1004f0000)

### `FUN_1004ec0e8` @ 0x1004ec0e8
Tags: OBJ_FIELDS 

```c

undefined8 FUN_1004ec0e8(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 0x6b8) = param_2;
  }
  return 1;
}


```

---

### `FUN_1004ec0f8` @ 0x1004ec0f8
Tags: OBJ_FIELDS 

Calls: `FUN_1004e262c`@0x1004e262c `FUN_1004ec720`@0x1004ec720 `FUN_1004e2508`@0x1004e2508 

```c

void FUN_1004ec0f8(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN_1004e262c(lVar1);
  if (iVar2 != 0) {
    FUN_1004ec720(lVar1);
    FUN_1004e2508(lVar1);
  }
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  return;
}


```

---

### `FUN_1004ec234` @ 0x1004ec234
Tags: OBJ_FIELDS 

```c

void FUN_1004ec234(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c8) = param_2;
  return;
}


```

---

### `FUN_1004ec23c` @ 0x1004ec23c
Tags: OBJ_FIELDS 

Calls: `FUN_1004ece98`@0x1004ece98 `FUN_1004ec720`@0x1004ec720 `FUN_1004e2508`@0x1004e2508 

```c

void FUN_1004ec23c(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x520);
  if (lVar4 != 0) {
    lVar2 = param_1 + 0x520;
    do {
      if (lVar4 == param_1) goto LAB_1004ec26c;
      lVar4 = *(long *)(lVar4 + 0x4d8);
    } while (lVar4 != 0);
  }
  lVar2 = param_1 + 0x508;
LAB_1004ec26c:
  FUN_1004ece98(lVar2,param_1);
  FUN_1004ec720(param_1 + 8);
  FUN_1004e2508(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  plVar3 = *(long **)(param_1 + 0x6b8);
  if ((plVar3 != (long *)0x0) && (iVar1 == 2)) {
                    /* WARNING: Could not recover jumptable at 0x0001004ec2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
    return;
  }
  return;
}


```

---

### `FUN_1004ec2c4` @ 0x1004ec2c4
Tags: OBJ_FIELDS 

Calls: `FUN_1004e262c`@0x1004e262c 

```c

ulong FUN_1004ec2c4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004e262c(param_1 + 8);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(param_1 + 0x4e8) == 1);
  }
  return uVar1;
}


```

---

### `FUN_1004ec2f8` @ 0x1004ec2f8
Tags: OBJ_FIELDS 

Calls: `FUN_1004e262c`@0x1004e262c 

```c

ulong FUN_1004ec2f8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_1004e262c(param_1 + 8);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(param_1 + 0x4e8) == 2);
  }
  return uVar1;
}


```

---

### `FUN_1004ec32c` @ 0x1004ec32c
Tags: OBJ_FIELDS 

Calls: `FUN_1004e262c`@0x1004e262c 

```c

bool FUN_1004ec32c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004e262c(param_1 + 8);
  if ((uVar2 & 1) == 0) {
    bVar1 = *(int *)(param_1 + 0x4e8) == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


```

---

### `FUN_1004ec5cc` @ 0x1004ec5cc
Tags: OBJ_FIELDS 

Calls: `FUN_1004e2a90`@0x1004e2a90 `FUN_1004ec23c`@0x1004ec23c 

```c

void FUN_1004ec5cc(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x6b8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x4e8) == 1) {
      iVar1 = FUN_1004e2a90(param_1 + 8);
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_1 + 0x6b8) + 0x28))(*(long **)(param_1 + 0x6b8),param_1);
LAB_1004ec6a8:
        FUN_1004ec23c(param_1);
        return;
      }
      *(undefined4 *)(param_1 + 0x4e8) = 2;
      iVar1 = (**(code **)(**(long **)(param_1 + 0x6b8) + 0x18))
                        (*(long **)(param_1 + 0x6b8),param_1);
      if (iVar1 == 0) goto LAB_1004ec6a8;
      plVar2 = *(long **)(param_1 + 0x6b8);
    }
    if (plVar2 != (long *)0x0 && (param_2 & 1) != 0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
      plVar2 = *(long **)(param_1 + 0x6b8);
    }
    if ((plVar2 != (long *)0x0) && ((param_2 >> 1 & 1) != 0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
      plVar2 = *(long **)(param_1 + 0x6b8);
    }
    if ((plVar2 != (long *)0x0) && ((param_2 >> 2 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001004ec698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
      return;
    }
  }
  return;
}


```

---

### `FUN_1004ec720` @ 0x1004ec720
Tags: WRITE 

Calls: `FUN_1004e2594`@0x1004e2594 

```c

undefined4 FUN_1004ec720(long param_1)

{
  undefined4 local_24;
  
  local_24 = 0;
  if (*(int *)(param_1 + 0x4bc) < 1) {
    local_24 = 0;
  }
  else {
    FUN_1004e2594(param_1,param_1 + 0xc,*(int *)(param_1 + 0x4bc),&local_24);
    *(undefined4 *)(param_1 + 0x4bc) = 0;
  }
  return local_24;
}


```

---

### `FUN_1004ec770` @ 0x1004ec770
Tags: WRITE 

Calls: `_memmove`@0x101149458 `FUN_1004ec720`@0x1004ec720 `FUN_1004e2594`@0x1004e2594 

```c

ulong FUN_1004ec770(long param_1,void *param_2,ulong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_3;
  if (*(int *)(param_1 + 0x4bc) + uVar3 < 0x4b0) {
    _memmove((void *)(param_1 + *(int *)(param_1 + 0x4bc) + 0xc),param_2,param_3 & 0xffffffff);
    *(uint *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + uVar3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    uVar1 = FUN_1004ec720(param_1);
    if (0x4af < uVar3) {
      uVar2 = FUN_1004e2594(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    _memmove((void *)(param_1 + *(int *)(param_1 + 0x4bc) + 0xc),param_2,param_3 & 0xffffffff);
    *(uint *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + uVar3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar1;
    }
  }
  return param_3;
}


```

---

### `FUN_1004ec8bc` @ 0x1004ec8bc
Tags: READ 

Calls: `FUN_1004e2550`@0x1004e2550 

```c

void FUN_1004ec8bc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004e2550(param_1 + 8);
  if (0 < iVar1) {
    *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + iVar1;
  }
  return;
}


```

---

### `FUN_1004ecc14` @ 0x1004ecc14
Tags: OBJ_FIELDS 0x86/88 

Calls: `FUN_1004ecefc`@0x1004ecefc `FUN_1004e2bc8`@0x1004e2bc8 `FUN_1004e2bd0`@0x1004e2bd0 

```c

void FUN_1004ecc14(float param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  
  puVar6 = (undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *puVar6 = 0;
  puVar7 = (undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *puVar7 = 0;
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined8 *)(param_2 + 0x1b8) = 0;
  lVar1 = param_2 + 0x148;
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined8 *)(param_2 + 0x188) = 0;
  *(undefined8 *)(param_2 + 0x1a0) = 0;
  *(undefined8 *)(param_2 + 0x198) = 0;
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  lVar9 = *(long *)(param_2 + 0x18);
  if (lVar9 == 0) {
    iVar8 = -1;
  }
  else {
    iVar8 = -1;
    do {
      while( true ) {
        uVar3 = *(uint *)(lVar9 + 0x4c8);
        piVar2 = (int *)(lVar9 + 8);
        lVar9 = *(long *)(lVar9 + 0x4d8);
        if ((uVar3 & 1) == 0) break;
        FUN_1004ecefc(puVar6,piVar2);
        if ((uVar3 >> 1 & 1) != 0) goto LAB_1004eccbc;
LAB_1004ecc9c:
        if ((uVar3 >> 2 & 1) == 0) goto LAB_1004ecca0;
LAB_1004ecccc:
        FUN_1004ecefc(lVar1,piVar2);
LAB_1004eccd8:
        iVar5 = *piVar2;
        if (*piVar2 <= iVar8) {
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        if (lVar9 == 0) goto LAB_1004eccf0;
      }
      if ((uVar3 >> 1 & 1) == 0) goto LAB_1004ecc9c;
LAB_1004eccbc:
      FUN_1004ecefc(puVar7,piVar2);
      if ((uVar3 >> 2 & 1) != 0) goto LAB_1004ecccc;
LAB_1004ecca0:
      if (uVar3 != 0) goto LAB_1004eccd8;
    } while (lVar9 != 0);
  }
LAB_1004eccf0:
  if (param_1 < 0.0) {
    FUN_1004e2bc8(iVar8 + 1,puVar6,puVar7,lVar1);
    return;
  }
  if (param_1 == 0.0) {
    iVar4 = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = (int)param_1;
    iVar5 = (int)((param_1 - (float)(int)param_1) * 1e+06) % 1000000;
  }
  FUN_1004e2bd0(iVar8 + 1,puVar6,puVar7,lVar1,iVar4,iVar5);
  return;
}


```

---

### `FUN_1004edef0` @ 0x1004edef0
Tags: 0x86/88 

Calls: `FUN_1000e86c0`@0x1000e86c0 `FUN_1000e87dc`@0x1000e87dc `FUN_1000ee4ec`@0x1000ee4ec `operator=`@0x101148cb4 `operator.delete`@0x101148d74 `FUN_10014eb80`@0x10014eb80 `compare`@0x101148c18 `FUN_1004eed9c`@0x1004eed9c `FUN_1005220b4`@0x1005220b4 `FUN_1001339ec`@0x1001339ec `FUN_1002115d0`@0x1002115d0 

```c

string * FUN_1004edef0(string *param_1,long *param_2)

{
  string *psVar1;
  string sVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ushort *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  string *psVar18;
  void *local_b8 [2];
  char local_a1;
  void *local_a0;
  ulong local_98;
  byte local_89;
  char *local_88;
  ulong local_80;
  ulong local_78;
  undefined1 local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(string **)(param_1 + 0x30) = param_1 + 0x38;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(string **)(param_1 + 0x48) = param_1 + 0x50;
  psVar18 = param_1 + 0x60;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)psVar18 = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  psVar1 = param_1 + 0x140;
  sVar2 = param_1[0x142];
  *(undefined2 *)(param_1 + 0x140) = 0xffff;
  param_1[0x142] = SUB41((byte)sVar2 & 0xfff0,0);
  if ((int)param_2[0xb] != 0) {
    uVar15 = ((byte)sVar2 & 0xfff0) << 0x10 | 0xfffa;
    goto LAB_1004eead8;
  }
  lVar4 = FUN_1000e86c0(param_2,"httpStatus");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar4) {
LAB_1004ee004:
    param_1[0x142] = (string)((byte)param_1[0x142] & 0xfe);
  }
  else {
    local_78 = CONCAT44(local_78._4_4_,0x100005);
    local_88 = "httpStatus";
    local_80 = 10;
    lVar4 = FUN_1000e87dc(param_2,&local_88);
    if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_1004ee004;
    local_78 = CONCAT44(local_78._4_4_,0x100005);
    local_88 = "httpStatus";
    local_80 = 10;
    piVar8 = (int *)FUN_1000e87dc(param_2,&local_88);
    iVar3 = *piVar8;
    param_1[0x142] = (string)((byte)param_1[0x142] & 0xfe | iVar3 == 0x130);
    if (iVar3 == 0x130) {
      return param_1;
    }
  }
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "tag";
  local_80 = 3;
  plVar5 = (long *)FUN_1000e87dc(param_2,&local_88);
  plVar6 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar6 = plVar5;
  }
  FUN_1000ee4ec(&local_88,plVar6);
  std::string::operator=(param_1 + 0x18,(string *)&local_88);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "time";
  local_80 = 4;
  plVar5 = (long *)FUN_1000e87dc(param_2,&local_88);
  plVar6 = (long *)*plVar5;
  if ((*(uint *)(plVar5 + 2) & 0x400000) != 0) {
    plVar6 = plVar5;
  }
  FUN_1000ee4ec(&local_88,plVar6);
  std::string::operator=(param_1,(string *)&local_88);
  if ((long)local_78 < 0) {
    operator_delete(local_88);
  }
  local_78._0_4_ = 0x100005;
  local_88 = "text";
  local_80 = 4;
  plVar6 = (long *)FUN_1000e87dc(param_2,&local_88);
  local_78 = CONCAT44(local_78._4_4_,0x100005);
  local_88 = "code";
  local_80 = 4;
  puVar7 = (ushort *)FUN_1000e87dc(plVar6,&local_88);
  *(ushort *)psVar1 = *puVar7;
  *(undefined4 *)(param_1 + 0x138) = 4;
  FUN_10014eb80(psVar18,0);
  lVar4 = FUN_1000e86c0(plVar6,"quintPartyStateUpdate");
  if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
    lVar4 = FUN_1000e86c0(plVar6,"quintPartyJoinRequest");
    if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
      lVar4 = FUN_1000e86c0(plVar6,"quintPartyPlayerLeft");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
        lVar4 = FUN_1000e86c0(plVar6,"quintPartyMemberKick");
        if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar4) {
          lVar4 = FUN_1000e86c0(plVar6,"type");
          if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4) {
            local_78._0_4_ = 0x100005;
            local_88 = "type";
            local_80 = 4;
            uVar9 = FUN_1000e87dc(plVar6,&local_88);
            local_78 = CONCAT44(local_78._4_4_,0x100005);
            local_88 = "stateUpdate";
            local_80 = 0xb;
            iVar3 = FUN_1005220b4(uVar9,&local_88);
            if ((iVar3 != 0) &&
               (lVar4 = FUN_1000e86c0(plVar6,"states"),
               *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
              local_78 = CONCAT44(local_78._4_4_,0x100005);
              local_88 = "states";
              local_80 = 6;
              lVar4 = FUN_1000e87dc(plVar6,&local_88);
              if (*(int *)(lVar4 + 0x10) == 3) {
                local_78 = CONCAT44(local_78._4_4_,0x100005);
                local_88 = "states";
                local_80 = 6;
                plVar5 = (long *)FUN_1000e87dc(plVar6,&local_88);
                uVar16 = (ulong)*(uint *)(plVar5 + 1);
                if (*(uint *)(plVar5 + 1) != 0) {
                  lVar4 = *plVar5;
                  puVar10 = (undefined8 *)(lVar4 + 0x18);
                  do {
                    if ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0) {
                      puVar13 = puVar10;
                      if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                        puVar13 = (undefined8 *)*puVar10;
                      }
                      FUN_1000ee4ec(&local_88,puVar13);
                      if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
                        puVar13 = (undefined8 *)puVar10[-3];
                      }
                      else {
                        puVar13 = puVar10 + -3;
                      }
                      FUN_1000ee4ec(&local_a0,puVar13);
                      psVar18 = (string *)FUN_1001339ec(param_1 + 0x30,&local_a0);
                      std::string::operator=(psVar18,(string *)&local_88);
                      if ((char)local_89 < '\0') {
                        operator_delete(local_a0);
                      }
                      if ((long)local_78 < 0) {
                        operator_delete(local_88);
                      }
                      lVar4 = *plVar5;
                      uVar16 = (ulong)*(uint *)(plVar5 + 1);
                    }
                    puVar13 = puVar10 + 3;
                    puVar10 = puVar10 + 6;
                  } while (puVar13 != (undefined8 *)(lVar4 + uVar16 * 0x30));
                }
                if (*(int *)(param_1 + 0x40) != 0) {
                  param_1[0x142] = (string)((byte)param_1[0x142] | 8);
                }
              }
            }
            local_78 = CONCAT44(local_78._4_4_,0x100005);
            local_88 = "stateUpdate";
            local_80 = 0xb;
            iVar3 = FUN_1005220b4(uVar9,&local_88);
            if ((iVar3 != 0) &&
               (lVar4 = FUN_1000e86c0(plVar6,"counts"),
               *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar4)) {
              local_78 = CONCAT44(local_78._4_4_,0x100005);
              local_88 = "counts";
              local_80 = 6;
              lVar4 = FUN_1000e87dc(plVar6,&local_88);
              if (*(int *)(lVar4 + 0x10) == 3) {
                local_78 = CONCAT44(local_78._4_4_,0x100005);
                local_88 = "counts";
                local_80 = 6;
                puVar10 = (undefined8 *)FUN_1000e87dc(plVar6,&local_88);
                uVar15 = *(uint *)(puVar10 + 1);
                if (uVar15 != 0) {
                  puVar17 = (undefined8 *)*puVar10;
                  puVar13 = puVar17;
                  do {
                    if ((*(byte *)((long)puVar13 + 0x29) >> 2 & 1) != 0) {
                      puVar17 = puVar13;
                      if ((*(byte *)((long)puVar13 + 0x12) >> 6 & 1) == 0) {
                        puVar17 = (undefined8 *)*puVar13;
                      }
                      uVar14 = *(undefined4 *)(puVar13 + 3);
                      FUN_1000ee4ec(&local_88,puVar17);
                      puVar11 = (undefined4 *)FUN_1002115d0(param_1 + 0x48,&local_88);
                      *puVar11 = uVar14;
                      if ((long)local_78 < 0) {
                        operator_delete(local_88);
                      }
                      puVar17 = (undefined8 *)*puVar10;
                      uVar15 = *(uint *)(puVar10 + 1);
                    }
                    puVar13 = puVar13 + 6;
                  } while (puVar13 != puVar17 + (ulong)uVar15 * 6);
                }
              }
            }
          }
          goto LAB_1004eea98;
        }
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
            else {
              puVar13 = puVar10 + -3;
            }
            FUN_1000ee4ec(&local_88,puVar13);
            uVar16 = local_80;
            if (-1 < (long)local_78) {
              uVar16 = local_78 >> 0x38;
            }
            if (((uVar16 == 0x14) &&
                (iVar3 = std::string::compare
                                   ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0f7),
                iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
              puVar13 = puVar10;
              if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                puVar13 = (undefined8 *)*puVar10;
              }
              FUN_1000ee4ec(&local_a0,puVar13);
              psVar18 = param_1 + 0x108;
LAB_1004eea44:
              std::string::operator=(psVar18,(string *)&local_a0);
              if ((char)local_89 < '\0') {
                operator_delete(local_a0);
              }
            }
            else {
              uVar16 = local_80;
              if (-1 < (long)local_78) {
                uVar16 = local_78 >> 0x38;
              }
              if (((uVar16 == 9) &&
                  (iVar3 = std::string::compare
                                     ((ulong)&local_88,0,(char *)0xffffffffffffffff,0x10141b0a9),
                  iVar3 == 0)) && ((*(uint *)(puVar10 + 2) >> 0x14 & 1) != 0)) {
                puVar13 = puVar10;
                if ((*(uint *)(puVar10 + 2) >> 0x16 & 1) == 0) {
                  puVar13 = (undefined8 *)*puVar10;
                }
                FUN_1000ee4ec(&local_a0,puVar13);
                psVar18 = param_1 + 0x120;
                goto LAB_1004eea44;
              }
            }
            if ((long)local_78 < 0) {
              operator_delete(local_88);
            }
            puVar13 = puVar10 + 3;
            puVar10 = puVar10 + 6;
          } while (puVar13 != (undefined8 *)(*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30));
        }
        uVar14 = 3;
      }
      else {
        if (*(uint *)(plVar6 + 1) != 0) {
          puVar10 = (undefined8 *)(*plVar6 + 0x18);
          do {
            if ((*(byte *)((long)puVar10 + -6) >> 6 & 1) == 0) {
              puVar13 = (undefined8 *)puVar10[-3];
            }
     
// ...truncated...
```

---

### `FUN_1004eef78` @ 0x1004eef78
Tags: OBJ_FIELDS 

```c

void FUN_1004eef78(void)

{
  if (DAT_101e94738 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004eef8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_101e94738 + 0x528))();
    return;
  }
  return;
}


```

---

### `FUN_1004ef20c` @ 0x1004ef20c
Tags: XOR 

Calls: `FUN_1004ef1b4`@0x1004ef1b4 

```c

uint FUN_1004ef20c(void)

{
  uint uVar1;
  
  uVar1 = FUN_1004ef1b4();
  return uVar1 ^ 1;
}


```

---

## Phase 6: Handshake Buffer Construction

## Phase 7: FUN_1004e25xx Family

### 0x1004e2508

Calls: `_close`@0x101148fb4 

```c

void FUN_1004e2508(int *param_1)

{
  if (*param_1 != -1) {
    _close();
    *param_1 = -1;
  }
  return;
}


```

---

Callers: `FUN_1004ec034`@0x1004ec034 `FUN_1004ec0f8`@0x1004ec0f8 `FUN_1004ec23c`@0x1004ec23c `FUN_1004ec13c`@0x1004ec13c `FUN_1004ec854`@0x1004ec854 

### 0x1004e253c

```c

undefined8 FUN_1004e253c(long param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  return 1;
}


```

---

Callers: `FUN_1004ec13c`@0x1004ec13c 

### 0x1004e2550

Calls: `_read`@0x101149860 

```c

void FUN_1004e2550(int *param_1,void *param_2,ulong param_3,int *param_4)

{
  int iVar1;
  ssize_t sVar2;
  
  sVar2 = _read(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (int *)0x0) {
    iVar1 = (uint)((int)sVar2 == 0) << 1;
    if ((int)sVar2 == -1) {
      iVar1 = 1;
    }
    *param_4 = iVar1;
  }
  return;
}


```

---

Callers: `FUN_1004ec8bc`@0x1004ec8bc 

### 0x1004e2594

Calls: `_write`@0x101149db8 

```c

void FUN_1004e2594(int *param_1,void *param_2,ulong param_3,uint *param_4)

{
  ssize_t sVar1;
  
  sVar1 = _write(*param_1,param_2,param_3 & 0xffffffff);
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((int)sVar1 == -1);
  }
  return;
}


```

---

Callers: `FUN_1004ec720`@0x1004ec720 `FUN_1004ec770`@0x1004ec770 

### 0x1004e25cc

Calls: `_fcntl`@0x101149164 

```c

undefined8 FUN_1004e25cc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = 0x10;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  param_1[1] = uVar1 & 0xffffffef | uVar2;
  if (((uVar1 & 1) != 0) && (*param_1 != -1)) {
    _fcntl(*param_1,4);
  }
  return 1;
}


```

---

Callers: `FUN_1004e264c`@0x1004e264c `FUN_1004ec6f0`@0x1004ec6f0 

### 0x1004e28fc

Calls: `_fcntl`@0x101149164 `_setsockopt`@0x101149980 

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_1004e28fc(ulong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    local_2c = 1;
    uVar2 = _setsockopt(param_2,0xffff,4,&local_2c,4);
    uVar1 = *(uint *)(param_1 + 4);
    uVar3 = (ulong)uVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    local_28 = *(undefined4 *)(param_1 + 8);
    uVar1 = _setsockopt(param_2,0xffff,0x1001,&local_28,4);
    uVar3 = (ulong)uVar1;
    uVar1 = *(uint *)(param_1 + 4);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    local_24 = 1;
    uVar1 = _setsockopt(param_2,6,1,&local_24,4);
    uVar3 = (ulong)uVar1;
    uVar1 = *(uint *)(param_1 + 4);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar1 = _fcntl(param_2,4);
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}


```

---

Callers: `FUN_1004e264c`@0x1004e264c 

