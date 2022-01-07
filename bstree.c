#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *root=NULL;
void insert()
{
	struct node *ne;
	int x;
	ne=(struct node*)malloc(sizeof(struct node));
	if(ne==NULL)
	{
		printf("\nMemory is Full!!");
		return;
	}
	printf("\nEnter the Element to Insert:");
	scanf("%d",&x);
	ne->right=NULL;
	ne->left=NULL;
	ne->data=x;
	if(root==NULL)
	{
		root=ne;
		return;
	}
	struct node *ptr=root,*ptr1;
	while(ptr!=NULL)
	{
		if(x==ptr->data)
		{
			printf("\nElement already Exist!!");
			break;
		}
		if(x>ptr->data)
		{
			ptr1=ptr;
			ptr=ptr->right;
		}
		else
		{
			ptr1=ptr;
			ptr=ptr->left;
		}
		
	}
	if(ptr==NULL)
		{
			if(x>ptr1->data)
			ptr1->right=ne;
			else
			ptr1->left=ne;
		}
}
void inorder(struct node *p)
{
	if(p!=NULL)
	{
		inorder(p->left);
		printf("%d ",p->data);
		inorder(p->right);
	}
}
void preorder(struct node *p)
{
	if(p!=NULL)
	{
		printf("%d ",p->data);
		preorder(p->left);
		preorder(p->right);
	}
}
void postorder(struct node *p)
{
	if(p!=NULL)
	{
		postorder(p->left);		
		postorder(p->right);
		printf("%d ",p->data);
	}
}
void search()
	{
	int x;
	struct node *ptr=root;
	printf("\nEnter the Element to Search:");
	scanf("%d",&x);
	while(ptr!=NULL)
	{
		if(x==ptr->data)
		{
			printf("\nElement Found!!");
			break;
		}
		if(x>ptr->data)
		{
			
			ptr=ptr->right;
		}
		else
		{
			
			ptr=ptr->left;
		}
		
	}
	if(ptr==NULL)
		{
			printf("Element Not Found!!");
		}
	
	}
void delete(int x)
	{
	struct node *ptr=root;
	if(ptr==NULL)
		{
		printf("\nTree is Empty");
		return;
		}
	
	
	}
void main()
{
	int c,m=1;
	while(m>0)
	{
		printf("\n1:Insert\n2:Inorder\n3:preorder\n4:postorder\n5:Search\n6:Delete\n7:Exit\nEnter Your Choice: ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:insert();
			break;
			case 2:inorder(root);
			break;
			case 3:preorder(root);
			break;
			case 4:postorder(root);
			break;
			case 5:search();
			break;
			case 6:	int ss;
							printf("\nEnter the element to Delete:");
							scanf("%d",%ss);
							delete(ss);
			break;
			case 7:m=-1;
			break;
			default:m=-1;
			break;
		}
	}	
}

