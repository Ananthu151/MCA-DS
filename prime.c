#include<stdio.h>
void main()
{
int n,i=2,f=0;
printf("Enter the Number:");
scanf("%d",&n);
if(n==1)
printf("1 is neither prime or non-prime!");
else
{
	while(i<n/2)
		{
		if(n%i==0)
		{
		f=1;
		break;
		}
		else
		{
		i++;
		}
		}

	if(f==0)
	printf("%d is a Prime Number!",n);
	else
	printf("%d is non-prime!",n);
}
printf("\n");
}
