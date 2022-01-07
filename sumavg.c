#include<stdio.h>
void main()
{
float a,b,c,sum,avg;
printf("Enter Three Numbers:");
scanf("%f%f%f",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
printf("The Sum is:%.2f\nThe Average is:%.2f\n",sum,avg);
}

