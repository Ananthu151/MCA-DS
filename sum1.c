#include<stdio.h>
void main()
{
int i=1,n,sum=0;
printf("Enter the Numbers:");
do
{
	scanf("%d",&n);
	sum=sum+n;
	
}while(n!=10);
printf("Sum is:%d\n",sum);
}
