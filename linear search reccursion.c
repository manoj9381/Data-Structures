#include<stdio.h>
int rec_l_search(int a[],int n,int x);
int main()
{
	int a[10],n,x,i,pos;
	printf("enter array size..");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 printf("enter search element");
	 scanf("%d",&x);
	 pos=rec_l_search(a,n-1,x);
	 if(pos==-1)
	 printf("element not found");
	 else
	 printf("element %d found in %d position",x,pos);
}
int rec_l_search(int a[],int n,int x)
{
	if(n<0)
	return -1;
	else if(x==a[n])
	return n;
	else 
	return rec_l_search(a,n-1,x);
	}


		
	

