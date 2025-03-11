/*menu driven program to perform operations on singly linked list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int data;
    struct Node *next;
}List;
List *start;
void addAtPos(int value,int pos)
{
    List *ptr,*temp;
    int i;
    if(pos == 1)
    addAtBeginning(value);
    else 
    {
        ptr = start;
        for(i = 1;i < pos - 1;i++)
        {
            ptr = ptr->next;
            if(ptr == NULL)
            printf("\nInvalid position");
            return;
        }
    }
    temp = (List*)malloc(sizeof(List));
    temp->data = value;
    temp->next = ptr->next;
    ptr->next = temp;

}
void addAtEnd(int value)
{
    List *temp,*ptr;
    temp = (List*)malloc(sizeof(List));
    temp->data = value;
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
void addAtBeginning(int value)
{
    List *temp,*ptr;
    temp = (List*)malloc(sizeof(List));
    temp->data = value;
    temp->next = NULL;
    if(start == NULL)
    start = temp;
    else 
    {
        temp->next = start;
        start = temp;
    }
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
void search(int num)
{
    List *ptr;
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
    printf("\nNot Found");
}
void delFrmBeg()
{
    List *ptr;
    if(start == NULL)
    printf("\nList is empty");
    else 
    ptr = start;
    start = start->next;
    free(ptr);
}
void delFrmEnd()
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
void sort()
{
    List *p,*q;
    for(p = start; p->next != NULL;p = p->next)
    {
        for(q = p->next;q != NULL;q = q->next)
        {
            if(p->data > q->data)
            {
                int temp;
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
        }
    }
}
void delFromPos(int pos)
{
    List *ptr;
    int i;
    ptr = start;
    if(pos == 1)
    delFrmBeg();
    else 
    {
        for(i = 1;i < pos-1;i++)
        ptr->next = ptr;
        if(ptr == NULL)
        printf("\nInvalid position");
        return;
    }
}
int main()
{
    int num,i,n;
    int pos;
    start = NULL;
    do
    {
        printf("\nPress 1 - Add at End");
        printf("\nPress 2 - Add in beginning");
        printf("\nPress 3 - Add at position");
        printf("\nPress 4 - Search");
        printf("\nPress 5 - Display");
        printf("\nPress 6 - Delete from beginning");
        printf("\nPress 7 - Delete from end");
        printf("\nPress 8 - Delete from position");
        printf("\nPress 9 - Sort");
        printf("\nPress 10 - Reverse a linked list");
        printf("\nPress 11 - Exit");
        printf("\nEnter your choice:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("\nEnter the number:");
            scanf("%d",&num);
            addAtEnd(num);
            display();
            break;
            case 2:
            printf("\nEnter the number:");
            scanf("%d",&num);
            addAtBeginning(num);
            case 3:
            printf("\nEnter the position:");
            scanf("%d",&pos);
            printf("\nEnter the number:");
            scanf("%d",&num);
            addAtPos(num,pos);
            break;
            case 4:
            printf("\nEnter the number you want to search:");
            scanf("%d",&num);
            search(num);
            break;
            case 5:
            display();
            break;
            case 6:
            delFrmBeg();
            display();
            break;
            case 7:
            delFrmEnd();
            display();
            break;
            case 8:
            printf("\nEnter the position:");
            scanf("%d",&pos);
            delFromPos(pos);
            display();
            break;
            case 9:
            sort();
            display();
            break;
        }
    } while (n != 11);
    return 0;
}