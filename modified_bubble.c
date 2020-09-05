#include<stdio.h>
int main()
{
	int a[20],n,t,i,j,exchange;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	exchange=0;
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			exchange++;
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
		if(exchange==0)
		{
			break;
		}
	}
	for(i=0;i<n;i++)
	printf("%2d",a[i]);
}
