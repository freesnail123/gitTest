#include<reg52.h>

sbit D1=P1^0;
int a;

void main()
{
	while(1)
	{
		D1=0;
		a=25000;
		while(--a);
		D1=1;
		a=25000;
		while(--a);
	}
}