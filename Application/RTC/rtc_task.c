#include "rtc_task.h"

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�������������ʱ����㵱ǰϵͳʱ��,������ϵͳ��λ��ʱ��
//////�������: watchaMode---0-����أ�1-ʵʱ��أ�2-ˢ�¼��
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
void SysRTCTask_SoftRTCInit(SYS_RTC_HandlerType* RTCx, UINT16_T spanDays,UINT8_T watchaMode)
{
	SysRTCLib_SoftRTCInit(RTCx,spanDays, watchaMode);
}
///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_CalcWeekDay(RTC_HandlerType*RTCx)
{
	return SysRTCLib_CalcWeekDay(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_RealTimeWatch(SYS_RTC_HandlerType* RTCx)
{
	return SysRTCLib_RealTimeWatch(RTCx);
}


///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_RefreshWatch(SYS_RTC_HandlerType* RTCx)
{
	return SysRTCLib_RefreshWatch(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_SetWatchTime(SYS_RTC_HandlerType* RTCx, UINT16_T spanDays)
{
	return SysRTCLib_SetWatchTime(RTCx, spanDays);
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_ClearWatch(SYS_RTC_HandlerType* RTCx)
{
	return SysRTCLib_ClearWatch(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_WatchTask(SYS_RTC_HandlerType* RTCx)
{
	return SysRTCLib_WatchTask(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_SoftRTCTask(SYS_RTC_HandlerType* RTCx, UINT32_T rtcSecond)
{
	return SysRTCLib_SoftRTCTask(RTCx, rtcSecond);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCInit(SYS_RTC_HandlerType* RTCx, UINT16_T spanDays, UINT8_T watchaMode)
{
	return SysRTCLib_HardRTCInit(RTCx, spanDays, watchaMode);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCSetTime(SYS_RTC_HandlerType* RTCx, UINT8_T hour, UINT8_T minute, UINT8_T second)
{
	return SysRTCLib_HardRTCSetTime(RTCx, hour, minute, second);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCGetTime(SYS_RTC_HandlerType* RTCx)
{
	return SysRTCLib_HardRTCGetTime(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCSetDate(SYS_RTC_HandlerType* RTCx, UINT8_T year, UINT8_T month, UINT8_T day)
{
	return SysRTCLib_HardRTCSetDate(RTCx, year, month, day);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCGetDate(SYS_RTC_HandlerType* RTCx)
{
	return SysRTCLib_HardRTCGetDate(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCSetCentury(SYS_RTC_HandlerType* RTCx, UINT8_T century)
{
	return SysRTCLib_HardRTCSetCentury(RTCx, century);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCGetCentury(SYS_RTC_HandlerType* RTCx)
{
	return SysRTCLib_HardRTCGetCentury(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCGetRTC(SYS_RTC_HandlerType* RTCx)
{
	return SysRTCLib_HardRTCGetRTC(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_HardRTCTask(SYS_RTC_HandlerType* RTCx)
{
	return SysRTCLib_HardRTCTask(RTCx);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysRTCTask_RTCTask(SYS_RTC_HandlerType* RTCx, UINT32_T rtcSecond, UINT8_T isHW)
{
	return SysRTCLib_RTCTask(RTCx, rtcSecond, isHW);
}