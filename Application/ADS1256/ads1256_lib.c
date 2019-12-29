#include "ads1256_lib.h"

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T ADS1256Lib_SPI_Init(ADS1256_HandlerType *ADS1256x, void(*pFuncDelayus)(UINT32_T delay), void(*pFuncDelayms)(UINT32_T delay), UINT32_T(*pFuncTimerTick)(void), UINT8_T isHW)
{
	return ADS1256_SPI_Init(ADS1256x, pFuncDelayus, pFuncDelayms, pFuncTimerTick, isHW);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T ADS1256Lib_SPI_WriteReg(ADS1256_HandlerType *ADS1256x, UINT8_T regID, UINT8_T regVal)
{
	return ADS1256_SPI_WriteReg(ADS1256x, regID, regVal);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T ADS1256Lib_SPI_ReadReg(ADS1256_HandlerType *ADS1256x, UINT8_T regID, UINT8_T *pRVal)
{
	return ADS1256_SPI_ReadReg(ADS1256x, regID, pRVal);
}