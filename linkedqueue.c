#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct qnode
{
	int data;
	struct qnode *link;	
};
typedef struct qnode *qpt;
void addnode(qpt *front,qpt *rear,int x);
void delnode(qpt *front,qpt *rear,int *x);
int qempty(qpt front);
int main()
{
	qpt front=NULL,rear=NULL;
	int x,m;
	printf("enter elements ending with 0");
	scanf("%d",&x);
	while(x!=0)
	{
		addnode(&front,&rear,x);
		scanf("%d",&x);
	}
	printf("elements in queue are:");
   while(!qempty(front))
     {
     delnode(&front,&rear,&x);
      printf("%d\t",x);
    }
}
void addnode(qpt *front,qpt *rear,int x)
{
	qpt p;
	p=(qpt)malloc(sizeof(struct qnode));
	if(p==NULL)
	{
		printf("\n no space");
		exit(1);
	}
	p->data=x;
	p->link=NULL;
		if((*front)==NULL)
		{
			(*front)=(*rear)=p;
			
		}
		else
		{
			(*rear)->link=p;
			(*rear)=p;
		}
}
void delnode(qpt *front,qpt *rear,int *x)
{
	qpt t;
	(*x)=(*front)->data;

	if(*front==*rear)
	{
		(*front)=(*rear)=NULL;
	}
	else
	{
		t=*front;
		(*front)=(*front)->link;
		free(t);
	}
}
int qempty(qpt front)
{
	if(front==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
