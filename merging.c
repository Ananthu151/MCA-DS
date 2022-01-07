#include<stdio.h>
void read(int *,int);
void display(int *,int);
void main()
{
int a[50],b[50],c[100],m,n,k=0,i=0,j=0;
printf("Enter the sizes of 1st array:\n");
scanf("%d",&m);
read(a,m);
printf("Enter the sizes of 2nd array:\n");
scanf("%d",&n);
read(b,n);
while(i<m && j<n)
	{
	if(a[i]<b[j])
		{
		c[k]=a[i];
		k++;
		i++;
		}
	else if(b[j]<a[i])
		{
		c[k]=b[j];
		k++;
		j++;
		}
	else if(a[i]==b[j])
		{
		c[k]=a[i];
		k++;
		i++;
		j++;
		}
	}
while(i<m)
	{
	c[k]=a[i];
	k++;
	i++;
	}
while(j<n)
	{
	c[k]=b[j];
	k++;
	j++;
	}

display(c,k);
}
void read(int *a,int m)
	{
	printf("\nEnter the 1st Array:\n");
	for(int i=0;i<m;i++)
	scanf("%d",&a[i]);
	}
void display(int *c,int k)
	{
	printf("The sorted Array:\n");
	for(int i=0;i<k;i++)
	printf("%d ",c[i]);
	}
