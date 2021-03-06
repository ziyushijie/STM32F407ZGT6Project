#ifndef ADS1256_LIB_H_
#define ADS1256_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "ads1256_cfg.h"
	//////////////////////////////////////////////////////////////////////////////////////

	UINT8_T ADS1256Lib_SPI_Init(ADS1256_HandleType* ADS1256x, void(*pFuncDelayus)(UINT32_T delay), void(*pFuncDelayms)(UINT32_T delay), UINT32_T(*pFuncTimerTick)(void), UINT8_T isHW);

	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*ADS1256_LIB_H_ */
