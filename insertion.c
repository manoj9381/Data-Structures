#include<stdio.h>
int main()
{
	int a[20],n,key,i,j;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
	
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
}
	for(i=0;i<n;i++)
	printf("%2d",a[i]);
}
