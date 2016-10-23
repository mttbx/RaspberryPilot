
#define true (1==1)
#define false (1==0)
#define bool char
#define DE_TO_RA 0.01745329251f  // PI/180
#define RA_TO_DE 57.29577951307f // 182/PI

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define LIMIT_MIN_MAX_VALUE(value,minVal,maxVal) (min(maxVal, max(minVal,value)))

#define LOG_ENABLE 						true
#define DEBUG_NONE 						0x0
#define DEBUG_NORMAL                    DEBUG_NONE|0x00000001
#define DEBUG_GYRO 						DEBUG_NONE//|0x00000002	
#define DEBUG_ACC  						DEBUG_NONE//|0x00000004
#define DEBUG_ATTI  					DEBUG_NONE//|0x00000008
#define DEBUG_IMUUPDATE_INTVAL  		DEBUG_NONE//|0x00000010
#define DEBUG_ATTITUDE_PID_OUTPUT  		DEBUG_NONE//|0x00000020
#define DEBUG_RATE_PID_OUTPUT  			DEBUG_NONE//|0x00000040

#define DEBUG_MASK 						(DEBUG_NORMAL|DEBUG_GYRO|DEBUG_ACC|DEBUG_ATTI|DEBUG_IMUUPDATE_INTVAL|DEBUG_ATTITUDE_PID_OUTPUT|DEBUG_RATE_PID_OUTPUT)

#define _DEBUG(type,str,arg...) \
	if(LOG_ENABLE && (type & DEBUG_MASK)) \
		printf(str,## arg)

#define _ERROR(str,arg...) \
	if(LOG_ENABLE) \
		printf(str,## arg)

double deadband(double value, const double threshold);

