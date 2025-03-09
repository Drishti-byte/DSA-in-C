/*program to add a node at the end of a linked list*/
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
void display()
{
    List *ptr;
    ptr = start;
    printf("\nThe elements of the list are:");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int n,i,num;
    start = NULL;
    printf("How many nodes are there:");
    scanf("%d",&n);
    printf("\nEnter the numbers:");
    for(i = 1;i <= n;i++)
    {
        scanf("%d",&num);
        addAtEnd(num);
    }
    display();
    return 0;
}