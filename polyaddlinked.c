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
pptr polyadd(pptr p1,pptr p2);
pptr insertend(pptr root,double c,int p);
int main()
{
	pptr  p1,p2,p3;
	p1=readpoly();
	p2=readpoly();
	p3=polyadd(p1,p2);
	printf("result of polynomial addition is");
	writepoly(p3);
}
pptr readpoly()
{
	pptr root=NULL;
	double c;
	int p;
	printf("enter coeff,powe and power is in increasing order");
	scanf("%lf%d",&c,&p);
	while(c!=0)
	{
		root=insertend(root,c,p);
		printf("enter coeff,power and power in increasing order");
		scanf("%lf%d",&c,&p);
	}
	return root;
}
pptr insertend(pptr root,double c,int p)
{
	pptr b,temp;
	b=(pptr)malloc(sizeof(struct polynode));
	if(b==NULL)
	{
		printf("\n no space");
		exit(1);
	}
	b->coeff=c;
	b->power=p;
	b->link=NULL;
	if(root==NULL)
	{
		return b;
	}
	temp=root;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=b;
	return root;
}
void writepoly(pptr root)
{
	pptr temp;
	if(root==NULL)
	{
		return;
	}
	temp=root;
	while(temp->link!=NULL)
	{
		printf("%lf X^%d+",temp->coeff,temp->power);
		temp=temp->link;
	}
	printf("%lf x^%d",temp->coeff,temp->power);
}
pptr polyadd(pptr p1,pptr p2)
{
	pptr p3=NULL,t1,t2;
	double X;
	t1=p1;
	t2=p2;
	while(t1!=NULL&&t2!=NULL)
	{
		if(t1->power<t2->power)
		{
			p3=insertend(p3,t1->coeff,t1->power);
			t1=t1->link;
		}
		if(t1->power>t2->power)
		{
			p3=insertend(p3,t2->coeff,t2->power);
			t2=t2->link;
		}
		else
		{
			X=t1->coeff+t2->coeff;
			if(X!=0)
			{
				p3=insertend(p3,X,t1->power);
			}
				t1=t1->link;
				t2=t2->link;
		}
	}
	if(t1!=NULL)
	{
		while(t2!=NULL)
		{
			p3=insertend(p3,t2->coeff,t2->power);
			t2=t2->link;
		}
	}
	else
	{
		while(t1!=NULL)
		{
			p3=insertend(p3,t1->coeff,t1->power);
			t1=t1->link;
		}
	}
	return p3;
}

