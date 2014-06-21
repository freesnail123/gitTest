#include<reg52.h>

#define uint unsigned int
#define uchar unsigned char
void delay(uint);

void main()
{
	P1=0xfe;
	while(1)
	{
       delay(500);
       P1--;
	}
}

void delay(uint z)
{
	uint x,y;
	for(x=z;x>0;x--)
	for(y=110;y>0;y--);
}