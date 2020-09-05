#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
#define item struct tnode*
int front;
int rear;
struct tnode
{
	int data;
	struct tnode *lchild,*rchild;
};
item q[maxsize];
typedef struct tnode *treeptr;
treeptr bst_insert_recursive(treeptr root,int x);
void level_order(treeptr root);
void enqueue(treeptr root);
treeptr dequeue();
int qempty();
int main()
{
	treeptr root=NULL,temp,mir=0;
	int x,c;
	printf("\n enter elements to bst ending with 0");
	scanf("%d",&x);
	while(x!=0)
	{
		root=bst_insert_recursive(root,x);
		scanf("%d",&x);
	}
	printf("constructed tree using level order...");
	level_order(root);
}
void level_order(item root)
{
	item t;
	enqueue(root);
	while(!qempty())
	{
		t=dequeue();
		printf("%d\t",t->data);
		if(t->lchild!=NULL)
		enqueue(t->lchild);
		else if(t->rchild!=NULL)
		enqueue(t->rchild);
	}
}
treeptr bst_insert_recursive(treeptr root,int x)
{
	if(root==NULL)
	{
		root=(treeptr)malloc(sizeof(struct tnode));
		root->data=x;
		root->lchild=root->rchild=NULL;
		
	}
	else
	{
		if(x<root->data)
		root->lchild=bst_insert_recursive(root->lchild,x);
		else if(x>root->data)
		root->rchild=bst_insert_recursive(root->rchild,x);
	}
	return root;
}
void enqueue(item root)
{
	if(rear==maxsize-1)
	{
		printf("\n queue is full");
		exit(1);
	}
	rear++;
	q[rear]=root;
}
item dequeue()
{
	item x;
	if(front==rear)
	{
		printf("queue is empty");
		exit(1);
	}
	front++;
	x=q[front];
	return x;
}
int qempty()
{
	if(front==rear)
	return 1;
	else
	return 0;
	
}

