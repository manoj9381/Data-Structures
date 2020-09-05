#include<stdio.h>
#include<string.h>
# define max 100
int top=-1,stack[max];
void push(char x)
{
	if(top==max-1)
	{
		printf("Stack Overflow");
		exit(0);
	}
	else
	{
		top++;
		stack[top]=x;
	}
}

void pop()
{
	printf("%c",stack[top--]);
}

int main()
{
	char str[]="Manoj";
	int i;
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		push(str[i]);
	}
	for(i=0;i<len;i++)
	{
		pop();
	}
}

