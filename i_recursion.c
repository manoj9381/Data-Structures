/*linear search*/
#include<stdio.h>
int i_rec_search(int a[],int low,int high,int x);
int main()
{
	int a[10],n,res,x,i;
	printf("enter array size..");
	scanf("%d",&n);
	printf("enter elements to array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter search element");
	scanf("%d",&x);
	res=i_rec_search(a,0,n-1,x);
	if(res==-1)
	printf("not found");
	else
	printf("found");
}
int i_rec_search(int a[],int low,int high,int x)
{
	int mid;
	if(low<=high)
	{
	mid=low+((x-a[low])*(high-low))/(a[high]-a[low]);
	if(x==a[mid])
	return mid;
	else if(x<a[mid])
	return i_rec_search(a,low,mid-1,x);
	else
	return i_rec_search(a,mid+1,high,x);
}
return -1;
}

