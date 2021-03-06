#include "rtc_task.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：根据软件编译时间计算当前系统时钟,并设置系统复位的时间
//////输入参数: watchaMode---0-不监控，1-实时监控，2-刷新监控
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_SoftRTCInit(SYS_RTC_HandleType* RTCx, UINT16_T spanDays,UINT8_T watchaMode)
{
	return SysRTCLib_SoftRTCInit(RTCx,spanDays, watchaMode);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_CalcWeekDay(RTC_HandleType*RTCx)
{
	return SysRTCLib_CalcWeekDay(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_RealTimeWatch(SYS_RTC_HandleType* RTCx)
{
	return SysRTCLib_RealTimeWatch(RTCx);
}


///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_RefreshWatch(SYS_RTC_HandleType* RTCx)
{
	return SysRTCLib_RefreshWatch(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_SetWatchTime(SYS_RTC_HandleType* RTCx, UINT16_T spanDays)
{
	return SysRTCLib_SetWatchTime(RTCx, spanDays);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_ClearWatch(SYS_RTC_HandleType* RTCx)
{
	return SysRTCLib_ClearWatch(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_WatchTask(SYS_RTC_HandleType* RTCx)
{
	return SysRTCLib_WatchTask(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_SoftRTCTask(SYS_RTC_HandleType* RTCx, UINT32_T rtcSecond)
{
	return SysRTCLib_SoftRTCTask(RTCx, rtcSecond);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCInit(SYS_RTC_HandleType* RTCx, UINT16_T spanDays, UINT8_T watchaMode)
{
	return SysRTCLib_HardRTCInit(RTCx, spanDays, watchaMode);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCSetTime(SYS_RTC_HandleType* RTCx, UINT8_T hour, UINT8_T minute, UINT8_T second)
{
	return SysRTCLib_HardRTCSetTime(RTCx, hour, minute, second);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCGetTime(SYS_RTC_HandleType* RTCx)
{
	return SysRTCLib_HardRTCGetTime(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCSetDate(SYS_RTC_HandleType* RTCx, UINT8_T year, UINT8_T month, UINT8_T day)
{
	return SysRTCLib_HardRTCSetDate(RTCx, year, month, day);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCGetDate(SYS_RTC_HandleType* RTCx)
{
	return SysRTCLib_HardRTCGetDate(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCSetCentury(SYS_RTC_HandleType* RTCx, UINT8_T century)
{
	return SysRTCLib_HardRTCSetCentury(RTCx, century);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCGetCentury(SYS_RTC_HandleType* RTCx)
{
	return SysRTCLib_HardRTCGetCentury(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCGetRTC(SYS_RTC_HandleType* RTCx)
{
	return SysRTCLib_HardRTCGetRTC(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCTask(SYS_RTC_HandleType* RTCx)
{
	return SysRTCLib_HardRTCTask(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_RTCTask(SYS_RTC_HandleType* RTCx, UINT32_T rtcSecond)
{
	return SysRTCLib_RTCTask(RTCx, rtcSecond);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：根据软件编译时间计算当前系统时钟,并设置系统复位的时间
//////输入参数: watchaMode---0-不监控，1-实时监控，2-刷新监控
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_RTCInit(SYS_RTC_HandleType* RTCx, UINT16_T spanDays,UINT8_T watchaMode,UINT8_T isHW)
{
	return SysRTCLib_RTCInit(RTCx, spanDays, watchaMode, isHW);
}