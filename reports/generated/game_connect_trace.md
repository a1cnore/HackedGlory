# Game Server Connection Trace

## Step 1: 'host' String References

- `FUN_10051abec` @ `0x10051abec` (ref addr: `0x1013d9e32`, from: `0x10051b6a4`)
- `FUN_100109c74` @ `0x100109c74` (ref addr: `0x1013d9e32`, from: `0x100109cd8`)
- `FUN_100109d70` @ `0x100109d70` (ref addr: `0x1013d9e32`, from: `0x100109dc4`)
- `FUN_1004f84b4` @ `0x1004f84b4` (ref addr: `0x1013d9e32`, from: `0x1004f8620`)
- `FUN_100505520` @ `0x100505520` (ref addr: `0x1013d9e32`, from: `0x1005060f0`)

## Step 2: Functions Reading 'host' from JSON

### `FUN_100109c74` @ `0x100109c74`

Reads host: true, port: true, has network: true

```c

void FUN_100109c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = FUN_100134110();
  if (*(char *)(lVar1 + 8) == '\0') {
    puStack_48 = &local_40;
    local_40 = 0;
    uStack_38 = 0;
    local_50 = "scheme";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b124(uVar2,param_1);
    local_50 = "host";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b124(uVar2,param_2);
    local_50 = "port";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,param_3);
    local_50 = "connectionTimeMS";
    uVar2 = FUN_100101fac(&puStack_48,&local_50);
    FUN_10052b17c(uVar2,param_4);
    FUN_10052b20c("Chat_ConnectionTime",&puStack_48);
    FUN_10052b1e0("Chat_ConnectionTime",&puStack_48);
    FUN_10010a220(&puStack_48,local_40);
  }
  return;
}


```

---

### `FUN_100109d70` @ `0x100109d70`

Reads host: true, port: true, has network: false

```c

void FUN_100109d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puStack_48 = &local_40;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = "scheme";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_1);
  local_50 = "host";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b124(uVar1,param_2);
  local_50 = "port";
  uVar1 = FUN_100101fac(&puStack_48,&local_50);
  FUN_10052b17c(uVar1,param_3);
  FUN_10052b20c("Chat_ConnectionFailure",&puStack_48);
  FUN_10052b1e0("Chat_ConnectionFailure",&puStack_48);
  FUN_10010a220(&puStack_48,local_40);
  return;
}


```

---

## Step 3: Handshake Construction Search

String `%s:%d` @ `0x10142cdae` referenced by `FUN_101105744` @ `0x101105744`
String `%s:%d` @ `0x101433e8e` referenced by `FUN_1004f1c10` @ `0x1004f1c10`
String `%s:%d` @ `0x101433e8e` referenced by `FUN_1010d15dc` @ `0x1010d15dc`
String `%s:%hu` @ `0x10142bf6a` referenced by `FUN_1010ff44c` @ `0x1010ff44c`

## Step 4: Match State Handler Chain

### `FUN_100102ec8` @ `0x100102ec8`
Called by: `FUN_100033210` @ `0x100033210` 

### `FUN_100103048` @ `0x100103048`
Called by: `FUN_100033210` @ `0x100033210` 

### `FUN_1001030fc` @ `0x1001030fc`
Called by: `FUN_100116f88` @ `0x100116f88` 

#### Caller: `FUN_100116f88` @ `0x100116f88`
host=false port=true connect=false buf=false

```c

void FUN_100116f88(void)

{
  char *****pppppcVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 *puVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  char *pcVar25;
  ulong uVar26;
  int *piVar27;
  byte bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  char *local_228;
  char ****local_220 [2];
  char local_209;
  char ****local_208 [2];
  char local_1f1;
  char ****local_1f0 [2];
  char local_1d9;
  char ****local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130 [16];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = FUN_100119128();
  lVar19 = 0;
  do {
    iVar8 = *(int *)((long)&DAT_101dc7734 + lVar19);
    iVar6 = FUN_10034ee90();
    if (iVar8 == iVar6) {
      piVar27 = (int *)((long)&DAT_101dc7734 + lVar19);
      goto LAB_100117004;
    }
    lVar19 = lVar19 + 0x70;
  } while (lVar19 != 0x700);
  piVar27 = (int *)0x0;
LAB_100117004:
  lVar19 = FUN_100119188();
  if (((lVar11 == 0) || (piVar27 == (int *)0x0)) || (lVar19 == 0)) goto LAB_100118d58;
  puStack_148 = &local_140;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  local_160 = &local_158;
  local_158 = 0;
  puVar12 = (undefined8 *)FUN_100465e48(lVar11);
  if (puVar12 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_10032bbf4(*puVar12);
  }
  thunk_FUN_10045cc04(auStack_1c0);
  FUN_1003a2644(auStack_1c0,1);
  FUN_1003c3608(auStack_1c0,1);
  FUN_1003bc030(auStack_1c0,0);
  uVar7 = FUN_1003a6ce4(auStack_1c0,local_130,0x10,0);
  fVar29 = (float)FUN_100032228();
  fVar29 = fVar29 * 0.016666668;
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  local_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar15,uVar14);
  local_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  local_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  local_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  local_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  local_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (puVar12 == (undefined8 *)0x0) {
    pcVar25 = "";
  }
  else {
    pcVar25 = (char *)*puVar12;
  }
  local_1d8 = (char ****)0x1013d25b2;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  if (lVar13 == 0) {
    uVar39 = 0xffffffff;
  }
  else {
    uVar39 = *(undefined4 *)(lVar13 + 0x20);
  }
  local_1d8 = (char ****)0x1013db33b;
  uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b17c(uVar14,uVar39);
  fVar34 = (float)DAT_101dc82bc;
  local_1d8 = (char ****)0x1013db346;
  FUN_100101fac(&puStack_148,&local_1d8);
  FUN_10052b18c(fVar34);
  switch(piVar27[2]) {
  case 0:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "support";
    break;
  case 1:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "jungler";
    break;
  case 2:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "top";
    break;
  case 3:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "mid";
    break;
  case 4:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "bot";
    break;
  case 5:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "laner";
    break;
  default:
    local_1d8 = (char ****)0x1013db022;
    uVar14 = FUN_100101fac(&puStack_148,&local_1d8);
    pcVar25 = "unset";
  }
  FUN_10052b124(uVar14,pcVar25);
  FUN_1003467f8();
  uVar14 = FUN_10034cd20();
  local_1d8 = (char ****)0x1013d9aab;
  uVar15 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar15,uVar14);
  local_1d8 = (char ****)0x1013db333;
  FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b18c(fVar29);
  uVar2 = DAT_101dc82b4;
  local_1d8 = (char ****)0x1013da974;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b17c(uVar14,uVar2);
  bVar5 = DAT_101dc82b8 == 2;
  local_1d8 = (char ****)0x1013dabcc;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b17c(uVar14,bVar5);
  iVar8 = FUN_1004eef10();
  if (iVar8 == 0) {
    pcVar25 = "";
  }
  else {
    lVar16 = FUN_1004f0338();
    pcVar25 = (char *)(lVar16 + 0xa0);
    if (*(char *)(lVar16 + 0xb7) < '\0') {
      pcVar25 = *(char **)pcVar25;
    }
  }
  local_1d8 = (char ****)0x1013da791;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar14,pcVar25);
  uVar15 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + 0x20);
  local_1d8 = (char ****)0x1013d25c4;
  uVar14 = FUN_100101fac(&local_160,&local_1d8);
  FUN_10052b124(uVar14,uVar15);
  if (pu
// ...truncated...
```

---

### `FUN_100102480` @ `0x100102480`
Called by: `FUN_1001fff28` @ `0x1001fff28` `FUN_1002005d8` @ `0x1002005d8` 

### `FUN_100268944` @ `0x100268944`
Called by: 

