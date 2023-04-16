//Mohaamad Gamal Mohamad
#include <util/delay.h>
typedef unsigned char u8;

#define DDRA *((u8*)0x3A)
#define PORTA *(u8*)0x3B
//#define PINA *(volatile u8*)0x3B
#define time 100
int main(void)
{

	//snake effect
	DDRA |=255;
	while(1)
	{
		PORTA |=1<<0;
		_delay_ms(time);
		PORTA |=(1<<1);
		_delay_ms(time);
		PORTA |=(1<<2);
		_delay_ms(time);
		PORTA |=(1<<3);
		_delay_ms(time);
		PORTA |=(1<<4);
		_delay_ms(time);
		PORTA |=(1<<5);
		_delay_ms(time);
		PORTA |=(1<<6);
		_delay_ms(time);
		PORTA |=(1<<7);
		_delay_ms(time);

		PORTA &=~(1<<0);
		_delay_ms(time);
		PORTA &=~(1<<1);
		_delay_ms(time);
		PORTA &=~(1<<2);
		_delay_ms(time);
		PORTA &=~(1<<3);
		_delay_ms(time);
		PORTA &=~(1<<4);
		_delay_ms(time);
		PORTA &=~(1<<5);
		_delay_ms(time);
		PORTA &=~(1<<6);
		_delay_ms(time);
		PORTA &=~(1<<7);
		_delay_ms(time);
	}

	//butterfly effect
	/*
	DDRA=255;
	PORTA|=(1<<3);
	PORTA|=(1<<4);
	while(1)
	{
		PORTA|=(1<<3);
		PORTA|=(1<<4);
		_delay_ms(time);
		PORTA|=(1<<2);
		PORTA|=(1<<5);
		_delay_ms(time);
		PORTA|=(1<<1);
		PORTA|=(1<<6);
		_delay_ms(time);
		PORTA|=(1<<0);
		PORTA|=(1<<7);
		_delay_ms(time);

		PORTA&=~(1<<0);
		PORTA&=~(1<<7);
		_delay_ms(time);
		PORTA&=~(1<<1);
		PORTA&=~(1<<6);
		_delay_ms(time);
		PORTA&=~(1<<2);
		PORTA&=~(1<<5);
		_delay_ms(time);
		PORTA&=~(1<<3);
		PORTA&=~(1<<4);
		_delay_ms(time);
	}
	*/
	return 0;
}

