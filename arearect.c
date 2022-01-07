#include<stdio.h>
void main()
{
int l,b,area,peri;
printf("Enter l and b of Reactangle:");
scanf("%d%d",&l,&b);
area=l*b;
peri=2*(l+b);
printf("The Area is:%d\nThe perimeter is:%d\n",area,peri);
}
