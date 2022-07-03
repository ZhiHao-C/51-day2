#include <REGX52.H>
void delay_ms(int n)//延时函数
{
	int i;
	while (n--)
	{
		for(i=0;i<115;i++);
	}
}
//P2_2=A
//P2_3=B
//P2_4=C
int a[10]={~0xC0,~0xF9,~0xA4,~0xB0,~0x99,~0x92,~0x82,~0xF8,~0x80,~0x90};
void display(unsigned char L,int num)
{
	switch(L)
	{
		case 1:P2_4=1;P2_3=1;P2_2=1;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0=a[num];
}
void main()
{
	while(1)
	{
		display(1,1);
		delay_ms(10);//消影
		P0=0;
		delay_ms(2);
		display(2,2);
		delay_ms(10);
		P0=0;
		delay_ms(2);
		display(3,3);
		delay_ms(10);
		P0=0;
		delay_ms(2);
	}
}





//让数字滚动起来
#include <REGX52.H>
void delay_ms(int n)//延时函数
{
	int i;
	while (n--)
	{
		for(i=0;i<115;i++);
	}
}
//P2_2=A
//P2_3=B
//P2_4=C
int a[10]={~0xC0,~0xF9,~0xA4,~0xB0,~0x99,~0x92,~0x82,~0xF8,~0x80,~0x90};
int b[]={1,2,3,1,2,3};
unsigned char n=0;
unsigned char i=0;
unsigned char j=0;
void display(unsigned char L,int num)
{
	switch(L)
	{
		case 1:P2_4=1;P2_3=1;P2_2=1;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0=a[num];
}
void main()
{
	while(n<20)
	{
		display(1,b[i]);
		delay_ms(10);
		P0=0;
		delay_ms(2);
		display(2,b[i+1]);
		delay_ms(10);
		P0=0;
		delay_ms(2);
		display(3,b[i+2]);
		delay_ms(10);
		P0=0;
		delay_ms(2);

		n++;
	}
	n=0;
	i++;
	if(i>2)
	{
		i=0;
	}
	while(n<20)
	{
		display(1,b[i]);
		delay_ms(10);
		P0=0;
		delay_ms(2);
		display(2,b[i+1]);
		delay_ms(10);
		P0=0;
		delay_ms(2);
		display(3,b[i+2]);
		delay_ms(10);
		P0=0;
		delay_ms(2);

		n++;
	}
	n=0;
	i++;
	if(i>2)
	{
		i=0;
	}
	while(n<20)
	{
		display(1,b[i]);
		delay_ms(10);
		P0=0;
		delay_ms(2);
		display(2,b[i+1]);
		delay_ms(10);
		P0=0;
		delay_ms(2);
		display(3,b[i+2]);
		delay_ms(10);
		P0=0;
		delay_ms(2);

		n++;
	}
	n=0;
	i++;
	if(i>2)
	{
		i=0;
	}
	
}
