#include<stdio.h>
int i_search(int a[],int low,int high,int x);
int main()
{
	int a[10],n,x,i,res;
	printf("enter array size..");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 printf("enter search element");
	 scanf("%d",&x);
	 res=i_search(a,0,n-1,x);
	 if(res==-1)
	 printf("element not found");
	 else
	 printf("element %d found in %d position",x,res);
}
int i_search(int a[],int low,int high,int x)
{
	int mid;
	while(low<=high)
	{
		mid=low+((x-a[low])*(high-low)/(a[high]-a[low]));
		if(x==a[mid])
		return mid;
		else if(x<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	return -1;
}

		
	

