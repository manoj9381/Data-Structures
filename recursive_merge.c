#include<stdio.h>
void mergesort(int a[],int low,int high);
int merge(int a[],int low,int mid,int high);
	int main()
	{
	int a[100],low,high,n,i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}
		low=0;
		high=n-1;
		mergesort(a,0,n-1);
		for(i=0;i<=high;i++)
		{
			printf("%2d",a[i]);
			}
				
	}
	void mergesort(int a[],int low,int high)
	{
		int mid;
		if(low<high)
		{
			mid=(low+high)/2;
			mergesort(a,low,mid);
			mergesort(a,mid+1,high);
			merge(a,low,mid,high);
		}
	}
	int merge(int a[],int low,int mid,int high)
	{
		int i,j,k,b[50];
		i=low;
		j=mid+1;
		k=low;
		while(i<=mid&&j<=high)
{
	if(a[i]<a[j])
	{
		b[k]=a[i];
		i++;
		k++;
		
	}
	else
	{
	
	b[k]=a[j];
	j++;
	k++;
}
}
while(i<=mid)
{
	b[k]=a[i];
	i++;
	k++;
	
}
while(j<=high)
{
	b[k]=a[j];
	k++;
	j++;
	
}
for(i=0;i<=high;i++)
{
	a[i]=b[i];
}
	}

