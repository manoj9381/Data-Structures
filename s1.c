#include<stdio.h>
#define max 100
int a[max];
int top;
int is_empty()
{
	if(top==-1)
	return 1;
	else 
	return 0;
}
int is_full()
{
	if(top==max-1)
	return 1;
	else
	return 0;
}
void push(int x)
{
	if(is_full())
	{
	printf("stack is full");
	exit(1);
}
top++;
a[top]=x;
}
int pop()
{
	int x1;
	if(is_empty())
	{
		printf("stack empty");
		exit(1);
	}
	x1=a[top];
	top--;
	return x1;
}
int main()
{
	int x;
	top=-1;
	printf("enter elements");
	scanf("%d",&x);
	while(x!=-1)
	{
		push(x);
		scanf("%d",&x);
	}
	while(!is_empty())
	{
	printf("%4d",pop());
	}
	
}

