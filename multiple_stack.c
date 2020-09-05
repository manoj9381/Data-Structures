#include <stdio.h>
#define size 10
int ar[size];
int top1 = -1;
int top2 = size;
void push_stack1 (int data)
{
  if (top1<size-1)
  {
  	top1++;
    ar[top1] = data;
  }
  else
    printf ("Stack Full! Cannot Push\n");
}
void push_stack2 (int data)
{
  if (top2>-1)
  {
  	top2--;
    ar[top2] = data; 
  }
  else
    printf ("Stack Full! Cannot Push\n");
}
void pop_stack1 ()
{
  if (top1>=0)
  {
    int x= ar[top1];
    printf("%d",x);
    top1--;
  }
  else
    printf ("Stack Empty! Cannot Pop\n");
}
void pop_stack2 ()
{
  if (top2<size)
  {
    int y= ar[top2];
    printf ("%d ",y);
  }
  else
    printf ("Stack Empty! Cannot Pop\n");
}
int main()
{
	int ar[size],x,y;
	printf("enter elements to first stack");
	scanf("%d",&x);
	while(x!=0)
	{
		push_stack1(x);
		scanf("%d",&x);
	}
	printf("enter elements to second stack");
	scanf("%d",&y);
	while(y!=0)
	{
		push_stack2(y);
		scanf("%d",&y);
	}
	printf("elements in stack 1 are");
	pop_stack1();
	
}
