#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<malloc.h>
#include<math.h>
struct pnode
{
	int coef;
	int power;
	struct pnode *link;
};
typedef struct pnode *pptr;
pptr readp();
void writep(pptr root);
pptr insend(pptr root,int c,int p);
pptr padd(pptr p1,pptr p2);
pptr pmult(pptr p1,pptr p2);
int peval(pptr p1,double x);
main()
{
	pptr p1,p2,p3,p4;
	p1=readp();
	p2=readp();
	writep(p1);
	writep(p2);
	p3=padd(p1,p2);
	printf("Polynomial Addition:");
	writep(p3);
	p4=pmult(p1,p2);
	printf("\nPolynomial Multiplication:");
	writep(p4);
	printf("\nEvaluation of polynomial 1:%d",peval(p1,1));
}
pptr readp()
{
	pptr root=NULL;
	int c;int p;
	printf("Enter coef and power:");
	scanf("%d%d",&c,&p);
	while(c!=0)
	{
		root=insend(root,c,p);
		scanf("%d%d",&c,&p);
	}
	return root;
}
pptr insend(pptr root,int c,int k)
{
	pptr p,t;
	p=(pptr)malloc(sizeof(struct pnode));
	if(p==NULL)
	{
		printf("Empty");
		exit(1);
	}
	p->coef=c;
	p->power=k;
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
void writep(pptr root)
{
	pptr t;
	if(root==NULL)
	{
		return;
	}
	t=root;
	while(t->link!=NULL)
	{
		printf("%dx^%d+",t->coef,t->power);
		t=t->link;
	}
	printf("%dx^%d",t->coef,t->power);
	printf("\n");
}
pptr padd(pptr p1,pptr p2)

{
	pptr p3=NULL,t1,t2;
	int x;
	t1=p1;
	t2=p2;
	while(t1!=NULL&&t2!=NULL)
	{
		if(t1->power<t2->power)
		{
			p3=insend(p3,t1->coef,t1->power);
		    t1=t1->link;
		}
	     else if(t1->power>t2->power)
	    {
		    p3=insend(p3,t2->coef,t2->power);
		    t2=t2->link;
	    }
	    else
	    {
	    	x=t1->coef+t2->coef;
	    	if(x!=0)
	    	{
	    		p3=insend(p3,x,t2->power);
	    		t1=t1->link;
	    		t2=t2->link;
			}
		}
	}
	if(t1==NULL)
	{
		while(t2!=NULL)
		{
			p3=insend(p3,t2->coef,t2->power);
		    t2=t2->link;
		}
	}
	else
	{
		while(t1!=NULL)
		{
			p3=insend(p3,t1->coef,t1->power);
		    t1=t1->link;
		}
	}
	return p3;
}
pptr pmult(pptr p1,pptr p2)
{
	pptr t1,t2,temp=NULL,sum=NULL;
	t1=p1;
	while(t1!=NULL)
	{
		temp=NULL;
		t2=p2;
		while(t2!=NULL)
		{
			temp=insend(temp,t1->coef*t2->coef,t1->power+t2->power);
			t2=t2->link;
		}
		sum=padd(sum,temp);
		t1=t1->link;
}
return temp;
}
int peval(pptr p1,double x)
{

	pptr t;
	int sum=0;
	t=p1;
	printf("enter x");
	scanf("%d",&x);
	while(t!=NULL)
	{
		sum=sum+t->coef*pow(x,t->power);
		t=t->link;
	}
	return sum;
}
