#include<stdio.h>
void uset(int* s1,int* s2,int l)
	{
	int s3[10];
	for(int i=0;i<l;i++)
		{
		if(s1[i]==1 || s2[i]==1)
			{
			s3[i]=1;
			}
		else
		s3[i]=0;
		}
	printf("\nUnion Set is:");
	for(int i=0;i<l;i++)
	printf("%d ",s3[i]);
	}
	
void iset(int* s1,int* s2,int l)
	{
	int s3[10];
	for(int i=0;i<l;i++)
		{
		if(s1[i]==0 || s2[i]==0)
			{
			s3[i]=0;
			}
		else
		s3[i]=1;
		}
	printf("\nIntersection Set is:");
	for(int i=0;i<l;i++)
	printf("%d ",s3[i]);
	}
void dset(int* s1,int* s2,int l)
	{
	int s3[10];
	for(int i=0;i<l;i++)
		{
		if(s1[i]==1 && s2[i]==0)
			{
			s3[i]=1;
			}
		else
		s3[i]=0;
		}
	printf("\nDifference Set is:");
	for(int i=0;i<l;i++)
	printf("%d ",s3[i]);
	}
void display(int* s3,int l)
	{
	for(int i=0;i<l;i++)
	printf("%d ",s3[i]);
	}
void main()
{
int s1[10],s2[10],s3[10],l,c,m=1;
printf("Enter the length of Sets:");
scanf("%d",&l);
printf("\nEnter the Set 1:\n");
for(int i=0;i<l;i++)
	{
	scanf("%d",&s1[i]);
	}
printf("\nEnter the Set 2:\n");
for(int i=0;i<l;i++)
	{
	scanf("%d",&s2[i]);
	}

printf("\nSet 1:");
display(s1,l);
printf("\nSet 2:");
display(s2,l);
uset(s1,s2,l);
iset(s1,s2,l);
dset(s1,s2,l);
printf("\n");
}
