/*program to convert infix to postfix expression with parenthesis using arrays*/
#include<stdio.h>
void push(int a[],int *top,int value)
{
    if(*top == 9)
    printf("\nStack is full");
    else 
    {
        *top = *top + 1;
        a[*top] = value;
    }
}
int pop(int a[],int *top)
{
    if(*top == -1)
    printf("\nStack is empty");
    else 
    {
        int value = a[*top];
        *top = *top - 1;
        return value;
    }
}
int main()
{
    char infix[30],postfix[30];
    int top = -1,i,j = 0,a[10];
    printf("Enter the infix expression: ");
    scanf("%s",infix);
    for(i = 0;infix[i] != '\0';i++)
    {
        if(infix[i] == '(')
        push(a,&top,infix[i]);
        else if(infix[i] == '+'||infix[i] == '-'||infix[i] == '*'||infix[i] == '/')
        {
            if(top == -1)
            push(a,&top,infix[i]);
            else if(infix[i] == '*'|| infix[i] == '/')
            {
                if(a[i] == '*'||a[i] == '/')
                {
                    postfix[j++] = pop(a,&top);
                }
                push(a,&top,infix[i]);
            }
            else if(infix[i] == '+'||infix[i] == '-')
            {
                while(top != -1 && a[top] != '(')
                postfix[j++] = pop(a,&top);
                push(a,&top,infix[i]);
            }
        }
        else if(infix[i] == ')')
        {
            while(a[top] != '(')
            postfix[j++] = pop(a,&top);
            pop(a,&top);
        }
        else 
        {
            postfix[j++] = infix[i];
        }
    }
    while(top != -1)
    postfix[j++] = pop(a,&top);
    postfix[j++] = '\0';
    printf("\nPostfix expression: %s",postfix);
    return 0;
}