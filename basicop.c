#include<stdio.h>
#include<stdlib.h>
int s[100],top=-1;
int isempty()
{
    if (top==-1)
    printf("Underflow\n");
    else 
    return 1;
}
void push(int s[100],int m,int e)
{
    if (top==(m-1))
    printf("Overflow\n");
    else
    {s[++top]=e;
    printf("%d",top);
    printf("Successfully pushed\n");
    }
}
void pop(int s[100])
{
    if (isempty()==1)
    {
        top--;
        printf("Popped\n");
    }
}
void peep(int s[100])
{
    if (isempty()==1)
    {
        printf("top-> %d\n",s[top]);
    }
}
void display(int s[100])
{
    if (isempty()==1)
    {
        for (int i=top;i>=0;i--)
        printf("%d \n",s[i]);
    }
}
int main()
{
    int m,c,e;
    printf("Enter limit:");
    scanf("%d",&m);
    while (1)
    {
        printf("Menu:\n1.push\n2.pop\n3.peep\n4.display\n5.exit\nEnter choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("Enter element:");
            scanf("%d",&e);
            push(s,m,e);
            break;
            case 2:
            pop(s);
            break;
            case 3:
            peep(s);
            break;
            case 4:
            display(s);
            break;
            case 5:
            exit(0);
            default:
            printf("Invalid Input\n");
        }
    }
    return 0;
}
