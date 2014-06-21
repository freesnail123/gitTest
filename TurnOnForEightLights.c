#include<reg52.h>
#include<intrins.h>
#define uint unsigned int
#define uchar unsigned char

void delay(uint);
uchar temp;
sbit beep=P2^3;

void main()
{
	temp=0xfe;
	while(1)
	{
		P1=temp;
		beep=0;
		delay(500);
		P1=0xff;
		beep=1;
		delay(500);
		temp=_crol_(temp,1);
	}
}

void delay(uint z)
{
	uint x,y;
	for(x=z;x>0;x--)
	for(y=110;y>0;y--);
}