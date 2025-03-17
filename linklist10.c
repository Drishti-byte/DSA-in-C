/*menu-driven program to perform operations on circular doubly linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int data;
    struct Node *next,*prev;
}Clist;
Clist *start,*end;
void addAtEnd(int value)
{
    Clist *temp;
    temp = (Clist*)malloc(sizeof(Clist));
    temp->data = value;
    if(start == NULL)
    {
        temp->next = start;
        temp->prev = start;
        end = start;
    }
    else
    {
        temp->next = start;
        end->next = temp;
        temp->prev = end;
        end = temp;
    }
}
void addAtBeginning(int value)
{
    Clist *temp;
    temp = (Clist*)malloc(sizeof(Clist));
    if(start == NULL)
    {
        temp->next = start;
        temp->prev = start;
        end = start;
    }
    else 
    {
        temp->prev = end;
        start->prev = temp;
        temp->next = start;
        start = temp;
    }
}
void delFromEnd()
{
    Clist *temp;
    if(start == NULL)
    {
        printf("\nList is empty");
    }
    else if(start->next == start)
    {
        free(start);
        start = NULL;
        end = NULL;
    }
    else 
    {
        temp = start;
        while(temp->next->next != start)
        {
            temp = temp->next;
        }
        temp->next = start;
        start->prev = temp;
        end = temp;
    }
}
void delFromBeginning()
{
    Clist *temp;
    if(start == NULL)
    printf("\nList is empty");
    else if(start->next == start)
    {
        free(start);
        start = NULL;
    }
    else 
    {
        start = start->next;
        temp->prev = start;
        temp->next->next = start;
    }
}
int main()
{
    int n,num,i;
    printf("\nHow many nodes are there: ");
    scanf("%d",&n);
    do
    { 
        printf("\nPress 1 - Add at end");
        printf("\nPress 2 - Add at beginning");
        printf("\nPress 3 - Delete from end");
        printf("\nPress 4 - Delete from beginning");
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            addAtEnd(num);
            break;
            case 2: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            addAtBeginning(num);
            break;
            case 3: 
            delFromEnd();
            break;
            case 4: 
            delFromBeginning();
            break;
        }
    } while (n != 5);
    return 0;
}