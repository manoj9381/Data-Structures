#include<stdio.h>
int rec_b_search(int a[],int low,int high,int x);
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
	 for(i=0;i<n;i++)
	 printf("%d",a[i]);
	 printf("enter search element");
	 scanf("%d",&x);
	 res=rec_b_search(a,0,n-1,x);
	 if(res==-1)
	 printf("element not found");
	 else
	 printf("element %d found in %d position",x,res);
}
int rec_b_search(int a[],int low,int high,int x)
{
	int mid;
	if(low<=high)
	{
		mid=(low+high)/2;
		if(x==a[mid])
		return mid;
		else if(x>a[mid])
		rec_b_search (a,mid+1,high,x);
		else
		rec_b_search (a,low,mid-1,x);
	}
	return -1;
}

		
	

