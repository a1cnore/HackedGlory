// classes/ADJAttribution — 27 functions
#include "GameKindred.h"




/* Function Stack Size: 0x20 bytes */

ID ADJAttribution::dataWithJsonDict_adid_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  uVar3 = _objc_msgSend(&objc::class_t::ADJAttribution,"alloc");
  uVar3 = _objc_msgSend(uVar3,"initWithJsonDict:adid:",uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x20 bytes */

ID ADJAttribution::initWithJsonDict_adid_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ID IVar6;
  ID local_50;
  class_t *local_48;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  local_48 = &objc::class_t::ADJAttribution;
  local_50 = param_1;
  lVar3 = _objc_msgSendSuper2(&local_50,"init");
  if ((lVar3 == 0) ||
     (uVar4 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar1), (uVar4 & 1) != 0)) {
    IVar6 = 0;
  }
  else {
    _objc_msgSend(uVar1,"objectForKey:",&cf_tracker_token);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar3,"setTrackerToken:",uVar5);
    _objc_release(uVar5);
    _objc_msgSend(uVar1,"objectForKey:",&cf_tracker_name);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar3,"setTrackerName:",uVar5);
    _objc_release(uVar5);
    _objc_msgSend(uVar1,"objectForKey:",&cf_network);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar3,"setNetwork:",uVar5);
    _objc_release(uVar5);
    _objc_msgSend(uVar1,"objectForKey:",&cf_campaign);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar3,"setCampaign:",uVar5);
    _objc_release(uVar5);
    _objc_msgSend(uVar1,"objectForKey:",&cf_adgroup);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar3,"setAdgroup:",uVar5);
    _objc_release(uVar5);
    _objc_msgSend(uVar1,"objectForKey:",&cf_creative);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar3,"setCreative:",uVar5);
    _objc_release(uVar5);
    _objc_msgSend(uVar1,"objectForKey:",&cf_click_label);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar3,"setClickLabel:",uVar5);
    _objc_release(uVar5);
    _objc_msgSend(lVar3,"setAdid:",uVar2);
    IVar6 = _objc_retain(lVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(lVar3);
  return IVar6;
}




/* Function Stack Size: 0x18 bytes */

bool ADJAttribution::isEqualToAttribution_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = _objc_retain(param_3);
  if (lVar3 != 0) {
    trackerToken(param_1,(SEL)"trackerToken");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar3,"trackerToken");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"adjIsEqual:toString:",uVar4,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (iVar1 != 0) {
      trackerName(param_1,(SEL)"trackerName");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar3,"trackerName");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      iVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"adjIsEqual:toString:",uVar4,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      if (iVar1 != 0) {
        network(param_1,(SEL)"network");
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(lVar3,"network");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        iVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"adjIsEqual:toString:",uVar4,uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
        if (iVar1 != 0) {
          campaign(param_1,(SEL)"campaign");
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(lVar3,"campaign");
          uVar5 = _objc_retainAutoreleasedReturnValue();
          iVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"adjIsEqual:toString:",uVar4,uVar5);
          _objc_release(uVar5);
          _objc_release(uVar4);
          if (iVar1 != 0) {
            adgroup(param_1,(SEL)"adgroup");
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(lVar3,"adgroup");
            uVar5 = _objc_retainAutoreleasedReturnValue();
            iVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"adjIsEqual:toString:",uVar4,uVar5);
            _objc_release(uVar5);
            _objc_release(uVar4);
            if (iVar1 != 0) {
              creative(param_1,(SEL)"creative");
              uVar4 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(lVar3,"creative");
              uVar5 = _objc_retainAutoreleasedReturnValue();
              iVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"adjIsEqual:toString:",uVar4,uVar5);
              _objc_release(uVar5);
              _objc_release(uVar4);
              if (iVar1 != 0) {
                clickLabel(param_1,(SEL)"clickLabel");
                uVar4 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(lVar3,"clickLabel");
                uVar5 = _objc_retainAutoreleasedReturnValue();
                iVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"adjIsEqual:toString:",uVar4,uVar5);
                _objc_release(uVar5);
                _objc_release(uVar4);
                if (iVar1 != 0) {
                  adid(param_1,(SEL)"adid");
                  uVar4 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(lVar3,"adid");
                  uVar5 = _objc_retainAutoreleasedReturnValue();
                  bVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"adjIsEqual:toString:",uVar4,uVar5);
                  _objc_release(uVar5);
                  _objc_release(uVar4);
                  goto LAB_1011286fc;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_1011286fc:
  _objc_release(lVar3);
  return bVar2;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::dictionary(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  
  _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  trackerToken(param_1,(SEL)"trackerToken");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    trackerToken(param_1,(SEL)"trackerToken");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"setObject:forKey:",uVar3,&cf_trackerToken);
    _objc_release(uVar3);
  }
  trackerName(param_1,(SEL)"trackerName");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    trackerName(param_1,(SEL)"trackerName");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"setObject:forKey:",uVar3,&cf_trackerName);
    _objc_release(uVar3);
  }
  network(param_1,(SEL)"network");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    network(param_1,(SEL)"network");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"setObject:forKey:",uVar3,&cf_network);
    _objc_release(uVar3);
  }
  campaign(param_1,(SEL)"campaign");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    campaign(param_1,(SEL)"campaign");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"setObject:forKey:",uVar3,&cf_campaign);
    _objc_release(uVar3);
  }
  adgroup(param_1,(SEL)"adgroup");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    adgroup(param_1,(SEL)"adgroup");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"setObject:forKey:",uVar3,&cf_adgroup);
    _objc_release(uVar3);
  }
  creative(param_1,(SEL)"creative");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    creative(param_1,(SEL)"creative");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"setObject:forKey:",uVar3,&cf_creative);
    _objc_release(uVar3);
  }
  clickLabel(param_1,(SEL)"clickLabel");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    clickLabel(param_1,(SEL)"clickLabel");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"setObject:forKey:",uVar3,&cf_click_label);
    _objc_release(uVar3);
  }
  adid(param_1,(SEL)"adid");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    adid(param_1,(SEL)"adid");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"setObject:forKey:",uVar3,&cf_adid);
    _objc_release(uVar3);
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar1);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::description(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID IVar10;
  
  trackerToken(param_1,(SEL)"trackerToken");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  trackerName(param_1,(SEL)"trackerName");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  network(param_1,(SEL)"network");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  campaign(param_1,(SEL)"campaign");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  adgroup(param_1,(SEL)"adgroup");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  creative(param_1,(SEL)"creative");
  uVar6 = _objc_retainAutoreleasedReturnValue();
  clickLabel(param_1,(SEL)"clickLabel");
  uVar7 = _objc_retainAutoreleasedReturnValue();
  adid(param_1,(SEL)"adid");
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                &cf_tt___tn___net___cam___adg___cre___cl___adid___);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  IVar10 = _objc_autoreleaseReturnValue(uVar9);
  return IVar10;
}




/* Function Stack Size: 0x18 bytes */

bool ADJAttribution::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  bool bVar2;
  ID IVar3;
  undefined8 uVar4;
  
  IVar3 = _objc_retain(param_3);
  if (IVar3 == param_1) {
    bVar2 = 1;
  }
  else {
    uVar4 = _objc_msgSend(&objc::class_t::ADJAttribution,"class");
    iVar1 = _objc_msgSend(IVar3,"isKindOfClass:",uVar4);
    if (iVar1 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = isEqualToAttribution_(param_1,(SEL)"isEqualToAttribution:",IVar3);
    }
  }
  _objc_release(IVar3);
  return bVar2;
}




/* Function Stack Size: 0x10 bytes */

unsigned_long_long ADJAttribution::hash(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  unsigned_long_long uVar2;
  
  trackerName(param_1,(SEL)"trackerName");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend(uVar1,"hash");
  _objc_release(uVar1);
  return uVar2;
}




/* Function Stack Size: 0x18 bytes */

ID ADJAttribution::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  
  uVar1 = _objc_msgSend(param_1,"class");
  uVar1 = _objc_msgSend(uVar1,"allocWithZone:",param_3);
  IVar2 = _objc_msgSend(uVar1,"init");
  if (IVar2 != 0) {
    trackerToken(param_1,(SEL)"trackerToken");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setTrackerToken_(IVar2,(SEL)"setTrackerToken:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    trackerName(param_1,(SEL)"trackerName");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setTrackerName_(IVar2,(SEL)"setTrackerName:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    network(param_1,(SEL)"network");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setNetwork_(IVar2,(SEL)"setNetwork:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    campaign(param_1,(SEL)"campaign");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setCampaign_(IVar2,(SEL)"setCampaign:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    adgroup(param_1,(SEL)"adgroup");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setAdgroup_(IVar2,(SEL)"setAdgroup:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    creative(param_1,(SEL)"creative");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setCreative_(IVar2,(SEL)"setCreative:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    clickLabel(param_1,(SEL)"clickLabel");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setClickLabel_(IVar2,(SEL)"setClickLabel:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    adid(param_1,(SEL)"adid");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setAdid_(IVar2,(SEL)"setAdid:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
  }
  return IVar2;
}




/* Function Stack Size: 0x18 bytes */

ID ADJAttribution::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  ID local_40;
  class_t *local_38;
  
  uVar1 = _objc_retain(param_3);
  local_38 = &objc::class_t::ADJAttribution;
  local_40 = param_1;
  lVar2 = _objc_msgSendSuper2(&local_40,"init");
  if (lVar2 == 0) {
    IVar4 = 0;
  }
  else {
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_trackerToken);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setTrackerToken:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_trackerName);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setTrackerName:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_network);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setNetwork:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_campaign);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setCampaign:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_adgroup);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setAdgroup:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_creative);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setCreative:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_click_label);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setClickLabel:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_adid);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setAdid:",uVar3);
    _objc_release(uVar3);
    IVar4 = _objc_retain(lVar2);
  }
  _objc_release(uVar1);
  _objc_release(lVar2);
  return IVar4;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttribution::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  trackerToken(param_1,(SEL)"trackerToken");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar2,&cf_trackerToken);
  _objc_release(uVar2);
  trackerName(param_1,(SEL)"trackerName");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar2,&cf_trackerName);
  _objc_release(uVar2);
  network(param_1,(SEL)"network");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar2,&cf_network);
  _objc_release(uVar2);
  campaign(param_1,(SEL)"campaign");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar2,&cf_campaign);
  _objc_release(uVar2);
  adgroup(param_1,(SEL)"adgroup");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar2,&cf_adgroup);
  _objc_release(uVar2);
  creative(param_1,(SEL)"creative");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar2,&cf_creative);
  _objc_release(uVar2);
  clickLabel(param_1,(SEL)"clickLabel");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar2,&cf_click_label);
  _objc_release(uVar2);
  adid(param_1,(SEL)"adid");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar2,&cf_adid);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::trackerToken(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_trackerToken,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttribution::setTrackerToken_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::trackerName(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_trackerName,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttribution::setTrackerName_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::network(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_network,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttribution::setNetwork_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::campaign(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_campaign,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttribution::setCampaign_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::adgroup(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_adgroup,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttribution::setAdgroup_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::creative(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_creative,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttribution::setCreative_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::clickLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_clickLabel,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttribution::setClickLabel_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttribution::adid(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_adid,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttribution::setAdid_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJAttribution::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_adid,0);
  _objc_storeStrong(param_1 + (long)_clickLabel,0);
  _objc_storeStrong(param_1 + (long)_creative,0);
  _objc_storeStrong(param_1 + (long)_adgroup,0);
  _objc_storeStrong(param_1 + (long)_campaign,0);
  _objc_storeStrong(param_1 + (long)_network,0);
  _objc_storeStrong(param_1 + (long)_trackerName,0);
  _objc_storeStrong(param_1 + (long)_trackerToken,0);
  return;
}

