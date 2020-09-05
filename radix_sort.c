#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
	
};
typedef struct node *pt;
pt insertend(pt root,int data);
int main()
{
	int a[100],n,no_of_digits=3,i,j,digit,p,k;
	pt head[10];
	printf("enter size of array");
	scanf("%d",&n);
	printf("\n enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=1;
	for(j=0;j<no_of_digits;j++)
	{
		for(i=0;i<10;i++)
		{
			head[i]=NULL;
		}
		for(i=0;i<n;i++)
		{
			digit=(a[i]/p)%10;
			head[digit]=insertend(head[digit],a[i]);
		}
			k=0;
			for(i=0;i<10;i++)
			{
				while(head[i]!=NULL)
				{
					a[k++]=head[i]->data;
					head[i]=head[i]->link;
				}
			}
			p=p*10;
		}
	printf("\n sorted order");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
pt insertend(pt root,int x)
{
	pt p,t;
	p=(pt)malloc(sizeof(struct node));
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

