#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 Numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
	{
	printf("%d is largest",a);
	}
	else 
	{
		if(b>c)
		printf("%d is largest",b);
		else
		printf("%d is largest",c);

		
	}

	

}
