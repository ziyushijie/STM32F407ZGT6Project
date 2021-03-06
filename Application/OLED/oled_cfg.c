#include "oled_cfg.h"

//===SYNLOG信息
const UINT8_T SYN_LOGO[] =
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x80,0xE0,0xF0,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0x38,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0xFE,
	0xFF,0xFF,0xFF,0x7F,0x3F,0x1F,0x07,0x03,0xE0,0xF0,0xFC,0xFE,0xFE,0xFF,0xFF,0xFF,
	0xFF,0xFE,0xFE,0xFE,0xFC,0xF8,0xF8,0xF8,0xF0,0xF0,0xF0,0xE0,0xE0,0xE0,0xC0,0xC0,
	0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xE0,0x70,0x78,
	0x78,0x78,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x00,0x80,0x80,0x00,0x00,
	0x00,0x00,0x80,0x80,0x80,0x00,0x00,0x80,0xE0,0xF0,0x70,0x70,0xE0,0xD0,0xB8,0x38,
	0x70,0x60,0xE0,0xF8,0xFE,0xFF,0x83,0x81,0x00,0x7C,0xFE,0xC7,0xC3,0x63,0x7F,0x3E,
	0x80,0x80,0xC0,0xC0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0xFE,0xFF,0xFF,0xFF,0xFF,0x3F,
	0x0F,0x07,0x01,0x00,0x80,0xE0,0xFC,0xFF,0xFF,0xFF,0x3F,0x1F,0xC7,0xE3,0xF1,0xF0,
	0xF8,0xF8,0xF8,0xF9,0xF9,0xF1,0xE3,0xC3,0x87,0x07,0x0F,0x1F,0x1F,0x3F,0x7F,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0x00,0x00,0x3E,0x7F,0x7F,0x73,0x70,0x70,0x70,0xF0,
	0xF0,0xF0,0xE0,0x02,0xFE,0xFE,0x00,0x00,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xF8,0x1C,
	0x0E,0x07,0x07,0x1F,0x7F,0xFC,0xC0,0x9F,0x3F,0x38,0x38,0x3C,0x9F,0x8F,0xC3,0xC0,
	0xC0,0xE0,0xEF,0xFF,0x78,0x79,0x39,0x3B,0x1F,0x1E,0x0E,0x0E,0x0E,0x07,0x07,0x03,
	0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x1F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xF8,0xF0,
	0xE0,0xC0,0x80,0x00,0x1F,0x7F,0xFF,0xFF,0xFF,0xFF,0xF8,0xF0,0xE1,0xE7,0xC7,0xC3,
	0xC1,0xE0,0xE1,0xFF,0xFF,0xFF,0xFF,0x7F,0x1F,0x07,0x00,0x00,0x00,0xC0,0xF8,0xFF,
	0xFF,0xFF,0xFF,0xFF,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x38,0x38,0x3C,0x1E,
	0x0F,0x07,0x01,0x00,0x07,0x0F,0xCE,0x7C,0xBE,0xFF,0xFF,0xC2,0xC1,0xC1,0xE0,0xE0,
	0xF0,0xF0,0xF8,0xF8,0x78,0x7C,0x3D,0x3D,0x1E,0x1E,0x0F,0x0F,0x0F,0x07,0x07,0x03,
	0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x07,0x0F,0x1F,
	0x3F,0x7F,0xFF,0xFF,0xFE,0xFC,0xF8,0xF1,0xE3,0xC7,0x87,0x0F,0x0F,0x1F,0x1F,0x3F,
	0x3F,0x1F,0x1F,0x9F,0x8F,0x87,0xC1,0xC0,0xE0,0xE0,0xF0,0xF0,0xFE,0xFF,0xFF,0xFF,
	0xFF,0x7F,0x0F,0x01,0x00,0x00,0x00,0x00,0x80,0x80,0xC0,0xC0,0xE0,0xE0,0xE0,0xF0,
	0xF0,0xF8,0xF8,0xFC,0x7C,0x7F,0x7F,0xDF,0xDF,0x7F,0x1F,0x07,0x07,0x07,0x03,0x03,
	0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x01,0x03,0x07,0x0F,0x1F,0x3F,0x7F,0xFF,0xFF,0xFE,0xFC,0x7E,0x7E,
	0x3F,0x3F,0x1F,0x1F,0x1F,0x0F,0x0F,0x07,0x07,0x03,0x03,0x03,0x01,0x01,0x01,0x00,
	0x00,0x00,0x00,0x00,0x1C,0x1E,0x1F,0x1F,0x0F,0x0F,0x07,0x07,0x03,0x03,0x01,0x01,
	0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x80,0xC0,0xC0,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xE0,
	0x00,0x00,0x00,0xE0,0xE0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xC0,0xC0,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xE0,0x80,0x00,0x00,0xE0,0xE0,0xC0,0x00,0xC0,0xE0,0x60,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,0x00,0xE0,0xE0,0x00,
	0x30,0x73,0x67,0x66,0x6E,0x7C,0x10,0x3C,0x7E,0x4B,0x4F,0x6E,0x30,0x00,0x7E,0x7F,
	0x03,0x7F,0x20,0x6E,0x6F,0x7B,0x3B,0x13,0x3E,0x6F,0x4B,0x6F,0x6E,0x30,0x00,0x3E,
	0x7E,0x67,0x73,0x3F,0x7E,0x60,0x7F,0x03,0x3F,0x7F,0x60,0x3E,0x63,0x63,0x7F,0x7F,
	0x00,0x00,0x00,0x7F,0x60,0x60,0x61,0x73,0x3F,0x00,0x7F,0x7F,0x03,0x07,0x0F,0x00,
	0x7F,0x00,0x07,0x1F,0x78,0x78,0x1F,0x3E,0x7B,0x6B,0x6F,0x6F,0x76,0x00,0x03,0x03,
	0x7F,0x7F,0x43,0x03,0x7F,0x0E,0x07,0x3F,0x7F,0x60,0x3E,0x7F,0x6D,0x6F,0x7F,0x30,
	0x00,0x01,0x7F,0x78,0x3F,0x0F,0x3F,0xFF,0x3E,0x0F,0x01,0x18,0x7E,0x7F,0x63,0x3F,
	0x0E,0x00,0x7F,0x7E,0x03,0x0F,0x00,0x7F,0x7F,0x1C,0x7E,0x77,0x63,0x7F,0x7F,0x00
};

//===全局变量
OLED_IIC_HandleType		g_OLEDI2CDevice0;
pOLED_IIC_HandleType		pOLEDI2CDevice0 = &g_OLEDI2CDevice0;

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T OLED_Device0_Init(OLED_IIC_HandleType *OLEDx)
{
	//---如果为6针的IIC模式，RES端口必须接入端口控制，否者需要拉高处理
	//---RST端口的配置
	OLEDx->msgRST.msgBit = LL_GPIO_PIN_5;
	OLEDx->msgRST.msgPort = GPIOB;

	//---端口初始化
	#ifndef  USE_FULL_GPIO
	if (OLEDx->msgRST.msgPort != NULL)
	{
		GPIOTask_Clock(OLEDx->msgRST.msgPort, PERIPHERAL_CLOCK_ENABLE);
	}
	#endif
	//---GPIO的结构体
	LL_GPIO_InitTypeDef GPIO_InitStruct = { 0 };
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;						//---配置状态为输出模式
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_MEDIUM;				//---GPIO的速度---低速设备
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;			//---输出模式---推挽输出
	GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;							//---上拉
#ifndef USE_MCU_STM32F1
	GPIO_InitStruct.Alternate = LL_GPIO_AF_0;						//---端口复用模式
#endif

//---RST端口的初始化
	GPIO_InitStruct.Pin = OLEDx->msgRST.msgBit;
	if (OLEDx->msgRST.msgPort != NULL)
	{
		LL_GPIO_Init(OLEDx->msgRST.msgPort, &GPIO_InitStruct);
		GPIO_OUT_1(OLEDx->msgRST.msgPort, OLEDx->msgRST.msgBit);
	}

	//---I2C的配置
	OLEDx->msgI2C.pMsgI2Cx = NULL;
	OLEDx->msgI2C.msgSCL.msgPort = GPIOB;
	OLEDx->msgI2C.msgSCL.msgBit = LL_GPIO_PIN_6;
	OLEDx->msgI2C.msgSDA.msgPort = GPIOB;
	OLEDx->msgI2C.msgSDA.msgBit = LL_GPIO_PIN_7;
	OLEDx->msgI2C.msgHwMode = 0;
	OLEDx->msgI2C.msgPluseWidth = 1;
	OLEDx->msgI2C.pMsgDelayus = NULL;

	//---通过调整0R电阻,屏可以0x78和0x7A两个地址 -- 默认0x78
	OLEDx->msgI2C.msgAddr = 0x78;
	OLEDx->msgI2C.msgClockSpeed = 0;
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T OLED_Device1_Init(OLED_IIC_HandleType *OLEDx)
{
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T OLED_Device2_Init(OLED_IIC_HandleType *OLEDx)
{
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T OLED_I2C_Init(OLED_IIC_HandleType *OLEDx, void(*pFuncDelayus)(UINT32_T delay), UINT32_T(*pFuncTimerTick)(void), UINT8_T isHWI2C)
{
	UINT8_T _return = OK_0;
	//---指定设备的初始化
	if ((OLEDx != NULL) && (OLEDx == OLED_TASK_ONE))
	{
		OLED_Device0_Init(OLEDx);
	}
	else if ((OLEDx != NULL) && (OLEDx == OLED_TASK_TWO))
	{
		OLED_Device1_Init(OLEDx);
	}
	else if ((OLEDx != NULL) && (OLEDx == OLED_TASK_THREE))
	{
		OLED_Device2_Init(OLEDx);
	}
	else
	{
		return ERROR_1;
	}
	//---判断是硬件I2C还是软件I2C
	(isHWI2C != 0) ? (I2CTask_MHW_Init(&(OLEDx->msgI2C),pFuncDelayus, pFuncTimerTick)) : (I2CTask_MSW_Init(&(OLEDx->msgI2C), pFuncDelayus, pFuncTimerTick));
	//---硬件初始化
	OLED_I2C_HWInit(OLEDx);
	return _return;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T OLED_SWI2C_WriteSingle(OLED_IIC_HandleType *OLEDx, UINT8_T addr, UINT8_T dat)
{
	UINT8_T _return = OK_0;
	//---启动并发送地址
	_return = I2CTask_MSW_START(&(OLEDx->msgI2C), 1);
	if (_return != OK_0)
	{
		//---启动写数据失败
		_return = ERROR_2;
		goto GoToExit;
	}
	//---发送寄存器地址
	I2CTask_MSW_SendByte(&(OLEDx->msgI2C), addr);
	//---读取ACK
	_return = I2CTask_MSW_ReadACK(&(OLEDx->msgI2C));
	if (_return != OK_0)
	{
		//---发送数据失败
		_return = ERROR_3;
		goto GoToExit;
	}
	//---发送寄存器地址
	I2CTask_MSW_SendByte(&(OLEDx->msgI2C), dat);
	//---读取ACK
	_return = I2CTask_MSW_ReadACK(&(OLEDx->msgI2C));
	//---退出入口函数
GoToExit:
	//---发送停止信号
	I2CTask_MSW_STOP(&(OLEDx->msgI2C));
	return _return;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T OLED_HWI2C_WriteSingle(OLED_IIC_HandleType *OLEDx, UINT8_T addr, UINT8_T dat)
{
	UINT8_T _return = OK_0;
	//---启动IIC并发送器件地址，写数据
	_return = I2CTask_MHW_PollMode_START(&(OLEDx->msgI2C), 1);
	if (_return != OK_0)
	{
		//---启动写数据失败
		_return = ERROR_1;
		goto GoToExit;
	}
	//---发送寄存器地址,存储单元的地址
	_return = I2CTask_MHW_PollMode_SendByte(&(OLEDx->msgI2C), addr, 0);
	if (_return != OK_0)
	{
		//---发送数据失败
		_return = ERROR_2;
		goto GoToExit;
	}
	//---发送数据，内部寄存器数据
	_return = I2CTask_MHW_PollMode_SendByte(&(OLEDx->msgI2C), dat, 1);
	if (_return != OK_0)
	{
		//---发送数据错误
		_return = ERROR_3;
		goto GoToExit;
	}
	//---退出操作入口
GoToExit:
	//---发送停止信号
	I2CTask_MHW_PollMode_STOP(&(OLEDx->msgI2C));
	return _return;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T OLED_I2C_WriteSingle(OLED_IIC_HandleType *OLEDx, UINT8_T addr, UINT8_T dat)
{
	if (OLEDx->msgI2C.msgHwMode == 0)
	{
		return OLED_SWI2C_WriteSingle(OLEDx, addr, dat);
	}
	else
	{
		I2CTask_MHW_CheckClock(&(OLEDx->msgI2C));
		//---硬件I2C
		return OLED_HWI2C_WriteSingle(OLEDx, addr, dat);
	}
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T OLED_I2C_WriteCmd(OLED_IIC_HandleType *OLEDx, UINT8_T cmd)
{
	return OLED_I2C_WriteSingle(OLEDx, 0x00, cmd);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T OLED_I2C_WriteData(OLED_IIC_HandleType *OLEDx, UINT8_T cmd)
{
	return OLED_I2C_WriteSingle(OLEDx, 0x40, cmd);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：开启OLED显示
//////////////////////////////////////////////////////////////////////////////
void OLED_I2C_DisplayON(OLED_IIC_HandleType *OLEDx)
{
	//---设置电荷泵
	OLED_I2C_WriteCmd(OLEDx, 0x8D);
	//---开启电荷泵
	OLED_I2C_WriteCmd(OLEDx, 0x14);
	//---OLED唤醒
	OLED_I2C_WriteCmd(OLEDx, 0xAF);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：关闭OLED显示
//////////////////////////////////////////////////////////////////////////////
void OLED_I2C_DisplayOFF(OLED_IIC_HandleType *OLEDx)
{
	//---设置电荷泵
	OLED_I2C_WriteCmd(OLEDx, 0x8D);
	//---关闭电荷泵
	OLED_I2C_WriteCmd(OLEDx, 0x10);
	//---OLED休眠
	OLED_I2C_WriteCmd(OLEDx, 0xAE);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：全屏填充
//////////////////////////////////////////////////////////////////////////////
void OLED_I2C_Fill(OLED_IIC_HandleType *OLEDx, UINT8_T dat)
{
	UINT8_T i = 0;
	UINT8_T n = 0;
	for (i = 0; i < OLED_PAGE_SIZE; i++)
	{
		//---设置页地址（0~7）
		OLED_I2C_WriteCmd(OLEDx, (0xB0 + i));
		//---设置显示位置—列低地址
		OLED_I2C_WriteCmd(OLEDx, 0x00);
		//---设置显示位置—列高地址
		OLED_I2C_WriteCmd(OLEDx, 0x10);
		for (n = 0; n < OLED_MAX_COL; n++)
		{
			//---更新显示
			OLED_I2C_WriteData(OLEDx, dat);
		}
	}
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void OLED_I2C_Clear(OLED_IIC_HandleType *OLEDx)
{
	OLED_I2C_Fill(OLEDx, 0x00);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：设置起始点坐标
//////////////////////////////////////////////////////////////////////////////
void OLED_I2C_SetPos(OLED_IIC_HandleType *OLEDx, UINT8_T xPos, UINT8_T yPos)
{
	OLED_I2C_WriteCmd(OLEDx, (0xB0 + yPos));
	OLED_I2C_WriteCmd(OLEDx, ((xPos & 0xf0) >> 4) | 0x10);
	OLED_I2C_WriteCmd(OLEDx, (xPos & 0x0f) | 0x01);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：OLED的硬件的初始化
//////////////////////////////////////////////////////////////////////////////
void OLED_I2C_HWInit(OLED_IIC_HandleType *OLEDx)
{
	if (OLEDx->msgRST.msgPort != NULL)
	{
		GPIO_OUT_1(OLEDx->msgRST.msgPort, OLEDx->msgRST.msgBit);
		DelayTask_ms(100);
		GPIO_OUT_0(OLEDx->msgRST.msgPort, OLEDx->msgRST.msgBit);
		DelayTask_ms(100);
		GPIO_OUT_1(OLEDx->msgRST.msgPort, OLEDx->msgRST.msgBit);
	}

	OLED_I2C_WriteCmd(OLEDx, 0xAE); //--display off
	OLED_I2C_WriteCmd(OLEDx, 0x00); //---set low column address
	OLED_I2C_WriteCmd(OLEDx, 0x10); //---set high column address
	OLED_I2C_WriteCmd(OLEDx, 0x40); //--set start line address
	OLED_I2C_WriteCmd(OLEDx, 0xB0); //--set page address
	OLED_I2C_WriteCmd(OLEDx, 0x81); // contract control
	OLED_I2C_WriteCmd(OLEDx, 0xFF); //--128
	OLED_I2C_WriteCmd(OLEDx, 0xA1); //set segment remap
	OLED_I2C_WriteCmd(OLEDx, 0xA6); //--normal / reverse
	OLED_I2C_WriteCmd(OLEDx, 0xA8); //--set multiplex ratio(1 to 64)
	OLED_I2C_WriteCmd(OLEDx, 0x3F); //--1/32 duty
	OLED_I2C_WriteCmd(OLEDx, 0xC8); //Com scan direction
	OLED_I2C_WriteCmd(OLEDx, 0xD3); //-set display offset
	OLED_I2C_WriteCmd(OLEDx, 0x00); //

	OLED_I2C_WriteCmd(OLEDx, 0xD5); //set osc division
	OLED_I2C_WriteCmd(OLEDx, 0x80); //set divide ratio

	OLED_I2C_WriteCmd(OLEDx, 0xD8); //set area color mode off
	OLED_I2C_WriteCmd(OLEDx, 0x05); //

	OLED_I2C_WriteCmd(OLEDx, 0xD9); //Set Pre-Charge Period
	OLED_I2C_WriteCmd(OLEDx, 0xF1); //

	OLED_I2C_WriteCmd(OLEDx, 0xDA); //set com pin configuartion
	OLED_I2C_WriteCmd(OLEDx, 0x12); //

	OLED_I2C_WriteCmd(OLEDx, 0xDB); //set Vcomh
	OLED_I2C_WriteCmd(OLEDx, 0x30); //0x20,0.77xVcc

	OLED_I2C_WriteCmd(OLEDx, 0x8D); //set charge pump enable
	OLED_I2C_WriteCmd(OLEDx, 0x14); //

	OLED_I2C_WriteCmd(OLEDx, 0xAF); //--turn on oled panel
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数: x0,y0 -- 起始点坐标(x0:0~127, y0:0~7); x1,y1 -- 起点对角线(结束点)的坐标(x1:1~128,y1:1~8)
//////输出参数:
//////说		明：功能描述：显示显示BMP图片128×64起始点坐标(x,y),x的范围0～127，y为页的范围0～7
//////////////////////////////////////////////////////////////////////////////
void OLED_I2C_DrawBMP(OLED_IIC_HandleType *OLEDx, UINT8_T x0Pos, UINT8_T y0Pos, UINT8_T x1Pos, UINT8_T y1Pos, UINT8_T BMP[])
{
	UINT16_T j = 0;
	UINT8_T  x = 0;
	UINT8_T  y = 0;
	//---判断地址是否超界限
	if (x0Pos > (OLED_MAX_COL - 1))
	{
		x0Pos = (OLED_MAX_COL - 1);
	}
	if (y0Pos > (OLED_MAX_ROW - 1))
	{
		y0Pos = (OLED_MAX_ROW - 1);
	}
	if (x1Pos > (OLED_MAX_COL - 1))
	{
		x1Pos = (OLED_MAX_COL - 1);
	}
	if (y1Pos > (OLED_MAX_ROW - 1))
	{
		y1Pos = (OLED_MAX_ROW - 1);
	}
	//---判断数据位置
	if (y1Pos % 8 == 0)
	{
		y = y1Pos / 8;
	}
	else
	{
		y = y1Pos / 8 + 1;
	}
	for (y = y0Pos; y < y1Pos; y++)
	{
		//---设置坐标
		OLED_I2C_SetPos(OLEDx, x0Pos, y);
		for (x = x0Pos; x < x1Pos; x++)
		{
			//---设置数据
			OLED_I2C_WriteData(OLEDx, BMP[j++]);
		}
	}
}