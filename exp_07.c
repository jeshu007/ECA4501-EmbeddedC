#include <reg51.h>
void main()
{
	unsigned long array[]={0x33556666, 0xCCAADD00, 0x55998888, 0x77664444, 0x11223344}; 
	unsigned long temp,i,j;
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(array[j]> array[j+1])
			{
				temp=array[j+1];
				array[j+1]=array[j];
				array[j]=temp;
			}
		}
	}
}