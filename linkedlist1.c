#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
typedef struct node *npt;
npt insert_beg(npt root,int x);
npt insert_mid(npt root,int x,int pos);
npt insert_end(npt root,int x);
npt delete_node(npt root,int x);
npt delete_all(npt root);
void display(npt root);
npt delete_all(npt root);
void reverse(npt root);
void copy(npt root);
int main()
{
	npt root=NULL;
	int x,ch,pos;
	do
	{
		printf("\n select your choice");
		printf("\n 1.insert at begin \n 2.insert at end \n 3.insert at middle \n 4.delete node  \n 5.display \n 6.delete all \n 7.reverse \n 8.copy \n 9.exit");
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n enter element");
				scanf("%d",&x);
				root=insert_beg(root,x);
				break;
			case 2:
				printf("\n enter element");
				scanf("%d",&x);
				root=insert_end(root,x);
				break;
			case 3:
				printf("\n enter element");
				scanf("%d",&x);
				printf("\n enter position");
				scanf("%d",&pos);
				root=insert_mid(root,x,pos);
				break;
			case 4:
				printf("\n enter element to delete");
				scanf("%d",&x);
				root=delete_node(root,x);
				break;
			case 5:
				display(root);
				break;
			case 6:
				root=delete_all(root);
				break;
			case 7:
				reverse(root);
				break;
			case 8:
				copy(root);
				break;
			case 9:
				exit(1);

		}
	}while(ch<=9);
}
npt insert_beg(npt root,int x)
{
	npt p;
	p=(npt)malloc(sizeof(struct node));
	p->data=x;
	p->link=root;
	root=p;
	return root;
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
npt insert_mid(npt root,int x,int pos)
{
	npt p,t;
	int c=1;
	p=(npt)malloc(sizeof(struct node));
	p->data=x;
	if(pos==1)
	insert_beg(root,x);
	t=root;
	while(t!=NULL && c<pos-1)
	{
		t=t->link;
		c++;
	}
	if(t==NULL)
	{
	printf("\n insertion not possible");
	exit(1);
	}
	p->link=t->link;
	t->link=p;
	return root;
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
npt delete_node(npt root,int x)
{
	npt p,t;
	if(root==NULL)
	{
		printf("\n deletion not possible");
		exit(1);
	}
	t=root;
	if(x==root->data)
	{
		root=root->link;
		free(t);
	return root;
}
	while(t!=NULL && x!=t->data)
	{
		p=t;
		t=t->link;
	}
	p->link=t->link;
	free(t);
	return root;	
}
npt delete_all(npt root)
{
	npt t ,t1;
	t=root;
	if(t==NULL)
	{
		printf("list is empty");
		exit(1);
	}
	while(t!=NULL)
	{
		t1=t;
		t=t->link;
		free(t1);
	}
	return t;
}
void reverse(npt root)
{
	npt t,root2=NULL;
	t=root;
	while(t!=NULL)
	{
		root2=insert_beg(root2,t->data);
		t=t->link;
		
	}
	display(root2);
}
void copy(npt root)
{
	npt t,root2=NULL;
	t=root;
	while(t!=NULL)
	{
		root2=insert_end(root2,t->data);
		t=t->link;
		
	}
	display(root2);
}

