#include<stdio.h>
int main()
{
	int a[20],b[20],c[40],m,n,i,j,k;
	printf("enter array sizes");
	scanf("%d%d",&m,&n);
	printf("enter array A elements in sorted order ");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("enter array B elements in sorted order ");
	for(j=0;j<n;j++)
	scanf("%d",&b[j]);
	a[m]=32767;
	b[n]=32767;
i=j=k=0;
while(i<=m&&j<=n)
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
	for(i=0;i<=(m+n-1);i++)
	printf("%2d",c[i]);
}
