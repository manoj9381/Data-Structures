#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
typedef struct node *npt;
npt insert_order(npt root,int x);
int count(npt root);
void display(npt root);
int main()
{
	npt root=NULL;
	int x;
	printf("enter elements");
	while(1)
		{
			scanf("%d",&x);
			if(x==0)
			{
				break;
			}
			root=insert_order(root,x);
		}
		printf("sorted list is .....");
		display(root);
		printf("\ntotal no of nodes is %d",count(root));
}
npt insert_order(npt root,int x)
{
	npt t,prev,p;
	p=(npt)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("no space in main memory");
		exit(1);
	}
	p->data=x;
	p->link=NULL;
	if(root==NULL)
	{
		return p;
	}
	if(x<root->data)
	{
		p->link=root;
		return p;
	}
	t=root;
	while(t!=NULL && x>t->data)
	{
		prev=t;
		t=t->link;
	}
	p->link=t;
	prev->link=p;
	return root;
}
int count(npt root)
{
	npt t;
	int c=0;
	if(root==NULL)
	return 0;
	t=root;
	while(t!=NULL)
	{
		c++;
		t=t->link;
	}
	return c;
}
void display(npt root)
{
	npt t;
	if(root==NULL)
	{
	printf("\n linked list is empty");
	exit(1);
	}
	t=root;
	while(t!=NULL)
	{
		printf("%4d",t->data);
		t=t->link;
		
	}
}
