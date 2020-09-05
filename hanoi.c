#include<stdio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	
}
void hanoi(int n,char src,char aux,char dest)
{
	if(n!=0)
	{
		hanoi(n-1,src,dest,aux);
		printf("\n disc %d is moved from %c to %c",n,src,dest);
		hanoi(n-1,aux,src,dest);
	}
}
