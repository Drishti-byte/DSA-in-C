/*program to find maximum and minimum element and count of the elements*/
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}List;
List *start;
void addAtEnd(int num)
{
    List *ptr,*temp;
    temp = (List*)malloc(sizeof(List));
    temp->data = num;
    temp->next = NULL;
    if(start == NULL)
    start = temp;
    else 
    {
        ptr = start;
        while(ptr->next != NULL)
        ptr = ptr->next;
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
    printf("\nThe number of elements in the array are %d",count);
}
void max(int num)
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
    printf("\nThe maximum value is %d",max);
}
void min(int num)
{
    List *ptr;
    ptr = start;
    int min = 1000;
    while(ptr != NULL)
    {
        if(min > ptr->data)
        {
            min = ptr->data;
            ptr = ptr->next;
        }
    }
    printf("\nThe minimum element is %d",min);
}
int main()
{
    int num,i,n;
    start = NULL;
    printf("Drishti Bansal");
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
    max(num);
    min(num);
    return 0;
}