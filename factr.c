#include<stdio.h>
int fact(int x)
{
	if(x==1)
	return 1;
	else
	return(x*fact(x-1));
}
void main()
{
int x;
printf("Enter the Number:");
scanf("%d",&x);
int f=fact(x);
printf("The Factorial of %d is:%d\n",x,f);
}
