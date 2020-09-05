#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	shell_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}
}
void shell_sort(int a[],int n)
{
	int i,j,key,inc;
	for(inc=n/2;inc>0;inc/=2)
	{
		for(i=inc;i<n;i++)
		{
			key=a[i];
			for(j=i;j>=inc&&key<a[j-inc];j-=inc)
			{
				
				a[j]=a[j-inc];
			}
			a[j]=key;
		}
	}
}
