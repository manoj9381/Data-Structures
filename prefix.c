#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
 
int top = -1, t= 0;
char stack[MAX];
void push(char);
int main()
{
    int i;
    char s[MAX],b;
    printf("Enter the String\n");
    scanf("%s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        b = s[i];
        push(b);
    }
    for (i = 0;i < (strlen(s) / 2);i++)
    {
        if (stack[top] == stack[t])
            {
                top--;
            	t++;
        	}
            else
            {
                printf("%s is not a palindrome\n", s);
                break; 
            }
            }
            if ((strlen(s)/2)==t)
            printf("%s is palindrome\n",  s);
        }

void push(char a)
{
    top++;
    stack[top]  =  a;
}

