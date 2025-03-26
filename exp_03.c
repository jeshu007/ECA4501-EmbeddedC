#include <reg51.h>
#include <stdio.h>
void main()
	{
		unsigned int i;
		unsigned char num = 12;
		unsigned long factorial = 1;
		for (i=1;i<= num; i++)
		{
			factorial = factorial*i;
		}
		P0= factorial;
		P1= (factorial & 0xff00) >>8;
		P2= (factorial & 0xff0000) >>16;
		P3=(factorial & 0xff000000)>>24;
	}