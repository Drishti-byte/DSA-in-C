/*program to create a stack using linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *next;
}Node;
Node *top;
void push(int value)
{
    if(top == NULL)
    {
        top = (Node*)malloc(sizeof(Node));
        top->data = value;
        top->next = NULL;
    }
    else 
    {
        Node *ptr;
        ptr = (Node*)malloc(sizeof(Node));
        ptr->next = top;
        ptr->data = value;
        top = ptr;
    }
}
void pop()
{
    if(top == NULL)
    printf("\nStack is empty");
    else 
    {
        Node *ptr;
        ptr = top;
        top = top->next;
        free(ptr);
    }
}
void display()
{
    Node *ptr;
    ptr = top;
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int num,i,n;
    top = NULL;
    printf("How many nodes are there: ");
    scanf("%d",&n);
    do
    {
        printf("\nPress 1 - Push");
        printf("\nPress 2 - Pop");
        printf("\nPress 3 - Display");
        printf("\nPress 4 - Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("\nEnter the number: ");
            scanf("%d",&num);
            push(num);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            break;
        }
    } while (n != 4);
    return 0;
}