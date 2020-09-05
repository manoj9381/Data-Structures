#include<stdio.h>
#include<stdlib.h>
#define item int 
typedef struct treenode *tptr;
struct treenode
{
item data;
tptr left,right;
};

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
printf("enter non zero elements");
scanf("%d",&x);
}
printf("The constructed inorder binary search tree is");
inorder(root);
printf("The constructed postorder binary search tree is");
postorder(root);
printf("The constructed preorder binary search tree is");
preorder(root);
}
tptr insert(tptr root,item x)
{
tptr p,t,parent;
p=(tptr)malloc(sizeof(struct treenode));
p->data=x;
p->left=p->right=NULL;
if(root==NULL)
return p;
t=root;
while(t!=NULL)
{
parent=t;
if(x<t->data)
t=t->left;
else if(x>t->data)
t=t->right;
else
{
printf("Duplicate node");
free(p);
return root;
}
}
if(x<parent->data)
{
parent->left=p;
return root;
}
else
{
parent->right=p;
return root;
}
}
void inorder(tptr root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d\n",root->data);
inorder(root->right);
}
}
void preorder(tptr root)
{
if(root!=NULL)
{
printf("%d\n",root->data);
preorder(root->left);
preorder(root->right);
}
}
void postorder(tptr root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d\n",root->data);
}
}
