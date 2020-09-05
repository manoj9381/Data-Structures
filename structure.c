#include<stdio.h>
struct account
{
	char name[10];
	int age;
	float balance;
};
int main()
{
	struct account a1;
	printf("enter details");
	scanf("%s%d%f",a1.name,&a1.age,&a1.balance);
	printf("name=%s\nage=%d\nbalance=%f",a1.name,a1.age,a1.balance);
}
