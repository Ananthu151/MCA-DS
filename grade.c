#include<stdio.h>
void main()
{
int m;
printf("Enter the Mark:");
scanf("%d",&m);
m=m/10;
switch(m)
{
case 10:
case 9:
case 8:printf("Distinction!");
	break;
case 7:
case 6:printf("First Class!");
	break;
case 5:printf("Passed!");
	break;
case 4:
case 3:
case 2:
case 1:
case 0:printf("Failed!");
	break;
default:printf("Invalid Input!");
}
printf("\n");
}

