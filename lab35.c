/*program to push,pop,display using dynamic stack*/
#include<stdio.h>
void push(int s[],int *top,int value)
{
    if(*top == 9)
    printf("\nStack is full");
    else 
    {
        *top = *top + 1;
        s[*top] = value;
    }
}
int pop(int s[],int *top)
{
    if(*top == -1)
    printf("\nStack is empty");
    else 
    {
        int val = s[*top];
        *top = *top - 1;
        return val;
    }
}
void display(int s[],int top)
{
    if(top == -1)
    printf("\nStack is empty");
    else 
    {
        printf("\nThe elements of stack are: ");
        for(int i = top;i >= 0;i--)
        printf("\n%d",s[i]);
    }
}
int main()
{
    int s[10];
    int top = -1,ch,num;
    do
    {
        printf("\nDrishti Bansal");
        printf("\nPress 1 - Push a value into the stack");
        printf("\nPress 2 - Pop");
        printf("\nPress 3 - Display");
        printf("\nPress 4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter a value: ");
            scanf("%d",&num);
            push(s,&top,num);
            break;
            case 2:
            num = pop(s,&top);
            printf("\nThe deleted element is %d",num);
            break;
            case 3:
            display(s,top);
            break;
        }
    } while (ch != 4);
    return 0;
}