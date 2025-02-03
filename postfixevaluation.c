#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int top=-1, s[100];
char a[100];
void push(int s[100],int e)
{
    s[++top]=e;
    
}
int pop(int s[100])
{
        return s[top--];
}
int main()
{
    int p;
    char *c;
    printf("Enter exp:");
    scanf("%s",a);
    c=a;
    while (*c!='\0')
    {
        if (isalnum(*c))
            push(s,(int)*c-48);
        else
        {
            if (*c=='+')
            p=pop(s)+pop(s);
            else if (*c=='-')
            p=pop(s)-pop(s);
            else if (*c=='*')
            p=pop(s)*pop(s);
            else if (*c=='/')
            p=pop(s)/pop(s);
            push(s,p);
        }
        c++;
    }
    printf("%d",pop(s));
    return 0;
}

