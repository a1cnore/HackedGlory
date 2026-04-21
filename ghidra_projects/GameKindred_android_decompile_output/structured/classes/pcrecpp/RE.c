// classes/pcrecpp/RE — 24 functions
#include "libGameKindred.h"




void __thiscall pcrecpp::RE::Init(RE *this,basic_string *param_1,RE_Options *param_2)

{
  Init(this,param_1,param_2);
  return;
}




void __thiscall pcrecpp::RE::Cleanup(RE *this)

{
  Cleanup(this);
  return;
}




void __thiscall pcrecpp::RE::Compile(void)

{
  Compile();
  return;
}




void __thiscall pcrecpp::RE::TryMatch(void)

{
  TryMatch();
  return;
}




void __thiscall pcrecpp::RE::RE(RE *this,char *param_1)

{
  RE(this,param_1);
  return;
}




void __thiscall pcrecpp::RE::DoMatchImpl(void)

{
  DoMatchImpl();
  return;
}




/* pcrecpp::RE::RE(char const*) */

void __thiscall pcrecpp::RE::RE(RE *this,char *param_1)

{
  long lVar1;
  size_t __n;
  void *__dest;
  ulong uVar2;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00f1fd7c;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_60 = uVar2 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,param_1,__n);
LAB_00f1fd7c:
  *(undefined1 *)((long)__dest + __n) = 0;
  Init(this,(basic_string *)&local_60,(RE_Options *)0x0);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* pcrecpp::RE::Init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, pcrecpp::RE_Options const*) */

void __thiscall pcrecpp::RE::Init(RE *this,basic_string *param_1,RE_Options *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_008fce60();
  if (param_2 == (RE_Options *)0x0) {
    *(undefined4 *)(this + 0x20) = DAT_03219050;
    uVar2 = DAT_03219048;
  }
  else {
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined8 *)param_2;
  }
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 **)(this + 0x38) = &DAT_03219030;
  *(undefined8 *)(this + 0x28) = 0;
  lVar1 = Compile(this,0);
  *(long *)(this + 0x30) = lVar1;
  if (lVar1 != 0) {
    uVar2 = Compile(this,2);
    *(undefined8 *)(this + 0x28) = uVar2;
  }
  return;
}




/* pcrecpp::RE::Compile(pcrecpp::RE::Anchor) */

long __thiscall pcrecpp::RE::Compile(RE *this,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  RE *pRVar4;
  ulong *puVar5;
  size_t __n;
  void *pvVar6;
  ulong uVar7;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined1 auStack_64 [4];
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined4 *)(this + 0x20);
  if (param_2 == 2) {
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0x3a3f2806;
    uVar7 = *(ulong *)(this + 8);
    pRVar4 = *(RE **)(this + 0x10);
    if (((byte)*this & 1) == 0) {
      pRVar4 = this + 1;
      uVar7 = (ulong)((byte)*this >> 1);
    }
    FUN_0090de84(&local_80,pRVar4,uVar7);
    FUN_0090de84(&local_80,&DAT_01e6335c,3);
    pvVar6 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar6 = local_70;
    }
    lVar3 = pcre_compile(pvVar6,uVar1,&local_60,auStack_64,0);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  else {
    if (((byte)*this & 1) == 0) {
      pRVar4 = this + 1;
    }
    else {
      pRVar4 = *(RE **)(this + 0x10);
    }
    lVar3 = pcre_compile(pRVar4,uVar1,&local_60,auStack_64,0);
  }
  if ((lVar3 != 0) || (*(undefined8 **)(this + 0x38) != &DAT_03219030)) goto LAB_01b14a68;
  puVar5 = operator_new(0x18);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  __n = strlen(local_60);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    pvVar6 = (void *)((long)puVar5 + 1);
    *(char *)puVar5 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_01b14a50;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar7);
    puVar5[1] = __n;
    puVar5[2] = (ulong)pvVar6;
    *puVar5 = uVar7 | 1;
LAB_01b14a50:
    memcpy(pvVar6,local_60,__n);
  }
  *(undefined1 *)((long)pvVar6 + __n) = 0;
  *(ulong **)(this + 0x38) = puVar5;
LAB_01b14a68:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* pcrecpp::RE::Cleanup() */

void __thiscall pcrecpp::RE::Cleanup(RE *this)

{
  byte *pbVar1;
  
  if (*(long *)(this + 0x28) != 0) {
    (*(code *)pcre_free)();
  }
  if (*(long *)(this + 0x30) != 0) {
    (*(code *)pcre_free)();
  }
  pbVar1 = *(byte **)(this + 0x38);
  if ((pbVar1 != (byte *)&DAT_03219030) && (pbVar1 != (byte *)0x0)) {
    if ((*pbVar1 & 1) != 0) {
      operator_delete(*(void **)(pbVar1 + 0x10));
    }
    operator_delete(pbVar1);
    return;
  }
  return;
}




/* pcrecpp::RE::~RE() */

void __thiscall pcrecpp::RE::~RE(RE *this)

{
  Cleanup(this);
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}




/* pcrecpp::RE::FullMatch(pcrecpp::StringPiece const&, pcrecpp::Arg const&, pcrecpp::Arg const&,
   pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg
   const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&,
   pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg
   const&) const */

uint __thiscall
pcrecpp::RE::FullMatch
          (RE *this,StringPiece *param_1,Arg *param_2,Arg *param_3,Arg *param_4,Arg *param_5,
          Arg *param_6,Arg *param_7,Arg *param_8,Arg *param_9,Arg *param_10,Arg *param_11,
          Arg *param_12,Arg *param_13,Arg *param_14,Arg *param_15,Arg *param_16,Arg *param_17)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [4];
  undefined1 auStack_174 [204];
  Arg *local_a8;
  Arg *local_a0;
  Arg *local_98;
  Arg *local_90;
  Arg *local_88;
  Arg *local_80;
  Arg *local_78;
  Arg *local_70;
  Arg *local_68;
  Arg *local_60;
  Arg *local_58;
  Arg *local_50;
  Arg *local_48;
  Arg *local_40;
  Arg *local_38;
  Arg *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (Arg *)&no_arg) {
    uVar3 = 0;
  }
  else {
    local_a8 = param_2;
    if (param_3 == (Arg *)&no_arg) {
      uVar3 = 1;
    }
    else {
      local_a0 = param_3;
      if (param_4 == (Arg *)&no_arg) {
        uVar3 = 2;
      }
      else {
        local_98 = param_4;
        if (param_5 == (Arg *)&no_arg) {
          uVar3 = 3;
        }
        else {
          local_90 = param_5;
          if (param_6 == (Arg *)&no_arg) {
            uVar3 = 4;
          }
          else {
            local_88 = param_6;
            if (param_7 == (Arg *)&no_arg) {
              uVar3 = 5;
            }
            else {
              local_80 = param_7;
              if (param_8 == (Arg *)&no_arg) {
                uVar3 = 6;
              }
              else {
                local_78 = param_8;
                if (param_9 == (Arg *)&no_arg) {
                  uVar3 = 7;
                }
                else {
                  local_70 = param_9;
                  if (param_10 == (Arg *)&no_arg) {
                    uVar3 = 8;
                  }
                  else {
                    local_68 = param_10;
                    if (param_11 == (Arg *)&no_arg) {
                      uVar3 = 9;
                    }
                    else {
                      local_60 = param_11;
                      if (param_12 == (Arg *)&no_arg) {
                        uVar3 = 10;
                      }
                      else {
                        local_58 = param_12;
                        if (param_13 == (Arg *)&no_arg) {
                          uVar3 = 0xb;
                        }
                        else {
                          local_50 = param_13;
                          if (param_14 == (Arg *)&no_arg) {
                            uVar3 = 0xc;
                          }
                          else {
                            local_48 = param_14;
                            if (param_15 == (Arg *)&no_arg) {
                              uVar3 = 0xd;
                            }
                            else {
                              local_40 = param_15;
                              if (param_16 == (Arg *)&no_arg) {
                                uVar3 = 0xe;
                              }
                              else {
                                local_38 = param_16;
                                if (param_17 == (Arg *)&no_arg) {
                                  uVar3 = 0xf;
                                }
                                else {
                                  uVar3 = 0x10;
                                  local_30 = param_17;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = DoMatchImpl(this,param_1,2,auStack_178,&local_a8,uVar3,auStack_174,0x33);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* pcrecpp::RE::DoMatchImpl(pcrecpp::StringPiece const&, pcrecpp::RE::Anchor, int*, pcrecpp::Arg
   const* const*, int, int*, int) const */

void __thiscall
pcrecpp::RE::DoMatchImpl
          (RE *this,long *param_1,undefined4 param_3,undefined4 *param_4,long param_5,int param_6,
          long param_7,undefined4 param_8)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = TryMatch(this,param_1,0,param_3,1,param_7,param_8);
  if ((int)uVar3 != 0) {
    uVar3 = 1;
    *param_4 = *(undefined4 *)(param_7 + 4);
    if ((param_5 != 0) && (param_6 != 0)) {
      if (*(long *)(this + 0x30) == 0) {
        local_5c = -1;
      }
      else {
        pcre_fullinfo(*(long *)(this + 0x30),0,2,&local_5c);
      }
      uVar3 = 0;
      if (param_6 <= local_5c) {
        lVar5 = 0;
        uVar7 = 3;
        do {
          if (param_6 <= lVar5) {
            uVar3 = 1;
            goto LAB_01b14e20;
          }
          puVar6 = *(undefined8 **)(param_5 + lVar5 * 8);
          iVar1 = *(int *)(param_7 + (ulong)(uVar7 - 1) * 4);
          lVar5 = lVar5 + 1;
          uVar4 = (*(code *)puVar6[1])
                            (*param_1 + (long)iVar1,*(int *)(param_7 + (ulong)uVar7 * 4) - iVar1,
                             *puVar6);
          uVar7 = uVar7 + 2;
        } while ((uVar4 & 1) != 0);
        uVar3 = 0;
      }
    }
  }
LAB_01b14e20:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::RE::PartialMatch(pcrecpp::StringPiece const&, pcrecpp::Arg const&, pcrecpp::Arg const&,
   pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg
   const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&,
   pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg
   const&) const */

uint __thiscall
pcrecpp::RE::PartialMatch
          (RE *this,StringPiece *param_1,Arg *param_2,Arg *param_3,Arg *param_4,Arg *param_5,
          Arg *param_6,Arg *param_7,Arg *param_8,Arg *param_9,Arg *param_10,Arg *param_11,
          Arg *param_12,Arg *param_13,Arg *param_14,Arg *param_15,Arg *param_16,Arg *param_17)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [4];
  undefined1 auStack_174 [204];
  Arg *local_a8;
  Arg *local_a0;
  Arg *local_98;
  Arg *local_90;
  Arg *local_88;
  Arg *local_80;
  Arg *local_78;
  Arg *local_70;
  Arg *local_68;
  Arg *local_60;
  Arg *local_58;
  Arg *local_50;
  Arg *local_48;
  Arg *local_40;
  Arg *local_38;
  Arg *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == (Arg *)&no_arg) {
    uVar3 = 0;
  }
  else {
    local_a8 = param_2;
    if (param_3 == (Arg *)&no_arg) {
      uVar3 = 1;
    }
    else {
      local_a0 = param_3;
      if (param_4 == (Arg *)&no_arg) {
        uVar3 = 2;
      }
      else {
        local_98 = param_4;
        if (param_5 == (Arg *)&no_arg) {
          uVar3 = 3;
        }
        else {
          local_90 = param_5;
          if (param_6 == (Arg *)&no_arg) {
            uVar3 = 4;
          }
          else {
            local_88 = param_6;
            if (param_7 == (Arg *)&no_arg) {
              uVar3 = 5;
            }
            else {
              local_80 = param_7;
              if (param_8 == (Arg *)&no_arg) {
                uVar3 = 6;
              }
              else {
                local_78 = param_8;
                if (param_9 == (Arg *)&no_arg) {
                  uVar3 = 7;
                }
                else {
                  local_70 = param_9;
                  if (param_10 == (Arg *)&no_arg) {
                    uVar3 = 8;
                  }
                  else {
                    local_68 = param_10;
                    if (param_11 == (Arg *)&no_arg) {
                      uVar3 = 9;
                    }
                    else {
                      local_60 = param_11;
                      if (param_12 == (Arg *)&no_arg) {
                        uVar3 = 10;
                      }
                      else {
                        local_58 = param_12;
                        if (param_13 == (Arg *)&no_arg) {
                          uVar3 = 0xb;
                        }
                        else {
                          local_50 = param_13;
                          if (param_14 == (Arg *)&no_arg) {
                            uVar3 = 0xc;
                          }
                          else {
                            local_48 = param_14;
                            if (param_15 == (Arg *)&no_arg) {
                              uVar3 = 0xd;
                            }
                            else {
                              local_40 = param_15;
                              if (param_16 == (Arg *)&no_arg) {
                                uVar3 = 0xe;
                              }
                              else {
                                local_38 = param_16;
                                if (param_17 == (Arg *)&no_arg) {
                                  uVar3 = 0xf;
                                }
                                else {
                                  uVar3 = 0x10;
                                  local_30 = param_17;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = DoMatchImpl(this,param_1,0,auStack_178,&local_a8,uVar3,auStack_174,0x33);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* pcrecpp::RE::Consume(pcrecpp::StringPiece*, pcrecpp::Arg const&, pcrecpp::Arg const&,
   pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg
   const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&,
   pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg
   const&) const */

void __thiscall
pcrecpp::RE::Consume
          (RE *this,StringPiece *param_1,Arg *param_2,Arg *param_3,Arg *param_4,Arg *param_5,
          Arg *param_6,Arg *param_7,Arg *param_8,Arg *param_9,Arg *param_10,Arg *param_11,
          Arg *param_12,Arg *param_13,Arg *param_14,Arg *param_15,Arg *param_16,Arg *param_17)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_188;
  undefined1 auStack_184 [204];
  Arg *local_b8;
  Arg *local_b0;
  Arg *local_a8;
  Arg *local_a0;
  Arg *local_98;
  Arg *local_90;
  Arg *local_88;
  Arg *local_80;
  Arg *local_78;
  Arg *local_70;
  Arg *local_68;
  Arg *local_60;
  Arg *local_58;
  Arg *local_50;
  Arg *local_48;
  Arg *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == (Arg *)&no_arg) {
    uVar4 = 0;
  }
  else {
    local_b8 = param_2;
    if (param_3 == (Arg *)&no_arg) {
      uVar4 = 1;
    }
    else {
      local_b0 = param_3;
      if (param_4 == (Arg *)&no_arg) {
        uVar4 = 2;
      }
      else {
        local_a8 = param_4;
        if (param_5 == (Arg *)&no_arg) {
          uVar4 = 3;
        }
        else {
          local_a0 = param_5;
          if (param_6 == (Arg *)&no_arg) {
            uVar4 = 4;
          }
          else {
            local_98 = param_6;
            if (param_7 == (Arg *)&no_arg) {
              uVar4 = 5;
            }
            else {
              local_90 = param_7;
              if (param_8 == (Arg *)&no_arg) {
                uVar4 = 6;
              }
              else {
                local_88 = param_8;
                if (param_9 == (Arg *)&no_arg) {
                  uVar4 = 7;
                }
                else {
                  local_80 = param_9;
                  if (param_10 == (Arg *)&no_arg) {
                    uVar4 = 8;
                  }
                  else {
                    local_78 = param_10;
                    if (param_11 == (Arg *)&no_arg) {
                      uVar4 = 9;
                    }
                    else {
                      local_70 = param_11;
                      if (param_12 == (Arg *)&no_arg) {
                        uVar4 = 10;
                      }
                      else {
                        local_68 = param_12;
                        if (param_13 == (Arg *)&no_arg) {
                          uVar4 = 0xb;
                        }
                        else {
                          local_60 = param_13;
                          if (param_14 == (Arg *)&no_arg) {
                            uVar4 = 0xc;
                          }
                          else {
                            local_58 = param_14;
                            if (param_15 == (Arg *)&no_arg) {
                              uVar4 = 0xd;
                            }
                            else {
                              local_50 = param_15;
                              if (param_16 == (Arg *)&no_arg) {
                                uVar4 = 0xe;
                              }
                              else {
                                local_48 = param_16;
                                if (param_17 == (Arg *)&no_arg) {
                                  uVar4 = 0xf;
                                }
                                else {
                                  uVar4 = 0x10;
                                  local_40 = param_17;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = DoMatchImpl(this,param_1,1,&local_188,&local_b8,uVar4,auStack_184,0x33);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *(long *)param_1 = *(long *)param_1 + (long)local_188;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - local_188;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}




/* pcrecpp::RE::FindAndConsume(pcrecpp::StringPiece*, pcrecpp::Arg const&, pcrecpp::Arg const&,
   pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg
   const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&,
   pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg const&, pcrecpp::Arg
   const&) const */

void __thiscall
pcrecpp::RE::FindAndConsume
          (RE *this,StringPiece *param_1,Arg *param_2,Arg *param_3,Arg *param_4,Arg *param_5,
          Arg *param_6,Arg *param_7,Arg *param_8,Arg *param_9,Arg *param_10,Arg *param_11,
          Arg *param_12,Arg *param_13,Arg *param_14,Arg *param_15,Arg *param_16,Arg *param_17)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_188;
  undefined1 auStack_184 [204];
  Arg *local_b8;
  Arg *local_b0;
  Arg *local_a8;
  Arg *local_a0;
  Arg *local_98;
  Arg *local_90;
  Arg *local_88;
  Arg *local_80;
  Arg *local_78;
  Arg *local_70;
  Arg *local_68;
  Arg *local_60;
  Arg *local_58;
  Arg *local_50;
  Arg *local_48;
  Arg *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 == (Arg *)&no_arg) {
    uVar4 = 0;
  }
  else {
    local_b8 = param_2;
    if (param_3 == (Arg *)&no_arg) {
      uVar4 = 1;
    }
    else {
      local_b0 = param_3;
      if (param_4 == (Arg *)&no_arg) {
        uVar4 = 2;
      }
      else {
        local_a8 = param_4;
        if (param_5 == (Arg *)&no_arg) {
          uVar4 = 3;
        }
        else {
          local_a0 = param_5;
          if (param_6 == (Arg *)&no_arg) {
            uVar4 = 4;
          }
          else {
            local_98 = param_6;
            if (param_7 == (Arg *)&no_arg) {
              uVar4 = 5;
            }
            else {
              local_90 = param_7;
              if (param_8 == (Arg *)&no_arg) {
                uVar4 = 6;
              }
              else {
                local_88 = param_8;
                if (param_9 == (Arg *)&no_arg) {
                  uVar4 = 7;
                }
                else {
                  local_80 = param_9;
                  if (param_10 == (Arg *)&no_arg) {
                    uVar4 = 8;
                  }
                  else {
                    local_78 = param_10;
                    if (param_11 == (Arg *)&no_arg) {
                      uVar4 = 9;
                    }
                    else {
                      local_70 = param_11;
                      if (param_12 == (Arg *)&no_arg) {
                        uVar4 = 10;
                      }
                      else {
                        local_68 = param_12;
                        if (param_13 == (Arg *)&no_arg) {
                          uVar4 = 0xb;
                        }
                        else {
                          local_60 = param_13;
                          if (param_14 == (Arg *)&no_arg) {
                            uVar4 = 0xc;
                          }
                          else {
                            local_58 = param_14;
                            if (param_15 == (Arg *)&no_arg) {
                              uVar4 = 0xd;
                            }
                            else {
                              local_50 = param_15;
                              if (param_16 == (Arg *)&no_arg) {
                                uVar4 = 0xe;
                              }
                              else {
                                local_48 = param_16;
                                if (param_17 == (Arg *)&no_arg) {
                                  uVar4 = 0xf;
                                }
                                else {
                                  uVar4 = 0x10;
                                  local_40 = param_17;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = DoMatchImpl(this,param_1,0,&local_188,&local_b8,uVar4,auStack_184,0x33);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *(long *)param_1 = *(long *)param_1 + (long)local_188;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - local_188;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}




/* pcrecpp::RE::Replace(pcrecpp::StringPiece const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) const */

undefined4 __thiscall pcrecpp::RE::Replace(RE *this,StringPiece *param_1,basic_string *param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  RE *this_00;
  ulong uVar5;
  undefined4 uVar6;
  basic_string *local_140;
  uint local_138;
  basic_string *local_130;
  ulong local_128;
  void *local_120;
  int local_114;
  int iStack_110;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_130 = *(basic_string **)(param_2 + 0x10);
  bVar4 = ((byte)*param_2 & 1) == 0;
  if (bVar4) {
    local_130 = param_2 + 1;
  }
  uVar1 = (uint)((byte)*param_2 >> 1);
  if (!bVar4) {
    uVar1 = (uint)*(undefined8 *)(param_2 + 8);
  }
  local_128 = CONCAT44(local_128._4_4_,uVar1);
  this_00 = (RE *)TryMatch(this,&local_130,0,0,1,&local_114,0x33);
  if ((int)this_00 == 0) {
    uVar6 = 0;
  }
  else {
    local_130 = (basic_string *)0x0;
    local_128 = 0;
    local_120 = (void *)0x0;
    bVar4 = ((byte)*param_2 & 1) != 0;
    local_140 = param_2 + 1;
    if (bVar4) {
      local_140 = *(basic_string **)(param_2 + 0x10);
    }
    local_138 = (uint)((byte)*param_2 >> 1);
    if (bVar4) {
      local_138 = (uint)*(undefined8 *)(param_2 + 8);
    }
    uVar5 = Rewrite(this_00,(basic_string *)&local_130,param_1,(StringPiece *)&local_140,&local_114,
                    (int)this_00);
    uVar6 = 0;
    if ((uVar5 & 1) != 0) {
      uVar5 = (ulong)local_130 >> 1 & 0x7f;
      pvVar3 = (void *)((ulong)&local_130 | 1);
      if (((ulong)local_130 & 1) != 0) {
        uVar5 = local_128;
        pvVar3 = local_120;
      }
      FUN_0093dbf0(param_2,(long)local_114,(long)iStack_110 - (long)local_114,pvVar3,uVar5);
      uVar6 = 1;
    }
    if (((ulong)local_130 & 1) != 0) {
      operator_delete(local_120);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}




/* pcrecpp::RE::TryMatch(pcrecpp::StringPiece const&, int, pcrecpp::RE::Anchor, bool, int*, int)
   const */

void __thiscall
pcrecpp::RE::TryMatch
          (RE *this,undefined8 *param_1,undefined4 param_2,int param_4,ulong param_5,
          undefined8 param_6,int param_7)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  lVar2 = 0x28;
  if (param_4 != 2) {
    lVar2 = 0x30;
  }
  iVar6 = 0;
  if (*(long *)(this + lVar2) != 0) {
    uStack_30 = 0;
    local_38 = 0;
    lStack_40 = 0;
    local_48 = 0;
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    if (*(int *)(this + 0x18) < 1) {
      uVar7 = 0x10;
    }
    else {
      uVar7 = 0x12;
      local_68 = 2;
      local_58 = (long)*(int *)(this + 0x18);
    }
    if (0 < *(int *)(this + 0x1c)) {
      local_68 = uVar7;
      lStack_40 = (long)*(int *)(this + 0x1c);
    }
    uVar1 = *(uint *)(this + 0x20) & 0x2000;
    if (param_4 != 0) {
      uVar1 = *(uint *)(this + 0x20) & 0x2000 | 0x10;
    }
    if ((param_5 & 1) == 0) {
      uVar1 = uVar1 | 0x400;
    }
    puVar3 = &DAT_01e277f2;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar3 = (undefined1 *)*param_1;
    }
    iVar5 = pcre_exec(*(long *)(this + lVar2),&local_68,puVar3,*(undefined4 *)(param_1 + 1),param_2,
                      uVar1,param_6,param_7);
    if (iVar5 < 0) {
      iVar6 = 0;
    }
    else {
      if (param_7 < 0) {
        param_7 = param_7 + 1;
      }
      iVar6 = param_7 >> 1;
      if (iVar5 != 0) {
        iVar6 = iVar5;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}




/* pcrecpp::RE::Rewrite(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >*, pcrecpp::StringPiece const&, pcrecpp::StringPiece const&, int*,
   int) const */

undefined8 __thiscall
pcrecpp::RE::Rewrite
          (RE *this,basic_string *param_1,StringPiece *param_2,StringPiece *param_3,int *param_4,
          int param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  
  if (0 < *(int *)(param_2 + 8)) {
    pbVar5 = *(byte **)param_2;
    pbVar1 = pbVar5 + *(int *)(param_2 + 8);
    do {
      bVar4 = *pbVar5;
      if (bVar4 == 0x5c) {
        pbVar5 = pbVar5 + 1;
        uVar3 = *pbVar5 - 0x30;
        if (9 < uVar3) {
          if (*pbVar5 != 0x5c) {
            return 0;
          }
          bVar4 = 0x5c;
          goto LAB_01b1571c;
        }
        if (param_5 <= (int)uVar3) {
          return 0;
        }
        iVar2 = param_4[(int)(uVar3 * 2)];
        if (-1 < iVar2) {
          FUN_0090de84(param_1,*(long *)param_3 + (long)iVar2,
                       (long)param_4[(int)(uVar3 * 2 | 1)] - (long)iVar2);
        }
      }
      else {
LAB_01b1571c:
        FUN_0093de70(param_1,bVar4);
      }
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < pbVar1);
  }
  return 1;
}




/* pcrecpp::RE::GlobalReplace(pcrecpp::StringPiece const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) const */

int __thiscall pcrecpp::RE::GlobalReplace(RE *this,StringPiece *param_1,basic_string *param_2)

{
  uint uVar1;
  basic_string bVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  RE *this_00;
  void *pvVar7;
  uint uVar8;
  basic_string *pbVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  basic_string *pbVar13;
  undefined8 uVar14;
  basic_string *local_180;
  undefined8 uStack_178;
  void *local_170;
  basic_string *local_160;
  undefined8 uStack_158;
  void *local_150;
  uint local_13c;
  uint uStack_138;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar12 = 0;
  bVar5 = false;
  iVar10 = 0;
  pbVar13 = param_2 + 1;
  local_180 = (basic_string *)0x0;
  uStack_178 = 0;
  local_170 = (void *)0x0;
LAB_01b1596c:
  do {
    bVar2 = *param_2;
    if (((byte)bVar2 & 1) == 0) {
      uVar8 = (uint)((byte)bVar2 >> 1);
    }
    else {
      uVar8 = (uint)*(undefined8 *)(param_2 + 8);
    }
    iVar11 = (int)uVar12;
    if ((int)uVar8 < iVar11) {
LAB_01b1598c:
      if (iVar10 != 0) {
        bVar2 = *param_2;
        if (((byte)bVar2 & 1) == 0) {
          uVar8 = (uint)((byte)bVar2 >> 1);
        }
        else {
          uVar8 = (uint)*(undefined8 *)(param_2 + 8);
        }
        if (iVar11 < (int)uVar8) {
          if (((byte)bVar2 & 1) == 0) {
            uVar12 = (ulong)((byte)bVar2 >> 1);
          }
          else {
            uVar12 = *(ulong *)(param_2 + 8);
          }
          FUN_01b15af8(&local_180,param_2,(long)iVar11,uVar12 - (long)iVar11);
        }
        local_150 = local_170;
        uStack_158 = uStack_178;
        local_160 = local_180;
        pvVar7 = *(void **)(param_2 + 0x10);
        uVar14 = *(undefined8 *)(param_2 + 8);
        pbVar13 = *(basic_string **)param_2;
        *(void **)(param_2 + 0x10) = local_170;
        *(undefined8 *)(param_2 + 8) = uStack_178;
        *(basic_string **)param_2 = local_180;
        local_180 = pbVar13;
        uStack_178 = uVar14;
        local_170 = pvVar7;
      }
      if (((ulong)local_180 & 1) != 0) {
        operator_delete(local_170);
      }
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return iVar10;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_160 = pbVar13;
    if (bVar5) {
      bVar5 = ((byte)bVar2 & 1) != 0;
      if (bVar5) {
        local_160 = *(basic_string **)(param_2 + 0x10);
      }
      uVar8 = (uint)((byte)bVar2 >> 1);
      if (bVar5) {
        uVar8 = (uint)*(undefined8 *)(param_2 + 8);
      }
      uStack_158 = CONCAT44(uStack_158._4_4_,uVar8);
      iVar6 = TryMatch(this,&local_160,uVar12 & 0xffffffff,1,0,&local_13c,0x33);
      if (iVar6 < 1) {
        bVar2 = *param_2;
        uVar12 = (long)iVar11 + 1;
        if (((byte)bVar2 & 1) == 0) {
          uVar8 = (uint)((byte)bVar2 >> 1);
        }
        else {
          uVar8 = (uint)*(undefined8 *)(param_2 + 8);
        }
        if ((int)uVar12 < (int)uVar8) {
          pbVar9 = pbVar13;
          if (((byte)bVar2 & 1) != 0) {
            pbVar9 = *(basic_string **)(param_2 + 0x10);
          }
          if (pbVar9[iVar11] == (basic_string)0xd) {
            pbVar9 = pbVar13;
            if (((byte)bVar2 & 1) != 0) {
              pbVar9 = *(basic_string **)(param_2 + 0x10);
            }
            if ((pbVar9[uVar12] == (basic_string)0xa) &&
               (((iVar6 = FUN_01b15a40(*(undefined4 *)(this + 0x20)), iVar6 == 0x300000 ||
                 (iVar6 = FUN_01b15a40(*(undefined4 *)(this + 0x20)), iVar6 == 0x400000)) ||
                (iVar6 = FUN_01b15a40(*(undefined4 *)(this + 0x20)), iVar6 == 0x500000)))) {
              uVar12 = (ulong)(iVar11 + 2);
            }
          }
        }
        if (((byte)*param_2 & 1) == 0) {
          uVar8 = (uint)((byte)*param_2 >> 1);
        }
        else {
          uVar8 = (uint)*(undefined8 *)(param_2 + 8);
        }
        bVar5 = false;
        if (iVar11 < (int)uVar8) {
          FUN_01b15af8(&local_180,param_2,(long)iVar11,(long)((int)uVar12 - iVar11));
          bVar5 = false;
        }
        goto LAB_01b1596c;
      }
    }
    else {
      bVar5 = ((byte)bVar2 & 1) != 0;
      if (bVar5) {
        local_160 = *(basic_string **)(param_2 + 0x10);
      }
      uVar8 = (uint)((byte)bVar2 >> 1);
      if (bVar5) {
        uVar8 = (uint)*(undefined8 *)(param_2 + 8);
      }
      uStack_158 = CONCAT44(uStack_158._4_4_,uVar8);
      iVar6 = TryMatch(this,&local_160,uVar12 & 0xffffffff,0,1,&local_13c,0x33);
      if (iVar6 < 1) goto LAB_01b1598c;
    }
    uVar4 = uStack_138;
    uVar8 = local_13c;
    uVar12 = (ulong)uStack_138;
    this_00 = (RE *)FUN_01b15af8(&local_180,param_2,(long)iVar11,(long)(int)(local_13c - iVar11));
    bVar5 = ((byte)*param_2 & 1) != 0;
    local_160 = pbVar13;
    if (bVar5) {
      local_160 = *(basic_string **)(param_2 + 0x10);
    }
    uVar1 = (uint)((byte)*param_2 >> 1);
    if (bVar5) {
      uVar1 = (uint)*(undefined8 *)(param_2 + 8);
    }
    uStack_158 = CONCAT44(uStack_158._4_4_,uVar1);
    Rewrite(this_00,(basic_string *)&local_180,param_1,(StringPiece *)&local_160,(int *)&local_13c,
            iVar6);
    bVar5 = uVar8 == uVar4;
    iVar10 = iVar10 + 1;
  } while( true );
}




/* pcrecpp::RE::Extract(pcrecpp::StringPiece const&, pcrecpp::StringPiece const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*)
   const */

uint __thiscall
pcrecpp::RE::Extract(RE *this,StringPiece *param_1,StringPiece *param_2,basic_string *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  RE *this_00;
  long lVar4;
  int aiStack_124 [53];
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  iVar2 = TryMatch(this,param_2,0,0,1,aiStack_124,0x33);
  uVar3 = 0;
  if (iVar2 != 0) {
    this_00 = (RE *)FUN_00924fa8(param_3,0,0xffffffffffffffff);
    uVar3 = Rewrite(this_00,param_3,param_1,param_2,aiStack_124,iVar2);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* pcrecpp::RE::QuoteMeta(pcrecpp::StringPiece const&) */

void __thiscall pcrecpp::RE::QuoteMeta(RE *this,StringPiece *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *in_x8;
  long lVar3;
  
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (0 < *(int *)(this + 8)) {
    lVar3 = 0;
    do {
      bVar1 = *(byte *)(*(long *)this + lVar3);
      if (bVar1 == 0) {
        FUN_0090de84();
      }
      else {
        uVar2 = (uint)bVar1;
        if (bVar1 < 0x61) {
          if (uVar2 < 0x41) {
            if (9 < uVar2 - 0x30) {
LAB_01b15c90:
              FUN_0093de70();
            }
          }
          else if ((0x5a < uVar2) && (uVar2 != 0x5f)) goto LAB_01b15c90;
        }
        else if ((0x7a < uVar2) && (-1 < (char)bVar1)) goto LAB_01b15c90;
        FUN_0093de70();
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 8));
  }
  return;
}




/* pcrecpp::RE::NumberOfCapturingGroups() const */

void __thiscall pcrecpp::RE::NumberOfCapturingGroups(RE *this)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x30) == 0) {
    local_2c = 0xffffffff;
  }
  else {
    pcre_fullinfo(*(long *)(this + 0x30),0,2,&local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c);
}




/* pcrecpp::RE::DoMatch(pcrecpp::StringPiece const&, pcrecpp::RE::Anchor, int*, pcrecpp::Arg const*
   const*, int) const */

uint __thiscall
pcrecpp::RE::DoMatch
          (RE *this,undefined8 param_1,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          int param_6)

{
  undefined1 auVar1 [16];
  long lVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined1 auStack_bc [84];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = param_6 * 3 + 3;
  if (uVar3 < 0x16) {
    uVar3 = DoMatchImpl(this,param_1,param_3,param_4,param_5,param_6,auStack_bc,(ulong)uVar3);
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (long)(int)uVar3;
    uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
    if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar4 = operator_new__(uVar5);
    uVar3 = DoMatchImpl(this,param_1,param_3,param_4,param_5,param_6,pvVar4,uVar3);
    operator_delete__(pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

