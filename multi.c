#include<stdio.h>
void main()
{
int n;
printf("Enter the limit:");
scanf("%d",&n);
for(int i=3;i<=n;i++)
{
	if(i%3==0)
	{
	for(int m=0;m<i;m++)
	printf("1");
	printf("\n");
	}
}	
}

