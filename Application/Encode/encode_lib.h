#ifndef ENCODE_LIB_H_
#define ENCODE_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include"encode_cfg.h"
	//////////////////////////////////////////////////////////////////////////////////////
	//===��������
	void EncodeLib_Init( void );
	void EnCodeLib_IRQTask( void );
	void EnCodeLib_SetChannel(UINT8_T chIndex, UINT8_T isEnCode, UINT8_T isHigh);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*ENCODE_LIB_H_ */