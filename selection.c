#include<stdio.h>
int main()
{
	int a[10],min,i,pos,j,n,t;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<n;j++)
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
	printf("%2d\n",a[i]);
}

