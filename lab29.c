/*program to perform push,pop,traverse operations on static stack using array*/
#include<stdio.h>
void push(int a[],int *top,int val)
{
    if(*top == 9)
    printf("\nStack is full");
    else 
    {
        *top = *top + 1;
        a[*top] = val;
    }
}
int pop(int a[],int *top)
{
    int n = 0;
    if(*top == -1)
    printf("\nStack is empty");
    else 
    {
        n = a[*top];
        *top = *top - 1;
    }
    return n;
}
void display(int a[],int top)
{
    if(top == -1)
    printf("\nStack is empty");
    else 
    {
        printf("\nThe elements of stack are: ");
        for(int i = top;i >= 0;i--)
        printf("\n%d",a[i]);
    }
}
int main()
{
    int num,i,n,top = -1;
    int a[10];
    do
    {
        printf("\nPress 1 - Push");
        printf("\nPress 2 - Pop");
        printf("\nPress 3 - Display");
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            push(a,&top,num);
            break;
            case 2:
            num = pop(a,&top);
            printf("\nDeleted value is %d",num);
            break;
            case 3:
            display(a,top);
            break;
        }
    } while (n != 4);
    return 0;
}