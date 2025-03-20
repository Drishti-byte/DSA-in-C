/*program to reverse a linked list*/
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
        ptr = ptr->next;
        ptr->next = temp;
    }
}
void display()
{
    List *ptr;
    ptr = start;
    printf("\nThe elements of the array are: \n");
    while(ptr != NULL)
    {
        printf("\n%d",ptr->data);
        ptr = ptr->next;
    }
}
void reverse()
{
    List *newstart,*temp;
    newstart = NULL;
    while(start != NULL)
    {
        temp = start;
        start = start->next;
        temp->next = newstart;
        newstart = temp;
    }
    start = newstart;
    display();
}
int main()
{
    int n,num,i;
    printf("How many elements are there: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:");
    for(i = 0; i < n;i++)
    {
        printf("\nEnter element %d:",i+1);
        scanf("%d",&num);
        addAtEnd(num);
    }
    reverse();
    return 0;
}