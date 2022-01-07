#include<stdio.h>
void main()
{
int n,m[50],r[50];
printf("Enter the Number of students:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("Enter your Roll Number:");
scanf("%d",&r[i]);
printf("Enter your Mark:");
scanf("%d",&m[i]);
}
printf("Roll Number\tMark\n");
for(int i=0;i<n;i++)
{
printf("%d\t\t%d\n",r[i],m[i]);
}
}

