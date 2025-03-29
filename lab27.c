/*program to implement operations on circular linked list*/
#include<stdlib.h>
#include<stdio.h>
typedef struct Node 
{
    int data;
    struct Node *next;
}Clist;
Clist *start;
void display()
{
    Clist *ptr;
    ptr = start;
    while(ptr->next != start)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}
void search(int num)
{
    Clist *ptr;
    ptr = start;
    while(ptr->next != start)
    {
        if(ptr->data == num)
        {
            printf("\nFound");
            break;
        }
        else 
        ptr = ptr->next;
    }
    if(ptr->next == start)
    printf("\nNot found");
}
void addAtEnd(int num)
{
    Clist *ptr,*temp;
    temp = (Clist*)malloc(sizeof(Clist));
    temp->data = num;
    if(start == NULL)
    {
        start = temp;
        temp->next = start;
    }
    else 
    {
        ptr = start;
        while(ptr->next != start)
        ptr = ptr->next;
        ptr->next = temp;
        temp->next = start;
    }
}
void addAtBeg(int num)
{
    Clist *temp,*ptr;
    temp = (Clist*)malloc(sizeof(Clist));
    temp->data = num;
    temp->next = start;
    if(start == NULL)
    {
        start = temp;
        temp->next = start;
    }
    else 
    {
        ptr = start;
        while(ptr->next != start)
        ptr = ptr->next;
        ptr->next = temp;
        start = temp;
    }
}
void delFromBeg()
{
    Clist *ptr,*temp;
    if(start == NULL)
    printf("\nList is empty");
    else if(start->next != start)
    {
        free(start);
        start = NULL;
    }
    else 
    {
        ptr = start;
        temp = start;
        start = start->next;
        while(ptr->next != start)
        ptr = ptr->next;
        ptr->next = start;
        free(temp);
    }
}
void delFromEnd()
{
    Clist *ptr;
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
        while(ptr->next != start)
        ptr = ptr->next;
        free(ptr->next);
        ptr->next = start;
    }
}
int main()
{
    int n,i,num;
    start = NULL;
    printf("Drishti Bansal");
    printf("\nHow many nodes are there:");
    scanf("%d",&n);
    do
    {
        printf("\nPress 1 - Add at beginning");
        printf("\nPress 2 - Add at End");
        printf("\nPress 3 - Delete from beginning");
        printf("\nPress 4 - Delete from end");
        printf("\nPress 5 - Display");
        printf("\nPress 6 - Search an element");
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            addAtBeg(num);
            break;
            case 2:
            printf("\nEnter a number: ");
            scanf("%d",&num);
            addAtEnd(num);
            break;
            case 3: 
            delFromBeg();
            break;
            case 4:
            delFromEnd();
            break;
            case 5: 
            display();
            break;
            case 6:
            printf("\nEnter the number you want to search: ");
            scanf("%d",&num);
            search(num);
            break;
        }
    } while (n != 7);
    return 0;
}