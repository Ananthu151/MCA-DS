#include<stdio.h>
void sum();
void diff();
void multi();
void div();
void main()
{
sum();
diff();
multi();
div();
}
void sum()
{
int a,b,sum=0;
printf("Enter the Numbers:");
scanf("%d%d",&a,&b);
sum=a+b;
printf("The Sum is:%d\n",sum);
}
void diff()
{
int a,b,sum=0;
printf("Enter the Numbers:");
scanf("%d%d",&a,&b);
sum=a-b;
printf("The Difference is:%d\n",sum);
}
void multi()
{
int a,b,sum=0;
printf("Enter the Numbers:");
scanf("%d%d",&a,&b);
sum=a*b;
printf("The Product is:%d\n",sum);
}
void div()
{
int a,b,sum=0;
printf("Enter the Numbers:");
scanf("%d%d",&a,&b);
sum=a/b;
printf("The quotiant is:%d\n",sum);
}

