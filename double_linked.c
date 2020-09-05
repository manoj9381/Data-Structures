#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
	
};
typedef struct node *npt;
npt root=NULL;
void append();
void add_at_begin();
int length();
void display();
void add_at_after();
int main()
{
	npt root;
	append();
	add_at_begin();
	add_at_after();
	printf("\n No of nodes %d ",length());
	display();
 
}
void append()
{
	npt temp,p;
	temp=(npt)malloc(sizeof(struct node));
	printf("enter node data");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->right=temp;
		temp->left=p;
	}
}
void add_at_begin()
{
	npt t;
	t=(npt)malloc(sizeof(struct node));
	printf("enter node data");
	scanf("%d",&t->data);
	t->left=NULL;
	t->right=NULL;
	if(root==NULL)
	{
		root=t;
	}
	else
	{
		t->right=root;
		root->left=t;
		root=t;
	}
}
int length()
{
	npt t=root;
	int count=0;
	while(t!=NULL)
	{
		count++;
		t=t->right;
		
	}
	return count;
	
}
void display()
{
	npt t=root;
	if(t==NULL)
	{
		printf("list is empty");
	}
	else
	{
	while(t!=NULL)
	{
		printf("\n%d",t->data);
		t=t->right;
	}
}
}
void add_at_after()
{
	npt t,p;
	int loc,len,i=1;
	printf("\n enter location");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
		printf("invalid location");
	}
	else
	{
		t=(npt)malloc(sizeof(struct node));
		printf("enter node data");
		scanf("%d",&t->data);
		t->left=NULL;
		t->right=NULL;
		p=root;
		while(i<loc)
		{
			p=p->right;
			i++;
		}
		t->right=p->right;
		(p->right)->left=t;
		t->left=p;
		p->right=t;
	}
}

