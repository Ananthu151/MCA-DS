#include<stdio.h>
void main()
{
int a[90],n,e,f=0;
printf("Enter the Number of Array:");
scanf("%d",&n);
printf("Enter the Array:\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the Element to Search!");
scanf("%d",&e);
for(int i=0;i<n;i++)  
{
	if(a[i]==e)
	{
	f=1;
	break;
	}
}

if(f==1)
{
printf("Item Found!\n");
}
else
printf("Item Not Found!\n");
}
