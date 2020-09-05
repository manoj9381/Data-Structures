#include<stdio.h>
void mergesort(int a[],int n);
void mergepass(int a[],int t[],int n,int s);
int merge(int a[],int t[],int b,int m,int l);
int main()
{
	int a[100],n,i;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,n);
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}
void mergesort(int a[],int n)
{
	int t[100],s;
	s=1;
	while(s<n)
	{
		mergepass(a,t,n,s);
		s=s*2;
		mergepass(t,a,n,s);
		s=s*2;
	}
}
void mergepass(int a[],int t[],int n,int s)
{
	int i,j;
	for(i=1;i<=n-2*s+1;i=i+2*s)
		merge(a,t,i,i+s-1,i+2*s-1);
	if(i+s-1<n)
	merge(a,t,i,i+s-1,n);
	else
	{
		for(j=i;j<=n;j++)
		t[j]=a[j];
		}	
	
}
int merge(int a[],int t[],int b,int m,int l)
{
	int i,j,k;
	i=b;
	j=m+1;
	k=b;
	while(i<=m && j<=l)
	{
		if(a[i]<a[j])
		{
			t[k]=a[i];
			i++;
			k++;
		}
		else
		{
			t[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=m)
	{
		t[k]=a[i];
		k++;
		i++;
	}
	while(j<=l)
	{
		t[k]=a[j];
		k++;
		j++;
	}
}
