#include<LPC214X.H>
void delay(void);
int main(void)
{
	IO0DIR=0XFFFFFFFF;
	while(1)
	{
		IOSET0=0XFFFFFFFF;
		delay();
		IOCLR0=0XFFFFFFFF;
		delay();
	}
}

void delay(void)
{	  
	T0MR0 = 100000;
	T0MCR = 0x00000004;
	T0TCR =1;
	while(T0TC!=T0MR0);
	T0TC=0;	

}
