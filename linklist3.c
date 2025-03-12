/*program to find sum of all the elements in the linked list*/
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
void sum(int num)
{
    List *ptr;
    ptr = start;
    int sum = 0;
    while(ptr != NULL)
    {
        sum += ptr->data;
        ptr = ptr->next;
    }
    printf("\nThe sum is %d",sum);
}
int main()
{
    int i,n,num;
    printf("How many nodes are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 1;i <= n;i++)
    {
        printf("\nEnter element %d:",i);
        scanf("%d",&num);
        addAtEnd(num);
    }
    sum(num);
    return 0;
}