#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int top=-1;
char s[100],a[100],p[100];
int isempty()
{
    if (top==-1)
    return 0;
    else 
    return 1;
}
void push(char s[100],char e)
{
    s[++top]=e;
    
}
char pop(char s[100])
{
        return s[top--];
}
char peep(char s[100])
{
        return s[top];
}
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char *c;
    printf("Enter exp:");
    scanf("%s",a);
    c=a;
    while (*c!='\0')
    {
        if (isalnum(*c))
        printf("%c",*c);
        else if (*c=='(')
        push(s,*c);
        else if (*c==')')
        {
            while(peep(s)!='(')
            printf("%c",pop(s));
            pop(s);
        }
        else
        {
            while (isempty()!=0 && priority(*c)<=priority(peep(s)))
            {
                printf("%c",pop(s));
            }
            push(s,*c);
        }
        c++;
    }
    while (isempty()!=0)
    printf("%c",pop(s));
    return 0;
}
