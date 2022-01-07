#include<stdio.h>
int f=-1,r=-1,n=4;
void enqueue(int *q)
{
int x;
if((r+1)%n==f)
	{
	printf("\nQueue is Full!!\n");
	return;
	}
	printf("\nEnter the Element:\n");
	scanf("%d",&x);
	if(f==-1)
	{
	f=0;
	r=0;
	q[r]=x;
	}
	else
	{
	r=(r+1)%n;
	q[r]=x;
	
	}
}
void dequeue(int *q)
{
	if(f==-1)
	{
	printf("\nQueue is Empty!!");
	return;
	}
	if(f==r)
	{
	printf("Deleted:%d",q[f]);
	f=r=-1;
	}
	else
	{
	printf("Deleted:%d",q[f]);
	f=(f+1)%n;
	}
	
}
void display(int *q)
{

int front=f;
if(f==-1)
printf("\nQueue is Empty!\n");
else{
printf("\nThe Queue is: ");
while(1)
{
	printf("%d ",q[front]);
	if(front==r)
	break;
	front=(front+1)%n;
}
}
}
void search(int *q)
{
	int s,count=0,x=0;
	printf("\nEnter the Element to search:\n");
	scanf("%d",&s);
	int front=f;
	if(f==-1)
	printf("\nQueue is Empty!\n");
	while(1)	
	{
	count++;
	if(s==q[front])
	{
	x++;
	printf("Element found! and is %dth term\n",count);
	break;
	}
	if(front==r)
	{
	printf("Item not Found!!");
	break;
	}
	front=(front+1)%n;
	
	
}	
}
void main()
{
int q[4],c=1;
while(c>0)
{
printf("\nSelect:\n1:Enqueue\n2:Dequeue\n3:Display\n4:Search\n5:Exit\n");
scanf("%d",&c);
printf("________________________________\n");
switch(c)
	{
	case 1:enqueue(q);
	break;
	case 2:dequeue(q);
	break;
	case 3:display(q);
	break; 
	case 4:search(q);
	break;
	case 5:c=-1;
	break;
	default:c-1;
	break;
	
	}
}
}

