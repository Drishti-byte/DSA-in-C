/*program to create a new list which is reverse of the first linked list*/
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
void display()
{
    List *ptr;
    ptr = start;
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
}
int main()
{
    int n,num,i;
    printf("Drishti Bansal\n");  
    printf("\nHow many elements are there:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i = 0;i < n;i++)
    {
        printf("\nEnter element %d:",i+1);
        scanf("%d",&num);
        addAtEnd(num);
    }
    printf("\nThe elements of the linked list are:");
    display();
    printf("\nReversed linked list is as follows:");
    display();
    return 0;
}