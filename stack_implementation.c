#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
# define maxsize 100
int a[maxsize];
int top;
bool IsFull1();
bool IsEmpty1();
void push(int a[],int x);
int main()
{
	int x;
	top=-1;
	printf("enter elements to a stack");
	scanf("%d",&x);
	while(x!=0)
	{
		push(a,x);
		scanf("%d",&x);
	}
	printf("elements on a stack are");
	while(!IsEmpty1())
	printf("%2d",pop());
	
}
bool IsFull1()
{
	if(top==maxsize-1)
	return true;
	else
	return false;
}
bool IsEmpty1()
{
	if(top==-1)
	return true;
	else
	return false;
}
void push(int a[],int x)
{
	if(IsFull1())
	{
		printf("stack is overflow");
		exit(1);
	}
	top++;
	a[top]=x;
	
}
int pop()
{
	int x1;
	if(IsEmpty1())
	{
		printf("stack is underflow");
		exit(1);
	}
	x1=a[top];
	top--;
	return x1;
}

