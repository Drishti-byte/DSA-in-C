/*program to insert a node at beg,after pos, before pos and at end in singly linked list*/
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
    List *ptr,*temp;
    temp = (List*)malloc(sizeof(List));
    ptr->data = value;
    ptr->next = NULL;
    if(start == NULL)
    printf("\nList is empty");
    else 
    {
        while(ptr->next != NULL)
        ptr = ptr->next;
        ptr->next = temp;
    }
}
void addAtBeg(int value)
{
    List *ptr,*temp;
    temp = (List*)malloc(sizeof(List));
    ptr->data = value;
    ptr->next = NULL;
    if(start == NULL)
    start = temp;
    else 
    {
        temp->next = start;
        start = temp;
    }
}
void addBefore(int pos,int value)
{
    List *temp,*ptr,*preptr;
    temp = (List*)malloc(sizeof(List));
    temp->data = value;
    ptr = start;
    preptr = ptr;
    while(ptr->data != pos)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = temp;
    temp->next = ptr;
}
void addAfter(int pos,int value)
{
    List *temp,*ptr,*preptr;
    temp = (List*)malloc(sizeof(List));
    temp->data = value;
    ptr = start;
    preptr = ptr;
    while(ptr->data != pos)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = temp;
    temp->next = ptr;
}
int main()
{
    int num,i,n,pos;
    start = NULL;
    printf("Drishti Bansal");
    printf("\nHow many nodes are there: ");
    scanf("%d",&n);
    do
    {
        printf("\nPress 1 - Add at end");
        printf("\nPress 2 - Add at beginning");
        printf("\nPress 3 - Add after a given node");
        printf("\nPress 4 - Add before a given node");
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("\nEnter the number: ");
            scanf("%d",&num);
            addAtEnd(num);
            break;
            case 2: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            addAtBeg(num);
            break;
            case 3: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            printf("\nEnter the position: ");
            scanf("%d",&pos);
            addAfter(pos,num);
            break;
            case 4: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            printf("\nEnter the position: ");
            scanf("%d",&pos);
            addBefore(pos,num);
            break;
        }
    } while (n != 5);
    
    return 0;
}