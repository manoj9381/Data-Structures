#include<stdio.h>
#define maxsize 100
#define item int
int q[maxsize];
int front,rear;
void addq(item x);
item delq();
int qempty();
int qfull();
int main()
{
	item x;
	front=rear=-1;
	printf("enter elements to queue ....");
	scanf("%d",&x);
	while(x!=0)
	{
		if(!qfull())
		{
			add(x);
			scanf("%d",&x);
		}
		else
		break;
	}
	printf("elements on a queue are .....");
	while(!qempty())
	{
		printf("%d",delq());
		
	}
}
void addq(item x)
{
	rear++;
	q[rear]=x;
	
}
item delq()
{
	item x1;
	front++;
	x1=q[front];
	return x1;
}
int qfull()
{
	if(rear=maxsize-1)
		return 1;
	else
		return 0;
}
int qempty()
{
	if(front==rear)
	return 1;
	else
	return 0;
}
