#include<stdio.h>
int main()
{
	int a[10],b[10],c[20],i,j,k,m,n;
	printf("enter sizes");
	scanf("%d%d",&m,&n);
	printf("enter array elements in sorted order");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("enter array elements in sorted order");
	for(j=0;j<n;j++)
	scanf("%d",&b[j]);
	i=j=k=0;
	while(i<=(m-1) && j<=(n-1))
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}
	}
	while(i<=(m-1))
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=(n-1))
	{
		c[k]=b[j];
		k++;
		j++;
	}
	for(i=0;i<=(m+n-1);i++)
	printf("%d",c[i]);
}
