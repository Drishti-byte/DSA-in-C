/*program to evaluate postfix expression using stack*/
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
    int a[10];
    int top = -1,i,val1,val2,res;
    char exp[50];
    printf("Enter the postfix expression: ");
    gets(exp);
    for(i = 0;exp[i] != '\0';i++)
    {
        if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
        {
            val2 = pop(a,&top);
            val1 = pop(a,&top);
            if(exp[i] == '+')
            res = val1 + val2;
            else if(exp[i] == '-')
            res = val1 - val2;
            else if(exp[i] == '*')
            res = val1 * val2;
            else if(exp[i] == '/')
            res = val1 / val2;
            push(a,&top,res);
        }
        else 
        push(a,&top,exp[i] - 48);
    }
    printf("\nResult is %d",a[0]);
    return 0;
}