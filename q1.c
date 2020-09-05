#include<stdio.h>
#define max 100
typedef int item;
item a[max];
int front, rear;
int is_empty()
{
	if(rear==front)
	return 1;
	else
	return 0;
 } 
 int is_full()
 {
 	if(rear==max-1)
 	return 1;
 	else
 	return 0;
 }
 void addqueue(item x)
 {
 	rear++;
 	a[rear]=x;
 }
 int delqueue()
 {
 	int x1;
 	front++;
 	x1=a[front];
 	return x1;
 }
 int main()
 {
 	item x;
 	front=rear=-1;
 	printf("enter elements");
 	scanf("%d",&x);
 	while(x!=-1)
 	{
 		if(!is_full())
 		{
 			addqueue(x);
 			scanf("%d",&x);
		 }
		 else
		 break;
	 }
	 while(!is_empty())
	 {
	 	printf("%d",delqueue());
	 }
 }
