#include "config.h"
#include "dio.h"
#include "dio_cfg.h"

int main(void)
{
	Dio_Init();
	while(1)
	{
		if(Dio_ReadChannel(DIO_CH_DOOR_SWITCH) == DIO_LEVEL_LOW)
		{
			Dio_WriteChannel(DIO_CH_COURTESY_LAMP,DIO_LEVEL_HIGH);
		}
		else
		{
			Dio_WriteChannel(DIO_CH_COURTESY_LAMP,DIO_LEVEL_LOW);
		}
	}
return 0;
}
