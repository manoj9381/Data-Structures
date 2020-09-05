#include<stdio.h>
void quicksort(int a[],int si,int ei);
int partition(int a[],int si,int ei);
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
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}
}
void quicksort(int a[],int si,int ei)
{
	int j;
	if(si<ei)
	{
		j=partition(a,si,ei);
		quicksort(a,si,j-1);
		quicksort(a,j+1,ei);
	}
}
int partition(int a[],int si,int ei)
{
	int key,i,j,t;
	key=a[si];
	i=si+1;
	j=ei;
	do
	{
		while(i<=ei&&a[i]<=key)
		{
			i++;
		}
		while(j>=si&&a[j]>key)
		{
			j--;
		}
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}


		
	}while(i<=j);
	t=a[si];
	a[si]=a[j];
	a[j]=t;
return j;
}

