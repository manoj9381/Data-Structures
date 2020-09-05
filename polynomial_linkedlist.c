#include<stdio.h>
#include<stdlib.h>
struct polynode
{
	double coeff;
	int power;
	struct polynode *link;
};
typedef struct polynode *pptr;
pptr readpoly();
void writepoly(pptr root);
pptr insert_end(pptr root,double c,int pow);
int main()
{
	pptr p;
	p=readpoly();
	printf("entered polynomial is...");
	writepoly(p);
}
pptr readpoly()
{
	pptr root=NULL;
	double c;
	int p;
	printf("enter coefficient and power in ascending order");
	scanf("%lf%d",&c,&p);
	while(c!=0)
	{
		root=insert_end(root,c,p);
		printf("enter coefficient and power in ascending order");
		scanf("%lf%d",&c,&p);
	}
	return root;
}
pptr insert_end(pptr root,double c,int pow)
{
	pptr p,t;
	p=(pptr)malloc(sizeof(struct polynode));
	if(p==NULL)
	{
		printf("no memory is allocated");
		exit(1);
	}
	p->coeff=c;
	p->power=pow;
	p->link=NULL;
	if(root==NULL)
	{
		return p;
	}
	t=root;
	while(t->link!=NULL)
	{
		t=t->link;
	}
	t->link=p;
	return root;
}
void writepoly(pptr root)
{
	pptr t;
	if(root==NULL)
	return;
	t=root;
	while(t->link!=NULL)
	{
		printf("%lf X^%d+",t->coeff,t->power);
		t=t->link;
		
	}
	printf("%lfX^%d",t->coeff,t->power);
}
