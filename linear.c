/*linear search*/
#include<stdio.h>
int l_search(int a[],int n,int x);
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
	res=l_search(a,n,x);
	if(res==-1)
	printf("not found");
	else
	printf("found");
}
int l_search(int a[],int n,int x)
{
int l_search(int a[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		return i;
}
		if(i==n)
		return -1;
}
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		return i;
}
		if(i==n)
		return -1;
}
