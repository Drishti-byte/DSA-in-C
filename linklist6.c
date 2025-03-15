/*program to check whether the single linked list is empty or not*/
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
void empty(int num)
{
    List *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        if(ptr->data == NULL)
        printf("\nThe list is empty");
        ptr = ptr->next;
    }
}
int main()
{
    int num,i,n;
    printf("How many elements are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 1;i <= n;i++)
    {
        printf("\nEnter element %d:",i);
        scanf("%d",&num);
        addAtEnd(num);
    }
    empty(num);
    return 0;
}