//Mohamad Gamal
#include <util/delay.h>
typedef unsigned char u8;

#define DDRA *((u8*)0x3A)
#define PORTA *(u8*)0x3B
//#define PINA *(volatile u8*)0x3B
#define time 100
int main(void)
{
	DDRA|=1;
	while(1)
	{
		PORTA^=1;
		_delay_ms(1000);
	}

	return 0;
}
