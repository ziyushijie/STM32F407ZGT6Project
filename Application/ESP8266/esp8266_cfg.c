#include "esp8266_cfg.h"

////////////////////////////////////////////////////////////////////////////////////// 
//////////////////////////>>>AT命令组---开始/////////////////////////////////////////// 
//////////////////////////////////////////////////////////////////////////////////////
//===AT返回命令
const char ESP8266_AT_RESPONSE_OK[] = "OK\r\n";																			//---正确
const char ESP8266_AT_RESPONSE_ERROR[] = "ERROR\r\n";																	//---错误
const char ESP8266_AT_RESPONSE_FAIL[] = "FAIL";																			//---失败
const char ESP8266_AT_RESPONSE_READY[] = "READY!";																		//---准备
const char ESP8266_AT_RESPONSE_RECEIVED[] = "+IPD,";																	//---接收到服务器发来的数据

//===AT基本指令
const char ESP8266_AT_CMD_TEST[] = "AT";																				//---测试命令
const char ESP8266_AT_CMD_RESET[] = "AT+RST";																			//---模块重启
const char ESP8266_AT_CMD_VERSION[] = "AT+GMR";																			//---查看固件版本
const char ESP8266_AT_CMD_DEEP_SLEEP[] = "AT+GSLP";																		//---进入DepSleep睡眠模式
const char ESP8266_AT_CMD_SET_SLEEP[] = "AT+SLEEP";																		//---设置休眠模式
const char ESP8266_AT_CMD_ECHO_OPEN[] = "ATE1";																			//---打开回显
const char ESP8266_AT_CMD_ECHO_CLOSE[] = "ATE0";																		//---关闭回显
const char ESP8266_AT_CMD_RESTORE[] = "AT+RESTORE";																		//---恢复出厂设置
const char ESP8266_AT_CMD_UART[] = "AT+UART";																			//---设置串口模式
const char ESP8266_AT_CMD_UART_CUR[] = "AT+UART_CUR";																	//---当前临时配置
const char ESP8266_AT_CMD_UART_DEF[] = "AT+UART_DEF";																	//---UART默认配置，保存到Flash
const char ESP8266_AT_CMD_SYSRAM[] = "AT+SYSRAM";																		//---查询系统当前剩余内存
const char ESP8266_AT_CMD_SYSMSG_CUR[] = "AT+SYSMSG_CUR";																//---设置当前系统消息
const char ESP8266_AT_CMD_SYSMSG_DEG[] = "AT+SYSMSG_DEF";																//---设置默认系统消息

//===WIFI功能命令
const char ESP8266_AT_WIFI_MODE[] = "AT+CWMODE";																		//---设置模式，响应OK
const char ESP8266_AT_WIFI_DEF[] = "AT+CWMODE_DEF";																		//---配置WiFi模组工作模式为单STA模式，并把配置保存在flash
const char ESP8266_AT_WIFI_CONNECT_AP[] = "AT+CWJAP";																	//---加入热点，连接路由器，响应OK
const char ESP8266_AT_WIFI_LIST_IP[] = "AT+CIFSR";																		//---查询设备的IP地址
const char ESP8266_AT_WIFI_LIST_AP[] = "AT+CWLAP";																		//---产看当前的无线路由器列表
const char ESP8266_AT_WIFI_DISCONNECT[] = "AT+CWQAP";																	//---退出热点
const char ESP8266_AT_WIFI_AP_CONFIG[] = "AT+CWSAP";																	//---设置热点
const char ESP8266_AT_WIFI_STA_IP[] = "AT+CWLIF";																		//---获取连接信息
const char ESP8266_AT_WIFI_DHCP_EN[] = "AT+CWDHCP";																		//---设置DHCO
const char ESP8266_AT_WIFI_AUTO_CONNECT[] = "AT+CWAUTOCONN";															//---使能上电自动连接AP
const char ESP8266_AT_WIFI_SET_STA_MAC[] = "AT+CIPSTAMAC";																//---设置MAC地址							
const char ESP8266_AT_WIFI_SET_STA_IP[] = "AT+CIPSTA";																	//---设置IP地址
const char ESP8266_AT_WIFI_SET_AP_IP[] = "AT+CIPAP";																	//---设置热点的IP地址
const char ESP8266_AT_WIFI_STARTSMART[] = "AT+CWSTARTSMART";															//---无论配网是否成功，都需要释放快连所占的内存
const char ESP8266_AT_WIFI_STOPSMART[] = "AT+CWSTOPSMART";																//---无论配网是否成功，都需要释放快连所占的内存
const char ESP8266_AT_WIFI_STARTDISCOVER[] = "AT+CWSTARTDISCOVER";														//---开启可被局域网的微信探测的模式
const char ESP8266_AT_WIFI_STOPDISCOVER[] = "AT+CWSTOPDISCOVER";														//---关闭可被局域网的微信探测的模式
const char ESP8266_AT_WIFI_WPS[] = "AT+WPS";																			//---设置WPS
const char ESP8266_AT_WIFI_MDNS[] = "AT+MDNS";																			//---设置MDNS功能
const char ESP8266_AT_WIFI_SET_STA_NAME[] = "AT+CWHOSTNAME";															//---设置STA的主机名称
const char ESP8266_AT_WIFI_SET_STA_COUNTRY[] = "AT+CWCOUNTRY";															//---设置WIFI的国家码

//===TCP/IP Commands
const char ESP8266_TCP_IP_STARTSMART[] = "AT+CWSTARTSMART";																//---无论配网是否成功，都需要释放快连所占的内存
const char ESP8266_TCP_IP_STOPSMART[] = "AT+CWSTOPSMART";																//---无论配网是否成功，都需要释放快连所占的内存
const char ESP8266_TCP_IP_STATUS[] = "AT+CIPSTATUS";																	//---查询网络连接状态，响应OK
const char ESP8266_TCP_IP_DOMAIN[] = "AT+CIPDOMAIN";																	//---查域名解析功能
const char ESP8266_TCP_IP_CONNECT[] = "AT+CIPSTART";																	//---连接服务器
const char ESP8266_TCP_IP_SSL_SIZE[] = "AT+CIPSSLSIZE";																	//---设置SSL的缓存区大小
const char ESP8266_TCP_IP_SSL_CONF[] = "AT+CIPSSLCONF";																	//---设置SSL Client
const char ESP8266_TCP_IP_SEND[] = "AT+CIPSEND";																		//---启动透传
const char ESP8266_TCP_IP_SENDX[] = "AT+CIPSENDX";																		//---发送数据，达到设置?长度，或者遇到字符 \0，则发送数据
const char ESP8266_TCP_IP_SENDBUF[] = "AT+CIPSENDBUF";																	//---数据写?入TCP 发包缓存
const char ESP8266_TCP_IP_BUFRESET[] = "AT+CIPBUFRESET";																//---重置计数（TCP 发包缓存）
const char ESP8266_TCP_IP_BUFSTATUS[] = "AT+CIPBUFSTATUS";																//---查询 TCP 发包缓存的状态
const char ESP8266_TCP_IP_CHECKSEQ[] = "AT+CIPCHECKSEQ";																//---查询写?入 TCP 发包缓存的某包是否成功发送
const char ESP8266_TCP_IP_CLOSE[] = "AT+CIPCLOSE";																		//---关闭传输
const char ESP8266_TCP_IP_LIST_IP[] = "AT+CIFSR";																		//---查询设备的IP地址
const char ESP8266_TCP_IP_IP_MUX[] = "AT+CIPMUX";																		//---使能多连接
const char ESP8266_TCP_IP_SERVER_CONFIG[] = "AT+CIPSERVER";																//---建立TCP服务器
const char ESP8266_TCP_IP_SERVER_MAX_COUNT[] = "AT+CIPSERVERMAXCOUT";													//---设置服务器?允许建?立的最?大连接
const char ESP8266_TCP_IP_MODE[] = "AT+CIPMODE";																		//---设置透传模式，0---普通传输模式，1---透传模式，仅?支持 TCP 单连接和 UDP 固定通信对端的情况
const char ESP8266_TCP_IP_SAVE_TRANS_LINK[] = "AT+SAVETRANSLINK";														//---保存透传连接到 Flash
const char ESP8266_TCP_IP_SET_SERVER_TIMEOUT[] = "AT+CIPSTO";															//---设置作为 TCP 服务器?时的超时时间
const char ESP8266_TCP_IP_PING[] = "AT+PING";																			//---pin功能
const char ESP8266_TCP_IP_UPDATE[] = "AT+CIUPDATE";																		//---通过WiFi升级软件
const char ESP8266_TCP_IP_IPDINFO[] = "AT+CIPDINFO";																	//---接收?网络数据时，+IPD 是否提示对端 IP 和端?口
const char ESP8266_TCP_IP_RECVMODE[] = "AT+CIPRECVMODE";																//---设置 TCP 接收模式
const char ESP8266_TCP_IP_RECVDATA[] = "AT+CIPRECVDATA";																//---TCP 被动接收模式下，读取缓存的 TCP 数据
const char ESP8266_TCP_IP_RECVLEN[] = "AT+CIPRECVLEN";																	//---TCP 被动接收模式下，查询缓存 TCP 数据的?长度TCP 数据
const char ESP8266_TCP_IP_SNTPCFG[] = "AT+CIPSNTPCFG";																	//---设置时域和 SNTP 服务器?
const char ESP8266_TCP_IP_SNTPTIME[] = "AT+CIPSNTPTIME";																//---查询 SNTP 时间
const char ESP8266_TCP_IP_DNS[] = "AT+CIPDNS";																			//---?自定义 DNS 服务器?

//===GPIO Commands
const char ESP8266_GPIO_PINMODE[] = "AT+PINMODE";																		//---配置端口输入输出模式
const char ESP8266_GPIO_PINWRITE[] = "AT+PINWRITE";																		//---设置的端口输出高低电平
const char ESP8266_GPIO_PINREAD[] = "AT+PINREAD";																		//---读取端口的电平信号
////////////////////////////////////////////////////////////////////////////////////// 
//////////////////////////<<<AT命令组---结束/////////////////////////////////////////// 
//////////////////////////////////////////////////////////////////////////////////////

//===数据缓存区
UINT8_T g_ESP8266_RX_BUFFER[ESP8266_BUFFER_MAX_SIZE] = { 0 };															//---接收缓存区
UINT8_T g_ESP8266_TX_BUFFER[ESP8266_BUFFER_MAX_SIZE] = { 0 };															//---发送缓存区
//===搴旂瓟缂撳瓨鍖?
UINT8_T	g_ESP8266_ACK_BUFFER[ESP8266_ACK_BUFFER_MAX_SIZE]={0};

//===ESP8266变量定义
ESP8266_HandleType			g_Esp8266Device0={0};
pESP8266_HandleType			pEsp8266Device0=&g_Esp8266Device0;

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：设置初始化
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_Device0_Init(ESP8266_HandleType* ESP8266x, UINT32_T(*pFuncTimerTick)(void))
{
	//---状态空闲
	ESP8266x->msgTask= ESP8266_TASK_IDLE;
	//---模式WIFI是AP模式
	ESP8266x->msgWifiMode=ESP8266_AP;
	//---默认轮训时间
	ESP8266x->msgIntervalTime=0;
	//---ESP8266响应缓存区的大小
	ESP8266x->pMsgAck= g_ESP8266_ACK_BUFFER;
	//---使用的通讯串口
	ESP8266x->pMsgUART= ESP8266_COMM_UART;
	//---初始化串口
	UARTTask_Init(ESP8266x->pMsgUART, ESP8266_BUFFER_BASE_SIZE, g_ESP8266_RX_BUFFER, 0, ESP8266_BUFFER_BASE_SIZE, g_ESP8266_TX_BUFFER, 0, pFuncTimerTick);
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_Device1_Init(ESP8266_HandleType* ESP8266x, UINT32_T(*pFuncTimerTick)(void))
{
	return ERROR_1;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_Device2_Init(ESP8266_HandleType* ESP8266x, UINT32_T(*pFuncTimerTick)(void))
{
	return ERROR_1;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：设备初始化
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_Init(ESP8266_HandleType *ESP8266x,UINT32_T(*pFuncTimerTick)(void))
{
	if ((ESP8266x != NULL) && (ESP8266x == ESP8266_TASK_ONE))
	{
		ESP8266_UART_Device0_Init(ESP8266x, pFuncTimerTick);
	}
	else if ((ESP8266x != NULL) && (ESP8266x == ESP8266_TASK_TWO))
	{
		ESP8266_UART_Device1_Init(ESP8266x, pFuncTimerTick);
	}
	else if ((ESP8266x != NULL) && (ESP8266x == ESP8266_TASK_THREE))
	{
		ESP8266_UART_Device2_Init(ESP8266x, pFuncTimerTick);
	}
	else
	{
		return  ERROR_1;
	}
	//---注册延时函数
	(pFuncTimerTick != NULL) ? (ESP8266x->pMsgTimeTick = pFuncTimerTick) : (ESP8266x->pMsgTimeTick = SysTickTask_GetTick);
	return OK_0;
}


void ESP8266_UART_LOG(UART_HandleType* UARTx, char* fmt, ...)
{
	#ifdef USE_ESP8266_LOG
	va_list args;
	va_start(args, fmt);
	UARTTask_PrintfLog(UARTx, fmt, args);
	va_end(args);
	#endif
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_ACK(ESP8266_HandleType* ESP8266x, char* ack, UINT16_T intervalTime)
{
	//---璁剧疆鏌ヨ鏃堕棿
	ESP8266x->msgIntervalTime=intervalTime;
	//---璁剧疆褰撳墠浠诲姟鐘舵�佹槸ACK妯″紡
	ESP8266x->msgTask= ESP8266_TASK_QUERY_ACK;
	//---娓呯┖缂撳瓨鍖?
	memset(ESP8266x->pMsgAck, 0, ESP8266_ACK_BUFFER_MAX_SIZE);
	//---杩藉姞鎹㈣绗?
	strcat((char*)ESP8266x->pMsgAck, ack);
	//---寮�濮嬬瓑寰匒CK
	ESP8266x->msgAckState= ESP8266_ACK_WAIT;
	//---鎸囧悜搴旂瓟缁撴灉鐨勬寚姝ｄ负绌?
	ESP8266x->pMsgAckResult=NULL;
	//---璁板綍褰撳墠鐨勬椂闂?
	ESP8266x->msgRecordTick=ESP8266x->pMsgTimeTick();
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細鏌ヨ搴旂瓟
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_QueryAckTask(ESP8266_HandleType* ESP8266x)
{
	//---鑾峰彇褰撳墠鏃堕棿
	UINT32_T nowTime=ESP8266x->pMsgTimeTick();
	UINT32_T cnt=0;
	//---鍒ゆ柇鏄笉鏄渶瑕佸簲绛旀暟鎹?
	if (ESP8266x->msgTask== ESP8266_TASK_QUERY_ACK)
	{
		if (nowTime<ESP8266x->msgRecordTick)
		{
			cnt = (0xFFFFFFFF - ESP8266x->msgRecordTick + nowTime);
		}
		else
		{
			cnt= nowTime- ESP8266x->msgRecordTick;
		}
		//---鍒ゆ柇搴旂瓟鏄惁瓒呮椂
		if (cnt>ESP8266x->msgIntervalTime)
		{
			//---搴旂瓟瓒呮椂
			ESP8266x->msgAckState= ESP8266_ACK_TIMEOUT;
			//---浠诲姟绌洪棽
			ESP8266x->msgTask = ESP8266_TASK_IDLE;
			//---妫�鏌ュ洖璋冨嚱鏁?
			if (ESP8266x->pMsgAckTimeoutCallBack!=NULL)
			{
				//---鎵ц鍥炶皟鍑芥暟
				ESP8266x->pMsgAckTimeoutCallBack(ESP8266x);
				//---鍥炶皟鍑芥暟鎵ц瀹屾瘯涔嬪悗锛岃繘琛屾敞閿�
				ESP8266x->pMsgAckTimeoutCallBack=NULL;
				//---娉ㄩ攢鍥炶皟鍑芥暟
				ESP8266x->pMsgAckErrCallBack = NULL;
				//---娉ㄩ攢鍥炶皟鍑芥暟
				ESP8266x->pMsgAckOkCallBack = NULL;
			}
		}
		else
		{
			//---鍒ゆ柇鏄惁鏈夋暟鎹?
			if (UARTTask_GetState(&(ESP8266x->pMsgUART->msgRxdHandle)) == UART_OK)
			{
				//---鎵撳嵃LOG淇℃伅
				ESP8266_LOG("%s%s","ACK:", ESP8266x->pMsgUART->msgRxdHandle.pMsgVal);
				//---鏈夋暟鎹埌杈?鍒ゆ柇鏄惁鍜屽簲绛旀暟鎹竴鑷?
				ESP8266x->pMsgAckResult =strstr((char *)ESP8266x->pMsgUART->msgRxdHandle.pMsgVal,(char *)ESP8266x->pMsgAck);
				//---鏍￠獙鏄惁姝ｇ‘
				if (ESP8266x->pMsgAckResult==NULL)
				{
					//---鏈夊簲绛旀暟鎹紝浣嗘槸搴旂瓟缁撴灉寮傚父
					ESP8266x->msgAckState = ESP8266_ACK_ERR;
					//---鏍￠獙鍥炶皟鍑芥暟
					if (ESP8266x->pMsgAckErrCallBack!=NULL)
					{
						//---鎵ц鍥炶皟鍑芥暟
						ESP8266x->pMsgAckErrCallBack(ESP8266x);
						//---鍥炶皟鍑芥暟鎵ц瀹屾瘯涔嬪悗锛岃繘琛屾敞閿�
						ESP8266x->pMsgAckErrCallBack=NULL;
						//---娉ㄩ攢鍥炶皟鍑芥暟
						ESP8266x->pMsgAckTimeoutCallBack = NULL;
						//---娉ㄩ攢鍥炶皟鍑芥暟
						ESP8266x->pMsgAckOkCallBack = NULL;
					}
				}
				else
				{
					//---鍚堟牸
					ESP8266x->msgAckState = ESP8266_ACK_OK;
					//---鏍￠獙鍥炶皟鍑芥暟鐨勬墽琛?
					if (ESP8266x->pMsgAckOkCallBack!=NULL)
					{
						//---鎵ц鍥炶皟鍑芥暟
						ESP8266x->pMsgAckOkCallBack(ESP8266x);
						//---鍥炶皟鍑芥暟鎵ц瀹屾垚涔嬪悗锛岃繘琛岄噴鏀?
						ESP8266x->pMsgAckOkCallBack=NULL;
						//---娉ㄩ攢鍥炶皟鍑芥暟
						ESP8266x->pMsgAckTimeoutCallBack = NULL;
						//---娉ㄩ攢鍥炶皟鍑芥暟
						ESP8266x->pMsgAckErrCallBack = NULL;
					}
				}
				//---浠诲姟绌洪棽
				ESP8266x->msgTask = ESP8266_TASK_IDLE;
			}
		}
	}
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細ESP8266鐨勭瓑寰呭彂閫佺┖闂?
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_Write_WaitIdle(ESP8266_HandleType* ESP8266x)
{
	//---鑾峰彇褰撳墠鏃堕棿鑺傛媿
	UINT32_T nowTime = 0;
	UINT32_T oldTime = 0;
	UINT32_T cnt = 0;
	//---鑾峰彇褰撳墠鏃堕棿鑺傛媿
	oldTime = ESP8266x->pMsgTimeTick();
	//---妫�鏌ュ彂閫佺姸鎬侊紝绛夊緟涔嬪墠鐨勬暟鎹彂閫佸畬鎴?蹇呴』鏄┖闂茬姸鎬侊紝鎬荤嚎涓婃病鏈夊叾浠栨暟鎹斁
	while (UARTTask_Write_CheckIdle(ESP8266x->pMsgUART) != OK_0)
	{
		//--->>>鍔犲叆瓒呮椂鏈哄埗---寮�濮?
		//---褰撳墠鏃堕棿
		nowTime = ESP8266x->pMsgTimeTick();
		//---鍒ゆ柇婊寸瓟瀹氭椂鏄惁鍙戠敓婧㈠嚭鎿嶄綔
		if (nowTime < oldTime)
		{
			cnt = (0xFFFFFFFF - oldTime + nowTime);
		}
		else
		{
			cnt = nowTime - oldTime;
		}
		//---鍒ゆ柇鏄惁瓒呮椂
		if (cnt > 100)
		{
			//---鍙戦�佸彂鐢熻秴鏃堕敊璇?
			return ERROR_1;
		}
		//--->>>鍔犲叆瓒呮椂鏈哄埗---寮�濮?
		//---鍠傜嫍
		WDT_RESET();
	}
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細ESP8266鍙戦�佹暟鎹?
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_Write(ESP8266_HandleType* ESP8266x,UINT8_T *pVal)
{
	return UARTTask_FillMode_WriteSTART(ESP8266x->pMsgUART, strlen((char*)pVal));
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細娴嬭瘯鍛戒护姝ｇ‘鍥炶皟鍑芥暟
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_TestAT_OkCallBack(ESP8266_HandleType* ESP8266x)
{
	ESP8266_LOG("%s%s\r\n", "Info:", "AT娴嬭瘯鍛戒护鍝嶅簲姝ｇ‘!");
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細娴嬭瘯鍛戒护姝ｇ‘鍥炶皟鍑芥暟
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_TestAT_ErrCallBack(ESP8266_HandleType* ESP8266x)
{
	ESP8266_LOG("%s%s\r\n", "Info:", "AT娴嬭瘯鍛戒护鍝嶅簲閿欒!");
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細娴嬭瘯鍛戒护姝ｇ‘鍥炶皟鍑芥暟
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_TestAT_TimeoutCallBack(ESP8266_HandleType* ESP8266x)
{
	ESP8266_LOG("%s%s\r\n", "Info:", "AT娴嬭瘯鍛戒护鍝嶅簲瓒呮椂!");
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細娴嬭瘯AT鍛戒护锛屽洖搴?OK"
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_TestAT(ESP8266_HandleType* ESP8266x)
{
	//---鏍￠獙鍙戦�佺┖闂?
	if (ESP8266_UART_Write_WaitIdle(ESP8266x) == OK_0)
	{
		//---鎭㈠缂撳瓨鍖虹殑棣栧湴鍧�
		*(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal) = ESP8266x->pMsgUART->msgTxdHandle.msgMsgValBaseAddr;
		//---娓呯┖缂撳瓨鍖?
		memset(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, 0, ESP8266_BUFFER_MAX_SIZE);
		//---灏嗘寚瀹氱殑瀛楃涓茶拷鍔犲湪缁撳熬
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, ESP8266_AT_CMD_TEST);
		//---杩藉姞鎹㈣绗?
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, "\r\n");
		//---鎵撳嵃LOG淇℃伅
		ESP8266_LOG("%s:\r\n%s", "CMD:", ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
		//---璁剧疆搴旂瓟鏁版嵁鍜屽簲绛旀椂闂村簲绛旂殑鏃堕棿
		ESP8266_UART_ACK(ESP8266x,"OK",100);
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckOkCallBack = ESP8266_UART_TestAT_OkCallBack;
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckErrCallBack = ESP8266_UART_TestAT_ErrCallBack;
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckTimeoutCallBack = ESP8266_UART_TestAT_TimeoutCallBack;
		//---鍙戦�佹暟鎹?
		return ESP8266_UART_Write(ESP8266x, ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
	}
	return ERROR_1;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_SoftReset_OkCallBack(ESP8266_HandleType* ESP8266x)
{
	ESP8266_LOG("%s%s\r\n", "Info:", "软件复位命令响应正确！");
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_SoftReset_ErrCallBack(ESP8266_HandleType* ESP8266x)
{
	ESP8266_LOG("%s%s\r\n", "Info:", "软件复位命令响应错误！");
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_SoftReset_TimeoutCallBack(ESP8266_HandleType* ESP8266x)
{
	ESP8266_LOG("%s%s\r\n", "Info:", "软件复位命令响应超时！");
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細杞欢鍛戒护澶嶄綅璁惧锛屽洖搴?OK"
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_SoftReset(ESP8266_HandleType* ESP8266x)
{
	//---鏍￠獙鍙戦�佺┖闂?
	if (ESP8266_UART_Write_WaitIdle(ESP8266x)==OK_0)
	{
		//---鎭㈠缂撳瓨鍖虹殑棣栧湴鍧�
		*(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal) = ESP8266x->pMsgUART->msgTxdHandle.msgMsgValBaseAddr;
		//---娓呯┖缂撳瓨鍖?
		memset(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, 0, ESP8266_BUFFER_MAX_SIZE);
		//---灏嗘寚瀹氱殑瀛楃涓茶拷鍔犲湪缁撳熬
		strcat((char *)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, ESP8266_AT_CMD_RESET);
		//---杩藉姞鎹㈣绗?
		strcat((char *)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, "\r\n");
		//---鎵撳嵃LOG淇℃伅
		ESP8266_LOG("%s%s", "CMD:", ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
		//---璁剧疆搴旂瓟鏁版嵁鍜屽簲绛旀椂闂村簲绛旂殑鏃堕棿
		ESP8266_UART_ACK(ESP8266x, "OK", 20000);
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckOkCallBack = ESP8266_UART_SoftReset_OkCallBack;
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckErrCallBack = ESP8266_UART_SoftReset_ErrCallBack;
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckTimeoutCallBack = ESP8266_UART_SoftReset_ErrCallBack;		
		//---鍙戦�佹暟鎹?
		return ESP8266_UART_Write(ESP8266x, ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
	}
	return ERROR_1;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_GetVersionInfo_OkCallBack(ESP8266_HandleType* ESP8266x)
{
	ESP8266_LOG("%s%s\r\n", "Info:", "鑾峰彇鐗堟湰淇℃伅鍛戒护鍝嶅簲姝ｇ‘!");
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_GetVersionInfo_ErrCallBack(ESP8266_HandleType* ESP8266x)
{
	ESP8266_LOG("%s%s\r\n", "Info:", "鑾峰彇鐗堟湰淇℃伅鍛戒护鍝嶅簲閿欒!");
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_GetVersionInfo_TimeoutCallBack(ESP8266_HandleType* ESP8266x)
{
	ESP8266_LOG("%s%s\r\n", "Info:", "鑾峰彇鐗堟湰淇℃伅鍛戒护鍝嶅簲瓒呮椂!");
	return OK_0;
}
///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細鑾峰彇鐗堟湰淇℃伅锛屽洖搴旂増鏈俊鎭紝骞朵互鈥淥K鈥濈粨灏?
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_GetVersionInfo(ESP8266_HandleType* ESP8266x)
{
	//---鏍￠獙鍙戦�佺┖闂?
	if (ESP8266_UART_Write_WaitIdle(ESP8266x) == OK_0)
	{
		//---鎭㈠缂撳瓨鍖虹殑棣栧湴鍧�
		*(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal) = ESP8266x->pMsgUART->msgTxdHandle.msgMsgValBaseAddr;
		//---娓呯┖缂撳瓨鍖?
		memset(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, 0, ESP8266_BUFFER_MAX_SIZE);
		//---灏嗘寚瀹氱殑瀛楃涓茶拷鍔犲湪缁撳熬
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, ESP8266_AT_CMD_VERSION);
		//---杩藉姞鎹㈣绗?
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, "\r\n");
		//---鎵撳嵃LOG淇℃伅
		ESP8266_LOG("%s%s", "CMD:", ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
		//---璁剧疆搴旂瓟鏁版嵁鍜屽簲绛旀椂闂村簲绛旂殑鏃堕棿
		ESP8266_UART_ACK(ESP8266x, "OK", 100);
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckOkCallBack = ESP8266_UART_GetVersionInfo_OkCallBack;
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckErrCallBack = ESP8266_UART_GetVersionInfo_ErrCallBack;
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckTimeoutCallBack = ESP8266_UART_GetVersionInfo_TimeoutCallBack;
		//---鍙戦�佹暟鎹?
		return ESP8266_UART_Write(ESP8266x, ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
	}
	return ERROR_1;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細鍥炴樉鍔熻兘寮�鍚笌鍏抽棴锛屽苟浠モ�淥K鈥濈粨灏?
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細鍏抽棴鍥炴樉涔嬪悗锛孍SP8266涓嶅湪杩斿洖鍙戦�佺殑鎸囦护
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_DisplayFunction(ESP8266_HandleType* ESP8266x,UINT8_T isClosed)
{
	//---鏍￠獙鍙戦�佺┖闂?
	if (ESP8266_UART_Write_WaitIdle(ESP8266x) == OK_0)
	{
		//---鎭㈠缂撳瓨鍖虹殑棣栧湴鍧�
		*(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal) = ESP8266x->pMsgUART->msgTxdHandle.msgMsgValBaseAddr;
		//---娓呯┖缂撳瓨鍖?
		memset(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, 0, ESP8266_BUFFER_MAX_SIZE);
		//---灏嗘寚瀹氱殑瀛楃涓茶拷鍔犲湪缁撳熬
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, (isClosed == 0) ? (ESP8266_AT_CMD_ECHO_OPEN) : (ESP8266_AT_CMD_ECHO_CLOSE));
		//---杩藉姞鎹㈣绗?
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, "\r\n");
		//---鎵撳嵃LOG淇℃伅
		ESP8266_LOG("%s%s", "CMD:", ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
		//---璁剧疆搴旂瓟鏁版嵁鍜屽簲绛旀椂闂村簲绛旂殑鏃堕棿
		ESP8266_UART_ACK(ESP8266x, "OK", 100);
		//---鍙戦�佹暟鎹?
		return ESP8266_UART_Write(ESP8266x, ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
	}
	return ERROR_1;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細鎭㈠鍑哄巶璁剧疆,鍥炲簲鈥淥K鈥?
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_RESTORE(ESP8266_HandleType* ESP8266x)
{
	//---鏍￠獙鍙戦�佺┖闂?
	if (ESP8266_UART_Write_WaitIdle(ESP8266x) == OK_0)
	{
		//---鎭㈠缂撳瓨鍖虹殑棣栧湴鍧�
		*(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal) = ESP8266x->pMsgUART->msgTxdHandle.msgMsgValBaseAddr;
		//---娓呯┖缂撳瓨鍖?
		memset(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, 0, ESP8266_BUFFER_MAX_SIZE);
		//---灏嗘寚瀹氱殑瀛楃涓茶拷鍔犲湪缁撳熬
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal,ESP8266_AT_CMD_RESTORE);
		//---杩藉姞鎹㈣绗?
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, "\r\n");
		//---鎵撳嵃LOG淇℃伅
		ESP8266_LOG("%s%s", "CMD:", ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
		//---璁剧疆搴旂瓟鏁版嵁鍜屽簲绛旀椂闂村簲绛旂殑鏃堕棿
		ESP8266_UART_ACK(ESP8266x, "OK", 100);
		//---鍙戦�佹暟鎹?
		return ESP8266_UART_Write(ESP8266x, ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
	}
	return ERROR_1;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細鏌ヨ搴旂瓟涓寘鍚玏IFI妯″紡淇℃伅
//////杈撳叆鍙傛暟:
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_QueryAck_WifiMode(ESP8266_HandleType* ESP8266x)
{	
	//---鏈夋暟鎹埌杈?鍒ゆ柇鏄惁鍜屽簲绛旀暟鎹竴鑷?
	char *pAck = strstr((char*)ESP8266x->pMsgUART->msgRxdHandle.pMsgVal, "+CWMODE");
	//---鏍￠獙鏄惁姝ｇ‘
	if (ESP8266x->pMsgAckResult == NULL)
	{
		//---鏈夊簲绛旀暟鎹紝浣嗘槸搴旂瓟缁撴灉寮傚父
		ESP8266x->msgAckState = ESP8266_ACK_ERR;
	}
	else
	{
		pAck=strstr(pAck, ":");
		//---鏍￠獙缁撴灉
		if (pAck==NULL)
		{
			//---搴旂瓟缁撴灉姝ｇ‘锛屼絾鏄簲绛旀暟鍐呭閿欒
			ESP8266x->msgAckState = ESP8266_ACK_ERR_INFO;
		}
		else
		{
			pAck++;
			//---鑾峰彇Wifi妯″紡鐨勭粨鏋?
			ESP8266x->msgWifiMode=*pAck-0x30;
			//---鍚堟牸
			ESP8266x->msgAckState = ESP8266_ACK_OK;
		}		
	}
	//---浠诲姟绌洪棽
	ESP8266x->msgTask = ESP8266_TASK_IDLE;
	return OK_0;
}

///////////////////////////////////////////////////////////////////////////////
//////鍑?	鏁帮細
//////鍔?	鑳斤細璁剧疆Wifi宸ヤ綔妯″紡锛?
//////杈撳叆鍙傛暟:  mode---0锛屾煡璇紱1锛宻ta妯″紡锛?锛宎p妯″紡锛?锛宎p+sta妯″紡
//////杈撳嚭鍙傛暟:
//////璇?	鏄庯細鏌ヨ鏂瑰紡杩斿洖+CWMODE锛?妯″紡> OK锛涘叾浠栬繑鍥濷K
//////////////////////////////////////////////////////////////////////////////
UINT8_T ESP8266_UART_WifiMode(ESP8266_HandleType* ESP8266x,UINT8_T mode)
{
	//---鏍￠獙鍙戦�佺┖闂?
	if (ESP8266_UART_Write_WaitIdle(ESP8266x) == OK_0)
	{
		char *wifiMode="?\r\n";
		//---鎭㈠缂撳瓨鍖虹殑棣栧湴鍧�
		*(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal) = ESP8266x->pMsgUART->msgTxdHandle.msgMsgValBaseAddr;
		//---娓呯┖缂撳瓨鍖?
		memset(ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, 0, ESP8266_BUFFER_MAX_SIZE);
		//---灏嗘寚瀹氱殑瀛楃涓茶拷鍔犲湪缁撳熬
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, ESP8266_AT_WIFI_MODE);
		//---STA妯″紡
		if (mode== ESP8266_STA)
		{
			*wifiMode='1';
			ESP8266x->msgWifiMode=ESP8266_STA;
		}
		//---AP妯″紡
		else if (mode == ESP8266_AP)
		{
			*wifiMode = '2';
			ESP8266x->msgWifiMode = ESP8266_AP;
		}
		//---AP+STA妯″紡
		else if (mode == ESP8266_STA_AP)
		{
			*wifiMode = '3';
			ESP8266x->msgWifiMode = ESP8266_STA_AP;
		}
		//---鏌ヨ妯″紡
		else 
		{
			*wifiMode = '?';
		}
		//---杩藉姞鎹㈣绗?
		strcat((char*)ESP8266x->pMsgUART->msgTxdHandle.pMsgVal, wifiMode);
		//---鎵撳嵃LOG淇℃伅
		ESP8266_LOG("%s%s","CMD:", ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
		//---璁剧疆搴旂瓟鏁版嵁鍜屽簲绛旀椂闂村簲绛旂殑鏃堕棿
		ESP8266_UART_ACK(ESP8266x, "OK", 100);
		//---娉ㄥ唽鍥炶皟鍑芥暟
		ESP8266x->pMsgAckOkCallBack= ESP8266_UART_QueryAck_WifiMode;
		//---鍙戦�佹暟鎹?
		return ESP8266_UART_Write(ESP8266x, ESP8266x->pMsgUART->msgTxdHandle.pMsgVal);
	}
	return ERROR_1;
}



