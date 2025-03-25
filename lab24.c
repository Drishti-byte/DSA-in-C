/*program to traverse and search an element in doubly linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int data;
    struct Node *next,*prev;
}Dlist;
Dlist *start,*end;
void addAtEnd(int value)
{
    Dlist *temp;
    temp = (Dlist*)malloc(sizeof(Dlist));
    temp->data = value;
    temp->next = NULL;
    if(start == NULL)
    {
        temp->prev = NULL;
        start = temp;
        end = temp;
    }
    else 
    {
        end->next = temp;
        temp->prev = end;
        end = temp;
    }
}
void display()
{
    Dlist *ptr;
    ptr = start;
    printf("\nList elements are:");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}
void search(int num)
{
    Dlist *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        if(ptr->data == num)
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
int main()
{
    int num,i,n,pos;
    start = NULL;
    printf("\nDrishti Bansal");
    printf("\nHow many nodes are there: ");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 0;i < n;i++)
    {
        printf("\nEnter number %d:",i + 1);
        scanf("%d",&num);
        addAtEnd(num);
    }
    display();
    printf("\nEnter the element you want to search: ");
    scanf("%d",&num);
    search(num);
    return 0;
}