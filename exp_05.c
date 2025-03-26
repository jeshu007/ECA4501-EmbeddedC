#include <reg51.h>
void main()
	{
unsigned char LUT[]={1,4,9,16,25,36,49,64,81,100};
unsigned char num, square;
for(num=1; num<11; num++)
{
	square =LUT[num-1];
P0=square;
}
}
	