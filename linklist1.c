/*program to search an element in linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}List;
List *start;
void addAtEnd(int value)
{
    List *temp,*ptr;
    temp = (List*)malloc(sizeof(List));
    temp->data = value;
    temp->next = NULL;
    if(start == NULL)
    {
        start = temp;
    }
    else 
    {
        ptr = start;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void search(int num1)
{
    List *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        if(ptr->data == num1)
        {
            printf("\nFound");
            break;
        }
        else 
        ptr = ptr->next;
    }
    if(ptr == NULL)
    printf("\nNot found");
}
void display()
{
    List *ptr;
    ptr = start;
    printf("\nThe elements of the list are:\n");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int n,i,num,num1;
    start = NULL;
    printf("How many nodes are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 1;i <= n;i++)
    {
        printf("\nEnter element %d:",i);
        scanf("%d",&num);
        addAtEnd(num);
    }
    printf("\nEnter a number to be searched:");
    scanf("%d",&num1);
    search(num1);
    display();
    return 0;
}