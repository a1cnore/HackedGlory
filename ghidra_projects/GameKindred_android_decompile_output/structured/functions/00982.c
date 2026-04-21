// functions/00982 — 134 functions
#include "libGameKindred.h"




undefined8 * FUN_00982088(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00d9b97c(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00982158(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_00cfc438(puVar6);
    *puVar6 = &PTR_FUN_02810e68;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




void FUN_00982234(void)

{
  FUN_0097c774(&DAT_02c7ef20);
  return;
}




void FUN_00982240(void)

{
  FUN_0097c864(&DAT_02c7ef20);
  return;
}




void FUN_0098224c(void)

{
  FUN_0097c954(&DAT_02c7ef20);
  return;
}




void FUN_00982258(void)

{
  FUN_0097ca28(&DAT_02c7ef20);
  return;
}




void FUN_00982264(void)

{
  FUN_0097cb18(&DAT_02c7ef20);
  return;
}




void FUN_00982270(void)

{
  FUN_0097cbe8(&DAT_02c7ef20);
  return;
}




void FUN_0098227c(void)

{
  FUN_0097ccc4(&DAT_02c7ef20);
  return;
}




void FUN_00982288(void)

{
  FUN_0097cda0(&DAT_02c7ef20);
  return;
}




void FUN_00982294(void)

{
  FUN_0097ce70(&DAT_02c7ef20);
  return;
}




void FUN_009822a0(void)

{
  FUN_0097cf4c(&DAT_02c7ef20);
  return;
}




void FUN_009822ac(void)

{
  FUN_0097d02c(&DAT_02c7ef20);
  return;
}




void FUN_009822b8(void)

{
  FUN_0097d0fc(&DAT_02c7ef20);
  return;
}




void FUN_009822c4(void)

{
  FUN_0097d1d8(&DAT_02c7ef20);
  return;
}




void FUN_009822d0(void)

{
  FUN_0097d2a8(&DAT_02c7ef20);
  return;
}




void FUN_009822dc(void)

{
  FUN_0097d378(&DAT_02c7ef20);
  return;
}




void FUN_009822e8(void)

{
  FUN_0097d454(&DAT_02c7ef20);
  return;
}




void FUN_009822f4(void)

{
  FUN_0097d524(&DAT_02c7ef20);
  return;
}




void FUN_00982300(void)

{
  FUN_0097d5f4(&DAT_02c7ef20);
  return;
}




void FUN_0098230c(void)

{
  FUN_0097d6e4(&DAT_02c7ef20);
  return;
}




void FUN_00982318(void)

{
  FUN_0097d7bc(&DAT_02c7ef20);
  return;
}




void FUN_00982324(void)

{
  FUN_0097d8ac(&DAT_02c7ef20);
  return;
}




void FUN_00982330(void)

{
  FUN_0097d99c(&DAT_02c7ef20);
  return;
}




void FUN_0098233c(void)

{
  FUN_0097da8c(&DAT_02c7ef20);
  return;
}




void FUN_00982348(void)

{
  FUN_0097db5c(&DAT_02c7ef20);
  return;
}




void FUN_00982354(void)

{
  FUN_00982814(&DAT_02c7ef20);
  return;
}




void FUN_00982360(void)

{
  FUN_00982814(&DAT_02c7ef20);
  return;
}




void FUN_0098236c(void)

{
  FUN_0097dc2c(&DAT_02c7ef20);
  return;
}




void FUN_00982378(void)

{
  FUN_0097dcfc(&DAT_02c7ef20);
  return;
}




void FUN_00982384(void)

{
  FUN_0097ddcc(&DAT_02c7ef20);
  return;
}




void FUN_00982390(void)

{
  FUN_0097debc(&DAT_02c7ef20);
  return;
}




void FUN_0098239c(void)

{
  FUN_0097df90(&DAT_02c7ef20);
  return;
}




void FUN_009823a8(void)

{
  FUN_0097e080(&DAT_02c7ef20);
  return;
}




void FUN_009823b4(void)

{
  FUN_0097e154(&DAT_02c7ef20);
  return;
}




void FUN_009823c0(void)

{
  FUN_0097e230(&DAT_02c7ef20);
  return;
}




void FUN_009823cc(void)

{
  FUN_0097e30c(&DAT_02c7ef20);
  return;
}




void FUN_009823d8(void)

{
  FUN_0097e3e8(&DAT_02c7ef20);
  return;
}




void FUN_009823e4(void)

{
  FUN_0097e4c0(&DAT_02c7ef20);
  return;
}




void FUN_009823f0(void)

{
  FUN_0097e5d8(&DAT_02c7ef20);
  return;
}




void FUN_009823fc(void)

{
  FUN_0097e6b4(&DAT_02c7ef20);
  return;
}




void FUN_00982408(void)

{
  FUN_0097e784(&DAT_02c7ef20);
  return;
}




void FUN_00982414(void)

{
  FUN_0097e858(&DAT_02c7ef20);
  return;
}




void FUN_00982420(void)

{
  FUN_0097e948(&DAT_02c7ef20);
  return;
}




void FUN_0098242c(void)

{
  FUN_0097ea38(&DAT_02c7ef20);
  return;
}




void FUN_00982438(void)

{
  FUN_0097eb14(&DAT_02c7ef20);
  return;
}




void FUN_00982444(void)

{
  FUN_0097ebe4(&DAT_02c7ef20);
  return;
}




void FUN_00982450(void)

{
  FUN_0097ecb0(&DAT_02c7ef20);
  return;
}




void FUN_0098245c(void)

{
  FUN_0097ed84(&DAT_02c7ef20);
  return;
}




void FUN_00982468(void)

{
  FUN_0097ee54(&DAT_02c7ef20);
  return;
}




void FUN_00982474(void)

{
  FUN_0097ef38(&DAT_02c7ef20);
  return;
}




void FUN_00982480(void)

{
  FUN_0097f014(&DAT_02c7ef20);
  return;
}




void FUN_0098248c(void)

{
  FUN_0097f0e4(&DAT_02c7ef20);
  return;
}




void FUN_00982498(void)

{
  FUN_0097f1c0(&DAT_02c7ef20);
  return;
}




void FUN_009824a4(void)

{
  FUN_0097f290(&DAT_02c7ef20);
  return;
}




void FUN_009824b0(void)

{
  FUN_0097f360(&DAT_02c7ef20);
  return;
}




void FUN_009824bc(void)

{
  FUN_0097f430(&DAT_02c7ef20);
  return;
}




void FUN_009824c8(void)

{
  FUN_00982920(&DAT_02c7ef20);
  return;
}




void FUN_009824d4(void)

{
  FUN_00982920(&DAT_02c7ef20);
  return;
}




void FUN_009824e0(void)

{
  FUN_0097f50c(&DAT_02c7ef20);
  return;
}




void FUN_009824ec(void)

{
  FUN_0097f5e0(&DAT_02c7ef20);
  return;
}




void FUN_009824f8(void)

{
  FUN_0097f6b0(&DAT_02c7ef20);
  return;
}




void FUN_00982504(void)

{
  FUN_0097f798(&DAT_02c7ef20);
  return;
}




void FUN_00982510(void)

{
  FUN_0097f874(&DAT_02c7ef20);
  return;
}




void FUN_0098251c(void)

{
  FUN_0097f950(&DAT_02c7ef20);
  return;
}




void FUN_00982528(void)

{
  FUN_0097fa40(&DAT_02c7ef20);
  return;
}




void FUN_00982534(void)

{
  FUN_0097fb28(&DAT_02c7ef20);
  return;
}




void FUN_00982540(void)

{
  FUN_00982a28(&DAT_02c7ef20);
  return;
}




void FUN_0098254c(void)

{
  FUN_00982a28(&DAT_02c7ef20);
  return;
}




void FUN_00982558(void)

{
  FUN_0097fc04(&DAT_02c7ef20);
  return;
}




void FUN_00982564(void)

{
  FUN_0097fcd4(&DAT_02c7ef20);
  return;
}




void FUN_00982570(void)

{
  FUN_0097fda8(&DAT_02c7ef20);
  return;
}




void FUN_0098257c(void)

{
  FUN_0097fe78(&DAT_02c7ef20);
  return;
}




void FUN_00982588(void)

{
  FUN_0097ff9c(&DAT_02c7ef20);
  return;
}




void FUN_00982594(void)

{
  FUN_0098008c(&DAT_02c7ef20);
  return;
}




void FUN_009825a0(void)

{
  FUN_0098017c(&DAT_02c7ef20);
  return;
}




void FUN_009825ac(void)

{
  FUN_0098026c(&DAT_02c7ef20);
  return;
}




void FUN_009825b8(void)

{
  FUN_0098035c(&DAT_02c7ef20);
  return;
}




void FUN_009825c4(void)

{
  FUN_00982b00(&DAT_02c7ef20);
  return;
}




void FUN_009825d0(void)

{
  FUN_00982b00(&DAT_02c7ef20);
  return;
}




void FUN_009825dc(void)

{
  FUN_00980434(&DAT_02c7ef20);
  return;
}




void FUN_009825e8(void)

{
  FUN_0098050c(&DAT_02c7ef20);
  return;
}




void FUN_009825f4(void)

{
  FUN_00982c08(&DAT_02c7ef20);
  return;
}




void FUN_00982600(void)

{
  FUN_00982c08(&DAT_02c7ef20);
  return;
}




void FUN_0098260c(void)

{
  FUN_009805fc(&DAT_02c7ef20);
  return;
}




void FUN_00982618(void)

{
  FUN_009806d4(&DAT_02c7ef20);
  return;
}




void FUN_00982624(void)

{
  FUN_00982d08(&DAT_02c7ef20);
  return;
}




void FUN_00982630(void)

{
  FUN_00982d08(&DAT_02c7ef20);
  return;
}




void FUN_0098263c(void)

{
  FUN_00982e14(&DAT_02c7ef20);
  return;
}




void FUN_00982648(void)

{
  FUN_00982e14(&DAT_02c7ef20);
  return;
}




void FUN_00982654(void)

{
  FUN_00982f20(&DAT_02c7ef20);
  return;
}




void FUN_00982660(void)

{
  FUN_00982f20(&DAT_02c7ef20);
  return;
}




void FUN_0098266c(void)

{
  FUN_009807ac(&DAT_02c7ef20);
  return;
}




void FUN_00982678(void)

{
  FUN_0098087c(&DAT_02c7ef20);
  return;
}




void FUN_00982684(void)

{
  FUN_0098094c(&DAT_02c7ef20);
  return;
}




void FUN_00982690(void)

{
  FUN_00980a1c(&DAT_02c7ef20);
  return;
}




void FUN_0098269c(void)

{
  FUN_00980af4(&DAT_02c7ef20);
  return;
}




void FUN_009826a8(void)

{
  FUN_00980bcc(&DAT_02c7ef20);
  return;
}




void FUN_009826b4(void)

{
  FUN_00980cc8(&DAT_02c7ef20);
  return;
}




void FUN_009826c0(void)

{
  FUN_00980dc0(&DAT_02c7ef20);
  return;
}




void FUN_009826cc(void)

{
  FUN_00980e90(&DAT_02c7ef20);
  return;
}




void FUN_009826d8(void)

{
  FUN_00980f68(&DAT_02c7ef20);
  return;
}




void FUN_009826e4(void)

{
  FUN_00981040(&DAT_02c7ef20);
  return;
}




void FUN_009826f0(void)

{
  FUN_00981118(&DAT_02c7ef20);
  return;
}




void FUN_009826fc(void)

{
  FUN_009811e8(&DAT_02c7ef20);
  return;
}




void FUN_00982708(void)

{
  FUN_009812c4(&DAT_02c7ef20);
  return;
}




void FUN_00982714(void)

{
  FUN_00981394(&DAT_02c7ef20);
  return;
}




void FUN_00982720(void)

{
  FUN_00981470(&DAT_02c7ef20);
  return;
}




void FUN_0098272c(void)

{
  FUN_00983028(&DAT_02c7ef20);
  return;
}




void FUN_00982738(void)

{
  FUN_00983028(&DAT_02c7ef20);
  return;
}




void FUN_00982744(void)

{
  FUN_0098154c(&DAT_02c7ef20);
  return;
}




void FUN_00982750(void)

{
  FUN_00981624(&DAT_02c7ef20);
  return;
}




void FUN_0098275c(void)

{
  FUN_00981720(&DAT_02c7ef20);
  return;
}




void FUN_00982768(void)

{
  FUN_009817f0(&DAT_02c7ef20);
  return;
}




void FUN_00982774(void)

{
  FUN_009818e0(&DAT_02c7ef20);
  return;
}




void FUN_00982780(void)

{
  FUN_009819b0(&DAT_02c7ef20);
  return;
}




void FUN_0098278c(void)

{
  FUN_00981a80(&DAT_02c7ef20);
  return;
}




void FUN_00982798(void)

{
  FUN_00981b5c(&DAT_02c7ef20);
  return;
}




void FUN_009827a4(void)

{
  FUN_00981c2c(&DAT_02c7ef20);
  return;
}




void FUN_009827b0(void)

{
  FUN_00981cfc(&DAT_02c7ef20);
  return;
}




void FUN_009827bc(void)

{
  FUN_00981dd8(&DAT_02c7ef20);
  return;
}




void FUN_009827c8(void)

{
  FUN_00981ec8(&DAT_02c7ef20);
  return;
}




void FUN_009827d4(void)

{
  FUN_00981fb8(&DAT_02c7ef20);
  return;
}




void FUN_009827e0(void)

{
  FUN_00982088(&DAT_02c7ef20);
  return;
}




void FUN_009827ec(void)

{
  FUN_00982158(&DAT_02c7ef20);
  return;
}




void FUN_009827f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bdd80;
  DAT_02e3ef50 = 0;
  return;
}




undefined8 * FUN_00982814(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    FUN_00cfc438(puVar6);
    puVar6[2] = &PTR_FUN_027bdda0;
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027ce190;
    FUN_00a7dc28(puVar6 + 3);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00982920(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    puVar6[2] = &PTR_FUN_027bddd0;
    *puVar6 = &PTR_FUN_027ce058;
    FUN_00a7d574(puVar6 + 3);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00982a28(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    FUN_00a808cc(puVar6);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00982b00(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    FUN_00cfc438(puVar6);
    puVar6[2] = &PTR_FUN_027bddf0;
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027cdfe8;
    FUN_00a7cec4(puVar6 + 3);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}




undefined8 * FUN_00982c08(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *__s;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    __s = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    memset(__s,0,0xd0);
    FUN_00cfc438(__s);
    __s[2] = &PTR_FUN_027bde30;
    *__s = &PTR_FUN_027cf0e0;
    FUN_00a811bc(__s + 3);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




undefined8 * FUN_00982d08(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *__s;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    __s = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    memset(__s,0,0x60);
    FUN_00cfc438(__s);
    __s[2] = &PTR_FUN_027bdfc0;
    *__s = &PTR_thunk_FUN_00cfc44c_027bdf50;
    FUN_00a84230(__s + 3);
    *(byte *)(__s + 0xb) = *(byte *)(__s + 0xb) & 0xfe;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




undefined8 * FUN_00982e14(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *__s;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    __s = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    __s = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    memset(__s,0,0x60);
    FUN_00cfc438(__s);
    __s[2] = &PTR_FUN_027bdfc0;
    *__s = &PTR_thunk_FUN_00cfc44c_027be010;
    FUN_00a84448(__s + 3);
    *(byte *)(__s + 0xb) = *(byte *)(__s + 0xb) & 0xfe;
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return __s;
}




undefined8 * FUN_00982f20(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1);
  uVar4 = *puVar2;
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar5 = param_1 + (ulong)uVar4 * 0xe0;
    if (uVar4 == *(ushort *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 2)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *(ushort *)(lVar5 + 0x10);
    }
    *puVar2 = uVar4;
    puVar6 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) =
         *(int *)((long)&__DT_RELA[0x3d4e].r_offset + param_1 + 4) + 1;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    FUN_00cfc438(puVar6);
    puVar6[2] = &PTR_FUN_027be080;
    *puVar6 = &PTR_thunk_FUN_00cfc44c_027cf400;
    FUN_00a84df0(puVar6 + 3);
    uVar1 = *(int *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) + 1;
    *(uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1) = uVar1;
    puVar3 = (uint *)((long)&__DT_RELA[0x3d4e].r_addend + param_1 + 4);
    if (*puVar3 < uVar1) {
      *puVar3 = uVar1;
    }
  }
  return puVar6;
}

