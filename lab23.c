/*program to delete the first,last,after a given node in singly linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int data;
    struct Node *next;
}List;
List *start;
void delFromBeg()
{
    List *ptr;
    if(start == NULL)
    printf("\nList is empty");
    else 
    ptr = start;
    start = start->next;
    free(ptr);
}
void delFromEnd()
{
    if(start == NULL)
    printf("\nList is not empty");
    else if(start->next == NULL)
    {
        free(start);
        start = NULL;
    }
    else 
    {
        List *ptr;
        ptr = start;
        while(ptr->next->next != NULL)
        ptr = ptr->next;
        free(ptr->next);
        ptr->next = NULL;
    }
}
void delAfter(int value)
{
    if(start == NULL)
    printf("\nList is empty");
    else 
    {
        List *ptr,*preptr,*temp;
        ptr = start;
        preptr = ptr;
        while(preptr->data != value)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        temp = ptr;
        preptr->next = ptr->next;
        free(temp);
    }
}
int main()
{
    int n,num,i;
    printf("Drishti Bansal");
    printf("\nHow many nodes are there: ");
    scanf("%d",&n);
    do
    {
        printf("\nPress 1 - Delete from beginning");
        printf("\nPress 2 - Delete from End");
        printf("\nPress 3 - Delete after a given node");
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: 
            delFromBeg();
            break;
            case 2: 
            delFromEnd();
            break;
            case 3: 
            printf("\nEnter the number: ");
            scanf("%d",&num);
            delAfter(num);
            break;
        }
    } while (n != 4);
    
}