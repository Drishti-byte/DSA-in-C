/*program to implement parenthesis matching using array*/
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
    int top = -1,i;
    char exp[50];
    printf("Enter the arithmetic expression: ");
    scanf("%s",exp);
    for(i = 0;exp[i] != '\0';i++)
    {
        if(exp[i] == '(')
        push(a,&top,exp[i]);
        else if(exp[i] == ')')
        {
            if(top == -1)
            {
                printf("\nExtra closing bracket");
                break;
            }
            else 
            pop(a,&top);
        }
    }
    if(exp[i] == '\0')
    {
        if(top == -1)
        printf("\nPerfect Parenthesis match");
        else 
        printf("\nExtra opening bracket");
    }
    return 0;
}