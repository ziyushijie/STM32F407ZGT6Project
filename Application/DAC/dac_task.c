#include "dac_task.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_Init(UINT8_T ch, UINT8_T isEnableBuffer)
{
	return DACLib_Init(ch, isEnableBuffer);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_ChannelUV(UINT8_T ch, UINT32_T volUV)
{
	return DACLib_ChannelUV(ch, volUV);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_ChannelMV(UINT8_T ch, UINT32_T volMV)
{
	return DACLib_ChannelMV(ch, volMV);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_ChannelV(UINT8_T ch, float volV)
{
	return DACLib_ChannelV(ch, volV);
}