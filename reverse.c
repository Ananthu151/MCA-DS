#include<stdio.h>
void display(int x)
{
printf("%d ",x);
if(x!=10)
display(x+1);
if(x==10)
printf("\n Reverse order \n");
printf("%d ",x);
}
void main()
{
display(1);
printf("\n");
}
