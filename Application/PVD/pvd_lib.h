#ifndef PVD_LIB_H_
#define PVD_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "pvd_cfg.h"
	//////////////////////////////////////////////////////////////////////////////////////
	
	//===��������
	void PVDLib_Init(UINT32_T pwrLevel);
	void PVDLib_DeInit(void);
	void PVDLib_IRQTask(void);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*PVD_LIB_H_ */
