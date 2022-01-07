#include<stdio.h>
void sum(int,int);
void main()
{
int a,b;
printf("Enter the Numbers:");
scanf("%d%d",&a,&b);
sum(a,b);
}
void sum(int a,int b)
{
int sum;
sum=a+b;
printf("THE SUM IS:%d\n",sum);
}


