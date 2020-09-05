/*linear search*/
#include<stdio.h>
int rec_l_search(int a[],int n,int x);
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
	res=rec_l_search(a,n,x);
	if(res==-1)
	printf("not found");
	else
	printf("found");
}
int rec_l_search(int a[],int n,int x)
{
	if(n<1)
	return -1;
	else if(x==a[n])
	return n;
	else
	return rec_l_search(a,n-1,x);
}

