#include<stdio.h>
int main()
{
	int a[20],n,t,min,pos,i,j;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<=n-1;j++)
		{
		if(min>a[j])
		{
		min=a[j];
		pos=j;
	}
	}
	t=a[i];
	a[i]=a[pos];
	a[pos]=t;
	
}

	for(i=0;i<n;i++)
	printf("%2d",a[i]);
}
