#include<stdio.h>
#include<stdlib.h>
void heapsort(int a[],int n);
void heapify(int a[],int n);
void adjust(int a[],int i,int n);
int main()
{
	int a[100],n,i;
	printf("enter array size....");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	heapsort(a,n);
	printf("sorted array");
	for(i=1;i<=n;i++)
	printf("%d\t",a[i]);
}
void heapsort(int a[],int n)
{
	int i,t;
	heapify(a,n);
	for(i=n;i>=2;i--)
	{
		t=a[i];
		a[i]=a[1];
		a[1]=t;
		adjust(a,1,i-1);
	}
}
void heapify(int a[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	adjust(a,i,n);
}
void adjust(int a[],int i,int n)
{
	int j,key;
	key=a[i];
	j=2*i;
	while(j<=n)
	{
		if(j<n&&a[j]<a[j+1])
		j++;
		if(key>a[j])
		break;
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=key;
}
