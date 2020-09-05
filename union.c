#include<stdio.h>
typedef union
{
float intrest;
int overdraft;
}acc_info;
typedef struct
{
	char name[10];
	int age;
	float balance;
	char acc_type[10];
	float acc_intrest;
	acc_info acc;
}account;
int main()
{
	account a1;
	printf("enter details");
	scanf("%s%d%f%s%f",a1.name,&a1.age,&a1.balance,&a1.acc_type,&a1.acc_intrest);
	printf("name=%s\nage=%d\nbalance=%f\nacc_type=%s\nintrest=%f",a1.name,a1.age,a1.balance,a1.acc_type,a1.acc_intrest);
}

