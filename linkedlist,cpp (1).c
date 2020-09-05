#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};
typedef struct node *npt;
npt insertbeg(npt root,int x);
npt insertend(npt root,int x);
npt insertmid(npt root,int x,int pos);
npt delnode(npt root,int x);
int display(npt root);
int main()
{
	npt root=NULL;
	int x,pos,ch;
	printf("\n1.insertbeg\n2.insertend\n3.insertmid\n4.delnode\n5.display\n6.exit");
	do
	{
		
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n enter element");
				scanf("%d",&x);
				root=insertbeg(root,x);
				break;
			case 2:
				printf("\n enter element");
				scanf("%d",&x);
				root=insertend(root,x);
				break;
			case 3:
			    printf("\nenter element");
				scanf("%d",&x);
				printf("\nenter position");
				scanf("%d",&pos);
				root=insertmid(root,x,pos);
				break;
			case 4:
			    printf("\n enter elements to delete");
				scanf("%d",&x);
				root=delnode(root,x);
				break;
			case 5:
			    display(root);
				break;
			case 6:
			    exit(1);
	    }
    }
    while(ch<=6);
}
npt insertbeg(npt root,int x)
{
	npt p;
	p=(npt)malloc(sizeof(struct node));
	p->data=x;
	p->link=root;
	root=p;
	return root;
}
npt insertend(npt root,int x)
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
npt insertmid(npt root,int x,int pos)
{
	npt t,p;
	int c=1;
	if(pos==1)
	{
		insertbeg(root,x);
		p=(npt)malloc(sizeof(struct node));
		p->data=x;
		t=root;
		c=1;
	}
	while(t!=NULL&&c<pos-1)
	{
		t=t->link;
		c++;
	}
	if(t==NULL)
   {
   	printf("insertion at position %d is not possible",pos);
   	exit(1);
   	
   }
   p->link=t->link;
   t->link=p;
   return root;
}
int display(npt root)
{
	npt t;
	if(root==NULL)
	{
		printf("list is empty");
		exit(1);
		
	}
	t=root;
	while(t!=NULL)
	{
		printf("%d\t",t->data);
		t=t->link;
	}
}
npt delnode(npt root,int x)
{
	npt t,prev;
	if(root==NULL)
	{
		printf("deletions not possible");
		exit(1);
	}
	t=root;
	if(x==root->data)
	{
		root=root->link;
		free(t);
		return root;
	}
	while(t!=NULL&&x!=t->data)
	{
		prev =t;
		t=t->link;
	}
	prev->link=t->link;
	free(t);
}


