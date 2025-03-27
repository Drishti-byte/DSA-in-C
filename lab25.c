/*program to perform operations on doubly linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int data;
    struct Node *next,*prev;
}Dlist;
Dlist *start,*end;
void addAtEnd(int num)
{
    Dlist *temp;
    temp = (Dlist*)malloc(sizeof(Dlist));
    temp->data = num;
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
void addAtPos(int pos,int num)
{
    Dlist *temp,*ptr;
    while(ptr->data != num)
    {
        temp->next = ptr->next;
        temp->prev = ptr;
        ptr->next->prev = temp;
        ptr->next = temp;
    }
}
void addAtBeg(int value)
{
    Dlist *temp,*ptr;
    temp = (Dlist*)malloc(sizeof(Dlist));
    temp->data = value;
    temp->prev = NULL;
    if(start == NULL)
    {
        temp->next = NULL;
        start = temp;
        end = temp;
    }
    else 
    {
        temp->next = start;
        start->prev = temp;
        start = temp;
    }
}
void delFrmBeg()
{
    Dlist *temp;
    if(start == NULL)
    printf("\nList is empty");
    else if(start == end)
    {
        free(start);
        start = end = NULL;
    }
    else 
    {
        temp = start;
        start = start->next;
        temp->prev = NULL;
        free(temp);
    }
}
void delFrmEnd()
{
    Dlist *temp;
    if(start == NULL)
    printf("\nList is empty");
    else if(start == end)
    {
        free(start);
        start = end = NULL;
    }
    else 
    {
        temp = end;
        end = end->prev;
        end->next = NULL;
        free(temp);
    }
}
void delFromPos(int pos,int value)
{
    Dlist *temp,*ptr;
    while(temp->data != value)
    {
        temp = ptr->next;
        ptr->next = temp->next;
        temp->next->prev = ptr;
        free(temp);
    }
}
int main()
{
    int num,i,n,pos;
    start = NULL;
    printf("\nDrishti Bansal");
    printf("\nHow many nodes are there: ");
    scanf("%d",&n);
    do
    {
        printf("\nPress 1 - Add at beginning");
        printf("\nPress 2 - Add in the middle");
        printf("\nPress 3 - Add at end");
        printf("\nPress 4 - Delete from beginning");
        printf("\nPress 5 - Delete at position");
        printf("\nPress 6 - Delete from end");
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
            printf("\nEnter the position of number: ");
            scanf("%d",&pos);
            addAtPos(pos,num);
            break;
            case 3:
            printf("\nEnter the number: ");
            scanf("%d",&num);
            addAtBeg(num);
            break;
            case 4: 
            delFrmBeg();
            break;
            case 5:
            printf("\nEnter the number: ");
            scanf("%d",&num);
            printf("\nEnter the position of number: ");
            scanf("%d",&pos);
            delFromPos(pos,num);
            break;
            case 6: 
            delFrmEnd();
            break;
        }
    } while (n != 7);
    return 0;
}