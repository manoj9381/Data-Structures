#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
typedef struct node *npt;
npt insert_order(npt root,int x);
npt merge(npt root1,npt root2);
npt insert_end(npt root,int x);
void display(npt root);
int main()
{
	npt root1=NULL;
	npt root2=NULL;
	npt root3=NULL;
	int x,y;
	printf("enter elements to linked list 1");
	scanf("%d",&x);
	while(x!=0)
	{
		root1=insert_order(root1,x);
		scanf("%d",&x);
		
	}
	printf("enter elements to linked list 2");
	scanf("%d",&y);
	while(y!=0)
	{
		root2=insert_order(root2,y);
		scanf("%d",&y);
		
	}
	root3=merge(root1,root2);
	display(root3);
	
	
}
npt insert_order(npt root,int x)
{
	npt t,p,pre;
	p=(npt)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("no space");
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
	while(t!=NULL&&x>t->data)
	{
		pre=t;
		t=t->link;
		
	}
	p->link=t;
	pre->link=p;
	return root;
	
}
npt merge(npt root1,npt root2)
{
	npt m;
	m=NULL;
	while(root1!=NULL && root2!=NULL)
	{
		if(root1->data<root2->data)
		{
			m=insert_end(m,root1->data);
			root1=root1->link;
		}
		else
		{
			m=insert_end(m,root2->data);
			root2=root2->link;

		}
		
	}
	while(root1!=NULL)
	{
		m=insert_end(m,root1->data);
		root1=root1->link;
	}
	while(root2!=NULL)
	{
		m=insert_end(m,root2->data);
		root2=root2->link;

	}
	return m;
	
}
void display(npt root3)
{
	npt t;
	if(root3==NULL)
	{
		printf("list is empty");
		exit(1);
		
	}
	t=root3;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->link;
	}
}
npt insert_end(npt root,int x)
{
	npt p,t;
	p=(npt)malloc(sizeof(struct node));
	p->data=x;
	if(root==NULL)
	{
		p->link=NULL;
		root=p;
		return p;
	}
	
	t=root;
	while(t->link!=NULL)
	{
		t=t->link;
	}
		t->link=p;
		p->link=NULL;
		return root;
}
