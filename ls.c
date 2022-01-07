#include<stdio.h>
void main()
{
int n,l,s,a[50];
printf("Enter the Number of Array:");
scanf("%d",&n);
printf("Enter the Array:\n");
for(int i;i<n;i++)
{
scanf("%d",&a[i]);
}
l=a[0];
for(int i=0;i<n;i++)
{
if(l<a[i])
l=a[i];
}

s=a[0];
for(int i=0;i<n;i++)
{
if(s>a[i])
s=a[i];
}

printf("The Largest=%d\nThe Smallest=%d\n",l,s);
}
