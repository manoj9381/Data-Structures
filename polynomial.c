#include<stdio.h>
# define MAX_DEGREE 101
typedef struct
{
	int degree;
	int coef[MAX_DEGREE];
}polynomial;
polynomial add(polynomial p1,polynomial p2);
int main()
{
	polynomial p1,p2,p3;
	int c;
	int i,e;
	printf("enter degree of p1");
	scanf("%d",&p1.degree);
	for(i=0;i<=p1.degree;i++)
	p1.coef[i]=0;
	printf("enter coeeficient and exponent for polynomial 1");
	scanf("%d%d",&c,&e);
	while(c!=0)
	{
		p1.coef[e]=c;
		scanf("%d%d",&c,&e);
	}
	printf("enter degree of p2");
	scanf("%d",&p2.degree);
	for(i=0;i<=p2.degree;i++)
	p2.coef[i]=0;
	printf("enter coeeficient and exponent for polynomial 2");
	scanf("%d%d",&c,&e);
	while(c!=0)
	{
		p2.coef[e]=c;
		scanf("%d%d",&c,&e);
	}
	p3=add(p1,p2);
	for(i=0;i<p3.degree;i++)
	{
		if(p3.coef[i]!=0)
		printf("%dX^%d+",p3.coef[i],i);
	}
	printf("%dX^%d",p3.coef[i],i);
}
polynomial add(polynomial p1,polynomial p2)
{
	int i;
	polynomial t;
	t.degree=p1.degree>p2.degree?p1.degree:p2.degree;
	for(i=0;i<=t.degree;i++)
	t.coef[i]=p1.coef[i]+p2.coef[i];
	return t;
}
