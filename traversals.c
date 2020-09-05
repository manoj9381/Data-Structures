#include<stdio.h>
#include<stdlib.h>
#define item int
struct treenode
{
struct treenode *lchild;
item data;
struct treenode *rchild;
};
typedef struct treenode *tptr;
tptr insert(tptr root,item x);
void inorder(tptr root);
void postorder(tptr root);
void preorder(tptr root);
int main()
{
tptr root=NULL;
item x;
printf("enter non zero elements");
scanf("%d",&x);
while(x!=0)
{
root=insert(root,x);
scanf("%d",&x);
}
printf("The constructed inorder binary search tree is");
inorder(root);
printf("\n");
printf("The constructed postorder binary search tree is");
postorder(root);
printf("\n");
printf("The constructed preorder binary search tree is");
preorder(root);
printf("\n");
}
tptr insert(tptr root,item x)
{
tptr p,t,parent;
p=(tptr)malloc(sizeof(struct treenode));
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
printf("Duplicate node");
free(p);
return root;
}
}
if(x<parent->data)
{
parent->lchild=p;
return root;
}
else
{
parent->rchild=p;
return root;
}
}
void inorder(tptr root)
{
if(root!=NULL)
{
inorder(root->lchild);
printf("%d\t",root->data);
inorder(root->rchild);
}
}
void preorder(tptr root)
{
if(root!=NULL)
{
printf("%d\t",root->data);
preorder(root->lchild);
preorder(root->rchild);
}
}
void postorder(tptr root)
{
if(root!=NULL)
{
postorder(root->lchild);
postorder(root->rchild);
printf("%d\t",root->data);
}
}

