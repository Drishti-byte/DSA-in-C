/*program to find the highest value in single linked list*/
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
void highest(int num)
{
    List *ptr;
    ptr = start;
    int max = 0;
    while(ptr != NULL)
    {
        if(max < ptr->data)
        {
            max = ptr->data;
            ptr = ptr->next;
        }
    }
    printf("\nThe highest value is %d",max);
}
int main()
{
    int num,i,n;
    printf("How many nodes are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 1;i <= n;i++)
    {
        printf("\nEnter element %d:",i);
        scanf("%d",&num);
        addAtEnd(num);
    }
    highest(num);
    return 0;
}