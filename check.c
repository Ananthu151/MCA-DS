#include<stdio.h>
void main()
{
float area,cer;
for(int i=1;i<100000000000000;i++)
{
	area=3.14*i*i;
	cer=2*3.14*i;
	
	if(area==cer)
	{
	printf("The Radius is:%d\n",i);
	}
}

}
