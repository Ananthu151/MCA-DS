#include<stdio.h>
void main()
{
float r,area,cer;
printf("Enter the radius:");
scanf("%f",&r);
area=3.14*r*r;
cer=2*3.14*r;
printf("The Area is:%.2f\nThe circumference is:%.2f\n",area,cer);
}
