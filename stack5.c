/*program to implement stack and perform push,pop,display using arrays*/
#include<stdio.h>
void push(int st[],int *top,int value)
{
    if(*top == 9)
    printf("\nStack is full");
    else 
    {
        *top = *top + 1;
        st[*top] = value;
    }
}
int pop(int st[],int *top)
{
    if(*top == -1)
    printf("\nStack is empty");
    else 
    {
        int val = st[*top];
        *top = *top - 1;
        return val;
    }
}
void display(int st[],int top)
{
    if(top == -1)
    printf("\nStack is empty");
    else
    {
       printf("\nThe elements are: ");
       for(int i = top;i >= 0;i--)
       printf("\n%d",st[i]); 
    }
}
int main()
{
    int ch,num,st[10],top = -1;
    do
    {
        printf("\nPress 1 - Push a value in the stack");
        printf("\nPress 2 - Pop an element");
        printf("\nPress 3 - Display");
        printf("\nPress 4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter a value: ");
            scanf("%d",&num);
            push(st,&top,num);
            break;
            case 2:
            num = pop(st,&top);
            printf("\nDeleted value is %d",num);
            break;
            case 3:
            display(st,top);
            break;
            case 4:
            break;
        }
    } while (ch != 4);
    return 0;
}