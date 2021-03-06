#include "flash_lib.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void FLASHLib_ReadHalfWord(UINT32_T readAddr, UINT16_T *pVal, UINT16_T length)
{
	FLASH_ReadHalfWord(readAddr, pVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void FLASHLib_WriteHalfWord(UINT32_T writeAddr, UINT16_T *pVal, UINT16_T length)
{
	FLASH_WriteHalfWord(writeAddr, pVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void FLASHLib_WriteHalfWordWithErase(UINT32_T writeAddr, UINT16_T *pVal, UINT16_T length)
{
	FLASH_WriteHalfWordWithErase(writeAddr, pVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void FlashLib_LockRead(void)
{
	Flash_LockRead();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void FlashLib_UnLockRead(void)
{
	Flash_UnLockRead();
}