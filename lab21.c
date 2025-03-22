/*program to merge two lists to create a new sorted list*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int data;
    struct Node *next;
}List;
List* addAtEnd(List *start,int value)
{
    List *temp;
    temp = (List*)malloc(sizeof(List));
    temp->data = value;
    temp->next = NULL;
    if(start == NULL)
    start = temp;
    else 
    {
        List *ptr;
        ptr = start;
        while(ptr->next != NULL)
        ptr = ptr->next;
        ptr->next = temp;
    }
    return start;
}
void display(List *start)
{
    List *ptr;
    ptr = start;
    printf("\nList elements are: ");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}
void sort(List *start)
{
    List *p,*q;
    for(p = start;p->next != NULL;p = p->next)
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
List* merge(List* p,List* q)
{
    List *newstart = NULL;
    while(p != NULL && q != NULL)
    {
        if(p->data < q->data)
        {
            newstart = addAtEnd(newstart,p->data);
            p = p->next;
        }
        else 
        {
            newstart = addAtEnd(newstart,q->data);
            q = q->next;
        }
    }
    while(p != NULL)
    {
        newstart = addAtEnd(newstart,p->data);
        p = p->next;
    }
    while(q != NULL)
    {
        newstart = addAtEnd(newstart,q->data);
        q = q->next;
    }
    return newstart;
}
int main()
{
    int n,num,i,m;
    List *start1,*start2,*res;
    start1 = start2 = NULL;
    printf("Drishti Bansal");
    printf("\nHow many numbers are there in list 1:");
    scanf("%d",&n);
    for(i = 1;i <= n;i++)
    {
        printf("\nEnter the value: ");
        scanf("%d",&num);
        start1 = addAtEnd(start1,num);
    }
    for(i = 1;i <= m;i++)
    {
        printf("\nEnter the value: ");
        scanf("%d",&num);
        start2 = addAtEnd(start2,num);
    }
    printf("\nList 1:\n");
    display(start1);
    printf("\nList 2:\n");
    display(start2);
    res = merge(start1,start2);
    printf("\nMerged List is:\n");
    display(res);
    return 0;
}