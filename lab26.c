/*program to perform operations on header linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int data;
    struct Node *next;
}Hlist;
Hlist *start;
void display()
{
    Hlist *ptr;
    ptr = start;
    printf("\nThe list items are:");
    while(ptr != NULL) 
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}
void addAtEnd(int num)
{
    Hlist *temp,*ptr;
    temp = (Hlist*)malloc(sizeof(Hlist));
    temp->data = num;
    temp->next = NULL;
    if(start == NULL)
    start = temp;
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
void addAtPos(int num)
{
    Hlist *temp,*ptr;
    temp = (Hlist*)malloc(sizeof(Hlist));
    ptr = start->next;
    temp->data = num;
    while(ptr->data != num)
    ptr = ptr->next;
    temp->next = ptr->next;
    ptr->next = temp;
}
void addAtBeginning(int num)
{
    Hlist *temp,*ptr;
    temp = (Hlist*)malloc(sizeof(Hlist));
    temp->data = num;
    ptr = start;
    if(start == NULL)
    start = temp;
    else 
    {
        temp->next = start;
        start = temp;
    }
}
void delFromEnd()
{
    Hlist *ptr;
    if(start == NULL)
    printf("\nList is empty");
    else if(start->next == NULL)
    {
        free(start);
        start = NULL;
    }
    else 
    {
        ptr = start;
        while(ptr->next->next != NULL)
        ptr = ptr->next;
        free(ptr->next);
        ptr->next = NULL;
    }
}
void delFromPos(int num)
{
    Hlist *ptr,*preptr;
    ptr = start->next;
    while(ptr->data != num)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
}
void delFromBeginning()
{
    Hlist *ptr;
    if(start == NULL)
    printf("\nLIst is empty");
    else 
    {
        ptr = start;
        start = start->next;
        free(ptr);
    }
}
int main()
{
    int num,i,n;
    start = NULL;
    printf("\nDrishti Bansal");
    printf("\nHow many nodes are there:");
    scanf("%d",&n);
    do
    {
        printf("\nPress 1 - Add at beginning");
        printf("\nPress 2 - Add at position");
        printf("\nPress 3 - Add at end");
        printf("\nPress 4 - Delete from beginning");
        printf("\nPress 5 - Delete from position");
        printf("\nPress 6 - Delete from end");
        printf("\nPress 7 - Display");
        printf("\nEnter your choice:");
        scanf("%d",&n);
        switch(n)
        {
            case 1: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            addAtBeginning(num);
            break;
            case 2: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            addAtPos(num);
            break;
            case 3: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            addAtEnd(num);
            break;
            case 4: 
            delFromBeginning();
            break;
            case 5:
            printf("\nEnter the number: ");
            scanf("%d",&num);
            delFromPos(num);
            break;
            case 6:
            delFromEnd();
            break;
            case 7: 
            display();
            break;
        }
    } while (n != 8);
    return 0;
}