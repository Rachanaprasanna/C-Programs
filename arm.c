#include<lpc214x.h>

void delay(int n)
{
	int j,k;
	for(j=0;j<5;j++)
		for(k=0;k<1000;k++);
}
int main()
{
		IO0DIR = 0x000000F;
		IO0CLR = 0x000000F;
		while(1)
		{
			delay(1000);
			IO0SET  = 0x000000F;
			delay(1000);
			IO0CLR  = 0x000000F;

		 }
}
