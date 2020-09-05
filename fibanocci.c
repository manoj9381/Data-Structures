#include<stdio.h>
int main()
{
	int n,f=0,s=1,i,t;
	printf("enter n");
	scanf("%d",&n);
	printf("%d %d",f,s);
	for(i=3;i<=n;i++)
	{
		t=f+s;
		printf("%2d",t);
		f=s;
		s=t;
	}
}
