#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
struct tnode
{
	int data;
	struct tnode *lchild,*rchild;
};
typedef struct tnode *treeptr;
treeptr bst_insert_iterative(treeptr root,int x);
void inorder(treeptr root);
void postorder(treeptr root);
void  preorder(treeptr root);
treeptr delete1(treeptr root,int x);
int main()
{
	treeptr root=NULL,temp,mir=0;
	int x,c;
	printf("\n enter elements to bst ending with 0");
	scanf("%d",&x);
	while(x!=0)
	{
		root=bst_insert_iterative(root,x);
		scanf("%d",&x);
	}
	printf("\n consructed tree using inorder:");
	inorder(root);
	printf("\n constructed tree using preorder:");
	preorder(root);
	printf("\n constructed tree using postorder:");
	postorder(root);
	printf("\n  enter element to delete...");
	scanf("%d",&x);
	delete1(root,x);
	printf("\n after deletion...");
	printf("\n consructed tree using inorder:");
	inorder(root);
	printf("\n constructed tree using preorder:");
	preorder(root);
	printf("\n constructed tree using postorder:");
	postorder(root);
	
}
treeptr bst_insert_iterative(treeptr root,int x)
{
	treeptr p,t,parent;
	p=(treeptr)malloc(sizeof(struct tnode));
	p->data=x;
	p->lchild=p->rchild=NULL;
	if(root==NULL)
		return p;
	t=root;
		while(t!=NULL)
		{
			parent=t;
			if(x<t->data)
			t=t->lchild;
			else if(x>t->data)
			t=t->rchild;
			else
			{
				printf("duplicate node");
				free(p);
				return root;
			}
		}
		if(x<parent->data)
		parent->lchild=p;
		else
		parent->rchild=p;
		return root;
	}
void inorder(treeptr root)
{
	if(root)
	{
		inorder(root->lchild);
		printf("%d\t",root->data);
		inorder(root->rchild);
	}
}
void preorder(treeptr root)
{
	if(root)
	{
		printf("%d\t",root->data);
		preorder(root->lchild);
		preorder(root->rchild);
		
	}
}
void postorder(treeptr root)
{
	if(root)
	{
		postorder(root->lchild);
		postorder(root->rchild);
		printf("%d\t",root->data);
	}
}
treeptr min(treeptr root)
{
	treeptr temp=root;
	while(temp->lchild!=NULL)
	{
		temp=temp->lchild;
		
	}
	return temp;
}
treeptr delete1(treeptr root,int x)
{
	treeptr temp;
	if(x<root->data)
	{
		root->lchild=delete1(root->lchild,x);
		
	}
	else if(x>root->data)
	{
		root->rchild=delete1(root->rchild ,x);
	}
	else
	{
		if(root->lchild==NULL)
		{
			temp=root->rchild;
			free(root);
			return temp;
			
		}
		else if(root->rchild==NULL)
		{
			temp=root->lchild;
			free(root);
			return temp;
			
		}
		else
		{
			temp=min(root->rchild);
			root->data=temp->data;
			root->rchild=delete1(root->rchild,temp->data);
		}
		return root;
	}
}
