/*menu-program to perform operations on circular singly linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int data;
    struct Node *next;
}Clist;
Clist *start;
void addAtEnd(int value)
{
    Clist *temp,*ptr;
    temp = (Clist*)malloc(sizeof(Clist));
    temp->data = value;
    if(start == NULL)
    {
        start = temp;
        temp->next = start;
    }
    else 
    {
        ptr = start;
        while(ptr->next != start)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = start;
    }
}
void addAtBeg(int value)
{
    Clist *temp,*ptr;
    temp->data = value;
    temp->next = start;
    ptr = start;
    while(ptr->next != start)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    start = temp;
}
void delFromBeg()
{
    if(start == NULL)
    printf("\nList is empty");
    else if(start->next != start)
    {
        free(start);
        start = NULL;
    }
    else 
    {
        Clist *temp,*ptr;
        ptr = start;
        temp = start;
        start = start->next;
        while(ptr->next != temp)
        {
            ptr = ptr->next;
        }
        ptr->next = start;
        free(temp);
    }
}
void delFromEnd()
{
    Clist *ptr;
    if(start == NULL)
    {
        printf("\nList is empty");
    }
    else if(start->next == start)
    {
        free(start);
        start = NULL;
    }
    else 
    {
        ptr = start;
        while(ptr->next != start)
        {
            ptr = ptr->next;
        }
        free(ptr->next);
        ptr->next = start;
    }
}
int main()
{
    int num,i,n;
    start = NULL;
    printf("\nHow many nodes are there:");
    scanf("%d",&n);
    do 
    {
        printf("\nPress 1- Add at end");
        printf("\nPress 2-Add at beginning");
        printf("\nPress 3- Delete from end");
        printf("\nPress 4- Delete from beginning");
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: 
            printf("\nEnter a number: ");
            scanf("%d",&num);
            addAtEnd(num);
            break;
            case 2: 
            printf("\nEnter a number: ");
            scanf("%d",&num);
            addAtBeg(num);
            break;
            case 3: 
            delFromEnd();
            break;
            case 4: 
            delFromBeg();
            break;
        }
    }while(n != 5);
    return 0;
}