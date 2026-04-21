// classes/FMOD/Codec — 4 functions
#include "GameKindred.h"




/* FMOD::Codec::defaultFileRead(void*, void*, unsigned int, unsigned int*, void*) */

void FMOD::Codec::defaultFileRead
               (void *param_1,void *param_2,uint param_3,uint *param_4,void *param_5)

{
  FUN_1005d148c(param_1,param_2,1,param_3,param_4);
  return;
}




/* FMOD::Codec::defaultFileSeek(void*, unsigned int, void*) */

void FMOD::Codec::defaultFileSeek(void *param_1,uint param_2,void *param_3)

{
  FUN_1005d1d28(param_1,param_2,0);
  return;
}




/* FMOD::Codec::defaultMetaData(FMOD_CODEC_STATE*, FMOD_TAGTYPE, char*, void*, unsigned int,
   FMOD_TAGDATATYPE, int) */

void FMOD::Codec::defaultMetaData(void)

{
  FUN_100586684();
  return;
}




/* FMOD::Codec::defaultGetWaveFormat(FMOD_CODEC_STATE*, int, FMOD_CODEC_WAVEFORMAT*) */

undefined8
FMOD::Codec::defaultGetWaveFormat
          (FMOD_CODEC_STATE *param_1,int param_2,FMOD_CODEC_WAVEFORMAT *param_3)

{
  int iVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0x35;
  }
  if (-1 < param_2) {
    iVar1 = *(int *)param_1;
    if ((0 < param_2) && (iVar1 == 0)) {
      return 0x1f;
    }
    if (0 < iVar1 && iVar1 <= param_2) {
      return 0x1f;
    }
    _memcpy(param_3,(void *)(*(long *)(param_1 + 8) + (long)param_2 * 0x130),0x130);
    return 0;
  }
  return 0x1f;
}

