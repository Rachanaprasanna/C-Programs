#include<lpc214x.h>

#define RS (1<<10)
#define RW (1<<12)
#define EN (1<<13)
#define LCD_DATA (0xFF<<16)

void delay(int count);
void lcd_command(unsigned char a);

void delay(int count)
{
   int i,j;
   for(i=0;i<count;i++)
   		for(j=0;j<1000;j++);
}

void lcd_init()
{
	IO0DIR |=  EN|RW|EN|LCD_DATA;
	lcd_command(0x38);			//initializing 16x2 lcd
	lcd_command(0x0F);			//display on, cursor blinking
	lcd_command(0x01);			//clear screen , cursor home
	lcd_command(0x80);		   //First line of lcd
}

void lcd_command(unsigned char a)
{
    IOPIN0 = a<<16;
	IOCLR0 = RS;
	IOSET0 = RW;
	IOSET0|= EN;
	delay(100);
	IOCLR0 = EN;
	delay(100);
}

void lcd_data(unsigned char a)
{
	IOPIN0 = a<<16;
	IOCLR0 = RW;
	IOSET0 = RS;
	IOSET0 |= EN;
	delay(100);
	IOCLR0 = EN;
	delay(100);
}

void lcd_display(char *str)
{ 
	while(*str)
	{
		lcd_data(*str);
		str++;
		delay(50);
	}
}

int main()
{
	lcd_init();
	lcd_display("Welcome to ARM programming");
	lcd_command(0xC0);		   //lcd goes to second line
	lcd_display("in Embedded c");
	while(1);
}





		

