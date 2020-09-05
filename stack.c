#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define item int
struct stacknode
{
	item data;
	struct stacknode *link;
};
typedef struct stacknode *stptr;
stptr addstack(stptr top,item x);
stptr delstack(stptr top,item *x);
item stacktop(stptr top);
int stackempty(stptr top);
int main()
{
	item x;
	stptr top='\0';
	printf("enter elements to add...");
	scanf("%d",&x);
	while(x!=0)
	{
		top=addstack(top,x);
		scanf("%d",&x);
		
	}
	printf("\nstack top is .....");
	printf("%d",stacktop(top));
	printf("\nelements in stack are .......");
	while(!stackempty(top))
	{
		top=delstack(top,&x);
		printf("%d\t",x);
		
	}
}
stptr addstack(stptr top,item x)
{
	stptr p;
	p=(stptr)malloc (sizeof(struct stacknode));
	if(p=='\0')
	{
		printf("no space");
		exit(1);
	}
	p->data=x;
	p->link=top;
	return p;
}
stptr delstack(stptr top,item *x)
{
	stptr p;
	if(top=='\0')
	{
		printf("stack is empty");
		exit(0);	
	}
	p=top;
	*x=top->data;
	top=top->link;
	free(p);
	return top;
	
}
int stackempty(stptr top)
{
	if(top=='\0')
	return 1;
	else
	return 0;
}
item stacktop(stptr top)
{
	item x1;
	if(top=='\0')
	{
		printf("stack is empty");
		exit(1);
		
	}
	x1=top->data;
	return x1;
}
