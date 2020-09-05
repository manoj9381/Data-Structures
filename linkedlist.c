#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
	
};
typedef struct node *npt;
void insert_beg(npt root,int x);
npt insert_mid(npt root,int x,int pos);
npt insert_end(npt root,int x);
npt del(npt root,int loc);
void display(npt root);
int length(npt root);
int main()
{
	npt root=NULL;
	int ch,x,pos,loc;
	do
	{
		printf("\n 1.adding at beginning \n 2.adding at middle \n 3.adding at end \n 4.deleting node \n 5.display \n 6.length \n 7.exit");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter element");
				scanf("%d",&x);
				insert_beg(root,x);
				break;
			case 2:
				printf("enter element");
				scanf("%d",&x);
				printf("enter position");
				scanf("%d",&pos);
				root=insert_mid(root,x,pos);
				break;
			case 3:
				printf("enter element");
				scanf("%d",&x);
				insert_end(root,x);
				break;
			case 4:
				printf("enter location");
				scanf("%d",&loc);
				del(root,loc);
				break;
			case 5:
				display(root);
				break;
			case 6:
				printf("length=%d",length(root));
				break;
			case 7:
				exit(1);
			}
		}while(ch<=7);
	}
		
void insert_beg(npt root,int x )
{
	npt t;
	t=(npt)malloc(sizeof(struct node));
	t->data=x;
	t->link=NULL;
	if(root==NULL)
	{
		root=t;
	}
	else
	{
		t->link=root;
		root=t;
	}
}
npt insert_mid(npt root,int x,int pos)
{
	npt temp,p;
	int i=1,len;
	len=length(root);
	if(pos>len)
	{
		printf("invalid location");
	}
	else
	{
		p=root;
		while(i<pos)
		{
			p=p->link;
			i++;
		}
		temp=(npt)malloc(sizeof(struct node));
		temp->data=x;
		temp->link=NULL;
		temp->link=p->link;
		p->link=temp;
	}
}
npt insert_end(npt root,int x)
{
	npt p,t;
	p=(npt)malloc(sizeof(struct node));
	p->data=x;
	if(root=NULL)
	{
		insert_beg(root,x);
	}
	t=root;
	while(t->link!=NULL)
	{
		t=t->link;
		
	}
	t->link=p;
	p->link=NULL;
}
npt del(npt root,int loc)
{
	npt t;
	if(loc>length(root))
	{
		printf("invalid location");
		
	}
	else if(loc==1)
	{
		t=root;
		root=t->link;
		t->link=root;
		free(t);
	}
}
void display(npt root)
{
	npt t;
	t=root;
	if(t==NULL)
	{
		printf("list empty");
	}
	else
	{
		while(t!=NULL)
		{
			printf("%d",t->data);
			t=t->link;
		}
	}
}
int length(npt root)
{
	npt temp;
	temp=root;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		temp=temp->link;
	}
	return c;
}
