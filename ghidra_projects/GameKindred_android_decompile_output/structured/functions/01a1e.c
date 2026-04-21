// functions/01a1e — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a1e8c0(undefined1 *param_1,undefined1 *param_2,EC_KEY *param_3)

{
  int iVar1;
  int iVar2;
  point_conversion_form_t pVar3;
  EC_GROUP *group;
  EC_METHOD *meth;
  EC_POINT *pEVar4;
  undefined8 uVar5;
  
  if (param_3 == (EC_KEY *)0x0) {
    uVar5 = 0;
  }
  else {
    group = EC_KEY_get0_group(param_3);
    uVar5 = 0;
    if (group != (EC_GROUP *)0x0) {
      meth = EC_GROUP_method_of(group);
      uVar5 = 0;
      if (meth != (EC_METHOD *)0x0) {
        iVar1 = EC_METHOD_get_field_type(meth);
        iVar2 = EC_GROUP_get_curve_name(group);
        iVar2 = tls1_ec_nid2curve_id(iVar2);
        if (iVar2 == 0) {
          *param_1 = 0xff;
          if (iVar1 == 0x196) {
            param_1[1] = 1;
          }
          else {
            param_1[1] = 2;
          }
        }
        else {
          *param_1 = 0;
          param_1[1] = (char)iVar2;
        }
        if (param_2 != (undefined1 *)0x0) {
          pEVar4 = EC_KEY_get0_public_key(param_3);
          if (pEVar4 == (EC_POINT *)0x0) {
            return 0;
          }
          pVar3 = EC_KEY_get_conv_form(param_3);
          if (pVar3 == POINT_CONVERSION_COMPRESSED) {
            if (iVar1 == 0x196) {
              *param_2 = 1;
              return 1;
            }
            *param_2 = 2;
          }
          else {
            *param_2 = 0;
          }
        }
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

