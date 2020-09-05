#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define maxsize 100
#define item struct tnode *
typedef struct tnode *treeptr;
struct tnode
{
	int data;
	treeptr left,right;
};
int front,rear;
item q[maxsize];
int first=1;
void enqueue (item ptr)
{
	if(rear==maxsize-1)
	{
		printf("\n queue is full");
		exit(1);
	}
	rear++;
	q[rear]=ptr;
}
item dequeue()
{
	item x;
	if(front==rear)
	{
		printf("\n queue is empty");
		exit(1);
	}
	front++;
	x=q[front];
	return x;
}
int qempty()
{
	return (front==rear)?1:0;
	
}
int qfull()
{
	if(rear==maxsize-1)
	return 1;
	else
	return 0;
}
item getfront()
{
	return q[front];
}
int hasbothchild(struct tnode *tmp)
{
	return(tmp && temp->left && temp->right)
}
void insert(item *root,int data)
{
	struct tnode *temp=(item)malloc(sizeof(struct tnode));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	if(!*root)
	{
		*root=temp;
		printf("This is first node");
	}
	else
	{
		if(first==1)
		{
			front++;
			first=0;
		}
		struct tnode *temp1=getfront();
		if(!temp1->left)
		temp1->left=temp;
		else if(!temp1->right)
		temp1->right=temp;
		if hasbothend(temp1)
		dequeue();
	}
	enqueue(temp);
	
}
void level_traverse(item root)
{
	item temp;
	enqueue(root);
	do
	{
		temp=dequeue();
		printf("%d\t",temp->data);
		if(temp->left)
		enqueue(temp->left);
		if(temp->right)
		enqueue(temp->right);
	}while(!isempty());
}
int main()
{
	front=rear=-1;
	struct tnode *root=NULL;
	for(i=1;i<=10;i++)
	insert(&root,i);
	front=rear=-1;
	level_traverse(root);
}
