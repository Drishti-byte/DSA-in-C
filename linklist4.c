/*program to count the number of elements in a single linked list*/
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
void count(int num)
{
    List *ptr;
    ptr = start;
    int count = 0;
    while(ptr != NULL)
    {
        if(ptr->data != NULL)
        count++;
        ptr = ptr->next;
    }
    printf("\nThe number of nodes are %d",count);
}
int main()
{
    int num,i,n;
    printf("\nHow many nodes are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 1;i <= n;i++)
    {
        printf("\nEnter element %d:",i);
        scanf("%d",&num);
        addAtEnd(num);
    }
    count(num);
    return 0;
}